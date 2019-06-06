#!/bin/sh
set -e

UNSIGNED=$1
SIGNATURE=$2
ARCH=x86_64
ROOTDIR=dist
BUNDLE=${ROOTDIR}/PIASA-Qt.app
TPIASADIR=signed.temp
OUTDIR=signed-app

if [ -z "$UNSIGNED" ]; then
  echo "usage: $0 <unsigned app> <signature>"
  exit 1
fi

if [ -z "$SIGNATURE" ]; then
  echo "usage: $0 <unsigned app> <signature>"
  exit 1
fi

rm -rf ${TPIASADIR} && mkdir -p ${TPIASADIR}
tar -C ${TPIASADIR} -xf ${UNSIGNED}
tar -C ${TPIASADIR} -xf ${SIGNATURE}

if [ -z "${PAGESTUFF}" ]; then
  PAGESTUFF=${TPIASADIR}/pagestuff
fi

if [ -z "${CODESIGN_ALLOCATE}" ]; then
  CODESIGN_ALLOCATE=${TPIASADIR}/codesign_allocate
fi

for i in `find ${TPIASADIR} -name "*.sign"`; do
  SIZE=`stat -c %s ${i}`
  TARGET_FILE=`echo ${i} | sed 's/\.sign$//'`

  echo "Allocating space for the signature of size ${SIZE} in ${TARGET_FILE}"
  ${CODESIGN_ALLOCATE} -i ${TARGET_FILE} -a ${ARCH} ${SIZE} -o ${i}.tmp

  OFFSET=`${PAGESTUFF} ${i}.tmp -p | tail -2 | grep offset | sed 's/[^0-9]*//g'`
  if [ -z ${QUIET} ]; then
    echo "Attaching signature at offset ${OFFSET}"
  fi

  dd if=$i of=${i}.tmp bs=1 seek=${OFFSET} count=${SIZE} 2>/dev/null
  mv ${i}.tmp ${TARGET_FILE}
  rm ${i}
  echo "Success."
done
mv ${TPIASADIR}/${ROOTDIR} ${OUTDIR}
rm -rf ${TPIASADIR}
echo "Signed: ${OUTDIR}"
