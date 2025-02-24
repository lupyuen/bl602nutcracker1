typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct txdesc txdesc, *Ptxdesc;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef struct hostdesc hostdesc, *Phostdesc;

typedef struct umacdesc umacdesc, *Pumacdesc;

typedef struct lmacdesc lmacdesc, *Plmacdesc;

typedef struct tx_hw_desc tx_hw_desc, *Ptx_hw_desc;

typedef struct tx_cfm_tag tx_cfm_tag, *Ptx_cfm_tag;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char __int8_t;

typedef __int8_t int8_t;

typedef union anon_union.conflict2703_for_field_0 anon_union.conflict2703_for_field_0, *Panon_union.conflict2703_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict1187_for_field_3 anon_union.conflict1187_for_field_3, *Panon_union.conflict1187_for_field_3;

typedef union anon_union.conflict11ac_for_field_4 anon_union.conflict11ac_for_field_4, *Panon_union.conflict11ac_for_field_4;

typedef union anon_union.conflict11d1_for_field_5 anon_union.conflict11d1_for_field_5, *Panon_union.conflict11d1_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: fad
    struct co_list_hdr * next;
};

struct mac_addr { // DWARF DIE: a61
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 176f
    uint32_t pbuf_addr;
    uint32_t packet_addr;
    uint16_t packet_len;
    undefined field_0xa;
    undefined field_0xb;
    uint32_t status_addr;
    struct mac_addr eth_dest_addr;
    struct mac_addr eth_src_addr;
    uint16_t ethertype;
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    uint8_t tid;
    uint8_t vif_idx;
    uint8_t staid;
    undefined field_0x2d;
    uint16_t flags;
    uint32_t pbuf_chained_ptr[4];
    uint32_t pbuf_chained_len[4];
};

struct tx_cfm_tag { // DWARF DIE: 15e4
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict11ac_for_field_4 { // DWARF DIE: 11ac
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

union anon_union.conflict1187_for_field_3 { // DWARF DIE: 1187
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct lmacdesc { // DWARF DIE: 18db
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict11d1_for_field_5 { // DWARF DIE: 11d1
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct tx_hd { // DWARF DIE: 11f6
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict1187_for_field_3 field_3;
    union anon_union.conflict11ac_for_field_4 field_4;
    union anon_union.conflict11d1_for_field_5 field_5;
    uint32_t frmlen;
    uint32_t frmlifetime;
    uint32_t phyctrlinfo;
    uint32_t policyentryaddr;
    uint32_t optlen[3];
    uint32_t macctrlinfo1;
    uint32_t macctrlinfo2;
    uint32_t statinfo;
    uint32_t mediumtimeused;
};

struct tx_hw_desc { // DWARF DIE: 1653
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct umacdesc { // DWARF DIE: 184b
    struct txl_buffer_control * buf_control;
    uint32_t buff_offset;
    uint16_t payl_len;
    uint8_t head_len;
    uint8_t hdr_len_802_2;
    uint8_t tail_len;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct txdesc { // DWARF DIE: 19f7
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 115c
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: 105a
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 12bf
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct tx_policy_tbl { // DWARF DIE: 10eb
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict2703_for_field_0 { // DWARF DIE: 2703
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 18a7
    union anon_union.conflict2703_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 1916
    uint32_t length;
    uint32_t lenheader;
    uint32_t lenpad;
    uint32_t flags;
    struct txl_buffer_tag * next;
    struct txdesc * txdesc;
    struct dma_desc dma_desc[1];
    struct dma_desc dma_desc_pat;
    struct tx_pbd tbd;
    struct tx_pbd tbd_body[8];
    uint8_t user_idx;
    undefined field_0xed;
    undefined field_0xee;
    undefined field_0xef;
    struct txl_buffer_control buffer_control;
    struct tx_pbd tkip_mic_icv_pbd;
    uint8_t tkip_mic_icv[12];
    uint32_t[0] payload;
};

struct tx_agg_desc { // DWARF DIE: 1684
    uint8_t reserved;
};

typedef struct apInfo_t apInfo_t, *PapInfo_t;

typedef struct BssConfig_t BssConfig_t, *PBssConfig_t;

typedef struct BssData_t BssData_t, *PBssData_t;

typedef uchar UINT8;

typedef ulong UINT32;

typedef struct apRsnConfig_t apRsnConfig_t, *PapRsnConfig_t;

typedef struct CommonMlmeData_t CommonMlmeData_t, *PCommonMlmeData_t;

typedef int BOOLEAN;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

typedef struct KeyData_t KeyData_t, *PKeyData_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef ushort UINT16;

typedef struct Operation_t Operation_t, *POperation_t;

typedef UINT8 IEEEtypes_SsId_t[32];

typedef UINT8 IEEEtypes_Len_t;

typedef UINT8 IEEEtypes_DtimPeriod_t;

typedef UINT16 IEEEtypes_BcnInterval_t;

typedef UINT8 IEEEtypes_Addr_t;

typedef IEEEtypes_Addr_t IEEEtypes_MacAddr_t[6];

struct Cipher_t { // DWARF DIE: 3a12
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct CommonMlmeData_t { // DWARF DIE: 45c0
    IEEEtypes_SsId_t SsId;
    IEEEtypes_Len_t SsIdLen;
    IEEEtypes_DtimPeriod_t DtimPeriod;
    IEEEtypes_BcnInterval_t BcnPeriod;
    IEEEtypes_MacAddr_t BssId;
    UINT16 RtsThresh;
    UINT16 FragThresh;
    UINT8 ShortRetryLim;
    UINT8 LongRetryLim;
    UINT8 MbssBcnIntFac;
    UINT8 MbssCurBcnIntCnt;
    UINT16 Reserved;
};

struct Operation_t { // DWARF DIE: 46aa
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t { // DWARF DIE: 46f5
    struct Cipher_t mcstCipher;
    UINT8 mcstCipherCount;
    struct Cipher_t wpaUcstCipher;
    UINT8 wpaUcstCipherCount;
    struct Cipher_t wpa2UcstCipher;
    UINT8 wpa2UcstCipherCount;
    UINT16 AuthKey;
    UINT16 AuthKeyCount;
    struct Operation_t Akmp;
    UINT32 GrpReKeyTime;
    UINT8 PSKPassPhrase[64];
    UINT8 PSKPassPhraseLen;
    UINT8 PSKValue[32];
    UINT8 MaxPwsHskRetries;
    UINT8 MaxGrpHskRetries;
    undefined field_0x73;
    UINT32 PwsHskTimeOut;
    UINT32 GrpHskTimeOut;
};

struct BssConfig_t { // DWARF DIE: 47fb
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct mm_timer_tag { // DWARF DIE: 1dc9
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct KeyData_t { // DWARF DIE: 3745
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct BssData_t { // DWARF DIE: 484b
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct apInfo_t { // DWARF DIE: 48eb
    struct BssConfig_t bssConfig;
    struct BssData_t bssData;
    UINT8 ApStop_Req_Pending;
    undefined field_0x11d;
    undefined field_0x11e;
    undefined field_0x11f;
};

typedef struct _txQingInfo_t _txQingInfo_t, *P_txQingInfo_t;

typedef enum IEEEtypes_PwrMgmtMode_e {
    PWR_MODE_ACTIVE=0,
    PWR_MODE_PWR_SAVE=1
} IEEEtypes_PwrMgmtMode_e;

struct _txQingInfo_t { // DWARF DIE: 4680
    enum IEEEtypes_PwrMgmtMode_e mode;
};

typedef struct staData_t staData_t, *PstaData_t;

typedef struct _txQingInfo_t txQingInfo_t;

typedef struct apKeyMgmtInfoSta_t apKeyMgmtInfoSta_t, *PapKeyMgmtInfoSta_t;

typedef struct apKeyMgmtInfoStaRom_t apKeyMgmtInfoStaRom_t, *PapKeyMgmtInfoStaRom_t;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef enum keyMgmtState_e {
    GRPMSG1_PENDING=5,
    GRP_REKEY_MSG1_PENDING=7,
    HSK_DUMMY_STATE=9,
    HSK_END=10,
    HSK_NOT_STARTED=0,
    MSG1_PENDING=1,
    MSG3_PENDING=3,
    WAITING_4_GRPMSG2=6,
    WAITING_4_GRP_REKEY_MSG2=8,
    WAITING_4_MSG2=2,
    WAITING_4_MSG4=4
} keyMgmtState_e;

struct SecurityMode_t { // DWARF DIE: 3a78
    UINT16 noRsn:1;
    UINT16 wepStatic:1;
    UINT16 wepDynamic:1;
    UINT16 wpa:1;
    UINT16 wpaNone:1;
    UINT16 wpa2:1;
    UINT16 cckm:1;
    UINT16 wapi:1;
    UINT16 wpa3:1;
    UINT16 rsvd:7;
};

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 44d2
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t { // DWARF DIE: 4529
    struct apKeyMgmtInfoStaRom_t rom;
    UINT8 numHskTries;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    UINT32 counterLo;
    UINT32 counterHi;
    struct mm_timer_tag HskTimer;
    UINT8 EAPOL_MIC_Key[16];
    UINT8 EAPOL_Encr_Key[16];
    UINT8 EAPOLProtoVersion;
    UINT8 rsvd[3];
};

struct staData_t { // DWARF DIE: 48b7
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict38ea_for_keyEncypt anon_union.conflict38ea_for_keyEncypt, *Panon_union.conflict38ea_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_CMAC_t { // DWARF DIE: 38ad
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_WAPI_t { // DWARF DIE: 3856
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_WEP_t { // DWARF DIE: 37e6
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

struct key_Type_AES_t { // DWARF DIE: 3833
    UINT8 key[16];
};

struct key_Type_TKIP_t { // DWARF DIE: 37a9
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

union anon_union.conflict38ea_for_keyEncypt { // DWARF DIE: 38ea
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 3930
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict38ea_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict38ea anon_union.conflict38ea, *Panon_union.conflict38ea;

union anon_union.conflict38ea { // DWARF DIE: 38ea
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct _IEEEtypes_Wpa_t _IEEEtypes_Wpa_t, *P_IEEEtypes_Wpa_t;

typedef struct _IEEEtypes_Wpa_t IEEEtypes_Wpa_t;

typedef struct _wpa_suite_t _wpa_suite_t, *P_wpa_suite_t;

typedef struct _wpa_suite_t wpa_suite_mcast_t;

typedef struct anon_struct.conflict4d2a anon_struct.conflict4d2a, *Panon_struct.conflict4d2a;

typedef struct anon_struct.conflict4d2a wpa_suite_ucast_t;

typedef struct anon_struct.conflict4d2a wpa_suite_auth_key_mgmt_t;

typedef struct _wpa_suite_t wpa_suite;

struct _wpa_suite_t { // DWARF DIE: 4cd5
    uint8_t oui[3];
    uint8_t type;
};

struct anon_struct.conflict4d2a { // DWARF DIE: 4d2a
    uint16_t count;
    wpa_suite list[2];
};

struct _IEEEtypes_Wpa_t { // DWARF DIE: 4deb
    uint8_t element_id;
    uint8_t len;
    uint8_t oui[4];
    uint16_t version;
    wpa_suite_mcast_t group_cipher;
    wpa_suite_ucast_t pairwise_cipher;
    wpa_suite_auth_key_mgmt_t auth_key_mgmt;
};

typedef struct _IEEEtypes_Rsn_t _IEEEtypes_Rsn_t, *P_IEEEtypes_Rsn_t;

typedef struct _IEEEtypes_Rsn_t IEEEtypes_Rsn_t;

struct _IEEEtypes_Rsn_t { // DWARF DIE: 4d7b
    uint8_t element_id;
    uint8_t len;
    uint16_t version;
    wpa_suite_mcast_t group_cipher;
    wpa_suite_ucast_t pairwise_cipher;
    wpa_suite_auth_key_mgmt_t auth_key_mgmt;
};

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: fce
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 2561
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 25a9
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct supplicantData supplicantData, *PsupplicantData;

typedef struct IEEEtypes_SsIdElement_t IEEEtypes_SsIdElement_t, *PIEEEtypes_SsIdElement_t;

typedef struct customMIB_RSNStats_t customMIB_RSNStats_t, *PcustomMIB_RSNStats_t;

typedef struct RSNConfig_t RSNConfig_t, *PRSNConfig_t;

typedef struct keyMgmtInfoSta_t keyMgmtInfoSta_t, *PkeyMgmtInfoSta_t;

typedef struct SecurityParams_t SecurityParams_t, *PSecurityParams_t;

typedef enum IEEEtypes_ElementId_e {
    ELEM_ID_2040_BSS_COEXISTENCE=72,
    ELEM_ID_2040_BSS_INTOL_CHRPT=73,
    ELEM_ID_AID=-59,
    ELEM_ID_ANTENNA_INFO=64,
    ELEM_ID_AP_CHANNEL_REPORT=51,
    ELEM_ID_BSS_ACCESS_DELAY=63,
    ELEM_ID_BSS_AC_ACCESS_DELAY=68,
    ELEM_ID_BSS_AVAIL_ADM_CAP=67,
    ELEM_ID_BSS_LOAD=11,
    ELEM_ID_BSS_MAX_IDLE_PERIOD=90,
    ELEM_ID_CF_PARAM_SET=4,
    ELEM_ID_CHALLENGE_TEXT=16,
    ELEM_ID_CHANNEL_SWITCH_ANN=37,
    ELEM_ID_CHANNEL_USAGE=97,
    ELEM_ID_COLLOC_INTF_REPORT=96,
    ELEM_ID_COUNTRY=7,
    ELEM_ID_DIAG_REPORT=81,
    ELEM_ID_DIAG_REQUEST=80,
    ELEM_ID_DMS_REQUEST=99,
    ELEM_ID_DMS_RESPONSE=100,
    ELEM_ID_DSE_REGISTERED_LOC=58,
    ELEM_ID_DS_PARAM_SET=3,
    ELEM_ID_EDCA_PARAM_SET=12,
    ELEM_ID_ERP_INFO=42,
    ELEM_ID_EVENT_REPORT=79,
    ELEM_ID_EVENT_REQUEST=78,
    ELEM_ID_EXTENSION=-1,
    ELEM_ID_EXT_ASSOC_DELAY_INFO=1,
    ELEM_ID_EXT_CAPABILITIES=127,
    ELEM_ID_EXT_CHAN_SWITCH_ANN=60,
    ELEM_ID_EXT_ESTIMATED_SERVICE_PARAMS=11,
    ELEM_ID_EXT_EXTENDED_REQUEST=10,
    ELEM_ID_EXT_FILS_HLP_CONTAINER=5,
    ELEM_ID_EXT_FILS_IP_ADDR_ASSIGN=6,
    ELEM_ID_EXT_FILS_KEY_CONFIRM=3,
    ELEM_ID_EXT_FILS_NONCE=13,
    ELEM_ID_EXT_FILS_PUBLIC_KEY=12,
    ELEM_ID_EXT_FILS_REQ_PARAMS=2,
    ELEM_ID_EXT_FILS_SESSION=4,
    ELEM_ID_EXT_FILS_WRAPPED_DATA=8,
    ELEM_ID_EXT_FTM_SYNC_INFO=9,
    ELEM_ID_EXT_FUTURE_CHANNEL_GUIDANCE=14,
    ELEM_ID_EXT_HE_CAPABILITIES=35,
    ELEM_ID_EXT_HE_OPERATION=36,
    ELEM_ID_EXT_KEY_DELIVERY=7,
    ELEM_ID_EXT_OWE_DH_PARAM=32,
    ELEM_ID_EXT_PASSWORD_IDENTIFIER=33,
    ELEM_ID_EXT_SUPPORTED_RATES=50,
    ELEM_ID_FAST_BSS_TRANS=55,
    ELEM_ID_FH_PARAM_SET=2,
    ELEM_ID_FMS_DESCRIPTOR=86,
    ELEM_ID_FMS_REQUEST=87,
    ELEM_ID_FMS_RESPONSE=88,
    ELEM_ID_HOP_PARAM=8,
    ELEM_ID_HOP_TABLE=9,
    ELEM_ID_HT_CAPABILITY=45,
    ELEM_ID_HT_INFORMATION=61,
    ELEM_ID_IBSS_DFS=41,
    ELEM_ID_IBSS_PARAM_SET=6,
    ELEM_ID_LINK_ID=101,
    ELEM_ID_LOCATION_PARAM=82,
    ELEM_ID_MANAGEMENT_MIC=76,
    ELEM_ID_MBSSID_INDEX=85,
    ELEM_ID_MEASUREMENT_REQ=38,
    ELEM_ID_MEASUREMENT_RPT=39,
    ELEM_ID_MEAS_PILOT_TX_INFO=66,
    ELEM_ID_MOBILITY_DOMAIN=54,
    ELEM_ID_MULTI_BSSID=71,
    ELEM_ID_NEIGHBOR_REPORT=52,
    ELEM_ID_NONTRANS_BSSID_CAP=83,
    ELEM_ID_OBSS_SCAN_PARAM=74,
    ELEM_ID_POWER_CAPABILITY=33,
    ELEM_ID_POWER_CONSTRAINT=32,
    ELEM_ID_PTI_CONTROL=105,
    ELEM_ID_PU_BUFFER_STATUS=106,
    ELEM_ID_QOS_CAPABILITY=46,
    ELEM_ID_QOS_TRAFFIC_CAP=89,
    ELEM_ID_QUIET=40,
    ELEM_ID_RCPI=53,
    ELEM_ID_REQUEST=10,
    ELEM_ID_RIC_DATA=57,
    ELEM_ID_RIC_DESCRIPTOR=75,
    ELEM_ID_RRM_ENABLED_CAP=70,
    ELEM_ID_RSN=48,
    ELEM_ID_RSNI=65,
    ELEM_ID_SCHEDULE=15,
    ELEM_ID_SECONDARY_CHAN_OFFSET=62,
    ELEM_ID_SSID=0,
    ELEM_ID_SSID_LIST=84,
    ELEM_ID_SUPPORTED_CHANNELS=36,
    ELEM_ID_SUPPORTED_RATES=1,
    ELEM_ID_SUPPORTED_REGCLASS=59,
    ELEM_ID_TCLAS=14,
    ELEM_ID_TCLAS_PROCESS=44,
    ELEM_ID_TDLS_CS_TIMING=104,
    ELEM_ID_TFS_REQUEST=91,
    ELEM_ID_TFS_RESPONSE=92,
    ELEM_ID_TIM=5,
    ELEM_ID_TIMEOUT_INTERVAL=56,
    ELEM_ID_TIME_ZONE=98,
    ELEM_ID_TIM_BCAST_REQUEST=94,
    ELEM_ID_TIM_BCAST_RESPONSE=95,
    ELEM_ID_TPC_REPORT=35,
    ELEM_ID_TPC_REQUEST=34,
    ELEM_ID_TSPEC=13,
    ELEM_ID_TS_DELAY=43,
    ELEM_ID_VENDOR_SPECIFIC=-35,
    ELEM_ID_VHT_CAPABILITIES=-65,
    ELEM_ID_VHT_OPERATION=-64,
    ELEM_ID_VHT_OP_MODE_NOTIFICATION=-57,
    ELEM_ID_WAKEUP_SCHEDULE=102,
    ELEM_ID_WAPI=68,
    ELEM_ID_WIDE_BAND_CHAN_SW=-63,
    ELEM_ID_WNM_SLEEP_MODE=93,
    SUBELEM_ID_GTK=2,
    SUBELEM_ID_IGTK=4,
    SUBELEM_ID_PMK_R0_KEY_HOLDER_ID=3,
    SUBELEM_ID_PMK_R1_KEY_HOLDER_ID=1,
    SUBELEM_ID_REPORTED_FRAME_BODY=1,
    SUBELEM_ID_REPORTING_DETAIL=2
} IEEEtypes_ElementId_e;

typedef struct AkmSuite_t AkmSuite_t, *PAkmSuite_t;

typedef struct IEEEtypes_RSNCapability_t IEEEtypes_RSNCapability_t, *PIEEEtypes_RSNCapability_t;

typedef struct cipher_key_t cipher_key_t, *Pcipher_key_t;

typedef struct MIC_Error_t MIC_Error_t, *PMIC_Error_t;

typedef struct cm_ConnectionInfo cm_ConnectionInfo, *Pcm_ConnectionInfo;

typedef enum AkmType_e {
    AKM_1X=1,
    AKM_CCKM=99,
    AKM_FT_1X=3,
    AKM_FT_PSK=4,
    AKM_NONE=0,
    AKM_PSK=2,
    AKM_RSN_MAX=6,
    AKM_SHA256_1X=5,
    AKM_SHA256_PSK=6,
    AKM_SUITE_MAX=5,
    AKM_TDLS=7,
    AKM_WPA_MAX=2
} AkmType_e;

typedef enum AkmType_e AkmTypePacked_e;

typedef union ckd ckd, *Pckd;

typedef enum MIC_Fail_State_e {
    FIRST_MIC_FAIL_IN_60_SEC=1,
    NO_MIC_FAILURE=0,
    SECOND_MIC_FAIL_IN_60_SEC=2
} MIC_Fail_State_e;

typedef union anon_union.conflict498b_for_specDat anon_union.conflict498b_for_specDat, *Panon_union.conflict498b_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict33d4_for_intf anon_union.conflict33d4_for_intf, *Panon_union.conflict33d4_for_intf;

typedef ushort uint16;

typedef struct BandConfig_t BandConfig_t, *PBandConfig_t;

typedef ulong uint32;

typedef enum ChanBand_e {
    Band_2_4_GHz=0,
    Band_4_GHz=2,
    Band_5_GHz=1
} ChanBand_e;

typedef enum ChanWidth_e {
    ChanWidth_10_MHz=1,
    ChanWidth_20_MHz=0,
    ChanWidth_40_MHz=2,
    ChanWidth_80_MHz=3
} ChanWidth_e;

typedef enum Chan2Offset_e {
    SECONDARY_CHAN_ABOVE=1,
    SECONDARY_CHAN_BELOW=3,
    SECONDARY_CHAN_NONE=0
} Chan2Offset_e;

typedef enum ScanMode_e {
    ACS_MODE=1,
    MANUAL_MODE=0
} ScanMode_e;

struct AkmSuite_t { // DWARF DIE: 3b9d
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t { // DWARF DIE: 3d35
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

union anon_union.conflict33d4_for_intf { // DWARF DIE: 33d4
    uint32 Interface;
};

struct SecurityParams_t { // DWARF DIE: 3bcd
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

struct customMIB_RSNStats_t { // DWARF DIE: 3d72
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t { // DWARF DIE: 32ac
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t { // DWARF DIE: 3308
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t { // DWARF DIE: 492f
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

struct keyMgmtInfoSta_t { // DWARF DIE: 3daf
    UINT8 ANonce[32];
    UINT8 SNonce[32];
    UINT8 EAPOL_MIC_Key[16];
    UINT8 EAPOL_Encr_Key[16];
    UINT32 apCounterLo;
    UINT32 apCounterHi;
    UINT32 apCounterZeroDone;
    UINT32 staCounterLo;
    UINT32 staCounterHi;
    BOOLEAN RSNDataTrafficEnabled;
    BOOLEAN RSNSecured;
    BOOLEAN pwkHandshakeComplete;
    struct cipher_key_t * pRxDecryptKey;
    struct KeyData_t PWKey;
    struct KeyData_t GRKey;
    struct KeyData_t newPWKey;
    struct MIC_Error_t sta_MIC_Error;
    struct mm_timer_tag rsnTimer;
    struct cm_ConnectionInfo * connPtr;
    struct KeyData_t IGtk;
};

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 303c
    UINT8 PreAuth:1;
    UINT8 NoPairwise:1;
    UINT8 PtksaReplayCtr:2;
    UINT8 GtksaReplayCtr:2;
    UINT8 MFPR:1;
    UINT8 MFPC:1;
    UINT8 Reserved_8:1;
    UINT8 PeerkeyEnabled:1;
    UINT8 SppAmsduCap:1;
    UINT8 SppAmsduReq:1;
    UINT8 PBAC:1;
    UINT8 Reserved_13_15:3;
};

struct RSNConfig_t { // DWARF DIE: 3c47
    UINT8 RSNEnabled:1;
    UINT8 pmkidValid:1;
    UINT8 rsnCapValid:1;
    UINT8 grpMgmtCipherValid:1;
    UINT8 rsvd:4;
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
    struct AkmSuite_t AKM;
    UINT8 PMKID[16];
    struct IEEEtypes_RSNCapability_t rsnCap;
    struct Cipher_t grpMgmtCipher;
};

struct IEEEtypes_SsIdElement_t { // DWARF DIE: 2f54
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct supplicantData { // DWARF DIE: 420a
    BOOLEAN inUse;
    struct IEEEtypes_SsIdElement_t hashSsId;
    IEEEtypes_MacAddr_t localBssid;
    IEEEtypes_MacAddr_t localStaAddr;
    struct customMIB_RSNStats_t customMIB_RSNStats;
    struct RSNConfig_t customMIB_RSNConfig;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    struct keyMgmtInfoSta_t keyMgmtInfoSta;
    struct SecurityParams_t currParams;
};

struct eapolHskData_t { // DWARF DIE: 397a
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 39aa
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 39c4
    union ckd ckd;
};

struct cipher_key_buf { // DWARF DIE: 39eb
    struct cipher_key_t cipher_key;
};

union anon_union.conflict498b_for_specDat { // DWARF DIE: 498b
    struct apSpecificData_t apData;
};

struct cm_ConnectionInfo { // DWARF DIE: 33f6
    UINT8 conType;
    UINT8 staId;
    UINT8 instNbr;
    UINT8 gtkHwKeyId;
    UINT8 ptkHwKeyId;
    UINT8 mfpHwKeyId;
    undefined field_0x6;
    undefined field_0x7;
    struct supplicantData * suppData;
    struct CommonMlmeData_t comData;
    IEEEtypes_MacAddr_t peerMacAddr;
    IEEEtypes_MacAddr_t localMacAddr;
    union anon_union.conflict498b_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

struct BufferDesc { // DWARF DIE: 34b3
    union anon_union.conflict33d4_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct supplicantData supplicantData_t;

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 20b5
    uint (* idx_compute)(struct bam_baw *, uint);
    uint16_t fsn;
    uint8_t states[64];
    uint8_t fsn_idx;
    uint8_t buf_size;
    uint8_t mask;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
};

typedef struct bam_env_tag bam_env_tag, *Pbam_env_tag;

struct bam_env_tag { // DWARF DIE: 2128
    uint32_t pkt_cnt;
    uint32_t last_activity_time;
    uint16_t ssn;
    uint16_t ba_timeout;
    uint8_t sta_idx;
    uint8_t dev_type;
    uint8_t ba_policy;
    uint8_t buffer_size;
    uint8_t tid;
    uint8_t dialog_token;
    uint8_t amsdu;
    uint8_t delba_count;
    struct bam_baw baw;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 27d7
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

struct rc_sta_stats { // DWARF DIE: 22d7
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 1b20
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8f8
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict498b anon_union.conflict498b, *Panon_union.conflict498b;

union anon_union.conflict498b { // DWARF DIE: 498b
    struct apSpecificData_t apData;
};

typedef struct mac_sec_key mac_sec_key, *Pmac_sec_key;

struct mac_sec_key { // DWARF DIE: be4
    uint8_t length;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t array[8];
};

typedef enum anon_enum_8.conflict9e9 {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_MAX_TYPES=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
    CONNECTION_TYPE_ADHOC=1,
    CONNECTION_TYPE_AP=2,
    CONNECTION_TYPE_BTAMP=4,
    CONNECTION_TYPE_INFRA=0,
    CONNECTION_TYPE_MAX=7,
    CONNECTION_TYPE_PSEUDO=5,
    CONNECTION_TYPE_TDLS=6,
    CONNECTION_TYPE_WFD=3,
    DMA_DL=0,
    DMA_MAX=2,
    DMA_UL=1,
    HAL_AC0_TIMER=0,
    HAL_AC1_TIMER=1,
    HAL_AC2_TIMER=2,
    HAL_AC3_TIMER=3,
    HAL_BCN_TIMER=4,
    HAL_IDLE_TIMER=5,
    HAL_KE_TIMER=8,
    HAL_MM_TIMER=7,
    HAL_RX_TIMER=6,
    HAL_TIMER_MAX=9,
    INVALID_STA_IDX=-1,
    IPC_DMA_CHANNEL_CTRL_RX=0,
    IPC_DMA_CHANNEL_CTRL_TX=2,
    IPC_DMA_CHANNEL_DATA_RX=1,
    IPC_DMA_CHANNEL_DATA_TX=3,
    IPC_DMA_CHANNEL_MAX=4,
    MOD_CLASS_DSSS_OFDM=5,
    MOD_CLASS_ERP_OFDM=6,
    MOD_CLASS_ERP_PBCC=4,
    MOD_CLASS_FHSS=2,
    MOD_CLASS_HR_DSSS=3,
    MOD_CLASS_HT=8,
    MOD_CLASS_INFRA=1,
    MOD_CLASS_OFDM=7,
    MOD_CLASS_VHT=9,
    PHY_BAND_2G4=0,
    PHY_BAND_5G=1,
    PHY_BAND_MAX=2,
    STA_MAX=12,
    TASK_API=13,
    TASK_APM=7,
    TASK_BAM=8,
    TASK_CFG=12,
    TASK_DBG=1,
    TASK_HOSTAPD_U=10,
    TASK_LAST_EMB=12,
    TASK_MAX=14,
    TASK_ME=5,
    TASK_MESH=9,
    TASK_MM=0,
    TASK_NONE=-1,
    TASK_RXU=11,
    TASK_SCAN=2,
    TASK_SCANU=4,
    TASK_SM=6,
    TASK_TDLS=3,
    TID_0=0,
    TID_1=1,
    TID_2=2,
    TID_3=3,
    TID_4=4,
    TID_5=5,
    TID_6=6,
    TID_7=7,
    TID_MAX=9,
    TID_MGT=8,
    WMM_AC_BE=0,
    WMM_AC_BK=1,
    WMM_AC_VI=2,
    WMM_AC_VO=3
} anon_enum_8.conflict9e9;

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong __uint64_t;

typedef __uint64_t uint64_t;

typedef union anon_union.conflictb39_for_u anon_union.conflictb39_for_u, *Panon_union.conflictb39_for_u;

typedef struct anon_struct.conflictad9 anon_struct.conflictad9, *Panon_struct.conflictad9;

typedef struct anon_struct.conflictb10 anon_struct.conflictb10, *Panon_struct.conflictb10;

struct anon_struct.conflictad9 { // DWARF DIE: ad9
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

struct anon_struct.conflictb10 { // DWARF DIE: b10
    uint32_t key[4];
};

union anon_union.conflictb39_for_u { // DWARF DIE: b39
    struct anon_struct.conflictad9 mic;
    struct anon_struct.conflictb10 mfp;
};

struct key_info_tag { // DWARF DIE: b5e
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb39_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

struct mac_rateset { // DWARF DIE: a91
    uint8_t length;
    uint8_t array[12];
};

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

struct mac_htcapability { // DWARF DIE: c1f
    uint16_t ht_capa_info;
    uint8_t a_mpdu_param;
    uint8_t mcs_rate[16];
    undefined field_0x13;
    uint16_t ht_extended_capa;
    undefined field_0x16;
    undefined field_0x17;
    uint32_t tx_beamforming_capa;
    uint8_t asel_capa;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c92
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: ce7
    struct mac_rateset rate_set;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct mac_htcapability ht_cap;
    struct mac_vhtcapability vht_cap;
    uint32_t capa_flags;
    uint8_t phy_bw_max;
    uint8_t bw_cur;
    uint8_t uapsd_queues;
    uint8_t max_sp_len;
    uint8_t stbc_nss;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
};

typedef union anon_union.conflictb39 anon_union.conflictb39, *Panon_union.conflictb39;

union anon_union.conflictb39 { // DWARF DIE: b39
    struct anon_struct.conflictad9 mic;
    struct anon_struct.conflictb10 mfp;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct ke_msg_handler { // DWARF DIE: 1c70
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 1c9c
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_env_tag mm_env_tag, *Pmm_env_tag;

struct mm_env_tag { // DWARF DIE: 29e3
    uint32_t rx_filter_umac;
    uint32_t rx_filter_lmac_enable;
    uint16_t ampdu_max_dur[5];
    uint8_t prev_mm_state;
    uint8_t prev_hw_state;
    uint32_t basic_rates[2];
    uint32_t uapsd_timeout;
    uint16_t lp_clk_accuracy;
    uint8_t host_idle;
    _Bool keep_alive_status_enabled;
    uint32_t keep_alive_packet_counter;
    uint32_t keep_alive_time_last_received;
};

typedef uint wint_t;

typedef long __int32_t;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 1fa2
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 1f77
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 1f5a
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 1e5f
    uint16_t frame_cntl;
    uint16_t seq_cntl;
    uint16_t sn;
    uint8_t fn;
    uint8_t tid;
    uint8_t machdr_len;
    uint8_t sta_idx;
    uint8_t vif_idx;
    uint8_t dst_idx;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint64_t pn;
    uint32_t statinfo;
    uint32_t host_buf_addr;
    struct key_info_tag * key;
    struct mac_addr da;
    struct mac_addr sa;
    uint8_t frame_info;
    _Bool eth_len_present;
    uint8_t payl_offset;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
};

struct rxu_cntrl_env_tag { // DWARF DIE: 1fdb
    struct rx_cntrl_rx_status rx_status;
    struct co_list rxdesc_pending;
    struct co_list rxdesc_ready;
    struct rx_cntrl_ipcdesc rx_ipcdesc_stat;
    struct co_list rxu_defrag_free;
    struct co_list rxu_defrag_used;
    struct rx_cntrl_dupli rxu_dupli;
    struct mac_addr * mac_addr_ptr;
    struct rx_cntrl_pm_mon pm_mon;
    uint32_t ttr;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict428e_for_key anon_union.conflict428e_for_key, *Panon_union.conflict428e_for_key;

typedef char SINT8;

union anon_union.conflict428e_for_key { // DWARF DIE: 428e
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 42c0
    union anon_union.conflict428e_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef union anon_union.conflict428e anon_union.conflict428e, *Panon_union.conflict428e;

union anon_union.conflict428e { // DWARF DIE: 428e
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef union anon_union.conflicte9 anon_union.conflicte9, *Panon_union.conflicte9;

union anon_union.conflicte9 { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte9_for___value anon_union.conflicte9_for___value, *Panon_union.conflicte9_for___value;

union anon_union.conflicte9_for___value { // DWARF DIE: e9
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 11b
    int __count;
    union anon_union.conflicte9_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: dcd
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 10ae
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 1e0a
    struct co_list prog;
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 141f
    struct co_list_hdr list_hdr;
    struct rx_dmadesc * dma_hdrdesc;
    struct rx_payloaddesc * pd;
    struct rx_pbd * last_pbd;
    struct rx_pbd * spare_pbd;
    uint32_t host_id;
    uint32_t frame_len;
    uint8_t status;
    uint8_t pbd_count;
    uint8_t use_in_tcpip;
    undefined field_0x1f;
};

struct phy_channel_info { // DWARF DIE: e26
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 14b4
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1314
    uint32_t upatternrx;
    uint32_t next;
    uint32_t first_pbd_ptr;
    struct rx_swdesc * swdesc;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t headerctrlinfo;
    uint16_t frmlen;
    uint16_t ampdu_stat_info;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint32_t recvec1a;
    uint32_t recvec1b;
    uint32_t recvec1c;
    uint32_t recvec1d;
    uint32_t recvec2a;
    uint32_t recvec2b;
    uint32_t statinfo;
};

struct rx_payloaddesc { // DWARF DIE: 1587
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 1517
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef uchar uint8;

typedef enum wlan_security_type {
    WLAN_SECURITY_EAP_TLS=6,
    WLAN_SECURITY_NONE=0,
    WLAN_SECURITY_WEP_OPEN=1,
    WLAN_SECURITY_WEP_SHARED=2,
    WLAN_SECURITY_WILDCARD=7,
    WLAN_SECURITY_WPA=3,
    WLAN_SECURITY_WPA2=4,
    WLAN_SECURITY_WPA_WPA2_MIXED=5
} wlan_security_type;

typedef char CHAR;

typedef enum Status_e {
    FAIL=1,
    FW_SUCCESS=0
} Status_e;

typedef long SINT32;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: e4e
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct mm_key_add_req mm_key_add_req, *Pmm_key_add_req;

struct mm_key_add_req { // DWARF DIE: 1d00
    uint8_t key_idx;
    uint8_t sta_idx;
    undefined field_0x2;
    undefined field_0x3;
    struct mac_sec_key key;
    uint8_t cipher_suite;
    uint8_t inst_nbr;
    uint8_t spp;
    _Bool pairwise;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 1ad1
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t { // DWARF DIE: 34f4
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 3531
    UINT16 KeyMIC:1;
    UINT16 Secure:1;
    UINT16 Error:1;
    UINT16 Request:1;
    UINT16 EncryptedKeyData:1;
    UINT16 Reserved:3;
    UINT16 KeyDescriptorVersion:3;
    UINT16 KeyType:1;
    UINT16 KeyIndex:2;
    UINT16 Install:1;
    UINT16 KeyAck:1;
};

struct EAPOL_KeyMsg_t { // DWARF DIE: 35f7
    struct Hdr_8021x_t hdr_8021x;
    UINT8 desc_type;
    struct key_info_t key_info;
    UINT16 key_length;
    UINT32 replay_cnt[2];
    UINT8 key_nonce[32];
    UINT8 EAPOL_key_IV[16];
    UINT8 key_RSC[8];
    UINT8 key_ID[8];
    UINT8 key_MIC[16];
    UINT16 key_material_len;
    UINT8 key_data[1];
};

typedef struct EAPOL_KeyMsg_Tx_t EAPOL_KeyMsg_Tx_t, *PEAPOL_KeyMsg_Tx_t;

typedef struct ether_hdr_t ether_hdr_t, *Pether_hdr_t;

struct ether_hdr_t { // DWARF DIE: 3342
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 3715
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef struct EAP_PacketMsg_t EAP_PacketMsg_t, *PEAP_PacketMsg_t;

typedef enum IEEEtypes_8021x_CodeType_e {
    IEEE_8021X_CODE_TYPE_FAILURE=4,
    IEEE_8021X_CODE_TYPE_REQUEST=1,
    IEEE_8021X_CODE_TYPE_RESPONSE=2,
    IEEE_8021X_CODE_TYPE_SUCCESS=3
} IEEEtypes_8021x_CodeType_e;

struct EAP_PacketMsg_t { // DWARF DIE: 36be
    struct Hdr_8021x_t hdr_8021x;
    enum IEEEtypes_8021x_CodeType_e code;
    UINT8 identifier;
    UINT16 length;
    UINT8 data[1];
};

typedef union anon_union.conflict33d4 anon_union.conflict33d4, *Panon_union.conflict33d4;

union anon_union.conflict33d4 { // DWARF DIE: 33d4
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef uint16_t ke_state_t;

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 2982
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 22e2
    uint32_t last_tx_time;
    uint32_t last_ba_add_time;
    uint8_t bam_idx_rx;
    uint8_t bam_idx_tx;
    int8_t credit_oft;
    undefined field_0xb;
};

typedef struct sta_info_tag sta_info_tag, *Psta_info_tag;

typedef enum sta_ps_traffic {
    PS_TRAFFIC=3,
    PS_TRAFFIC_HOST=1,
    PS_TRAFFIC_INT=2,
    UAPSD_TRAFFIC=12,
    UAPSD_TRAFFIC_HOST=4,
    UAPSD_TRAFFIC_INT=8
} sta_ps_traffic;

typedef int sta_ps_sp_t;

typedef struct sta_mgmt_sec_info sta_mgmt_sec_info, *Psta_mgmt_sec_info;

typedef struct sta_pol_tbl_cntl sta_pol_tbl_cntl, *Psta_pol_tbl_cntl;

struct sta_pol_tbl_cntl { // DWARF DIE: 2288
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 224d
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2331
    struct co_list_hdr list_hdr;
    uint32_t bcn_int;
    uint32_t ampdu_size_max_vht;
    uint16_t ampdu_size_max_ht;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t paid_gid;
    uint8_t ampdu_spacing_min;
    undefined field_0x15;
    uint16_t drift;
    uint16_t aid;
    uint8_t inst_nbr;
    uint8_t staid;
    uint8_t ps_state;
    _Bool valid;
    struct mac_addr mac_addr;
    int8_t rssi;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    uint32_t tsflo;
    uint32_t tsfhi;
    uint8_t data_rate;
    uint8_t ctrl_port_state;
    enum sta_ps_traffic traffic_avail;
    undefined field_0x33;
    sta_ps_sp_t ps_service_period;
    uint16_t ctrl_port_ethertype;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    struct sta_mgmt_sec_info sta_sec_info;
    struct mac_sta_info info;
    uint16_t seq_nbr[9];
    undefined field_0x10a;
    undefined field_0x10b;
    struct sta_pol_tbl_cntl pol_tbl;
    struct sta_mgmt_ba_info ba_info[9];
    uint16_t rx_nqos_last_seqcntl;
    uint16_t rx_qos_last_seqcntl[9];
    struct co_list tx_desc_post;
    void * suppData;
    uint32_t time_last_seen;
    undefined field_0x1ac;
    undefined field_0x1ad;
    undefined field_0x1ae;
    undefined field_0x1af;
};

typedef struct sta_info_env_tag sta_info_env_tag, *Psta_info_env_tag;

struct sta_info_env_tag { // DWARF DIE: 251a
    struct co_list free_sta_list;
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 2652
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 262a
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 267a
    uint32_t used_area;
    uint32_t free;
    uint32_t free_size;
    uint32_t last;
    uint32_t next_needed;
    uint32_t buf_size;
    uint32_t * pool;
    struct txl_buffer_hw_desc_tag * desc;
    uint8_t count;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 2725
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict2703 anon_union.conflict2703, *Panon_union.conflict2703;

union anon_union.conflict2703 { // DWARF DIE: 2703
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef union anon_union.conflict11d1 anon_union.conflict11d1, *Panon_union.conflict11d1;

union anon_union.conflict11d1 { // DWARF DIE: 11d1
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef union anon_union.conflict1187 anon_union.conflict1187, *Panon_union.conflict1187;

union anon_union.conflict1187 { // DWARF DIE: 1187
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict11ac anon_union.conflict11ac, *Panon_union.conflict11ac;

union anon_union.conflict11ac { // DWARF DIE: 11ac
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8c3_for__new anon_union.conflict8c3_for__new, *Panon_union.conflict8c3_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict737 anon_struct.conflict737, *Panon_struct.conflict737;

typedef struct anon_struct.conflict87c anon_struct.conflict87c, *Panon_struct.conflict87c;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 1e1
    int __tm_sec;
    int __tm_min;
    int __tm_hour;
    int __tm_mday;
    int __tm_mon;
    int __tm_year;
    int __tm_wday;
    int __tm_yday;
    int __tm_isdst;
};

struct _rand48 { // DWARF DIE: 6ee
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict737 { // DWARF DIE: 737
    uint _unused_rand;
    char * _strtok_last;
    char _asctime_buf[26];
    undefined field_0x22;
    undefined field_0x23;
    struct __tm _localtime_buf;
    int _gamma_signgam;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    ulonglong _rand_next;
    struct _rand48 _r48;
    undefined field_0x66;
    undefined field_0x67;
    struct _mbstate_t _mblen_state;
    struct _mbstate_t _mbtowc_state;
    struct _mbstate_t _wctomb_state;
    char _l64a_buf[8];
    char _signal_buf[24];
    int _getdate_err;
    struct _mbstate_t _mbrlen_state;
    struct _mbstate_t _mbrtowc_state;
    struct _mbstate_t _mbsrtowcs_state;
    struct _mbstate_t _wcrtomb_state;
    struct _mbstate_t _wcsrtombs_state;
    int _h_errno;
};

struct anon_struct.conflict87c { // DWARF DIE: 87c
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 171
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6a9
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict8c3_for__new { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

struct __sbuf { // DWARF DIE: 319
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 347
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    _ssize_t (* _read)(struct _reent *, void *, char *, int);
    _ssize_t (* _write)(struct _reent *, void *, char *, int);
    _fpos_t (* _seek)(struct _reent *, void *, _fpos_t, int);
    int (* _close)(struct _reent *, void *);
    struct __sbuf _ub;
    uchar * _up;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    _off_t _offset;
    struct _reent * _data;
    _flock_t _lock;
    struct _mbstate_t _mbstate;
    int _flags2;
};

struct _on_exit_args { // DWARF DIE: 264
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b9
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4b3
    int _errno;
    __FILE * _stdin;
    __FILE * _stdout;
    __FILE * _stderr;
    int _inc;
    char _emergency[25];
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    int _unspecified_locale_info;
    struct __locale_t * _locale;
    int __sdidinit;
    void (* __cleanup)(struct _reent *);
    struct _Bigint * _result;
    int _result_k;
    struct _Bigint * _p5s;
    struct _Bigint * * _freelist;
    int _cvtlen;
    char * _cvtbuf;
    union anon_union.conflict8c3_for__new _new;
    struct _atexit * _atexit;
    struct _atexit _atexit0;
    void (** _sig_func)(int);
    struct _glue __sglue;
    __FILE __sf[3];
    undefined field_0x424;
    undefined field_0x425;
    undefined field_0x426;
    undefined field_0x427;
};

typedef union anon_union.conflict8c3 anon_union.conflict8c3, *Panon_union.conflict8c3;

union anon_union.conflict8c3 { // DWARF DIE: 8c3
    struct anon_struct.conflict737 _reent;
    struct anon_struct.conflict87c _unused;
};

typedef struct IEEEtypes_WPAElement_t IEEEtypes_WPAElement_t, *PIEEEtypes_WPAElement_t;

struct IEEEtypes_WPAElement_t { // DWARF DIE: 2fa6
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    UINT8 OuiType[4];
    UINT16 Ver;
    UINT8 GrpKeyCipher[4];
    UINT16 PwsKeyCnt;
    UINT8 PwsKeyCipherList[4];
    UINT16 AuthKeyCnt;
    UINT8 AuthKeyList[4];
};

typedef enum IEEEtypes_KDEDataType_e {
    KDE_DATA_TYPE_ERROR=8,
    KDE_DATA_TYPE_GTK=1,
    KDE_DATA_TYPE_IGTK=9,
    KDE_DATA_TYPE_LIFETIME=7,
    KDE_DATA_TYPE_MACADDR=3,
    KDE_DATA_TYPE_NONCE=6,
    KDE_DATA_TYPE_PMKID=4,
    KDE_DATA_TYPE_RESERVED=0,
    KDE_DATA_TYPE_RESERVED2=2,
    KDE_DATA_TYPE_SMK=5
} IEEEtypes_KDEDataType_e;

typedef struct IEEEtypes_RSNElement_t IEEEtypes_RSNElement_t, *PIEEEtypes_RSNElement_t;

struct IEEEtypes_RSNElement_t { // DWARF DIE: 3120
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    UINT16 Ver;
    UINT8 GrpKeyCipher[4];
    UINT16 PwsKeyCnt;
    UINT8 PwsKeyCipherList[4];
    UINT16 AuthKeyCnt;
    UINT8 AuthKeyList[4];
    struct IEEEtypes_RSNCapability_t RsnCap;
    UINT16 PMKIDCnt;
    UINT8 PMKIDList[16];
    UINT8 GrpMgmtCipher[4];
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef enum Elf_SectionHeaderType_RISCV {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_RISCV;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_RISCV sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




// DWARF DIE: 72cc

BufferDesc_t *
GetTxEAPOLBuffer(cm_ConnectionInfo_t *connPtr,EAPOL_KeyMsg_Tx_t **ppTxEapol,BufferDesc_t *pBufDesc)

{
  undefined4 *puVar1;
  
  _LVL3();
  if (pBufDesc == (BufferDesc_t *)0x0) {
    pBufDesc = (BufferDesc_t *)FUN_0001003e();
    if (pBufDesc != (BufferDesc_t *)0x0) {
      FUN_00010060();
      puVar1 = FUN_0001006c();
      pBufDesc->Buffer = puVar1;
      if (puVar1 != (undefined4 *)0x0) goto _L0;
    }
    pBufDesc = (BufferDesc_t *)0x0;
  }
  else {
_L0:
    pBufDesc->intf = connPtr;
    *ppTxEapol = (EAPOL_KeyMsg_Tx_t *)pBufDesc->Buffer;
    FUN_0001009e();
  }
  return pBufDesc;
}



undefined4 * _LVL3(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  _LVL3();
  if (unaff_s0 == (undefined4 *)0x0) {
    unaff_s0 = FUN_0001003e();
    if (unaff_s0 != (undefined4 *)0x0) {
      FUN_00010060();
      puVar1 = FUN_0001006c();
      unaff_s0[2] = puVar1;
      if (puVar1 != (undefined4 *)0x0) goto _L0;
    }
    unaff_s0 = (undefined4 *)0x0;
  }
  else {
_L0:
    *unaff_s0 = unaff_s3;
    *unaff_s2 = unaff_s0[2];
    FUN_0001009e();
  }
  return unaff_s0;
}



undefined4 * FUN_0001003e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  puVar1 = FUN_0001003e();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00010060();
    puVar2 = FUN_0001006c();
    puVar1[2] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar1 = unaff_s3;
      *unaff_s2 = puVar1[2];
      FUN_0001009e();
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00010060(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  FUN_00010060();
  puVar1 = FUN_0001006c();
  unaff_s0[2] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    unaff_s0 = (undefined4 *)0x0;
  }
  else {
    *unaff_s0 = unaff_s3;
    *unaff_s2 = unaff_s0[2];
    FUN_0001009e();
  }
  return unaff_s0;
}



undefined4 * FUN_0001006c(void)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  puVar1 = FUN_0001006c();
  unaff_s0[2] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    unaff_s0 = (undefined4 *)0x0;
  }
  else {
    *unaff_s0 = unaff_s3;
    *unaff_s2 = unaff_s0[2];
    FUN_0001009e();
  }
  return unaff_s0;
}



void FUN_0001009e(void)

{
  FUN_0001009e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 70f2

void freeSupplicantData(void *connectionPtr)

{
  FUN_000100d2();
  if (*(undefined4 **)((int)connectionPtr + 8) != (undefined4 *)0x0) {
    **(undefined4 **)((int)connectionPtr + 8) = 0;
    *(undefined4 *)((int)connectionPtr + 8) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000100d2(void)

{
  int unaff_s1;
  
  FUN_000100d2();
  if (*(undefined4 **)(unaff_s1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_s1 + 8) = 0;
    *(undefined4 *)(unaff_s1 + 8) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6fe6

void UpdateEAPOLWcbLenAndTransmit(BufferDesc_t *pBufDesc,UINT16 frameLen)

{
  FUN_00010144();
  FUN_0001015e();
  FUN_00010168();
  FUN_00010172();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010144(void)

{
  FUN_00010144();
  FUN_0001015e();
  FUN_00010168();
  FUN_00010172();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001015e(void)

{
  FUN_0001015e();
  FUN_00010168();
  FUN_00010172();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010168(void)

{
  FUN_00010168();
  FUN_00010172();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010172(void)

{
  FUN_00010172();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 6efc

BOOLEAN keyMgmtProcessMsgExt(keyMgmtInfoSta_t *pKeyMgmtInfoSta,EAPOL_KeyMsg_t *pKeyMsg)

{
  FUN_000101ce();
  FUN_000101ea();
  return 1;
}



undefined4 FUN_000101ce(void)

{
  FUN_000101ce();
  FUN_000101ea();
  return 1;
}



undefined4 FUN_000101ea(void)

{
  FUN_000101ea();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6e33

void KeyMgmtInitSta(cm_ConnectionInfo_t *connPtr)

{
  FUN_0001022e();
  FUN_0001023e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001022e(void)

{
  FUN_0001022e();
  FUN_0001023e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001023e(void)

{
  FUN_0001023e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6090

void keyMgmtSta_StartSession(cm_ConnectionInfo_t *connPtr,CHAR *pBssid,UINT8 *pStaAddr)

{
  _LVL42();
  (connPtr->suppData->keyMgmtInfoSta).connPtr = (cm_ConnectionInfo *)connPtr;
  FUN_000102c0();
  FUN_000102d2();
  FUN_000102e6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL42(void)

{
  int unaff_s0;
  
  _LVL42();
  *(int *)(*(int *)(unaff_s0 + 8) + 0x16c) = unaff_s0;
  FUN_000102c0();
  FUN_000102d2();
  FUN_000102e6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102c0(void)

{
  FUN_000102c0();
  FUN_000102d2();
  FUN_000102e6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102d2(void)

{
  FUN_000102d2();
  FUN_000102e6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102e6(void)

{
  FUN_000102e6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5e28

void init_customApp_mibs(supplicantData_t *suppData)

{
  FUN_0001034a();
  FUN_0001035a();
  FUN_0001036a();
  (suppData->customMIB_RSNConfig).wpaType =
       (SecurityMode_t)((ushort)(suppData->customMIB_RSNConfig).wpaType | 1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001034a(void)

{
  int unaff_s0;
  
  FUN_0001034a();
  FUN_0001035a();
  FUN_0001036a();
  *(ushort *)(unaff_s0 + 0x36) = *(ushort *)(unaff_s0 + 0x36) | 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001035a(void)

{
  int unaff_s0;
  
  FUN_0001035a();
  FUN_0001036a();
  *(ushort *)(unaff_s0 + 0x36) = *(ushort *)(unaff_s0 + 0x36) | 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001036a(void)

{
  int unaff_s0;
  
  FUN_0001036a();
  *(ushort *)(unaff_s0 + 0x36) = *(ushort *)(unaff_s0 + 0x36) | 1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7656

UINT8 supplicantIsEnabled(void *connectionPtr)

{
  byte bVar1;
  
  FUN_000103d4();
  bVar1 = 0;
  if (*(int *)((int)connectionPtr + 8) != 0) {
    FUN_000103f6();
    bVar1 = (byte)((uint)*(undefined4 *)(*(int *)((int)connectionPtr + 8) + 0x34) >> 8) & 1;
  }
  return (UINT8)bVar1;
}



uint FUN_000103d4(void)

{
  int unaff_s0;
  uint uVar1;
  
  FUN_000103d4();
  uVar1 = 0;
  if (*(int *)(unaff_s0 + 8) != 0) {
    FUN_000103f6();
    uVar1 = *(uint *)(*(int *)(unaff_s0 + 8) + 0x34) >> 8 & 1;
  }
  return uVar1;
}



uint FUN_000103f6(void)

{
  int unaff_s0;
  
  FUN_000103f6();
  return *(uint *)(*(int *)(unaff_s0 + 8) + 0x34) >> 8 & 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5f24

void supplicantInitSession
               (cm_ConnectionInfo_t *connPtr,CHAR *pSsid,UINT16 len,CHAR *pBssid,UINT8 *pStaAddr)

{
  int extraout_a0;
  
  _L0();
  FUN_00010458();
  if (extraout_a0 != 0) {
    FUN_00010464();
    FUN_00010474();
    (connPtr->suppData->hashSsId).Len = (IEEEtypes_Len_t)len;
    FUN_00010488();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined unaff_s2;
  
  _L0();
  FUN_00010458();
  if (extraout_a0 != 0) {
    FUN_00010464();
    FUN_00010474();
    *(undefined *)(*(int *)(unaff_s0 + 8) + 5) = unaff_s2;
    FUN_00010488();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010458(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined unaff_s2;
  
  FUN_00010458();
  if (extraout_a0 != 0) {
    FUN_00010464();
    FUN_00010474();
    *(undefined *)(*(int *)(unaff_s0 + 8) + 5) = unaff_s2;
    FUN_00010488();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010464(void)

{
  int unaff_s0;
  undefined unaff_s2;
  
  FUN_00010464();
  FUN_00010474();
  *(undefined *)(*(int *)(unaff_s0 + 8) + 5) = unaff_s2;
  FUN_00010488();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010474(void)

{
  int unaff_s0;
  undefined unaff_s2;
  
  FUN_00010474();
  *(undefined *)(*(int *)(unaff_s0 + 8) + 5) = unaff_s2;
  FUN_00010488();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010488(void)

{
  FUN_00010488();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5cf1

void supplicantDisable(cm_ConnectionInfo_t *connPtr)

{
  int extraout_a0;
  
  FUN_000104f2();
  FUN_000104fc();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_0001050c();
  *(byte *)&connPtr->suppData->customMIB_RSNConfig =
       *(byte *)&connPtr->suppData->customMIB_RSNConfig & 0xfe;
  FUN_00010522();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000104f2(void)

{
  int unaff_s0;
  int extraout_a0;
  
  FUN_000104f2();
  FUN_000104fc();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_0001050c();
  *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) = *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) & 0xfe;
  FUN_00010522();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000104fc(void)

{
  int unaff_s0;
  int extraout_a0;
  
  FUN_000104fc();
  if (extraout_a0 == 0) {
    return;
  }
  FUN_0001050c();
  *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) = *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) & 0xfe;
  FUN_00010522();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001050c(void)

{
  int unaff_s0;
  
  FUN_0001050c();
  *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) = *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) & 0xfe;
  FUN_00010522();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010522(void)

{
  FUN_00010522();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5b38

void supplicantEnable(void *connectionPtr,int security_mode,void *mcstCipher,void *ucstCipher,
                     _Bool is_pmf_required)

{
  undefined3 in_register_00002039;
  
  _L0();
  *(byte *)(*(int *)((int)connectionPtr + 8) + 0x35) =
       *(byte *)(*(int *)((int)connectionPtr + 8) + 0x35) | 1;
  if (security_mode - 4U < 3) {
    *(ushort *)(*(int *)((int)connectionPtr + 8) + 0x36) =
         *(ushort *)(*(int *)((int)connectionPtr + 8) + 0x36) | 0x20;
    *(byte *)(*(int *)((int)connectionPtr + 8) + 0x35) =
         *(byte *)(*(int *)((int)connectionPtr + 8) + 0x35) | 4;
    *(ushort *)(*(int *)((int)connectionPtr + 8) + 0x4e) =
         *(ushort *)(*(int *)((int)connectionPtr + 8) + 0x4e) | 1;
    FUN_000105f0();
    FUN_00010602();
    if (CONCAT31(in_register_00002039,is_pmf_required) == 0) {
      *(undefined *)(*(int *)((int)connectionPtr + 8) + 0x3d) = 2;
    }
    else {
      *(undefined *)(*(int *)((int)connectionPtr + 8) + 0x3d) = 6;
    }
  }
  else {
    if (security_mode != 3) goto _L0;
    *(ushort *)(*(int *)((int)connectionPtr + 8) + 0x36) =
         *(ushort *)(*(int *)((int)connectionPtr + 8) + 0x36) | 8;
    FUN_00010688();
    FUN_0001069a();
    *(undefined *)(*(int *)((int)connectionPtr + 8) + 0x3d) = 2;
  }
  FUN_00010626();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint unaff_s2;
  int unaff_s4;
  int unaff_s6;
  
  _L0();
  *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) = *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) | 1;
  if (unaff_s2 < unaff_s6 - 4U) {
    if (unaff_s6 != 3) goto _L0;
    *(ushort *)(*(int *)(unaff_s0 + 8) + 0x36) = *(ushort *)(*(int *)(unaff_s0 + 8) + 0x36) | 8;
    FUN_00010688();
    FUN_0001069a();
    *(char *)(*(int *)(unaff_s0 + 8) + 0x3d) = (char)unaff_s2;
  }
  else {
    *(ushort *)(*(int *)(unaff_s0 + 8) + 0x36) = *(ushort *)(*(int *)(unaff_s0 + 8) + 0x36) | 0x20;
    *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) = *(byte *)(*(int *)(unaff_s0 + 8) + 0x35) | 4;
    *(ushort *)(*(int *)(unaff_s0 + 8) + 0x4e) = *(ushort *)(*(int *)(unaff_s0 + 8) + 0x4e) | 1;
    FUN_000105f0();
    FUN_00010602();
    if (unaff_s4 == 0) {
      *(char *)(*(int *)(unaff_s0 + 8) + 0x3d) = (char)unaff_s2;
    }
    else {
      *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = 6;
    }
  }
  FUN_00010626();
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000105f0(void)

{
  int unaff_s0;
  undefined unaff_s2;
  int unaff_s4;
  
  FUN_000105f0();
  FUN_00010602();
  if (unaff_s4 == 0) {
    *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = unaff_s2;
  }
  else {
    *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = 6;
  }
  FUN_00010626();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010602(void)

{
  int unaff_s0;
  undefined unaff_s2;
  int unaff_s4;
  
  FUN_00010602();
  if (unaff_s4 == 0) {
    *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = unaff_s2;
  }
  else {
    *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = 6;
  }
  FUN_00010626();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010626(void)

{
  FUN_00010626();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010688(void)

{
  int unaff_s0;
  undefined unaff_s2;
  
  FUN_00010688();
  FUN_0001069a();
  *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = unaff_s2;
  FUN_00010626();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001069a(void)

{
  int unaff_s0;
  undefined unaff_s2;
  
  FUN_0001069a();
  *(undefined *)(*(int *)(unaff_s0 + 8) + 0x3d) = unaff_s2;
  FUN_00010626();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 5a0a

UINT16 keyMgmtFormatWpaRsnIe
                 (cm_ConnectionInfo_t *connPtr,UINT8 *pos,IEEEtypes_MacAddr_t *pBssid,
                 IEEEtypes_MacAddr_t *pStaAddr,UINT8 *pPmkid,BOOLEAN addPmkid)

{
  FUN_000106e8();
  FUN_00010704();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106e8(void)

{
  FUN_000106e8();
  FUN_00010704();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010704(void)

{
  FUN_00010704();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Variable defined which should be unmapped: pTxEapol
// DWARF DIE: 6c48

Status_e GeneratePWKMsg2(BufferDesc_t *pEAPoLBufDesc,UINT8 *pSNonce,UINT8 *pEAPOLMICKey,
                        UINT8 forceKeyDescVersion)

{
  Status_e SVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack36;
  EAPOL_KeyMsg_Tx_t *pTxEapol;
  
  _L0();
  iVar2 = _L0();
  if (iVar2 == 0) {
    SVar1 = FAIL;
  }
  else {
    FUN_00010794();
    if (*(char *)(iStack36 + 0x12) != '\x01') {
      uVar3 = FUN_000107bc();
      *(char *)(iStack36 + 0x6f) = (char)uVar3;
      *(char *)(iStack36 + 0x70) = (char)((uint)uVar3 >> 8);
    }
    FUN_000107d6();
    _LVL131();
    FUN_00010806();
    SVar1 = FW_SUCCESS;
  }
  return SVar1;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_0000001c;
  
  _L0();
  iVar1 = _L0();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_00010794();
    if (*(char *)(in_stack_0000001c + 0x12) != '\x01') {
      uVar2 = FUN_000107bc();
      *(char *)(in_stack_0000001c + 0x6f) = (char)uVar2;
      *(char *)(in_stack_0000001c + 0x70) = (char)((uint)uVar2 >> 8);
    }
    FUN_000107d6();
    _LVL131();
    FUN_00010806();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_0000001c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_00010794();
    if (*(char *)(in_stack_0000001c + 0x12) != '\x01') {
      uVar2 = FUN_000107bc();
      *(char *)(in_stack_0000001c + 0x6f) = (char)uVar2;
      *(char *)(in_stack_0000001c + 0x70) = (char)((uint)uVar2 >> 8);
    }
    FUN_000107d6();
    _LVL131();
    FUN_00010806();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010794(void)

{
  undefined4 uVar1;
  int in_stack_0000001c;
  
  FUN_00010794();
  if (*(char *)(in_stack_0000001c + 0x12) != '\x01') {
    uVar1 = FUN_000107bc();
    *(char *)(in_stack_0000001c + 0x6f) = (char)uVar1;
    *(char *)(in_stack_0000001c + 0x70) = (char)((uint)uVar1 >> 8);
  }
  FUN_000107d6();
  _LVL131();
  FUN_00010806();
  return 0;
}



undefined4 FUN_000107bc(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_000107bc();
  *(char *)(unaff_s0 + 0x6f) = (char)uVar1;
  *(char *)(unaff_s0 + 0x70) = (char)((uint)uVar1 >> 8);
  FUN_000107d6();
  _LVL131();
  FUN_00010806();
  return 0;
}



undefined4 FUN_000107d6(void)

{
  FUN_000107d6();
  _LVL131();
  FUN_00010806();
  return 0;
}



undefined4 _LVL131(void)

{
  _LVL131();
  FUN_00010806();
  return 0;
}



undefined4 FUN_00010806(void)

{
  FUN_00010806();
  return 0;
}



// DWARF DIE: 65bf

BOOLEAN KeyMgmtStaHsk_Recvd_PWKMsg1
                  (BufferDesc_t *pEAPoLBufDesc,IEEEtypes_MacAddr_t *sa,IEEEtypes_MacAddr_t *da)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = pEAPoLBufDesc->intf;
  _LVL145();
  iVar3 = *(int *)(iVar3 + 8);
  iVar1 = FUN_0001087c();
  if (iVar1 == 0) {
_L0:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000108ac();
    if (iVar1 != 0) {
      iVar1 = FUN_000108c0();
      if ((iVar1 == 0) || (iVar1 = FUN_000108d4(), iVar1 == 0)) goto _L0;
      FUN_000108e8();
      FUN_0001090a();
      iVar1 = 1;
    }
    iVar2 = FUN_00010920();
    if (iVar2 == 0) {
      if (iVar1 == 1) {
        FUN_00010936();
        *(undefined4 *)(iVar3 + 0xcc) = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    FUN_0001095e();
  }
  return iVar1;
}



int _LVL145(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s2;
  
  _LVL145();
  iVar1 = *(int *)(unaff_s2 + 8);
  iVar2 = FUN_0001087c();
  if (iVar2 == 0) {
_L0:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_000108ac();
    if (iVar2 != 0) {
      iVar2 = FUN_000108c0();
      if ((iVar2 == 0) || (iVar2 = FUN_000108d4(), iVar2 == 0)) goto _L0;
      FUN_000108e8();
      FUN_0001090a();
      iVar2 = 1;
    }
    iVar3 = FUN_00010920();
    if (iVar3 == 0) {
      if (iVar2 == 1) {
        FUN_00010936();
        *(undefined4 *)(iVar1 + 0xcc) = 0;
      }
    }
    else {
      iVar2 = 0;
    }
    FUN_0001095e();
  }
  return iVar2;
}



int FUN_0001087c(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0001087c();
  if (iVar1 == 0) {
_L0:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000108ac();
    if (iVar1 != 0) {
      iVar1 = FUN_000108c0();
      if ((iVar1 == 0) || (iVar1 = FUN_000108d4(), iVar1 == 0)) goto _L0;
      FUN_000108e8();
      FUN_0001090a();
      iVar1 = 1;
    }
    iVar2 = FUN_00010920();
    if (iVar2 == 0) {
      if (iVar1 == 1) {
        FUN_00010936();
        *(undefined4 *)(unaff_s0 + 0xcc) = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    FUN_0001095e();
  }
  return iVar1;
}



int FUN_000108ac(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000108ac();
  if (iVar1 != 0) {
    iVar1 = FUN_000108c0();
    if ((iVar1 == 0) || (iVar1 = FUN_000108d4(), iVar1 == 0)) {
      return 0;
    }
    FUN_000108e8();
    FUN_0001090a();
    iVar1 = 1;
  }
  iVar2 = FUN_00010920();
  if (iVar2 == 0) {
    if (iVar1 == 1) {
      FUN_00010936();
      *(undefined4 *)(unaff_s0 + 0xcc) = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  FUN_0001095e();
  return iVar1;
}



undefined4 FUN_000108c0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000000;
  
  iVar2 = FUN_000108c0();
  if ((iVar2 == 0) || (iVar2 = FUN_000108d4(), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uStack00000000 = FUN_000108e8();
    FUN_0001090a();
    uVar1 = 1;
    iVar2 = FUN_00010920();
    if (iVar2 == 0) {
      if (true) {
        FUN_00010936();
        *(undefined4 *)(unaff_s0 + 0xcc) = 0;
      }
    }
    else {
      uVar1 = 0;
    }
    FUN_0001095e();
  }
  return uVar1;
}



undefined4 FUN_000108d4(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000000;
  
  iVar2 = FUN_000108d4();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uStack00000000 = FUN_000108e8();
    FUN_0001090a();
    uVar1 = 1;
    iVar2 = FUN_00010920();
    if (iVar2 == 0) {
      if (true) {
        FUN_00010936();
        *(undefined4 *)(unaff_s0 + 0xcc) = 0;
      }
    }
    else {
      uVar1 = 0;
    }
    FUN_0001095e();
  }
  return uVar1;
}



undefined4 FUN_000108e8(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000000;
  
  uStack00000000 = FUN_000108e8();
  FUN_0001090a();
  uVar1 = 1;
  iVar2 = FUN_00010920();
  if (iVar2 == 0) {
    if (true) {
      FUN_00010936();
      *(undefined4 *)(unaff_s0 + 0xcc) = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  FUN_0001095e();
  return uVar1;
}



undefined4 FUN_0001090a(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  FUN_0001090a();
  uVar1 = 1;
  iVar2 = FUN_00010920();
  if (iVar2 == 0) {
    if (true) {
      FUN_00010936();
      *(undefined4 *)(unaff_s0 + 0xcc) = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  FUN_0001095e();
  return uVar1;
}



int FUN_00010920(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010920();
  if (iVar1 == 0) {
    if (unaff_s1 == 1) {
      FUN_00010936();
      *(undefined4 *)(unaff_s0 + 0xcc) = 0;
    }
  }
  else {
    unaff_s1 = 0;
  }
  FUN_0001095e();
  return unaff_s1;
}



void FUN_00010936(void)

{
  int unaff_s0;
  
  FUN_00010936();
  *(undefined4 *)(unaff_s0 + 0xcc) = 0;
  FUN_0001095e();
  return;
}



void FUN_0001095e(void)

{
  FUN_0001095e();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 58c7

void supplicantInit(supplicantData_t *suppData)

{
  _L0();
  FUN_000109aa();
  FUN_000109bc();
  FUN_000109cc();
  (suppData->keyMgmtInfoSta).sta_MIC_Error.disableStaAsso = 0;
  (suppData->keyMgmtInfoSta).sta_MIC_Error.MICCounterMeasureEnabled = 1;
  (suppData->keyMgmtInfoSta).sta_MIC_Error.status = NO_MIC_FAILURE;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  FUN_000109aa();
  FUN_000109bc();
  FUN_000109cc();
  *(undefined4 *)(unaff_s0 + 0x158) = 0;
  *(undefined4 *)(unaff_s0 + 0x154) = 1;
  *(undefined *)(unaff_s0 + 0x150) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109aa(void)

{
  int unaff_s0;
  
  FUN_000109aa();
  FUN_000109bc();
  FUN_000109cc();
  *(undefined4 *)(unaff_s0 + 0x158) = 0;
  *(undefined4 *)(unaff_s0 + 0x154) = 1;
  *(undefined *)(unaff_s0 + 0x150) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109bc(void)

{
  int unaff_s0;
  
  FUN_000109bc();
  FUN_000109cc();
  *(undefined4 *)(unaff_s0 + 0x158) = 0;
  *(undefined4 *)(unaff_s0 + 0x154) = 1;
  *(undefined *)(unaff_s0 + 0x150) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109cc(void)

{
  int unaff_s0;
  
  FUN_000109cc();
  *(undefined4 *)(unaff_s0 + 0x158) = 0;
  *(undefined4 *)(unaff_s0 + 0x154) = 1;
  *(undefined *)(unaff_s0 + 0x150) = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 71d8

void allocSupplicantData(void *connectionPtr)

{
  FUN_00010a42();
  if (*(int *)((int)connectionPtr + 8) != 0) {
    return;
  }
                    // WARNING: Load size is inaccurate
  if ((*connectionPtr == '\0') && (iRam00000000 == 0)) {
    iRam00000000 = 1;
    _L0();
    *(undefined4 *)((int)connectionPtr + 8) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010a42(void)

{
  char *unaff_s2;
  
  FUN_00010a42();
  if (*(int *)(unaff_s2 + 8) != 0) {
    return;
  }
  if ((*unaff_s2 == '\0') && (iRam00000000 == 0)) {
    iRam00000000 = 1;
    _L0();
    *(undefined4 *)(unaff_s2 + 8) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  undefined4 unaff_s1;
  int unaff_s2;
  
  _L0();
  *(undefined4 *)(unaff_s2 + 8) = unaff_s1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 57d0

UINT16 keyMgmtGetKeySize(cm_ConnectionInfo_t *connPtr,UINT8 isPairwise)

{
  FUN_00010ae4();
  FUN_00010b00();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010ae4(void)

{
  FUN_00010ae4();
  FUN_00010b00();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b00(void)

{
  FUN_00010b00();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Variable defined which should be unmapped: key_add_req
// DWARF DIE: 566a

uint8_t add_key_to_mac(cm_ConnectionInfo_t *connPtr,UINT8 pairwise)

{
  uint uVar1;
  uint8_t extraout_a0;
  uint extraout_a0_00;
  undefined3 in_register_0000202d;
  mm_key_add_req key_add_req;
  
  uVar1 = 0x10;
  if (connPtr->conType == '\0') {
    _L0();
    uVar1 = extraout_a0_00 & 0xff;
  }
  FUN_00010b52();
  if ((CONCAT31(in_register_0000202d,pairwise) == 0) && (connPtr->conType != '\0')) {
    FUN_00010bc8();
  }
  FUN_00010b86();
  if ((((uVar1 != 0x10) && (uVar1 != 0x20)) && (uVar1 != 0xd)) && (uVar1 != 5)) {
    FUN_00010c66();
  }
  FUN_00010c1e();
  FUN_00010c28();
  return extraout_a0;
}



void _L0(void)

{
  uint uVar1;
  char *unaff_s1;
  uint extraout_a0;
  int unaff_s2;
  char cStack00000005;
  undefined uStack00000008;
  char cStack0000002d;
  undefined uStack0000002f;
  
  _L0();
  uVar1 = extraout_a0 & 0xff;
  FUN_00010b52();
  uStack0000002f = unaff_s2 != 0;
  cStack0000002d = unaff_s1[2];
  if (unaff_s2 == 0) {
    cStack00000005 = -1;
    if (*unaff_s1 != '\0') {
      FUN_00010bc8();
    }
  }
  else {
    cStack00000005 = unaff_s1[1];
  }
  FUN_00010b86();
  uStack00000008 = (undefined)uVar1;
  if ((((uVar1 != 0x10) && (uVar1 != 0x20)) && (uVar1 != 0xd)) && (uVar1 != 5)) {
    FUN_00010c66();
  }
  FUN_00010c1e();
  FUN_00010c28();
  return;
}



void FUN_00010b52(void)

{
  int unaff_s0;
  char *unaff_s1;
  int unaff_s2;
  char cStack00000005;
  undefined uStack00000008;
  char cStack0000002d;
  undefined uStack0000002f;
  
  FUN_00010b52();
  uStack0000002f = unaff_s2 != 0;
  cStack0000002d = unaff_s1[2];
  if (unaff_s2 == 0) {
    cStack00000005 = -1;
    if (*unaff_s1 != '\0') {
      FUN_00010bc8();
    }
  }
  else {
    cStack00000005 = unaff_s1[1];
  }
  FUN_00010b86();
  uStack00000008 = (undefined)unaff_s0;
  if ((((unaff_s0 != 0x10) && (unaff_s0 != 0x20)) && (unaff_s0 != 0xd)) && (unaff_s0 != 5)) {
    FUN_00010c66();
  }
  FUN_00010c1e();
  FUN_00010c28();
  return;
}



void FUN_00010b86(void)

{
  int unaff_s0;
  undefined uStack00000008;
  
  FUN_00010b86();
  uStack00000008 = (undefined)unaff_s0;
  if ((((unaff_s0 != 0x10) && (unaff_s0 != 0x20)) && (unaff_s0 != 0xd)) && (unaff_s0 != 5)) {
    FUN_00010c66();
  }
  FUN_00010c1e();
  FUN_00010c28();
  return;
}



void FUN_00010bc8(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined uStack00000004;
  undefined uStack00000008;
  
  FUN_00010bc8();
  uStack00000004 = (undefined)*(undefined2 *)(extraout_a0 + 0xf2);
  FUN_00010b86();
  uStack00000008 = (undefined)unaff_s0;
  if ((((unaff_s0 != 0x10) && (unaff_s0 != 0x20)) && (unaff_s0 != 0xd)) && (unaff_s0 != 5)) {
    FUN_00010c66();
  }
  FUN_00010c1e();
  FUN_00010c28();
  return;
}



void FUN_00010c1e(void)

{
  FUN_00010c1e();
  FUN_00010c28();
  return;
}



void FUN_00010c28(void)

{
  FUN_00010c28();
  return;
}



void FUN_00010c66(void)

{
  FUN_00010c66();
  FUN_00010c1e();
  FUN_00010c28();
  return;
}



// DWARF DIE: 772a

BufferReturnNotify_t * keyMgmtKeyGroupTxDone(BufferDesc_t *pBufDesc)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00010c9a();
  iVar1 = pBufDesc->intf;
  if (*(char *)(iVar1 + 3) != -1) {
    _L0();
  }
  uVar2 = FUN_00010cbc();
  *(char *)(iVar1 + 3) = (char)uVar2;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 200) = 1;
  if (*(int *)(*(int *)(iVar1 + 8) + 0xcc) == 0) {
    *(undefined4 *)(*(int *)(iVar1 + 8) + 0xcc) = 1;
    FUN_00010ce2();
  }
  FUN_00010d06();
  return (BufferReturnNotify_t *)0x0;
}



undefined4 FUN_00010c9a(void)

{
  int *unaff_s0;
  int iVar1;
  undefined4 uVar2;
  
  FUN_00010c9a();
  iVar1 = *unaff_s0;
  if (*(char *)(iVar1 + 3) != -1) {
    _L0();
  }
  uVar2 = FUN_00010cbc();
  *(char *)(iVar1 + 3) = (char)uVar2;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 200) = 1;
  if (*(int *)(*(int *)(iVar1 + 8) + 0xcc) == 0) {
    *(undefined4 *)(*(int *)(iVar1 + 8) + 0xcc) = 1;
    FUN_00010ce2();
  }
  FUN_00010d06();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  _L0();
  uVar1 = FUN_00010cbc();
  *(char *)(unaff_s0 + 3) = (char)uVar1;
  *(undefined4 *)(*(int *)(unaff_s0 + 8) + 200) = 1;
  if (*(int *)(*(int *)(unaff_s0 + 8) + 0xcc) == 0) {
    *(undefined4 *)(*(int *)(unaff_s0 + 8) + 0xcc) = 1;
    FUN_00010ce2();
  }
  FUN_00010d06();
  return 0;
}



undefined4 FUN_00010cbc(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010cbc();
  *(char *)(unaff_s0 + 3) = (char)uVar1;
  *(undefined4 *)(*(int *)(unaff_s0 + 8) + 200) = 1;
  if (*(int *)(*(int *)(unaff_s0 + 8) + 0xcc) == 0) {
    *(undefined4 *)(*(int *)(unaff_s0 + 8) + 0xcc) = 1;
    FUN_00010ce2();
  }
  FUN_00010d06();
  return 0;
}



undefined4 FUN_00010ce2(void)

{
  FUN_00010ce2();
  FUN_00010d06();
  return 0;
}



undefined4 FUN_00010d06(void)

{
  FUN_00010d06();
  return 0;
}



// WARNING: Variable defined which should be unmapped: pTxEapol
// DWARF DIE: 67d5

Status_e GenerateGrpMsg2(BufferDesc_t *pEAPoLBufDesc,keyMgmtInfoSta_t *pKeyMgmtInfoSta)

{
  bool bVar1;
  undefined3 extraout_var;
  UINT16 frameLen;
  EAPOL_KeyMsg_Tx_t *pTxEapol;
  
  FUN_00010d50();
  bVar1 = _L0();
  bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  if (!bVar1) {
    FUN_00010d84();
    FUN_00010d96();
    FUN_00010da2();
    FUN_00010dae();
    FUN_00010dca();
  }
  return (Status_e)bVar1;
}



bool FUN_00010d50(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uStack0000000c;
  
  FUN_00010d50();
  bVar1 = _L0();
  bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  if (!bVar1) {
    FUN_00010d84();
    uStack0000000c = FUN_00010d96();
    FUN_00010da2();
    FUN_00010dae();
    FUN_00010dca();
  }
  return bVar1;
}



bool _L0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uStack0000000c;
  
  bVar1 = _L0();
  bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  if (!bVar1) {
    FUN_00010d84();
    uStack0000000c = FUN_00010d96();
    FUN_00010da2();
    FUN_00010dae();
    FUN_00010dca();
  }
  return bVar1;
}



undefined4 FUN_00010d84(void)

{
  undefined4 uStack0000000c;
  
  FUN_00010d84();
  uStack0000000c = FUN_00010d96();
  FUN_00010da2();
  FUN_00010dae();
  FUN_00010dca();
  return 0;
}



undefined4 FUN_00010d96(void)

{
  undefined4 uStack0000000c;
  
  uStack0000000c = FUN_00010d96();
  FUN_00010da2();
  FUN_00010dae();
  FUN_00010dca();
  return 0;
}



undefined4 FUN_00010da2(void)

{
  FUN_00010da2();
  FUN_00010dae();
  FUN_00010dca();
  return 0;
}



undefined4 FUN_00010dae(void)

{
  FUN_00010dae();
  FUN_00010dca();
  return 0;
}



undefined4 FUN_00010dca(void)

{
  FUN_00010dca();
  return 0;
}



// DWARF DIE: 631a

EAPOL_KeyMsg_t * KeyMgmtStaHsk_Recvd_GrpMsg1(BufferDesc_t *pEAPoLBufDesc)

{
  EAPOL_KeyMsg_t *pEVar1;
  int iVar2;
  
  _L0();
  pEVar1 = (EAPOL_KeyMsg_t *)FUN_00010e32();
  if ((pEVar1 == (EAPOL_KeyMsg_t *)0x0) || (iVar2 = _LVL251(), iVar2 != 0)) {
    pEVar1 = (EAPOL_KeyMsg_t *)0x0;
  }
  else {
    FUN_00010e68();
    FUN_00010e84();
  }
  return pEVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  
  _L0();
  iVar1 = FUN_00010e32();
  if ((iVar1 == 0) || (iVar2 = _LVL251(), iVar2 != 0)) {
    iVar1 = 0;
  }
  else {
    FUN_00010e68();
    FUN_00010e84();
  }
  return iVar1;
}



int FUN_00010e32(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00010e32();
  if ((iVar1 == 0) || (iVar2 = _LVL251(), iVar2 != 0)) {
    iVar1 = 0;
  }
  else {
    FUN_00010e68();
    FUN_00010e84();
  }
  return iVar1;
}



int _LVL251(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = _LVL251();
  if (iVar1 == 0) {
    FUN_00010e68();
    FUN_00010e84();
  }
  else {
    unaff_s1 = 0;
  }
  return unaff_s1;
}



void FUN_00010e68(void)

{
  FUN_00010e68();
  FUN_00010e84();
  return;
}



void FUN_00010e84(void)

{
  FUN_00010e84();
  return;
}



// WARNING: Variable defined which should be unmapped: key_add_req
// DWARF DIE: 5569

uint8_t add_mfp_key_to_mac(cm_ConnectionInfo_t *connPtr,UINT8 pairwise)

{
  undefined4 uVar1;
  mm_key_add_req key_add_req;
  
  _L0();
  FUN_00010eb0();
  if (connPtr->conType == '\0') {
    FUN_00010ee6();
  }
  FUN_00010f0a();
  uVar1 = FUN_00010f14();
  FUN_00010f28();
  return (uint8_t)uVar1;
}



undefined4 _L0(void)

{
  char *unaff_s0;
  undefined4 uVar1;
  undefined2 uStack00000004;
  undefined uStack00000008;
  undefined uStack0000002c;
  char cStack0000002d;
  
  uVar1 = _L0();
  uStack00000008 = (undefined)uVar1;
  FUN_00010eb0();
  cStack0000002d = unaff_s0[2];
  uStack0000002c = 5;
  uStack00000004 = 0xff04;
  if (*unaff_s0 == '\0') {
    FUN_00010ee6();
  }
  FUN_00010f0a();
  uVar1 = FUN_00010f14();
  FUN_00010f28();
  return uVar1;
}



undefined4 FUN_00010eb0(void)

{
  char *unaff_s0;
  undefined4 uVar1;
  undefined2 uStack00000004;
  undefined uStack0000002c;
  char cStack0000002d;
  
  FUN_00010eb0();
  cStack0000002d = unaff_s0[2];
  uStack0000002c = 5;
  uStack00000004 = 0xff04;
  if (*unaff_s0 == '\0') {
    FUN_00010ee6();
  }
  FUN_00010f0a();
  uVar1 = FUN_00010f14();
  FUN_00010f28();
  return uVar1;
}



undefined4 FUN_00010ee6(void)

{
  undefined4 uVar1;
  
  FUN_00010ee6();
  FUN_00010f0a();
  uVar1 = FUN_00010f14();
  FUN_00010f28();
  return uVar1;
}



undefined4 FUN_00010f0a(void)

{
  undefined4 uVar1;
  
  FUN_00010f0a();
  uVar1 = FUN_00010f14();
  FUN_00010f28();
  return uVar1;
}



undefined4 FUN_00010f14(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010f14();
  FUN_00010f28();
  return uVar1;
}



void FUN_00010f28(void)

{
  FUN_00010f28();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5463

void keyMgmtPlumbPairwiseKey(cm_ConnectionInfo_t *connPtr)

{
  UINT8 extraout_a0;
  UINT8 extraout_a0_00;
  
  FUN_00010f74();
  FUN_00010f8a();
  FUN_00010f96();
  connPtr->ptkHwKeyId = extraout_a0;
  if ((connPtr->suppData->customMIB_RSNConfig).AKM.akmType == AKM_RSN_MAX) {
    FUN_00010fb2();
    connPtr->mfpHwKeyId = extraout_a0_00;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010f74(void)

{
  int unaff_s0;
  undefined extraout_a0;
  undefined extraout_a0_00;
  
  FUN_00010f74();
  FUN_00010f8a();
  FUN_00010f96();
  *(undefined *)(unaff_s0 + 4) = extraout_a0;
  if (*(char *)(*(int *)(unaff_s0 + 8) + 0x3d) == '\x06') {
    FUN_00010fb2();
    *(undefined *)(unaff_s0 + 5) = extraout_a0_00;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010f8a(void)

{
  int unaff_s0;
  undefined extraout_a0;
  undefined extraout_a0_00;
  
  FUN_00010f8a();
  FUN_00010f96();
  *(undefined *)(unaff_s0 + 4) = extraout_a0;
  if (*(char *)(*(int *)(unaff_s0 + 8) + 0x3d) == '\x06') {
    FUN_00010fb2();
    *(undefined *)(unaff_s0 + 5) = extraout_a0_00;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010f96(void)

{
  int unaff_s0;
  undefined extraout_a0;
  undefined extraout_a0_00;
  
  FUN_00010f96();
  *(undefined *)(unaff_s0 + 4) = extraout_a0;
  if (*(char *)(*(int *)(unaff_s0 + 8) + 0x3d) == '\x06') {
    FUN_00010fb2();
    *(undefined *)(unaff_s0 + 5) = extraout_a0_00;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010fb2(void)

{
  int unaff_s0;
  undefined extraout_a0;
  
  FUN_00010fb2();
  *(undefined *)(unaff_s0 + 5) = extraout_a0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 7809

BufferReturnNotify_t * keyMgmtKeyPairwiseTxDone(BufferDesc_t *pBufDesc)

{
  int iVar1;
  
  FUN_00011018();
  iVar1 = pBufDesc->intf;
  FUN_00011026();
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xd0) = 1;
  FUN_0001104c();
  return (BufferReturnNotify_t *)0x0;
}



undefined4 FUN_00011018(void)

{
  int *unaff_s3;
  int iVar1;
  
  FUN_00011018();
  iVar1 = *unaff_s3;
  FUN_00011026();
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xd0) = 1;
  FUN_0001104c();
  return 0;
}



undefined4 FUN_00011026(void)

{
  int unaff_s3;
  
  FUN_00011026();
  *(undefined4 *)(*(int *)(unaff_s3 + 8) + 0xd0) = 1;
  FUN_0001104c();
  return 0;
}



undefined4 FUN_0001104c(void)

{
  FUN_0001104c();
  return 0;
}



// DWARF DIE: 69a2

Status_e GeneratePWKMsg4(BufferDesc_t *pEAPoLBufDesc,keyMgmtInfoSta_t *pKeyMgmtInfoSta,
                        BOOLEAN groupKeyReceived)

{
  Status_e SVar1;
  int iVar2;
  EAPOL_KeyMsg_Tx_t *pTxEapol;
  
  _LVL283();
  iVar2 = _L0();
  if (iVar2 == 0) {
    SVar1 = FAIL;
  }
  else {
    FUN_000110d6();
    FUN_000110e8();
    _LVL291();
    if (groupKeyReceived == 0) {
      FUN_0001118a();
    }
    else {
      FUN_00011118();
      FUN_00011122();
      FUN_0001112c();
      FUN_00011144();
    }
    FUN_00011164();
    SVar1 = FW_SUCCESS;
  }
  return SVar1;
}



undefined4 _LVL283(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s7;
  
  _LVL283();
  iVar1 = _L0();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_000110d6();
    FUN_000110e8();
    _LVL291();
    if (unaff_s7 == 0) {
      FUN_0001118a();
    }
    else {
      FUN_00011118();
      FUN_00011122();
      FUN_0001112c();
      FUN_00011144();
    }
    FUN_00011164();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s7;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_000110d6();
    FUN_000110e8();
    _LVL291();
    if (unaff_s7 == 0) {
      FUN_0001118a();
    }
    else {
      FUN_00011118();
      FUN_00011122();
      FUN_0001112c();
      FUN_00011144();
    }
    FUN_00011164();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_000110d6(void)

{
  int unaff_s7;
  
  FUN_000110d6();
  FUN_000110e8();
  _LVL291();
  if (unaff_s7 == 0) {
    FUN_0001118a();
  }
  else {
    FUN_00011118();
    FUN_00011122();
    FUN_0001112c();
    FUN_00011144();
  }
  FUN_00011164();
  return 0;
}



undefined4 FUN_000110e8(void)

{
  int unaff_s7;
  
  FUN_000110e8();
  _LVL291();
  if (unaff_s7 == 0) {
    FUN_0001118a();
  }
  else {
    FUN_00011118();
    FUN_00011122();
    FUN_0001112c();
    FUN_00011144();
  }
  FUN_00011164();
  return 0;
}



undefined4 _LVL291(void)

{
  int unaff_s7;
  
  _LVL291();
  if (unaff_s7 == 0) {
    FUN_0001118a();
  }
  else {
    FUN_00011118();
    FUN_00011122();
    FUN_0001112c();
    FUN_00011144();
  }
  FUN_00011164();
  return 0;
}



undefined4 FUN_00011118(void)

{
  FUN_00011118();
  FUN_00011122();
  FUN_0001112c();
  FUN_00011144();
  FUN_00011164();
  return 0;
}



undefined4 FUN_00011122(void)

{
  FUN_00011122();
  FUN_0001112c();
  FUN_00011144();
  FUN_00011164();
  return 0;
}



undefined4 FUN_0001112c(void)

{
  FUN_0001112c();
  FUN_00011144();
  FUN_00011164();
  return 0;
}



undefined4 FUN_00011144(void)

{
  FUN_00011144();
  FUN_00011164();
  return 0;
}



undefined4 FUN_00011164(void)

{
  FUN_00011164();
  return 0;
}



undefined4 FUN_0001118a(void)

{
  FUN_0001118a();
  FUN_00011164();
  return 0;
}



// DWARF DIE: 647a

EAPOL_KeyMsg_t * KeyMgmtStaHsk_Recvd_PWKMsg3(BufferDesc_t *pEAPoLBufDesc)

{
  EAPOL_KeyMsg_t *pEVar1;
  int iVar2;
  
  FUN_000111cc();
  pEVar1 = (EAPOL_KeyMsg_t *)FUN_000111de();
  if ((pEVar1 != (EAPOL_KeyMsg_t *)0x0) && (iVar2 = FUN_000111f8(), iVar2 == 0)) {
    FUN_00011208();
    pEVar1 = (EAPOL_KeyMsg_t *)0x0;
    _L0();
  }
  return pEVar1;
}



int FUN_000111cc(void)

{
  int iVar1;
  int iVar2;
  
  FUN_000111cc();
  iVar1 = FUN_000111de();
  if ((iVar1 != 0) && (iVar2 = FUN_000111f8(), iVar2 == 0)) {
    FUN_00011208();
    iVar1 = 0;
    _L0();
  }
  return iVar1;
}



int FUN_000111de(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000111de();
  if ((iVar1 != 0) && (iVar2 = FUN_000111f8(), iVar2 == 0)) {
    FUN_00011208();
    iVar1 = 0;
    _L0();
  }
  return iVar1;
}



undefined4 FUN_000111f8(void)

{
  undefined4 unaff_s0;
  int iVar1;
  
  iVar1 = FUN_000111f8();
  if (iVar1 == 0) {
    FUN_00011208();
    unaff_s0 = 0;
    _L0();
  }
  return unaff_s0;
}



undefined4 FUN_00011208(void)

{
  FUN_00011208();
  _L0();
  return 0;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 61d3

void ProcessKeyMgmtDataSta(BufferDesc_t *pBufDesc,IEEEtypes_MacAddr_t *sa,IEEEtypes_MacAddr_t *da)

{
  void *pvVar1;
  
  pvVar1 = pBufDesc->Buffer;
  _LVL326();
  if ((*(byte *)((int)pvVar1 + 6) & 8) == 0) {
    FUN_000112e0();
  }
  else {
    if ((*(byte *)((int)pvVar1 + 5) & 1) == 0) {
      FUN_000112d4();
    }
    else {
      FUN_00011294();
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL326(void)

{
  int unaff_s2;
  
  _LVL326();
  if ((*(byte *)(unaff_s2 + 6) & 8) == 0) {
    FUN_000112e0();
  }
  else {
    if ((*(byte *)(unaff_s2 + 5) & 1) == 0) {
      FUN_000112d4();
    }
    else {
      FUN_00011294();
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011294(void)

{
  FUN_00011294();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112d4(void)

{
  FUN_000112d4();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000112e0(void)

{
  FUN_000112e0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 73f3

UINT8 ProcessEAPoLPkt(BufferDesc_t *bufDesc,IEEEtypes_MacAddr_t *sa,IEEEtypes_MacAddr_t *da)

{
  UINT8 UVar1;
  
  FUN_00011328();
  if (*(char *)((int)bufDesc->Buffer + 1) == '\x03') {
    FUN_00011350();
    if (*(char *)bufDesc->intf == '\x02') {
      FUN_00011366();
    }
    else {
      FUN_000113ce();
    }
    UVar1 = '\x01';
    _L0();
  }
  else {
    UVar1 = '\0';
  }
  FUN_000113a8();
  return UVar1;
}



undefined4 FUN_00011328(void)

{
  undefined4 uVar1;
  char **unaff_s1;
  
  FUN_00011328();
  if (unaff_s1[2][1] == '\x03') {
    FUN_00011350();
    if (**unaff_s1 == '\x02') {
      FUN_00011366();
    }
    else {
      FUN_000113ce();
    }
    uVar1 = 1;
    _L0();
  }
  else {
    uVar1 = 0;
  }
  FUN_000113a8();
  return uVar1;
}



undefined4 FUN_00011350(void)

{
  char **unaff_s1;
  
  FUN_00011350();
  if (**unaff_s1 == '\x02') {
    FUN_00011366();
  }
  else {
    FUN_000113ce();
  }
  _L0();
  FUN_000113a8();
  return 1;
}



undefined4 FUN_00011366(void)

{
  FUN_00011366();
  _L0();
  FUN_000113a8();
  return 1;
}



void _L0(void)

{
  _L0();
  FUN_000113a8();
  return;
}



void FUN_000113a8(void)

{
  FUN_000113a8();
  return;
}



undefined4 FUN_000113ce(void)

{
  FUN_000113ce();
  _L0();
  FUN_000113a8();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 5296

void supplicantRemoveKeyInfo(cm_ConnectionInfo_t *connPtr)

{
  _L0();
  FUN_0001141a();
  connPtr->ptkHwKeyId = -1;
  _L0();
  connPtr->ptkHwKeyId = -1;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined unaff_s4;
  
  _L0();
  FUN_0001141a();
  *(undefined *)(unaff_s0 + 4) = unaff_s4;
  _L0();
  *(undefined *)(unaff_s0 + 4) = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001141a(void)

{
  int unaff_s0;
  undefined unaff_s4;
  
  FUN_0001141a();
  *(undefined *)(unaff_s0 + 4) = unaff_s4;
  _L0();
  *(undefined *)(unaff_s0 + 4) = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined unaff_s4;
  
  _L0();
  *(undefined *)(unaff_s0 + 4) = unaff_s4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4fc8

uchar process_rsn_ie(uint8_t *rsn_ie,Cipher_t *mcstCipher,Cipher_t *ucstCipher,
                    _Bool *is_pmf_required,SecurityMode_t *security_mode,_Bool wpa2_prefered)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  Cipher_t CVar2;
  undefined3 in_register_0000203d;
  uint uVar3;
  ushort uStack66;
  uint16_t akmp_count;
  
  if (*(short *)(rsn_ie + 8) == 2) {
    rsn_ie[9] = '\0';
    rsn_ie[1] = rsn_ie[1] + -4;
    rsn_ie[8] = '\x01';
    cVar1 = _LVL365();
    if (CONCAT31(extraout_var,cVar1) == 0) {
      FUN_000114d2();
    }
    FUN_000114e2();
  }
  FUN_000114f2();
  for (uVar3 = 0; uVar3 < uStack66; uVar3 = uVar3 + 1 & 0xff) {
    cVar1 = FUN_00011642((int)(rsn_ie + (uVar3 + 1) * 4 + 0xc),4);
    if (CONCAT31(extraout_var_03,cVar1) == 0) {
      *(byte *)security_mode = *(byte *)security_mode | 0x20;
    }
    else {
      cVar1 = FUN_00011666((int)(rsn_ie + (uVar3 + 1) * 4 + 0xc),4);
      if (CONCAT31(extraout_var_04,cVar1) == 0) {
        *(byte *)&security_mode->field_0x1 = *(byte *)&security_mode->field_0x1 | 1;
      }
    }
  }
  if (uStack66 == 2) {
    rsn_ie[1] = '\x14';
    _L0();
    cVar1 = FUN_00011542();
    if (CONCAT31(extraout_var_00,cVar1) == 0) {
      FUN_00011554();
    }
    FUN_00011564();
  }
  if (((*(byte *)&security_mode->field_0x1 & 1) != 0) &&
     (((*(byte *)security_mode & 0x20) == 0 || (CONCAT31(in_register_0000203d,wpa2_prefered) == 0)))
     ) {
    *is_pmf_required = true;
    rsn_ie[0x14] = -0x40;
    rsn_ie[0x16] = '\0';
    rsn_ie[1] = rsn_ie[1] + '\x02';
    rsn_ie[0x17] = '\0';
    FUN_000115b0();
    rsn_ie[1] = rsn_ie[1] + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    CVar2 = (Cipher_t)((byte)*ucstCipher | 8);
_L0:
    *ucstCipher = CVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_05,cVar1) == 0) {
      CVar2 = (Cipher_t)((byte)*ucstCipher | 4);
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_02,cVar1) == 0) {
    CVar2 = (Cipher_t)((byte)*mcstCipher | 8);
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_06,cVar1) == 0) {
      CVar2 = (Cipher_t)((byte)*mcstCipher | 4);
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_07,cVar1) == 0) {
        CVar2 = (Cipher_t)((byte)*mcstCipher | 2);
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_08,cVar1) != 0) goto _L0;
        CVar2 = (Cipher_t)((byte)*mcstCipher | 1);
      }
    }
  }
  *mcstCipher = CVar2;
_L0:
  return (uchar)(rsn_ie[1] + '\x02');
}



char _LVL365(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  byte bVar2;
  uint uVar3;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined *unaff_s8;
  int iVar4;
  ushort in_stack_0000000e;
  
  cVar1 = _LVL365();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    FUN_000114d2();
  }
  FUN_000114e2();
  FUN_000114f2();
  for (uVar3 = 0; uVar3 < in_stack_0000000e; uVar3 = uVar3 + 1 & 0xff) {
    iVar4 = (uVar3 + 1) * 4 + 2 + unaff_s6;
    cVar1 = FUN_00011642(iVar4,4);
    if (CONCAT31(extraout_var_03,cVar1) == 0) {
      *unaff_s2 = *unaff_s2 | 0x20;
    }
    else {
      cVar1 = FUN_00011666(iVar4,4);
      if (CONCAT31(extraout_var_04,cVar1) == 0) {
        unaff_s2[1] = unaff_s2[1] | 1;
      }
    }
  }
  if (in_stack_0000000e == 2) {
    *(undefined *)(unaff_s0 + 1) = 0x14;
    _L0();
    cVar1 = FUN_00011542();
    if (CONCAT31(extraout_var_00,cVar1) == 0) {
      FUN_00011554();
    }
    FUN_00011564();
  }
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_05,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_02,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_06,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_07,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_08,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000114d2(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  byte bVar2;
  uint uVar3;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined *unaff_s8;
  int iVar4;
  ushort in_stack_0000000e;
  
  FUN_000114d2();
  FUN_000114e2();
  FUN_000114f2();
  for (uVar3 = 0; uVar3 < in_stack_0000000e; uVar3 = uVar3 + 1 & 0xff) {
    iVar4 = (uVar3 + 1) * 4 + 2 + unaff_s6;
    cVar1 = FUN_00011642(iVar4,4);
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      *unaff_s2 = *unaff_s2 | 0x20;
    }
    else {
      cVar1 = FUN_00011666(iVar4,4);
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        unaff_s2[1] = unaff_s2[1] | 1;
      }
    }
  }
  if (in_stack_0000000e == 2) {
    *(undefined *)(unaff_s0 + 1) = 0x14;
    _L0();
    cVar1 = FUN_00011542();
    if (CONCAT31(extraout_var,cVar1) == 0) {
      FUN_00011554();
    }
    FUN_00011564();
  }
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_04,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_05,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_06,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_07,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000114e2(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  byte bVar2;
  uint uVar3;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined *unaff_s8;
  int iVar4;
  ushort in_stack_0000000e;
  
  FUN_000114e2();
  FUN_000114f2();
  for (uVar3 = 0; uVar3 < in_stack_0000000e; uVar3 = uVar3 + 1 & 0xff) {
    iVar4 = (uVar3 + 1) * 4 + 2 + unaff_s6;
    cVar1 = FUN_00011642(iVar4,4);
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      *unaff_s2 = *unaff_s2 | 0x20;
    }
    else {
      cVar1 = FUN_00011666(iVar4,4);
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        unaff_s2[1] = unaff_s2[1] | 1;
      }
    }
  }
  if (in_stack_0000000e == 2) {
    *(undefined *)(unaff_s0 + 1) = 0x14;
    _L0();
    cVar1 = FUN_00011542();
    if (CONCAT31(extraout_var,cVar1) == 0) {
      FUN_00011554();
    }
    FUN_00011564();
  }
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_04,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_05,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_06,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_07,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000114f2(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  byte bVar2;
  uint uVar3;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined *unaff_s8;
  int iVar4;
  ushort in_stack_0000000e;
  
  FUN_000114f2();
  for (uVar3 = 0; uVar3 < in_stack_0000000e; uVar3 = uVar3 + 1 & 0xff) {
    iVar4 = (uVar3 + 1) * 4 + 2 + unaff_s6;
    cVar1 = FUN_00011642(iVar4,4);
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      *unaff_s2 = *unaff_s2 | 0x20;
    }
    else {
      cVar1 = FUN_00011666(iVar4,4);
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        unaff_s2[1] = unaff_s2[1] | 1;
      }
    }
  }
  if (in_stack_0000000e == 2) {
    *(undefined *)(unaff_s0 + 1) = 0x14;
    _L0();
    cVar1 = FUN_00011542();
    if (CONCAT31(extraout_var,cVar1) == 0) {
      FUN_00011554();
    }
    FUN_00011564();
  }
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_04,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_05,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_06,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_07,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char _L0(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  byte bVar2;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s7;
  undefined *unaff_s8;
  
  _L0();
  cVar1 = FUN_00011542();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    FUN_00011554();
  }
  FUN_00011564();
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_03,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_04,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_05,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011542(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  byte bVar2;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s7;
  undefined *unaff_s8;
  
  cVar1 = FUN_00011542();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    FUN_00011554();
  }
  FUN_00011564();
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_03,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_04,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_05,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011554(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s7;
  undefined *unaff_s8;
  
  FUN_00011554();
  FUN_00011564();
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011564(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s2;
  byte *unaff_s5;
  int unaff_s7;
  undefined *unaff_s8;
  
  FUN_00011564();
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000115b0(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s5;
  
  FUN_000115b0();
  *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000115ce(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s5;
  
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000115f0(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  byte bVar2;
  
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_00,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_01,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_02,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011642(int param_1,undefined4 param_2)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  byte bVar2;
  byte *unaff_s2;
  uint unaff_s3;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined *unaff_s8;
  int unaff_s11;
  ushort in_stack_0000000e;
  
  while( true ) {
    cVar1 = FUN_00011642(param_1,param_2);
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      *unaff_s2 = *unaff_s2 | 0x20;
    }
    else {
      cVar1 = FUN_00011666(unaff_s11,4);
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        unaff_s2[1] = unaff_s2[1] | 1;
      }
    }
    if ((uint)in_stack_0000000e <= (unaff_s3 & 0xff)) break;
    unaff_s3 = (unaff_s3 & 0xff) + 1;
    param_1 = unaff_s3 * 4 + 2 + unaff_s6;
    param_2 = 4;
    unaff_s11 = param_1;
  }
  if (in_stack_0000000e == 2) {
    *(undefined *)(unaff_s0 + 1) = 0x14;
    _L0();
    cVar1 = FUN_00011542();
    if (CONCAT31(extraout_var,cVar1) == 0) {
      FUN_00011554();
    }
    FUN_00011564();
  }
  if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
    *unaff_s8 = 1;
    *(undefined *)(unaff_s0 + 0x14) = 0xc0;
    *(undefined *)(unaff_s0 + 0x16) = 0;
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
    *(undefined *)(unaff_s0 + 0x17) = 0;
    FUN_000115b0();
    *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
  }
  cVar1 = FUN_000115ce();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s5 | 8;
_L0:
    *unaff_s5 = bVar2;
  }
  else {
    cVar1 = FUN_00011694();
    if (CONCAT31(extraout_var_04,cVar1) == 0) {
      bVar2 = *unaff_s5 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_05,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_06,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_07,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011666(int param_1,undefined4 param_2)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  byte bVar2;
  byte *unaff_s2;
  uint unaff_s3;
  byte *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  undefined *unaff_s8;
  ushort in_stack_0000000e;
  
code_r0x00011666:
  cVar1 = FUN_00011666(param_1,param_2);
  if (CONCAT31(extraout_var_03,cVar1) == 0) {
    unaff_s2[1] = unaff_s2[1] | 1;
  }
  do {
    if ((uint)in_stack_0000000e <= (unaff_s3 & 0xff)) {
      if (in_stack_0000000e == 2) {
        *(undefined *)(unaff_s0 + 1) = 0x14;
        _L0();
        cVar1 = FUN_00011542();
        if (CONCAT31(extraout_var,cVar1) == 0) {
          FUN_00011554();
        }
        FUN_00011564();
      }
      if (((unaff_s2[1] & 1) != 0) && (((*unaff_s2 & 0x20) == 0 || (unaff_s7 == 0)))) {
        *unaff_s8 = 1;
        *(undefined *)(unaff_s0 + 0x14) = 0xc0;
        *(undefined *)(unaff_s0 + 0x16) = 0;
        *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x02';
        *(undefined *)(unaff_s0 + 0x17) = 0;
        FUN_000115b0();
        *(char *)(unaff_s0 + 1) = *(char *)(unaff_s0 + 1) + '\x04';
      }
      cVar1 = FUN_000115ce();
      if (CONCAT31(extraout_var_00,cVar1) == 0) {
        bVar2 = *unaff_s5 | 8;
_L0:
        *unaff_s5 = bVar2;
      }
      else {
        cVar1 = FUN_00011694();
        if (CONCAT31(extraout_var_04,cVar1) == 0) {
          bVar2 = *unaff_s5 | 4;
          goto _L0;
        }
      }
      cVar1 = FUN_000115f0();
      if (CONCAT31(extraout_var_01,cVar1) == 0) {
        bVar2 = *unaff_s1 | 8;
      }
      else {
        cVar1 = FUN_000116b4();
        if (CONCAT31(extraout_var_05,cVar1) == 0) {
          bVar2 = *unaff_s1 | 4;
        }
        else {
          cVar1 = FUN_000116d4();
          if (CONCAT31(extraout_var_06,cVar1) == 0) {
            bVar2 = *unaff_s1 | 2;
          }
          else {
            cVar1 = FUN_000116f4();
            if (CONCAT31(extraout_var_07,cVar1) != 0) goto _L0;
            bVar2 = *unaff_s1 | 1;
          }
        }
      }
      *unaff_s1 = bVar2;
_L0:
      return *(char *)(unaff_s0 + 1) + '\x02';
    }
    unaff_s3 = (unaff_s3 & 0xff) + 1;
    param_1 = unaff_s3 * 4 + 2 + unaff_s6;
    cVar1 = FUN_00011642(param_1,4);
    if (CONCAT31(extraout_var_02,cVar1) != 0) break;
    *unaff_s2 = *unaff_s2 | 0x20;
  } while( true );
  param_2 = 4;
  goto code_r0x00011666;
}



char FUN_00011694(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  byte bVar2;
  byte *unaff_s5;
  
  cVar1 = FUN_00011694();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    *unaff_s5 = *unaff_s5 | 4;
  }
  cVar1 = FUN_000115f0();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_000116b4();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_000116d4();
      if (CONCAT31(extraout_var_02,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_000116f4();
        if (CONCAT31(extraout_var_03,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000116b4(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  byte bVar2;
  
  cVar1 = FUN_000116b4();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 4;
  }
  else {
    cVar1 = FUN_000116d4();
    if (CONCAT31(extraout_var_00,cVar1) == 0) {
      bVar2 = *unaff_s1 | 2;
    }
    else {
      cVar1 = FUN_000116f4();
      if (CONCAT31(extraout_var_01,cVar1) != 0) goto _L0;
      bVar2 = *unaff_s1 | 1;
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000116d4(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte bVar2;
  
  cVar1 = FUN_000116d4();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 2;
  }
  else {
    cVar1 = FUN_000116f4();
    if (CONCAT31(extraout_var_00,cVar1) != 0) goto _L0;
    bVar2 = *unaff_s1 | 1;
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000116f4(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_000116f4();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    *unaff_s1 = *unaff_s1 | 1;
  }
  return *(char *)(unaff_s0 + 1) + '\x02';
}



// DWARF DIE: 4e79

uchar process_wpa_ie(uint8_t *wpa_ie,Cipher_t *mcstCipher,Cipher_t *ucstCipher)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  Cipher_t CVar2;
  
  if (*(short *)(wpa_ie + 0xc) == 2) {
    wpa_ie[1] = '\x16';
    wpa_ie[0xc] = '\x01';
    wpa_ie[0xd] = '\0';
    cVar1 = _LVL404();
    if (CONCAT31(extraout_var,cVar1) == 0) {
      FUN_00011764();
    }
    FUN_00011774();
  }
  cVar1 = FUN_00011784();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    CVar2 = (Cipher_t)((byte)*ucstCipher | 8);
_L0:
    *ucstCipher = CVar2;
  }
  else {
    cVar1 = FUN_000117e4();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      CVar2 = (Cipher_t)((byte)*ucstCipher | 4);
      goto _L0;
    }
  }
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    CVar2 = (Cipher_t)((byte)*mcstCipher | 8);
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_03,cVar1) == 0) {
      CVar2 = (Cipher_t)((byte)*mcstCipher | 4);
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_04,cVar1) == 0) {
        CVar2 = (Cipher_t)((byte)*mcstCipher | 2);
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_05,cVar1) != 0) goto _L0;
        CVar2 = (Cipher_t)((byte)*mcstCipher | 1);
      }
    }
  }
  *mcstCipher = CVar2;
_L0:
  return (uchar)(wpa_ie[1] + '\x02');
}



char _LVL404(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  byte bVar2;
  byte *unaff_s2;
  
  cVar1 = _LVL404();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    FUN_00011764();
  }
  FUN_00011774();
  cVar1 = FUN_00011784();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s2 | 8;
_L0:
    *unaff_s2 = bVar2;
  }
  else {
    cVar1 = FUN_000117e4();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s2 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var_01,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_03,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_04,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_05,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011764(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s2;
  
  FUN_00011764();
  FUN_00011774();
  cVar1 = FUN_00011784();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s2 | 8;
_L0:
    *unaff_s2 = bVar2;
  }
  else {
    cVar1 = FUN_000117e4();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s2 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011774(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s2;
  
  FUN_00011774();
  cVar1 = FUN_00011784();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s2 | 8;
_L0:
    *unaff_s2 = bVar2;
  }
  else {
    cVar1 = FUN_000117e4();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s2 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011784(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar2;
  byte *unaff_s2;
  
  cVar1 = FUN_00011784();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s2 | 8;
_L0:
    *unaff_s2 = bVar2;
  }
  else {
    cVar1 = FUN_000117e4();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s2 | 4;
      goto _L0;
    }
  }
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_02,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_03,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_04,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000117a6(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  byte bVar2;
  
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_00,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_01,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_02,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_000117e4(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  byte bVar2;
  byte *unaff_s2;
  
  cVar1 = FUN_000117e4();
  if (CONCAT31(extraout_var_00,cVar1) == 0) {
    *unaff_s2 = *unaff_s2 | 4;
  }
  cVar1 = FUN_000117a6();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 8;
  }
  else {
    cVar1 = FUN_00011804();
    if (CONCAT31(extraout_var_01,cVar1) == 0) {
      bVar2 = *unaff_s1 | 4;
    }
    else {
      cVar1 = FUN_00011824();
      if (CONCAT31(extraout_var_02,cVar1) == 0) {
        bVar2 = *unaff_s1 | 2;
      }
      else {
        cVar1 = FUN_00011844();
        if (CONCAT31(extraout_var_03,cVar1) != 0) goto _L0;
        bVar2 = *unaff_s1 | 1;
      }
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011804(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  byte bVar2;
  
  cVar1 = FUN_00011804();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 4;
  }
  else {
    cVar1 = FUN_00011824();
    if (CONCAT31(extraout_var_00,cVar1) == 0) {
      bVar2 = *unaff_s1 | 2;
    }
    else {
      cVar1 = FUN_00011844();
      if (CONCAT31(extraout_var_01,cVar1) != 0) goto _L0;
      bVar2 = *unaff_s1 | 1;
    }
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011824(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte bVar2;
  
  cVar1 = FUN_00011824();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    bVar2 = *unaff_s1 | 2;
  }
  else {
    cVar1 = FUN_00011844();
    if (CONCAT31(extraout_var_00,cVar1) != 0) goto _L0;
    bVar2 = *unaff_s1 | 1;
  }
  *unaff_s1 = bVar2;
_L0:
  return *(char *)(unaff_s0 + 1) + '\x02';
}



char FUN_00011844(void)

{
  int unaff_s0;
  byte *unaff_s1;
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_00011844();
  if (CONCAT31(extraout_var,cVar1) == 0) {
    *unaff_s1 = *unaff_s1 | 1;
  }
  return *(char *)(unaff_s0 + 1) + '\x02';
}


