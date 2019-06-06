
Debian
====================
This directory contains files used to package piasad/piasa-qt
for Debian-based Linux systems. If you compile piasad/piasa-qt yourself, there are some useful files here.

## piasa: URI support ##


piasa-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install piasa-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your piasaqt binary to `/usr/bin`
and the `../../share/pixmaps/piasa128.png` to `/usr/share/pixmaps`

piasa-qt.protocol (KDE)

