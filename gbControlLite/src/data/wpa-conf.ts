export const wpa_conf_data = `##### Example wpa_supplicant configuration file ###############################
#
# ***** Please check wpa_supplicant.conf(5) for details on these options *****
#
# This file describes configuration file format and lists all available option.
# Please also take a look at simpler configuration examples in 'examples'
# subdirectory.
#
# Empty lines and lines starting with # are ignored

# NOTE! This file may contain password information and should probably be made
# readable only by root user on multiuser systems.

# Note: All file paths in this configuration file should use full (absolute,
# not relative to working directory) path in order to allow working directory
# to be changed. This can happen if wpa_supplicant is run in the background.

# Whether to allow wpa_supplicant to update (overwrite) configuration
#
# This option can be used to allow wpa_supplicant to overwrite configuration
# file whenever configuration is changed (e.g., new network block is added with
# wpa_cli or wpa_gui, or a password is changed). This is required for
# wpa_cli/wpa_gui to be able to store the configuration changes permanently.
# Please note that overwriting configuration file will remove the comments from
# it.
#update_config=1

# global configuration (shared by all network blocks)
#
# Parameters for the control interface. If this is specified, wpa_supplicant
# will open a control interface that is available for external programs to
# manage wpa_supplicant. The meaning of this string depends on which control
# interface mechanism is used. For all cases, the existence of this parameter
# in configuration is used to determine whether the control interface is
# enabled.
#
# For UNIX domain sockets (default on Linux and BSD): This is a directory that
# will be created for UNIX domain sockets for listening to requests from
# external programs (CLI/GUI, etc.) for status information and configuration.
# The socket file will be named based on the interface name, so multiple
# wpa_supplicant processes can be run at the same time if more than one
# interface is used.
# /var/run/wpa_supplicant is the recommended directory for sockets and by
# default, wpa_cli will use it when trying to connect with wpa_supplicant.
#
# Access control for the control interface can be configured by setting the
# directory to allow only members of a group to use sockets. This way, it is
# possible to run wpa_supplicant as root (since it needs to change network
# configuration and open raw sockets) and still allow GUI/CLI components to be
# run as non-root users. However, since the control interface can be used to
# change the network configuration, this access needs to be protected in many
# cases. By default, wpa_supplicant is configured to use gid 0 (root). If you
# want to allow non-root users to use the control interface, add a new group
# and change this value to match with that group. Add users that should have
# control interface access to this group. If this variable is commented out or
# not included in the configuration file, group will not be changed from the
# value it got by default when the directory or socket was created.
#
# When configuring both the directory and group, use following format:
# DIR=/var/run/wpa_supplicant GROUP=wheel
# DIR=/var/run/wpa_supplicant GROUP=0
# (group can be either group name or gid)
#
ctrl_interface=/var/run/wpa_supplicant

# IEEE 802.1X/EAPOL version
# wpa_supplicant is implemented based on IEEE Std 802.1X-2004 which defines
# EAPOL version 2. However, there are many APs that do not handle the new
# version number correctly (they seem to drop the frames completely). In order
# to make wpa_supplicant interoperate with these APs, the version number is set
# to 1 by default. This configuration value can be used to set it to the new
# version (2).
eapol_version=1

# AP scanning/selection
# By default, wpa_supplicant requests driver to perform AP scanning and then
# uses the scan results to select a suitable AP. Another alternative is to
# allow the driver to take care of AP scanning and selection and use
# wpa_supplicant just to process EAPOL frames based on IEEE 802.11 association
# information from the driver.
# 1: wpa_supplicant initiates scanning and AP selection; if no APs matching to
#    the currently enabled networks are found, a new network (IBSS or AP mode
#    operation) may be initialized (if configured) (default)
# 0: driver takes care of scanning, AP selection, and IEEE 802.11 association
#    parameters (e.g., WPA IE generation); this mode can also be used with
#    non-WPA drivers when using IEEE 802.1X mode; do not try to associate with
#    APs (i.e., external program needs to control association). This mode must
#    also be used when using wired Ethernet drivers.
# 2: like 0, but associate with APs using security policy and SSID (but not
#    BSSID); this can be used, e.g., with ndiswrapper and NDIS drivers to
#    enable operation with hidden SSIDs and optimized roaming; in this mode,
#    the network blocks in the configuration file are tried one by one until
#    the driver reports successful association; each network block should have
#    explicit security policy (i.e., only one option in the lists) for
#    key_mgmt, pairwise, group, proto variables
#
# For use in FreeBSD with the wlan module ap_scan must be set to 1.
# When using IBSS or AP mode, ap_scan=2 mode can force the new network to be
# created immediately regardless of scan results. ap_scan=1 mode will first try
# to scan for existing networks and only if no matches with the enabled
# networks are found, a new IBSS or AP mode network is created.
ap_scan=1

# EAP fast re-authentication
# By default, fast re-authentication is enabled for all EAP methods that
# support it. This variable can be used to disable fast re-authentication.
# Normally, there is no need to disable this.
fast_reauth=1

# OpenSSL Engine support
# These options can be used to load OpenSSL engines.
# The two engines that are supported currently are shown below:
# They are both from the opensc project (http://www.opensc.org/)
# By default no engines are loaded.
# make the opensc engine available
#opensc_engine_path=/usr/lib/opensc/engine_opensc.so
# make the pkcs11 engine available
#pkcs11_engine_path=/usr/lib/opensc/engine_pkcs11.so
# configure the path to the pkcs11 module required by the pkcs11 engine
#pkcs11_module_path=/usr/lib/pkcs11/opensc-pkcs11.so

# Dynamic EAP methods
# If EAP methods were built dynamically as shared object files, they need to be
# loaded here before being used in the network blocks. By default, EAP methods
# are included statically in the build, so these lines are not needed
#load_dynamic_eap=/usr/lib/wpa_supplicant/eap_tls.so
#load_dynamic_eap=/usr/lib/wpa_supplicant/eap_md5.so

# Driver interface parameters
# This field can be used to configure arbitrary driver interace parameters. The
# format is specific to the selected driver interface. This field is not used
# in most cases.
#driver_param="field=value"

# Country code
# The ISO/IEC alpha2 country code for the country in which this device is
# currently operating.
#country=US

# Maximum lifetime for PMKSA in seconds; default 43200
#dot11RSNAConfigPMKLifetime=43200
# Threshold for reauthentication (percentage of PMK lifetime); default 70
#dot11RSNAConfigPMKReauthThreshold=70
# Timeout for security association negotiation in seconds; default 60
#dot11RSNAConfigSATimeout=60

# Wi-Fi Protected Setup (WPS) parameters

# Universally Unique IDentifier (UUID; see RFC 4122) of the device
# If not configured, UUID will be generated based on the local MAC address.
#uuid=12345678-9abc-def0-1234-56789abcdef0

# Device Name
# User-friendly description of device; up to 32 octets encoded in UTF-8
#device_name=Wireless Client

# Manufacturer
# The manufacturer of the device (up to 64 ASCII characters)
#manufacturer=Company

# Model Name
# Model of the device (up to 32 ASCII characters)
#model_name=cmodel

# Model Number
# Additional device description (up to 32 ASCII characters)
#model_number=123

# Serial Number
# Serial number of the device (up to 32 characters)
#serial_number=12345

# Primary Device Type
# Used format: <categ>-<OUI>-<subcateg>
# categ = Category as an integer value
# OUI = OUI and type octet as a 4-octet hex-encoded value; 0050F204 for
#       default WPS OUI
# subcateg = OUI-specific Sub Category as an integer value
# Examples:
#   1-0050F204-1 (Computer / PC)
#   1-0050F204-2 (Computer / Server)
#   5-0050F204-1 (Storage / NAS)
#   6-0050F204-1 (Network Infrastructure / AP)
#device_type=1-0050F204-1

# OS Version
# 4-octet operating system version number (hex string)
#os_version=01020300

# Config Methods
# List of the supported configuration methods
# Available methods: usba ethernet label display ext_nfc_token int_nfc_token
#	nfc_interface push_button keypad virtual_display physical_display
#	virtual_push_button physical_push_button
# For WSC 1.0:
#config_methods=label display push_button keypad
# For WSC 2.0:
#config_methods=label virtual_display virtual_push_button keypad

# Credential processing
#   0 = process received credentials internally (default)
#   1 = do not process received credentials; just pass them over ctrl_iface to
#	external program(s)
#   2 = process received credentials internally and pass them over ctrl_iface
#	to external program(s)
#wps_cred_processing=0

# Vendor attribute in WPS M1, e.g., Windows 7 Vertical Pairing
# The vendor attribute contents to be added in M1 (hex string)
#wps_vendor_ext_m1=000137100100020001

# NFC password token for WPS
# These parameters can be used to configure a fixed NFC password token for the
# station. This can be generated, e.g., with nfc_pw_token. When these
# parameters are used, the station is assumed to be deployed with a NFC tag
# that includes the matching NFC password token (e.g., written based on the
# NDEF record from nfc_pw_token).
#
#wps_nfc_dev_pw_id: Device Password ID (16..65535)
#wps_nfc_dh_pubkey: Hexdump of DH Public Key
#wps_nfc_dh_privkey: Hexdump of DH Private Key
#wps_nfc_dev_pw: Hexdump of Device Password

# Maximum number of BSS entries to keep in memory
# Default: 200
# This can be used to limit memory use on the BSS entries (cached scan
# results). A larger value may be needed in environments that have huge number
# of APs when using ap_scan=1 mode.
#bss_max_count=200

# Automatic scan
# This is an optional set of parameters for automatic scanning
# within an interface in following format:
#autoscan=<autoscan module name>:<module parameters>
#Â autoscan is like bgscan but on disconnected or inactive state.
#Â For instance, on exponential module parameters would be <base>:<limit>
#autoscan=exponential:3:300
# Which means a delay between scans on a base exponential of 3,
#Â up to the limit of 300 seconds (3, 9, 27 ... 300)
#Â For periodic module, parameters would be <fixed interval>
#autoscan=periodic:30
#Â So a delay of 30 seconds will be applied between each scan

# filter_ssids - SSID-based scan result filtering
# 0 = do not filter scan results (default)
# 1 = only include configured SSIDs in scan results/BSS table
#filter_ssids=0

# Password (and passphrase, etc.) backend for external storage
# format: <backend name>[:<optional backend parameters>]
#ext_password_backend=test:pw1=password|pw2=testing

# Timeout in seconds to detect STA inactivity (default: 300 seconds)
#
# This timeout value is used in P2P GO mode to clean up
# inactive stations.
#p2p_go_max_inactivity=300

# Opportunistic Key Caching (also known as Proactive Key Caching) default
# This parameter can be used to set the default behavior for the
# proactive_key_caching parameter. By default, OKC is disabled unless enabled
# with the global okc=1 parameter or with the per-network
# proactive_key_caching=1 parameter. With okc=1, OKC is enabled by default, but
# can be disabled with per-network proactive_key_caching=0 parameter.
#okc=0

# Protected Management Frames default
# This parameter can be used to set the default behavior for the ieee80211w
# parameter. By default, PMF is disabled unless enabled with the global pmf=1/2
# parameter or with the per-network ieee80211w=1/2 parameter. With pmf=1/2, PMF
# is enabled/required by default, but can be disabled with the per-network
# ieee80211w parameter.
#pmf=0

# Interworking (IEEE 802.11u)

# Enable Interworking
# interworking=1

# Homogenous ESS identifier
# If this is set, scans will be used to request response only from BSSes
# belonging to the specified Homogeneous ESS. This is used only if interworking
# is enabled.
# hessid=00:11:22:33:44:55

# Automatic network selection behavior
# 0 = do not automatically go through Interworking network selection
#     (i.e., require explicit interworking_select command for this; default)
# 1 = perform Interworking network selection if one or more
#     credentials have been configured and scan did not find a
#     matching network block
#auto_interworking=0

# credential block
#
# Each credential used for automatic network selection is configured as a set
# of parameters that are compared to the information advertised by the APs when
# interworking_select and interworking_connect commands are used.
#
# credential fields:
#
# priority: Priority group
#	By default, all networks and credentials get the same priority group
#	(0). This field can be used to give higher priority for credentials
#	(and similarly in struct wpa_ssid for network blocks) to change the
#	Interworking automatic networking selection behavior. The matching
#	network (based on either an enabled network block or a credential)
#	with the highest priority value will be selected.
#
# pcsc: Use PC/SC and SIM/USIM card
#
# realm: Home Realm for Interworking
#
# username: Username for Interworking network selection
#
# password: Password for Interworking network selection
#
# ca_cert: CA certificate for Interworking network selection
#
# client_cert: File path to client certificate file (PEM/DER)
#	This field is used with Interworking networking selection for a case
#	where client certificate/private key is used for authentication
#	(EAP-TLS). Full path to the file should be used since working
#	directory may change when wpa_supplicant is run in the background.
#
#	Alternatively, a named configuration blob can be used by setting
#	this to blob://blob_name.
#
# private_key: File path to client private key file (PEM/DER/PFX)
#	When PKCS#12/PFX file (.p12/.pfx) is used, client_cert should be
#	commented out. Both the private key and certificate will be read
#	from the PKCS#12 file in this case. Full path to the file should be
#	used since working directory may change when wpa_supplicant is run
#	in the background.
#
#	Windows certificate store can be used by leaving client_cert out and
#	configuring private_key in one of the following formats:
#
#	cert://substring_to_match
#
#	hash://certificate_thumbprint_in_hex
#
#	For example: private_key="hash://63093aa9c47f56ae88334c7b65a4"
#
#	Note that when running wpa_supplicant as an application, the user
#	certificate store (My user account) is used, whereas computer store
#	(Computer account) is used when running wpasvc as a service.
#
#	Alternatively, a named configuration blob can be used by setting
#	this to blob://blob_name.
#
# private_key_passwd: Password for private key file
#
# imsi: IMSI in <MCC> | <MNC> | '-' | <MSIN> format
#
# milenage: Milenage parameters for SIM/USIM simulator in <Ki>:<OPc>:<SQN>
#	format
#
# domain: Home service provider FQDN
#	This is used to compare against the Domain Name List to figure out
#	whether the AP is operated by the Home SP.
#
# roaming_consortium: Roaming Consortium OI
#	If roaming_consortium_len is non-zero, this field contains the
#	Roaming Consortium OI that can be used to determine which access
#	points support authentication with this credential. This is an
#	alternative to the use of the realm parameter. When using Roaming
#	Consortium to match the network, the EAP parameters need to be
#	pre-configured with the credential since the NAI Realm information
#	may not be available or fetched.
#
# eap: Pre-configured EAP method
#	This optional field can be used to specify which EAP method will be
#	used with this credential. If not set, the EAP method is selected
#	automatically based on ANQP information (e.g., NAI Realm).
#
# phase1: Pre-configure Phase 1 (outer authentication) parameters
#	This optional field is used with like the 'eap' parameter.
#
# phase2: Pre-configure Phase 2 (inner authentication) parameters
#	This optional field is used with like the 'eap' parameter.
#
# excluded_ssid: Excluded SSID
#	This optional field can be used to excluded specific SSID(s) from
#	matching with the network. Multiple entries can be used to specify more
#	than one SSID.
#
# for example:
#
#cred={
#	realm="example.com"
#	username="user@example.com"
#	password="password"
#	ca_cert="/etc/wpa_supplicant/ca.pem"
#	domain="example.com"
#}
#
#cred={
#	imsi="310026-000000000"
#	milenage="90dca4eda45b53cf0f12d7c9c3bc6a89:cb9cccc4b9258e6dca4760379fb82"
#}
#
#cred={
#	realm="example.com"
#	username="user"
#	password="password"
#	ca_cert="/etc/wpa_supplicant/ca.pem"
#	domain="example.com"
#	roaming_consortium=223344
#	eap=TTLS
#	phase2="auth=MSCHAPV2"
#}

# Hotspot 2.0
# hs20=1

# network block
#
# Each network (usually AP's sharing the same SSID) is configured as a separate
# block in this configuration file. The network blocks are in preference order
# (the first match is used).
#
# network block fields:
#
# disabled:
#	0 = this network can be used (default)
#	1 = this network block is disabled (can be enabled through ctrl_iface,
#	    e.g., with wpa_cli or wpa_gui)
#
# id_str: Network identifier string for external scripts. This value is passed
#	to external action script through wpa_cli as WPA_ID_STR environment
#	variable to make it easier to do network specific configuration.
#
# ssid: SSID (mandatory); network name in one of the optional formats:
#	- an ASCII string with double quotation
#	- a hex string (two characters per octet of SSID)
#	- a printf-escaped ASCII string P"<escaped string>"
#
# scan_ssid:
#	0 = do not scan this SSID with specific Probe Request frames (default)
#	1 = scan with SSID-specific Probe Request frames (this can be used to
#	    find APs that hide (do not broadcast) SSID or use multiple SSIDs;
#	    this will add latency to scanning, so enable this only when needed)
#
# bssid: BSSID (optional); if set, this network block is used only when
#	associating with the AP using the configured BSSID
#
# priority: priority group (integer)
# By default, all networks will get same priority group (0). If some of the
# networks are more desirable, this field can be used to change the order in
# which wpa_supplicant goes through the networks when selecting a BSS. The
# priority groups will be iterated in decreasing priority (i.e., the larger the
# priority value, the sooner the network is matched against the scan results).
# Within each priority group, networks will be selected based on security
# policy, signal strength, etc.
# Please note that AP scanning with scan_ssid=1 and ap_scan=2 mode are not
# using this priority to select the order for scanning. Instead, they try the
# networks in the order that they are listed in the configuration file.
#
# mode: IEEE 802.11 operation mode
# 0 = infrastructure (Managed) mode, i.e., associate with an AP (default)
# 1 = IBSS (ad-hoc, peer-to-peer)
# 2 = AP (access point)
# Note: IBSS can only be used with key_mgmt NONE (plaintext and static WEP)
# and key_mgmt=WPA-NONE (fixed group key TKIP/CCMP). WPA-None requires
# following network block options:
# proto=WPA, key_mgmt=WPA-NONE, pairwise=NONE, group=TKIP (or CCMP, but not
# both), and psk must also be set.
#
# frequency: Channel frequency in megahertz (MHz) for IBSS, e.g.,
# 2412 = IEEE 802.11b/g channel 1. This value is used to configure the initial
# channel for IBSS (adhoc) networks. It is ignored in the infrastructure mode.
# In addition, this value is only used by the station that creates the IBSS. If
# an IBSS network with the configured SSID is already present, the frequency of
# the network will be used instead of this configured value.
#
# scan_freq: List of frequencies to scan
# Space-separated list of frequencies in MHz to scan when searching for this
# BSS. If the subset of channels used by the network is known, this option can
# be used to optimize scanning to not occur on channels that the network does
# not use. Example: scan_freq=2412 2437 2462
#
# freq_list: Array of allowed frequencies
# Space-separated list of frequencies in MHz to allow for selecting the BSS. If
# set, scan results that do not match any of the specified frequencies are not
# considered when selecting a BSS.
#
# bgscan: Background scanning
# wpa_supplicant behavior for background scanning can be specified by
# configuring a bgscan module. These modules are responsible for requesting
# background scans for the purpose of roaming within an ESS (i.e., within a
# single network block with all the APs using the same SSID). The bgscan
# parameter uses following format: "<bgscan module name>:<module parameters>"
# Following bgscan modules are available:
# simple - Periodic background scans based on signal strength
# bgscan="simple:<short bgscan interval in seconds>:<signal strength threshold>:
# <long interval>"
# bgscan="simple:30:-45:300"
# learn - Learn channels used by the network and try to avoid bgscans on other
# channels (experimental)
# bgscan="learn:<short bgscan interval in seconds>:<signal strength threshold>:
# <long interval>[:<database file name>]"
# bgscan="learn:30:-45:300:/etc/wpa_supplicant/network1.bgscan"
#
# proto: list of accepted protocols
# WPA = WPA/IEEE 802.11i/D3.0
# RSN = WPA2/IEEE 802.11i (also WPA2 can be used as an alias for RSN)
# If not set, this defaults to: WPA RSN
#
# key_mgmt: list of accepted authenticated key management protocols
# WPA-PSK = WPA pre-shared key (this requires 'psk' field)
# WPA-EAP = WPA using EAP authentication
# IEEE8021X = IEEE 802.1X using EAP authentication and (optionally) dynamically
#	generated WEP keys
# NONE = WPA is not used; plaintext or static WEP could be used
# WPA-PSK-SHA256 = Like WPA-PSK but using stronger SHA256-based algorithms
# WPA-EAP-SHA256 = Like WPA-EAP but using stronger SHA256-based algorithms
# If not set, this defaults to: WPA-PSK WPA-EAP
#
# ieee80211w: whether management frame protection is enabled
# 0 = disabled (default unless changed with the global pmf parameter)
# 1 = optional
# 2 = required
# The most common configuration options for this based on the PMF (protected
# management frames) certification program are:
# PMF enabled: ieee80211w=1 and key_mgmt=WPA-EAP WPA-EAP-SHA256
# PMF required: ieee80211w=2 and key_mgmt=WPA-EAP-SHA256
# (and similarly for WPA-PSK and WPA-WPSK-SHA256 if WPA2-Personal is used)
#
# auth_alg: list of allowed IEEE 802.11 authentication algorithms
# OPEN = Open System authentication (required for WPA/WPA2)
# SHARED = Shared Key authentication (requires static WEP keys)
# LEAP = LEAP/Network EAP (only used with LEAP)
# If not set, automatic selection is used (Open System with LEAP enabled if
# LEAP is allowed as one of the EAP methods).
#
# pairwise: list of accepted pairwise (unicast) ciphers for WPA
# CCMP = AES in Counter mode with CBC-MAC [RFC 3610, IEEE 802.11i/D7.0]
# TKIP = Temporal Key Integrity Protocol [IEEE 802.11i/D7.0]
# NONE = Use only Group Keys (deprecated, should not be included if APs support
#	pairwise keys)
# If not set, this defaults to: CCMP TKIP
#
# group: list of accepted group (broadcast/multicast) ciphers for WPA
# CCMP = AES in Counter mode with CBC-MAC [RFC 3610, IEEE 802.11i/D7.0]
# TKIP = Temporal Key Integrity Protocol [IEEE 802.11i/D7.0]
# WEP104 = WEP (Wired Equivalent Privacy) with 104-bit key
# WEP40 = WEP (Wired Equivalent Privacy) with 40-bit key [IEEE 802.11]
# If not set, this defaults to: CCMP TKIP WEP104 WEP40
#
# psk: WPA preshared key; 256-bit pre-shared key
# The key used in WPA-PSK mode can be entered either as 64 hex-digits, i.e.,
# 32 bytes or as an ASCII passphrase (in which case, the real PSK will be
# generated using the passphrase and SSID). ASCII passphrase must be between
# 8 and 63 characters (inclusive). ext:<name of external PSK field> format can
# be used to indicate that the PSK/passphrase is stored in external storage.
# This field is not needed, if WPA-EAP is used.
# Note: Separate tool, wpa_passphrase, can be used to generate 256-bit keys
# from ASCII passphrase. This process uses lot of CPU and wpa_supplicant
# startup and reconfiguration time can be optimized by generating the PSK only
# only when the passphrase or SSID has actually changed.
#
# eapol_flags: IEEE 802.1X/EAPOL options (bit field)
# Dynamic WEP key required for non-WPA mode
# bit0 (1): require dynamically generated unicast WEP key
# bit1 (2): require dynamically generated broadcast WEP key
# 	(3 = require both keys; default)
# Note: When using wired authentication, eapol_flags must be set to 0 for the
# authentication to be completed successfully.
#
# mixed_cell: This option can be used to configure whether so called mixed
# cells, i.e., networks that use both plaintext and encryption in the same
# SSID, are allowed when selecting a BSS from scan results.
# 0 = disabled (default)
# 1 = enabled
#
# proactive_key_caching:
# Enable/disable opportunistic PMKSA caching for WPA2.
# 0 = disabled (default unless changed with the global okc parameter)
# 1 = enabled
#
# wep_key0..3: Static WEP key (ASCII in double quotation, e.g. "abcde" or
# hex without quotation, e.g., 0102030405)
# wep_tx_keyidx: Default WEP key index (TX) (0..3)
#
# peerkey: Whether PeerKey negotiation for direct links (IEEE 802.11e DLS) is
# allowed. This is only used with RSN/WPA2.
# 0 = disabled (default)
# 1 = enabled
#peerkey=1
#
# wpa_ptk_rekey: Maximum lifetime for PTK in seconds. This can be used to
# enforce rekeying of PTK to mitigate some attacks against TKIP deficiencies.
#
# Following fields are only used with internal EAP implementation.
# eap: space-separated list of accepted EAP methods
#	MD5 = EAP-MD5 (unsecure and does not generate keying material ->
#			cannot be used with WPA; to be used as a Phase 2 method
#			with EAP-PEAP or EAP-TTLS)
#       MSCHAPV2 = EAP-MSCHAPv2 (cannot be used separately with WPA; to be used
#		as a Phase 2 method with EAP-PEAP or EAP-TTLS)
#       OTP = EAP-OTP (cannot be used separately with WPA; to be used
#		as a Phase 2 method with EAP-PEAP or EAP-TTLS)
#       GTC = EAP-GTC (cannot be used separately with WPA; to be used
#		as a Phase 2 method with EAP-PEAP or EAP-TTLS)
#	TLS = EAP-TLS (client and server certificate)
#	PEAP = EAP-PEAP (with tunnelled EAP authentication)
#	TTLS = EAP-TTLS (with tunnelled EAP or PAP/CHAP/MSCHAP/MSCHAPV2
#			 authentication)
#	If not set, all compiled in methods are allowed.
#
# identity: Identity string for EAP
#	This field is also used to configure user NAI for
#	EAP-PSK/PAX/SAKE/GPSK.
# anonymous_identity: Anonymous identity string for EAP (to be used as the
#	unencrypted identity with EAP types that support different tunnelled
#	identity, e.g., EAP-TTLS). This field can also be used with
#	EAP-SIM/AKA/AKA' to store the pseudonym identity.
# password: Password string for EAP. This field can include either the
#	plaintext password (using ASCII or hex string) or a NtPasswordHash
#	(16-byte MD4 hash of password) in hash:<32 hex digits> format.
#	NtPasswordHash can only be used when the password is for MSCHAPv2 or
#	MSCHAP (EAP-MSCHAPv2, EAP-TTLS/MSCHAPv2, EAP-TTLS/MSCHAP, LEAP).
#	EAP-PSK (128-bit PSK), EAP-PAX (128-bit PSK), and EAP-SAKE (256-bit
#	PSK) is also configured using this field. For EAP-GPSK, this is a
#	variable length PSK. ext:<name of external password field> format can
#	be used to indicate that the password is stored in external storage.
# ca_cert: File path to CA certificate file (PEM/DER). This file can have one
#	or more trusted CA certificates. If ca_cert and ca_path are not
#	included, server certificate will not be verified. This is insecure and
#	a trusted CA certificate should always be configured when using
#	EAP-TLS/TTLS/PEAP. Full path should be used since working directory may
#	change when wpa_supplicant is run in the background.
#
#	Alternatively, this can be used to only perform matching of the server
#	certificate (SHA-256 hash of the DER encoded X.509 certificate). In
#	this case, the possible CA certificates in the server certificate chain
#	are ignored and only the server certificate is verified. This is
#	configured with the following format:
#	hash:://server/sha256/cert_hash_in_hex
#	For example: "hash://server/sha256/
#	5a1bc1296205e6fdbe3979728efe3920798885c1c4590b5f90f43222d239ca6a"
#
#	On Windows, trusted CA certificates can be loaded from the system
#	certificate store by setting this to cert_store://<name>, e.g.,
#	ca_cert="cert_store://CA" or ca_cert="cert_store://ROOT".
#	Note that when running wpa_supplicant as an application, the user
#	certificate store (My user account) is used, whereas computer store
#	(Computer account) is used when running wpasvc as a service.
# ca_path: Directory path for CA certificate files (PEM). This path may
#	contain multiple CA certificates in OpenSSL format. Common use for this
#	is to point to system trusted CA list which is often installed into
#	directory like /etc/ssl/certs. If configured, these certificates are
#	added to the list of trusted CAs. ca_cert may also be included in that
#	case, but it is not required.
# client_cert: File path to client certificate file (PEM/DER)
#	Full path should be used since working directory may change when
#	wpa_supplicant is run in the background.
#	Alternatively, a named configuration blob can be used by setting this
#	to blob://<blob name>.
# private_key: File path to client private key file (PEM/DER/PFX)
#	When PKCS#12/PFX file (.p12/.pfx) is used, client_cert should be
#	commented out. Both the private key and certificate will be read from
#	the PKCS#12 file in this case. Full path should be used since working
#	directory may change when wpa_supplicant is run in the background.
#	Windows certificate store can be used by leaving client_cert out and
#	configuring private_key in one of the following formats:
#	cert://substring_to_match
#	hash://certificate_thumbprint_in_hex
#	for example: private_key="hash://63093aa9c47f56ae88334c7b65a4"
#	Note that when running wpa_supplicant as an application, the user
#	certificate store (My user account) is used, whereas computer store
#	(Computer account) is used when running wpasvc as a service.
#	Alternatively, a named configuration blob can be used by setting this
#	to blob://<blob name>.
# private_key_passwd: Password for private key file (if left out, this will be
#	asked through control interface)
# dh_file: File path to DH/DSA parameters file (in PEM format)
#	This is an optional configuration file for setting parameters for an
#	ephemeral DH key exchange. In most cases, the default RSA
#	authentication does not use this configuration. However, it is possible
#	setup RSA to use ephemeral DH key exchange. In addition, ciphers with
#	DSA keys always use ephemeral DH keys. This can be used to achieve
#	forward secrecy. If the file is in DSA parameters format, it will be
#	automatically converted into DH params.
# subject_match: Substring to be matched against the subject of the
#	authentication server certificate. If this string is set, the server
#	sertificate is only accepted if it contains this string in the subject.
#	The subject string is in following format:
#	/C=US/ST=CA/L=San Francisco/CN=Test AS/emailAddress=as@example.com
# altsubject_match: Semicolon separated string of entries to be matched against
#	the alternative subject name of the authentication server certificate.
#	If this string is set, the server sertificate is only accepted if it
#	contains one of the entries in an alternative subject name extension.
#	altSubjectName string is in following format: TYPE:VALUE
#	Example: EMAIL:server@example.com
#	Example: DNS:server.example.com;DNS:server2.example.com
#	Following types are supported: EMAIL, DNS, URI
# phase1: Phase1 (outer authentication, i.e., TLS tunnel) parameters
#	(string with field-value pairs, e.g., "peapver=0" or
#	"peapver=1 peaplabel=1")
#	'peapver' can be used to force which PEAP version (0 or 1) is used.
#	'peaplabel=1' can be used to force new label, "client PEAP encryption",
#	to be used during key derivation when PEAPv1 or newer. Most existing
#	PEAPv1 implementation seem to be using the old label, "client EAP
#	encryption", and wpa_supplicant is now using that as the default value.
#	Some servers, e.g., Radiator, may require peaplabel=1 configuration to
#	interoperate with PEAPv1; see eap_testing.txt for more details.
#	'peap_outer_success=0' can be used to terminate PEAP authentication on
#	tunneled EAP-Success. This is required with some RADIUS servers that
#	implement draft-josefsson-pppext-eap-tls-eap-05.txt (e.g.,
#	Lucent NavisRadius v4.4.0 with PEAP in "IETF Draft 5" mode)
#	include_tls_length=1 can be used to force wpa_supplicant to include
#	TLS Message Length field in all TLS messages even if they are not
#	fragmented.
#	sim_min_num_chal=3 can be used to configure EAP-SIM to require three
#	challenges (by default, it accepts 2 or 3)
#	result_ind=1 can be used to enable EAP-SIM and EAP-AKA to use
#	protected result indication.
#	'crypto_binding' option can be used to control PEAPv0 cryptobinding
#	behavior:
#	 * 0 = do not use cryptobinding (default)
#	 * 1 = use cryptobinding if server supports it
#	 * 2 = require cryptobinding
#	EAP-WSC (WPS) uses following options: pin=<Device Password> or
#	pbc=1.
# phase2: Phase2 (inner authentication with TLS tunnel) parameters
#	(string with field-value pairs, e.g., "auth=MSCHAPV2" for EAP-PEAP or
#	"autheap=MSCHAPV2 autheap=MD5" for EAP-TTLS)
#
# TLS-based methods can use the following parameters to control TLS behavior
# (these are normally in the phase1 parameter, but can be used also in the
# phase2 parameter when EAP-TLS is used within the inner tunnel):
# tls_allow_md5=1 - allow MD5-based certificate signatures (depending on the
#	TLS library, these may be disabled by default to enforce stronger
#	security)
# tls_disable_time_checks=1 - ignore certificate validity time (this requests
#	the TLS library to accept certificates even if they are not currently
#	valid, i.e., have expired or have not yet become valid; this should be
#	used only for testing purposes)
# tls_disable_session_ticket=1 - disable TLS Session Ticket extension
# tls_disable_session_ticket=0 - allow TLS Session Ticket extension to be used
#	Note: If not set, this is automatically set to 1 for EAP-TLS/PEAP/TTLS
#	as a workaround for broken authentication server implementations unless
#	EAP workarounds are disabled with eap_workarounds=0.
#	For EAP-FAST, this must be set to 0 (or left unconfigured for the
#	default value to be used automatically).
#
# Following certificate/private key fields are used in inner Phase2
# authentication when using EAP-TTLS or EAP-PEAP.
# ca_cert2: File path to CA certificate file. This file can have one or more
#	trusted CA certificates. If ca_cert2 and ca_path2 are not included,
#	server certificate will not be verified. This is insecure and a trusted
#	CA certificate should always be configured.
# ca_path2: Directory path for CA certificate files (PEM)
# client_cert2: File path to client certificate file
# private_key2: File path to client private key file
# private_key2_passwd: Password for private key file
# dh_file2: File path to DH/DSA parameters file (in PEM format)
# subject_match2: Substring to be matched against the subject of the
#	authentication server certificate.
# altsubject_match2: Substring to be matched against the alternative subject
#	name of the authentication server certificate.
#
# fragment_size: Maximum EAP fragment size in bytes (default 1398).
#	This value limits the fragment size for EAP methods that support
#	fragmentation (e.g., EAP-TLS and EAP-PEAP). This value should be set
#	small enough to make the EAP messages fit in MTU of the network
#	interface used for EAPOL. The default value is suitable for most
#	cases.
#
# EAP-FAST variables:
# pac_file: File path for the PAC entries. wpa_supplicant will need to be able
#	to create this file and write updates to it when PAC is being
#	provisioned or refreshed. Full path to the file should be used since
#	working directory may change when wpa_supplicant is run in the
#	background. Alternatively, a named configuration blob can be used by
#	setting this to blob://<blob name>
# phase1: fast_provisioning option can be used to enable in-line provisioning
#         of EAP-FAST credentials (PAC):
#         0 = disabled,
#         1 = allow unauthenticated provisioning,
#         2 = allow authenticated provisioning,
#         3 = allow both unauthenticated and authenticated provisioning
#	fast_max_pac_list_len=<num> option can be used to set the maximum
#		number of PAC entries to store in a PAC list (default: 10)
#	fast_pac_format=binary option can be used to select binary format for
#		storing PAC entries in order to save some space (the default
#		text format uses about 2.5 times the size of minimal binary
#		format)
#
# wpa_supplicant supports number of "EAP workarounds" to work around
# interoperability issues with incorrectly behaving authentication servers.
# These are enabled by default because some of the issues are present in large
# number of authentication servers. Strict EAP conformance mode can be
# configured by disabling workarounds with eap_workaround=0.

# Station inactivity limit
#
# If a station does not send anything in ap_max_inactivity seconds, an
# empty data frame is sent to it in order to verify whether it is
# still in range. If this frame is not ACKed, the station will be
# disassociated and then deauthenticated. This feature is used to
# clear station table of old entries when the STAs move out of the
# range.
#
# The station can associate again with the AP if it is still in range;
# this inactivity poll is just used as a nicer way of verifying
# inactivity; i.e., client will not report broken connection because
# disassociation frame is not sent immediately without first polling
# the STA with a data frame.
# default: 300 (i.e., 5 minutes)
#ap_max_inactivity=300

# DTIM period in Beacon intervals for AP mode (default: 2)
#dtim_period=2

# disable_ht: Whether HT (802.11n) should be disabled.
# 0 = HT enabled (if AP supports it)
# 1 = HT disabled
#
# disable_ht40: Whether HT-40 (802.11n) should be disabled.
# 0 = HT-40 enabled (if AP supports it)
# 1 = HT-40 disabled
#
# disable_sgi: Whether SGI (short guard interval) should be disabled.
# 0 = SGI enabled (if AP supports it)
# 1 = SGI disabled
#
# ht_mcs:  Configure allowed MCS rates.
#  Parsed as an array of bytes, in base-16 (ascii-hex)
# ht_mcs=""                                   // Use all available (default)
# ht_mcs="0xff 00 00 00 00 00 00 00 00 00 "   // Use MCS 0-7 only
# ht_mcs="0xff ff 00 00 00 00 00 00 00 00 "   // Use MCS 0-15 only
#
# disable_max_amsdu:  Whether MAX_AMSDU should be disabled.
# -1 = Do not make any changes.
# 0  = Enable MAX-AMSDU if hardware supports it.
# 1  = Disable AMSDU
#
# ampdu_density:  Allow overriding AMPDU density configuration.
#  Treated as hint by the kernel.
# -1 = Do not make any changes.
# 0-3 = Set AMPDU density (aka factor) to specified value.

# Example blocks:

# Simple case: WPA-PSK, PSK as an ASCII passphrase, allow all valid ciphers
network={
	ssid="simple"
	psk="very secret passphrase"
	priority=5
}

# Same as previous, but request SSID-specific scanning (for APs that reject
# broadcast SSID)
network={
	ssid="second ssid"
	scan_ssid=1
	psk="very secret passphrase"
	priority=2
}

# Only WPA-PSK is used. Any valid cipher combination is accepted.
network={
	ssid="example"
	proto=WPA
	key_mgmt=WPA-PSK
	pairwise=CCMP TKIP
	group=CCMP TKIP WEP104 WEP40
	psk=06b4be19da289f475aa46a33cb793029d4ab3db7a23ee92382eb0106c72ac7bb
	priority=2
}

# WPA-Personal(PSK) with TKIP and enforcement for frequent PTK rekeying
network={
	ssid="example"
	proto=WPA
	key_mgmt=WPA-PSK
	pairwise=TKIP
	group=TKIP
	psk="not so secure passphrase"
	wpa_ptk_rekey=600
}

# Only WPA-EAP is used. Both CCMP and TKIP is accepted. An AP that used WEP104
# or WEP40 as the group cipher will not be accepted.
network={
	ssid="example"
	proto=RSN
	key_mgmt=WPA-EAP
	pairwise=CCMP TKIP
	group=CCMP TKIP
	eap=TLS
	identity="user@example.com"
	ca_cert="/etc/cert/ca.pem"
	client_cert="/etc/cert/user.pem"
	private_key="/etc/cert/user.prv"
	private_key_passwd="password"
	priority=1
}

# EAP-PEAP/MSCHAPv2 configuration for RADIUS servers that use the new peaplabel
# (e.g., Radiator)
network={
	ssid="example"
	key_mgmt=WPA-EAP
	eap=PEAP
	identity="user@example.com"
	password="foobar"
	ca_cert="/etc/cert/ca.pem"
	phase1="peaplabel=1"
	phase2="auth=MSCHAPV2"
	priority=10
}

# EAP-TTLS/EAP-MD5-Challenge configuration with anonymous identity for the
# unencrypted use. Real identity is sent only within an encrypted TLS tunnel.
network={
	ssid="example"
	key_mgmt=WPA-EAP
	eap=TTLS
	identity="user@example.com"
	anonymous_identity="anonymous@example.com"
	password="foobar"
	ca_cert="/etc/cert/ca.pem"
	priority=2
}

# EAP-TTLS/MSCHAPv2 configuration with anonymous identity for the unencrypted
# use. Real identity is sent only within an encrypted TLS tunnel.
network={
	ssid="example"
	key_mgmt=WPA-EAP
	eap=TTLS
	identity="user@example.com"
	anonymous_identity="anonymous@example.com"
	password="foobar"
	ca_cert="/etc/cert/ca.pem"
	phase2="auth=MSCHAPV2"
}

# WPA-EAP, EAP-TTLS with different CA certificate used for outer and inner
# authentication.
network={
	ssid="example"
	key_mgmt=WPA-EAP
	eap=TTLS
	# Phase1 / outer authentication
	anonymous_identity="anonymous@example.com"
	ca_cert="/etc/cert/ca.pem"
	# Phase 2 / inner authentication
	phase2="autheap=TLS"
	ca_cert2="/etc/cert/ca2.pem"
	client_cert2="/etc/cer/user.pem"
	private_key2="/etc/cer/user.prv"
	private_key2_passwd="password"
	priority=2
}

# Both WPA-PSK and WPA-EAP is accepted. Only CCMP is accepted as pairwise and
# group cipher.
network={
	ssid="example"
	bssid=00:11:22:33:44:55
	proto=WPA RSN
	key_mgmt=WPA-PSK WPA-EAP
	pairwise=CCMP
	group=CCMP
	psk=06b4be19da289f475aa46a33cb793029d4ab3db7a23ee92382eb0106c72ac7bb
}

# Special characters in SSID, so use hex string. Default to WPA-PSK, WPA-EAP
# and all valid ciphers.
network={
	ssid=00010203
	psk=000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f
}


# EAP-SIM with a GSM SIM or USIM
network={
	ssid="eap-sim-test"
	key_mgmt=WPA-EAP
	eap=SIM
	pin="1234"
	pcsc=""
}


# EAP-PSK
network={
	ssid="eap-psk-test"
	key_mgmt=WPA-EAP
	eap=PSK
	anonymous_identity="eap_psk_user"
	password=06b4be19da289f475aa46a33cb793029
	identity="eap_psk_user@example.com"
}


# IEEE 802.1X/EAPOL with dynamically generated WEP keys (i.e., no WPA) using
# EAP-TLS for authentication and key generation; require both unicast and
# broadcast WEP keys.
network={
	ssid="1x-test"
	key_mgmt=IEEE8021X
	eap=TLS
	identity="user@example.com"
	ca_cert="/etc/cert/ca.pem"
	client_cert="/etc/cert/user.pem"
	private_key="/etc/cert/user.prv"
	private_key_passwd="password"
	eapol_flags=3
}


# LEAP with dynamic WEP keys
network={
	ssid="leap-example"
	key_mgmt=IEEE8021X
	eap=LEAP
	identity="user"
	password="foobar"
}

# EAP-IKEv2 using shared secrets for both server and peer authentication
network={
	ssid="ikev2-example"
	key_mgmt=WPA-EAP
	eap=IKEV2
	identity="user"
	password="foobar"
}

# EAP-FAST with WPA (WPA or WPA2)
network={
	ssid="eap-fast-test"
	key_mgmt=WPA-EAP
	eap=FAST
	anonymous_identity="FAST-000102030405"
	identity="username"
	password="password"
	phase1="fast_provisioning=1"
	pac_file="/etc/wpa_supplicant.eap-fast-pac"
}

network={
	ssid="eap-fast-test"
	key_mgmt=WPA-EAP
	eap=FAST
	anonymous_identity="FAST-000102030405"
	identity="username"
	password="password"
	phase1="fast_provisioning=1"
	pac_file="blob://eap-fast-pac"
}

# Plaintext connection (no WPA, no IEEE 802.1X)
network={
	ssid="plaintext-test"
	key_mgmt=NONE
}


# Shared WEP key connection (no WPA, no IEEE 802.1X)
network={
	ssid="static-wep-test"
	key_mgmt=NONE
	wep_key0="abcde"
	wep_key1=0102030405
	wep_key2="1234567890123"
	wep_tx_keyidx=0
	priority=5
}


# Shared WEP key connection (no WPA, no IEEE 802.1X) using Shared Key
# IEEE 802.11 authentication
network={
	ssid="static-wep-test2"
	key_mgmt=NONE
	wep_key0="abcde"
	wep_key1=0102030405
	wep_key2="1234567890123"
	wep_tx_keyidx=0
	priority=5
	auth_alg=SHARED
}


# IBSS/ad-hoc network with WPA-None/TKIP.
network={
	ssid="test adhoc"
	mode=1
	frequency=2412
	proto=WPA
	key_mgmt=WPA-NONE
	pairwise=NONE
	group=TKIP
	psk="secret passphrase"
}


# Catch all example that allows more or less all configuration modes
network={
	ssid="example"
	scan_ssid=1
	key_mgmt=WPA-EAP WPA-PSK IEEE8021X NONE
	pairwise=CCMP TKIP
	group=CCMP TKIP WEP104 WEP40
	psk="very secret passphrase"
	eap=TTLS PEAP TLS
	identity="user@example.com"
	password="foobar"
	ca_cert="/etc/cert/ca.pem"
	client_cert="/etc/cert/user.pem"
	private_key="/etc/cert/user.prv"
	private_key_passwd="password"
	phase1="peaplabel=0"
}

# Example of EAP-TLS with smartcard (openssl engine)
network={
	ssid="example"
	key_mgmt=WPA-EAP
	eap=TLS
	proto=RSN
	pairwise=CCMP TKIP
	group=CCMP TKIP
	identity="user@example.com"
	ca_cert="/etc/cert/ca.pem"
	client_cert="/etc/cert/user.pem"

	engine=1

	# The engine configured here must be available. Look at
	# OpenSSL engine support in the global section.
	# The key available through the engine must be the private key
	# matching the client certificate configured above.

	# use the opensc engine
	#engine_id="opensc"
	#key_id="45"

	# use the pkcs11 engine
	engine_id="pkcs11"
	key_id="id_45"

	# Optional PIN configuration; this can be left out and PIN will be
	# asked through the control interface
	pin="1234"
}

# Example configuration showing how to use an inlined blob as a CA certificate
# data instead of using external file
network={
	ssid="example"
	key_mgmt=WPA-EAP
	eap=TTLS
	identity="user@example.com"
	anonymous_identity="anonymous@example.com"
	password="foobar"
	ca_cert="blob://exampleblob"
	priority=20
}

blob-base64-exampleblob={
SGVsbG8gV29ybGQhCg==
}


# Wildcard match for SSID (plaintext APs only). This example select any
# open AP regardless of its SSID.
network={
	key_mgmt=NONE
}`;