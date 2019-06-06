

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *piasa_strings[] = {
QT_TRANSLATE_NOOP("piasa-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("piasa-core", " mints updated, "),
QT_TRANSLATE_NOOP("piasa-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("piasa-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("piasa-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Cannot obtain a lock on data directory %s. PIASA Core is probably already "
"running."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Disable all PIASA specific functionality (Masternodes, Obfuscation, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Enable automatic wallet backups triggered after each zPIASA minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Fees (in PIASA/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Fees (in PIASA/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("piasa-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("piasa-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("piasa-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("piasa-core", ""
"To use piasad, or the -server option to piasa-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=piasarpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"PIASA Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Unable to bind to %s on this computer. PIASA Core is probably already running."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 10000 PIASA."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Unable to locate enough funds for this transaction that are not equal 10000 "
"PIASA."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong PIASA Core will not work properly."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("piasa-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("piasa-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("piasa-core", "(41414 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("piasa-core", "(default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "(default: 1)"),
QT_TRANSLATE_NOOP("piasa-core", "(must be 41414 for mainnet)"),
QT_TRANSLATE_NOOP("piasa-core", "<category> can be:"),
QT_TRANSLATE_NOOP("piasa-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("piasa-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("piasa-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("piasa-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("piasa-core", "Already have that input."),
QT_TRANSLATE_NOOP("piasa-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("piasa-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("piasa-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", "Block creation options:"),
QT_TRANSLATE_NOOP("piasa-core", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("piasa-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("piasa-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("piasa-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("piasa-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("piasa-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("piasa-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("piasa-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("piasa-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("piasa-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("piasa-core", "Connection options:"),
QT_TRANSLATE_NOOP("piasa-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("piasa-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("piasa-core", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("piasa-core", "Copyright (C) 2017-%i The PIASA Core Developers"),
QT_TRANSLATE_NOOP("piasa-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("piasa-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("piasa-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("piasa-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("piasa-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("piasa-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("piasa-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("piasa-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("piasa-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("piasa-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("piasa-core", "Done loading"),
QT_TRANSLATE_NOOP("piasa-core", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("piasa-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("piasa-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("piasa-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("piasa-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("piasa-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("piasa-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Entries are full."),
QT_TRANSLATE_NOOP("piasa-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("piasa-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("piasa-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("piasa-core", "Error loading block database"),
QT_TRANSLATE_NOOP("piasa-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("piasa-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("piasa-core", "Error loading wallet.dat: Wallet requires newer version of PIASA Core"),
QT_TRANSLATE_NOOP("piasa-core", "Error opening block database"),
QT_TRANSLATE_NOOP("piasa-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("piasa-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("piasa-core", "Error"),
QT_TRANSLATE_NOOP("piasa-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("piasa-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("piasa-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("piasa-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("piasa-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("piasa-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("piasa-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("piasa-core", "Failed to read block index"),
QT_TRANSLATE_NOOP("piasa-core", "Failed to read block"),
QT_TRANSLATE_NOOP("piasa-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("piasa-core", "Fee (in PIASA/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("piasa-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("piasa-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("piasa-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("piasa-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("piasa-core", "Importing..."),
QT_TRANSLATE_NOOP("piasa-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("piasa-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("piasa-core", "Incompatible version."),
QT_TRANSLATE_NOOP("piasa-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("piasa-core", "Information"),
QT_TRANSLATE_NOOP("piasa-core", "Initialization sanity check failed. PIASA Core is shutting down."),
QT_TRANSLATE_NOOP("piasa-core", "Input is not valid."),
QT_TRANSLATE_NOOP("piasa-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("piasa-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("piasa-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid amount"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("piasa-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("piasa-core", "Invalid private key."),
QT_TRANSLATE_NOOP("piasa-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("piasa-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("piasa-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("piasa-core", "Less than 3 mints added, unable to create spend"),
QT_TRANSLATE_NOOP("piasa-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Line: %d"),
QT_TRANSLATE_NOOP("piasa-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("piasa-core", "Loading block index..."),
QT_TRANSLATE_NOOP("piasa-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("piasa-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("piasa-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("piasa-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("piasa-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("piasa-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("piasa-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("piasa-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Masternode options:"),
QT_TRANSLATE_NOOP("piasa-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("piasa-core", "Masternode:"),
QT_TRANSLATE_NOOP("piasa-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("piasa-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("piasa-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("piasa-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("piasa-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("piasa-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("piasa-core", "Node relay options:"),
QT_TRANSLATE_NOOP("piasa-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("piasa-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("piasa-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("piasa-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("piasa-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("piasa-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("piasa-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("piasa-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("piasa-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("piasa-core", "Options:"),
QT_TRANSLATE_NOOP("piasa-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("piasa-core", "Percentage of automatically minted Zerocoin  (10-100, default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("piasa-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Print version and exit"),
QT_TRANSLATE_NOOP("piasa-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("piasa-core", "RPC server options:"),
QT_TRANSLATE_NOOP("piasa-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("piasa-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("piasa-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("piasa-core", "Recalculating coin supply may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("piasa-core", "Recalculating supply statistics may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("piasa-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("piasa-core", "Rescanning..."),
QT_TRANSLATE_NOOP("piasa-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("piasa-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("piasa-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("piasa-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Session not complete!"),
QT_TRANSLATE_NOOP("piasa-core", "Session timed out."),
QT_TRANSLATE_NOOP("piasa-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("piasa-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("piasa-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("piasa-core", "Signing failed."),
QT_TRANSLATE_NOOP("piasa-core", "Signing timed out."),
QT_TRANSLATE_NOOP("piasa-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("piasa-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("piasa-core", "Specify data directory"),
QT_TRANSLATE_NOOP("piasa-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("piasa-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("piasa-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Staking options:"),
QT_TRANSLATE_NOOP("piasa-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("piasa-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("piasa-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("piasa-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("piasa-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("piasa-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("piasa-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("piasa-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("piasa-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("piasa-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("piasa-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("piasa-core", "This help message"),
QT_TRANSLATE_NOOP("piasa-core", "This is experimental software."),
QT_TRANSLATE_NOOP("piasa-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("piasa-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("piasa-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("piasa-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("piasa-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("piasa-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("piasa-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("piasa-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("piasa-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("piasa-core", "Transaction too large"),
QT_TRANSLATE_NOOP("piasa-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("piasa-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("piasa-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("piasa-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("piasa-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("piasa-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("piasa-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("piasa-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("piasa-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("piasa-core", "Use the test network"),
QT_TRANSLATE_NOOP("piasa-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("piasa-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("piasa-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("piasa-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("piasa-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("piasa-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("piasa-core", "Wallet needed to be rewritten: restart PIASA Core to complete"),
QT_TRANSLATE_NOOP("piasa-core", "Wallet options:"),
QT_TRANSLATE_NOOP("piasa-core", "Wallet window title"),
QT_TRANSLATE_NOOP("piasa-core", "Warning"),
QT_TRANSLATE_NOOP("piasa-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("piasa-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("piasa-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("piasa-core", "Will retry..."),
QT_TRANSLATE_NOOP("piasa-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("piasa-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("piasa-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("piasa-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("piasa-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("piasa-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("piasa-core", "failed to validate zerocoin"),
QT_TRANSLATE_NOOP("piasa-core", "on startup"),
QT_TRANSLATE_NOOP("piasa-core", "wallet.dat corrupt, salvage failed"),
};
