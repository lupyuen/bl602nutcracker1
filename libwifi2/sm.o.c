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
typedef unsigned short    undefined2;
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

typedef ulong uint32_t;

typedef ushort uint16_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef uchar uint8_t;

typedef struct txl_buffer_control txl_buffer_control, *Ptxl_buffer_control;

typedef struct tx_agg_desc tx_agg_desc, *Ptx_agg_desc;

typedef struct txl_buffer_tag txl_buffer_tag, *Ptxl_buffer_tag;

typedef struct tx_hd tx_hd, *Ptx_hd;

typedef char int8_t;

typedef union anon_union.conflict347a_for_field_0 anon_union.conflict347a_for_field_0, *Panon_union.conflict347a_for_field_0;

typedef struct dma_desc dma_desc, *Pdma_desc;

typedef struct tx_pbd tx_pbd, *Ptx_pbd;

typedef union anon_union.conflict15cb_for_field_3 anon_union.conflict15cb_for_field_3, *Panon_union.conflict15cb_for_field_3;

typedef union anon_union.conflict15f0_for_field_4 anon_union.conflict15f0_for_field_4, *Panon_union.conflict15f0_for_field_4;

typedef union anon_union.conflict1615_for_field_5 anon_union.conflict1615_for_field_5, *Panon_union.conflict1615_for_field_5;

typedef struct tx_policy_tbl tx_policy_tbl, *Ptx_policy_tbl;

typedef struct tx_compressed_policy_tbl tx_compressed_policy_tbl, *Ptx_compressed_policy_tbl;

struct co_list_hdr { // DWARF DIE: ecb
    struct co_list_hdr * next;
};

union anon_union.conflict15f0_for_field_4 { // DWARF DIE: 15f0
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

struct mac_addr { // DWARF DIE: 9fd
    uint16_t array[3];
};

struct hostdesc { // DWARF DIE: 2f44
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

struct tx_cfm_tag { // DWARF DIE: 1a28
    uint16_t pn[4];
    uint16_t sn;
    uint16_t timestamp;
    int8_t credits;
    uint8_t ampdu_size;
    uint8_t pad[2];
    uint32_t status;
};

union anon_union.conflict1615_for_field_5 { // DWARF DIE: 1615
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

struct lmacdesc { // DWARF DIE: 307c
    struct tx_agg_desc * agg_desc;
    struct txl_buffer_tag * buffer;
    struct tx_hw_desc * hw_desc;
};

union anon_union.conflict15cb_for_field_3 { // DWARF DIE: 15cb
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

struct tx_hd { // DWARF DIE: 163a
    uint32_t upatterntx;
    uint32_t nextfrmexseq_ptr;
    uint32_t nextmpdudesc_ptr;
    union anon_union.conflict15cb_for_field_3 field_3;
    union anon_union.conflict15f0_for_field_4 field_4;
    union anon_union.conflict1615_for_field_5 field_5;
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

struct tx_hw_desc { // DWARF DIE: 1aa7
    struct tx_cfm_tag * cfm_ptr;
    struct tx_hd thd;
};

struct umacdesc { // DWARF DIE: 3020
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

struct txdesc { // DWARF DIE: 3198
    struct co_list_hdr list_hdr;
    struct hostdesc host;
    struct umacdesc umac;
    struct lmacdesc lmac;
    struct tx_hw_desc hw_desc;
    struct tx_cfm_tag hw_cfm;
    uint32_t buf[128];
};

struct tx_compressed_policy_tbl { // DWARF DIE: 15a0
    uint32_t upatterntx;
    uint32_t sec_user_control;
};

struct dma_desc { // DWARF DIE: 13d5
    uint32_t src;
    uint32_t dest;
    uint16_t length;
    uint16_t ctrl;
    uint32_t next;
};

struct tx_pbd { // DWARF DIE: 1703
    uint32_t upatterntx;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint32_t bufctrlinfo;
};

struct tx_policy_tbl { // DWARF DIE: 152f
    uint32_t upatterntx;
    uint32_t phycntrlinfo1;
    uint32_t phycntrlinfo2;
    uint32_t maccntrlinfo1;
    uint32_t maccntrlinfo2;
    uint32_t ratecntrlinfo[4];
    uint32_t powercntrlinfo[4];
};

union anon_union.conflict347a_for_field_0 { // DWARF DIE: 347a
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

struct txl_buffer_control { // DWARF DIE: 28db
    union anon_union.conflict347a_for_field_0 field_0;
    uint32_t mac_control_info;
    uint32_t phy_control_info;
};

struct txl_buffer_tag { // DWARF DIE: 30b7
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

struct tx_agg_desc { // DWARF DIE: 1ad8
    uint8_t reserved;
};

typedef struct ps_env_tag ps_env_tag, *Pps_env_tag;

typedef uint16_t ke_task_id_t;

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 23ac
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

struct ps_env_tag { // DWARF DIE: 454e
    _Bool ps_on;
    undefined field_0x1;
    ke_task_id_t taskid;
    uint32_t prevent_sleep;
    uint8_t cfm_cnt;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    struct mm_timer_tag uapsd_timer;
    _Bool uapsd_tmr_on;
    _Bool uapsd_on;
    undefined field_0x1e;
    undefined field_0x1f;
    uint32_t uapsd_timeout;
    uint8_t dpsm_state;
    uint8_t next_mode;
    undefined field_0x26;
    undefined field_0x27;
};

typedef struct apInfo_t apInfo_t, *PapInfo_t;

typedef struct BssConfig_t BssConfig_t, *PBssConfig_t;

typedef struct BssData_t BssData_t, *PBssData_t;

typedef uchar UINT8;

typedef ulong UINT32;

typedef struct apRsnConfig_t apRsnConfig_t, *PapRsnConfig_t;

typedef struct CommonMlmeData_t CommonMlmeData_t, *PCommonMlmeData_t;

typedef int BOOLEAN;

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

struct Cipher_t { // DWARF DIE: 3832
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct KeyData_t { // DWARF DIE: 519b
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

struct BssData_t { // DWARF DIE: 609d
    BOOLEAN updatePassPhrase;
    struct mm_timer_tag apMicTimer;
    struct KeyData_t grpKeyData;
    UINT8 GNonce[32];
    UINT32 grpRekeyBcnCntConfigured;
    UINT32 grpRekeyBcnCntRemaining;
};

struct Operation_t { // DWARF DIE: 5efc
    UINT16 keyExchange:1;
    UINT16 authenticate:1;
    UINT16 reserved:14;
};

struct apRsnConfig_t { // DWARF DIE: 5f47
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

struct CommonMlmeData_t { // DWARF DIE: 5e12
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

struct BssConfig_t { // DWARF DIE: 604d
    UINT32 StaAgeOutTime;
    UINT32 PsStaAgeOutTime;
    struct apRsnConfig_t RsnConfig;
    struct CommonMlmeData_t comData;
};

struct apInfo_t { // DWARF DIE: 613d
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

struct _txQingInfo_t { // DWARF DIE: 5ed2
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

struct SecurityMode_t { // DWARF DIE: 3898
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

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 5d24
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

struct apKeyMgmtInfoSta_t { // DWARF DIE: 5d7b
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

struct staData_t { // DWARF DIE: 6109
    txQingInfo_t pwrSaveInfo;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    struct apKeyMgmtInfoSta_t keyMgmtInfo;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict5340_for_keyEncypt anon_union.conflict5340_for_keyEncypt, *Panon_union.conflict5340_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_TKIP_t { // DWARF DIE: 51ff
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

struct key_Type_AES_CMAC_t { // DWARF DIE: 5303
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_AES_t { // DWARF DIE: 5289
    UINT8 key[16];
};

struct key_Type_WEP_t { // DWARF DIE: 523c
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

struct key_Type_WAPI_t { // DWARF DIE: 52ac
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

union anon_union.conflict5340_for_keyEncypt { // DWARF DIE: 5340
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 5386
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict5340_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict5340 anon_union.conflict5340, *Panon_union.conflict5340;

union anon_union.conflict5340 { // DWARF DIE: 5340
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct txl_list txl_list, *Ptxl_list;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: eec
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct txl_list { // DWARF DIE: 32d8
    struct tx_hd * last_frame_exch;
    struct co_list transmitting;
    uint16_t bridgedmacnt;
    uint8_t chk_state;
    undefined field_0xf;
};

typedef struct txl_cntrl_env_tag txl_cntrl_env_tag, *Ptxl_cntrl_env_tag;

struct txl_cntrl_env_tag { // DWARF DIE: 3320
    struct txl_list txlist[5];
    uint32_t pck_cnt;
    uint16_t seqnbr;
    _Bool reset;
    undefined field_0x57;
};

typedef struct scanu_start_req scanu_start_req, *Pscanu_start_req;

typedef struct scan_chan_tag scan_chan_tag, *Pscan_chan_tag;

typedef struct mac_ssid mac_ssid, *Pmac_ssid;

struct scan_chan_tag { // DWARF DIE: d71
    uint16_t freq;
    uint8_t band;
    uint8_t flags;
    int8_t tx_power;
    undefined field_0x5;
};

struct mac_ssid { // DWARF DIE: a2d
    uint8_t length;
    uint8_t array[32];
    uint8_t array_tail[1];
};

struct scanu_start_req { // DWARF DIE: 22a6
    struct scan_chan_tag chan[42];
    struct mac_ssid ssid[2];
    struct mac_addr bssid;
    undefined field_0x146;
    undefined field_0x147;
    uint32_t add_ies;
    uint16_t add_ie_len;
    uint8_t vif_idx;
    uint8_t chan_cnt;
    uint8_t ssid_cnt;
    _Bool no_cck;
    undefined field_0x152;
    undefined field_0x153;
};

typedef enum anon_enum_16.conflict2266 {
    ME_CHAN_CONFIG_CFM=5123,
    ME_CHAN_CONFIG_REQ=5122,
    ME_CONFIG_CFM=5121,
    ME_CONFIG_REQ=5120,
    ME_RC_SET_RATE_REQ=5136,
    ME_RC_STATS_CFM=5135,
    ME_RC_STATS_REQ=5134,
    ME_SET_ACTIVE_CFM=5138,
    ME_SET_ACTIVE_REQ=5137,
    ME_SET_CONTROL_PORT_CFM=5125,
    ME_SET_CONTROL_PORT_REQ=5124,
    ME_SET_PS_DISABLE_CFM=5140,
    ME_SET_PS_DISABLE_REQ=5139,
    ME_STA_ADD_CFM=5128,
    ME_STA_ADD_REQ=5127,
    ME_STA_DEL_CFM=5130,
    ME_STA_DEL_REQ=5129,
    ME_TKIP_MIC_FAILURE_IND=5126,
    ME_TRAFFIC_IND_CFM=5133,
    ME_TRAFFIC_IND_REQ=5132,
    ME_TX_CREDITS_UPDATE_IND=5131,
    SCANU_JOIN_CFM=4099,
    SCANU_JOIN_REQ=4098,
    SCANU_RAW_SEND_CFM=4102,
    SCANU_RAW_SEND_REQ=4101,
    SCANU_RESULT_IND=4100,
    SCANU_START_CFM=4097,
    SCANU_START_REQ=4096
} anon_enum_16.conflict2266;

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

typedef union anon_union.conflict61dd_for_specDat anon_union.conflict61dd_for_specDat, *Panon_union.conflict61dd_for_specDat;

typedef struct cipher_key_buf cipher_key_buf, *Pcipher_key_buf;

typedef struct cipher_key_buf cipher_key_buf_t;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

typedef struct apSpecificData_t apSpecificData_t, *PapSpecificData_t;

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef struct BufferDesc BufferDesc_t;

typedef struct ChanBandInfo_t ChanBandInfo_t, *PChanBandInfo_t;

typedef union anon_union.conflict45ea_for_intf anon_union.conflict45ea_for_intf, *Panon_union.conflict45ea_for_intf;

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

struct AkmSuite_t { // DWARF DIE: 39bd
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct MIC_Error_t { // DWARF DIE: 5593
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

struct SecurityParams_t { // DWARF DIE: 39fd
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

struct customMIB_RSNStats_t { // DWARF DIE: 55d0
    UINT8 TKIPICVErrors;
    UINT8 TKIPLocalMICFailures;
    UINT8 TKIPCounterMeasuresInvoked;
};

struct BandConfig_t { // DWARF DIE: 4e8a
    enum ChanBand_e chanBand:2;
    enum ChanWidth_e chanWidth:2;
    enum Chan2Offset_e chan2Offset:2;
    enum ScanMode_e scanMode:2;
};

struct ChanBandInfo_t { // DWARF DIE: 4ee6
    struct BandConfig_t bandConfig;
    UINT8 chanNum;
};

struct apSpecificData_t { // DWARF DIE: 6181
    struct apInfo_t * apInfo;
    BufferDesc_t * apInfoBuffDesc;
    struct ChanBandInfo_t chanBandInfo;
    undefined field_0xa;
    undefined field_0xb;
    struct staData_t staData;
};

union anon_union.conflict45ea_for_intf { // DWARF DIE: 45ea
    uint32 Interface;
};

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 4c2a
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

struct RSNConfig_t { // DWARF DIE: 54a5
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

struct keyMgmtInfoSta_t { // DWARF DIE: 560d
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

struct IEEEtypes_SsIdElement_t { // DWARF DIE: 4b42
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    IEEEtypes_SsId_t SsId;
};

struct supplicantData { // DWARF DIE: 5a68
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

struct eapolHskData_t { // DWARF DIE: 53d0
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 5400
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 541a
    union ckd ckd;
};

struct cipher_key_buf { // DWARF DIE: 5441
    struct cipher_key_t cipher_key;
};

union anon_union.conflict61dd_for_specDat { // DWARF DIE: 61dd
    struct apSpecificData_t apData;
};

struct cm_ConnectionInfo { // DWARF DIE: 460c
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
    union anon_union.conflict61dd_for_specDat specDat;
    cipher_key_buf_t TxRxCipherKeyBuf;
};

struct BufferDesc { // DWARF DIE: 46c9
    union anon_union.conflict45ea_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct txl_frame_desc_tag txl_frame_desc_tag, *Ptxl_frame_desc_tag;

typedef struct txl_frame_cfm_tag txl_frame_cfm_tag, *Ptxl_frame_cfm_tag;

struct txl_frame_cfm_tag { // DWARF DIE: 359d
    void (* cfm_func)(void *, uint32_t);
    void * env;
};

struct txl_frame_desc_tag { // DWARF DIE: 35c5
    struct txdesc txdesc;
    struct txl_frame_cfm_tag cfm;
    uint8_t type;
    _Bool postponed;
    _Bool keep_desc;
    undefined field_0x2d7;
};

typedef struct txl_frame_env_tag txl_frame_env_tag, *Ptxl_frame_env_tag;

struct txl_frame_env_tag { // DWARF DIE: 3619
    struct co_list desc_free;
    struct co_list desc_done;
};

typedef struct bam_baw bam_baw, *Pbam_baw;

struct bam_baw { // DWARF DIE: 2698
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

struct bam_env_tag { // DWARF DIE: 270b
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

typedef struct chan_env_tag chan_env_tag, *Pchan_env_tag;

typedef struct chan_ctxt_tag chan_ctxt_tag, *Pchan_ctxt_tag;

typedef struct mm_chan_ctxt_add_req mm_chan_ctxt_add_req, *Pmm_chan_ctxt_add_req;

struct chan_env_tag { // DWARF DIE: 408c
    struct co_list list_free_ctxt;
    struct co_list list_sched_ctxt;
    struct co_list list_tbtt;
    struct co_list list_tbtt_delay;
    struct chan_ctxt_tag * current_channel;
    struct chan_ctxt_tag * chan_switch;
    struct mm_timer_tag tmr_tbtt_switch;
    struct mm_timer_tag tmr_cde;
    struct mm_timer_tag tmr_ctxt_op;
    struct mm_timer_tag tmr_conn_less;
    uint32_t cde_dur_us;
    uint32_t cde_time;
    uint8_t status;
    uint8_t cfm_cnt;
    uint8_t nb_sched_ctxt;
    uint8_t pm;
};

struct mm_chan_ctxt_add_req { // DWARF DIE: 1fe2
    uint8_t band;
    uint8_t type;
    uint16_t prim20_freq;
    uint16_t center1_freq;
    uint16_t center2_freq;
    int8_t tx_power;
    undefined field_0x9;
};

struct chan_ctxt_tag { // DWARF DIE: 3ffc
    struct co_list_hdr list_hdr;
    struct mm_chan_ctxt_add_req channel;
    ke_task_id_t taskid;
    uint16_t nb_slots;
    uint16_t nb_rem_slots;
    uint16_t nb_res_slots;
    uint8_t status;
    uint8_t idx;
    uint8_t nb_linked_vif;
    uint8_t vif_index;
    undefined field_0x1a;
    undefined field_0x1b;
};

typedef struct chan_tbtt_tag chan_tbtt_tag, *Pchan_tbtt_tag;

struct chan_tbtt_tag { // DWARF DIE: 3fad
    struct co_list_hdr list_hdr;
    uint32_t time;
    uint8_t vif_index;
    uint8_t priority;
    uint8_t status;
    undefined field_0xb;
};

typedef struct mblock_free mblock_free, *Pmblock_free;

struct mblock_free { // DWARF DIE: 32c1
};

typedef struct scan_start_req scan_start_req, *Pscan_start_req;

struct scan_start_req { // DWARF DIE: 221d
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 902
};

typedef struct cm_ConnectionInfo cm_ConnectionInfo_t;

typedef union anon_union.conflict61dd anon_union.conflict61dd, *Panon_union.conflict61dd;

union anon_union.conflict61dd { // DWARF DIE: 61dd
    struct apSpecificData_t apData;
};

typedef struct mobility_domain mobility_domain, *Pmobility_domain;

struct mobility_domain { // DWARF DIE: 3afe
    uint16_t mdid;
    uint8_t ft_capability_policy;
    undefined field_0x3;
};

typedef struct me_env_tag me_env_tag, *Pme_env_tag;

typedef struct mac_htcapability mac_htcapability, *Pmac_htcapability;

typedef struct me_chan_config_req me_chan_config_req, *Pme_chan_config_req;

struct me_chan_config_req { // DWARF DIE: 2e78
    struct scan_chan_tag chan2G4[14];
    struct scan_chan_tag chan5G[28];
    uint8_t chan2G4_cnt;
    uint8_t chan5G_cnt;
};

struct mac_htcapability { // DWARF DIE: bd5
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

struct me_env_tag { // DWARF DIE: 3a6a
    uint32_t active_vifs;
    uint32_t ps_disable_vifs;
    ke_task_id_t requester_id;
    undefined field_0xa;
    undefined field_0xb;
    struct mac_htcapability ht_cap;
    uint16_t tx_lft;
    _Bool ht_supported;
    undefined field_0x2f;
    struct me_chan_config_req chan;
    uint8_t stbc_nss;
    uint8_t phy_bw_max;
    _Bool ps_on;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
};

typedef struct mac_bss_info mac_bss_info, *Pmac_bss_info;

typedef struct mac_rateset mac_rateset, *Pmac_rateset;

typedef struct mac_edca_param_set mac_edca_param_set, *Pmac_edca_param_set;

struct mac_edca_param_set { // DWARF DIE: c9d
    uint8_t qos_info;
    uint8_t acm;
    undefined field_0x2;
    undefined field_0x3;
    uint32_t ac_param[4];
};

struct mac_rateset { // DWARF DIE: a82
    uint8_t length;
    uint8_t array[12];
};

struct mac_bss_info { // DWARF DIE: 3b26
    struct mac_htcapability ht_cap;
    struct mac_addr bssid;
    struct mac_ssid ssid;
    uint16_t bsstype;
    undefined field_0x4a;
    undefined field_0x4b;
    struct scan_chan_tag * chan;
    uint16_t center_freq1;
    uint16_t center_freq2;
    uint16_t beacon_period;
    uint16_t cap_info;
    struct mac_rateset rate_set;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    struct mac_edca_param_set edca_param;
    int8_t rssi;
    int8_t ppm_rel;
    int8_t ppm_abs;
    uint8_t high_11b_rate;
    uint16_t prot_status;
    uint8_t bw;
    uint8_t phy_bw;
    uint8_t power_constraint;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    uint32_t valid_flags;
    struct mobility_domain mde;
    _Bool is_supplicant_enabled;
    struct SecurityMode_t wpa_wpa2_wep;
    struct Cipher_t wpa_mcstCipher;
    struct Cipher_t wpa_ucstCipher;
    struct Cipher_t rsn_mcstCipher;
    struct Cipher_t rsn_ucstCipher;
    _Bool is_pmf_required;
    _Bool is_wpa2_prefered;
    uint8_t rsn_wpa_ie[32];
    uint8_t rsn_wpa_ie_len;
    uint16_t beacon_interval;
    uint16_t aid_bitmap;
    uint16_t max_listen_interval;
    uint8_t sec_type;
    undefined field_0xc1;
    undefined field_0xc2;
    undefined field_0xc3;
};

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

struct ke_msg_handler { // DWARF DIE: 107b
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 10a7
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct anon_struct.conflictaca anon_struct.conflictaca, *Panon_struct.conflictaca;

struct anon_struct.conflictaca { // DWARF DIE: aca
    uint32_t tx_key[2];
    uint32_t rx_key[2];
};

typedef struct key_info_tag key_info_tag, *Pkey_info_tag;

typedef ulonglong uint64_t;

typedef union anon_union.conflictb2a_for_u anon_union.conflictb2a_for_u, *Panon_union.conflictb2a_for_u;

typedef struct anon_struct.conflictb01 anon_struct.conflictb01, *Panon_struct.conflictb01;

struct anon_struct.conflictb01 { // DWARF DIE: b01
    uint32_t key[4];
};

union anon_union.conflictb2a_for_u { // DWARF DIE: b2a
    struct anon_struct.conflictaca mic;
    struct anon_struct.conflictb01 mfp;
};

struct key_info_tag { // DWARF DIE: b4f
    uint64_t rx_pn[9];
    uint64_t tx_pn;
    union anon_union.conflictb2a_for_u u;
    uint8_t cipher;
    uint8_t key_idx;
    uint8_t hw_key_idx;
    _Bool valid;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
};

typedef struct mac_scan_result mac_scan_result, *Pmac_scan_result;

struct mac_scan_result { // DWARF DIE: cd6
    struct mac_addr bssid;
    struct mac_ssid ssid;
    uint16_t bsstype;
    undefined field_0x2a;
    undefined field_0x2b;
    struct scan_chan_tag * chan;
    uint16_t beacon_period;
    uint16_t cap_info;
    _Bool valid_flag;
    int8_t rssi;
    int8_t ppm_rel;
    int8_t ppm_abs;
};

typedef struct mac_vhtcapability mac_vhtcapability, *Pmac_vhtcapability;

struct mac_vhtcapability { // DWARF DIE: c48
    uint32_t vht_capa_info;
    uint16_t rx_mcs_map;
    uint16_t rx_highest;
    uint16_t tx_mcs_map;
    uint16_t tx_highest;
};

typedef union anon_union.conflictb2a anon_union.conflictb2a, *Panon_union.conflictb2a;

union anon_union.conflictb2a { // DWARF DIE: b2a
    struct anon_struct.conflictaca mic;
    struct anon_struct.conflictb01 mfp;
};

typedef struct mac_sta_info mac_sta_info, *Pmac_sta_info;

struct mac_sta_info { // DWARF DIE: dbe
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

typedef enum anon_enum_8.conflict985 {
    AC_BE=1,
    AC_BK=0,
    AC_MAX=4,
    AC_MAX_TYPES=4,
    AC_VI=2,
    AC_VO=3,
    BROADCAST_STA_IDX_MAX=11,
    BROADCAST_STA_IDX_MIN=10,
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
    PORT_CLOSED=0,
    PORT_CONTROLED=1,
    PORT_OPEN=2,
    SCANU_IDLE=0,
    SCANU_SCANNING=1,
    SCANU_STATE_MAX=2,
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
    TX_CUSTOM=4,
    TX_DEFAULT_24G=0,
    TX_DEFAULT_5G=1,
    TX_DEFAULT_NDP=3,
    TX_DEFAULT_NDPA_BRP=2,
    VIF_AP=2,
    VIF_IBSS=1,
    VIF_MESH_POINT=3,
    VIF_STA=0,
    VIF_UNKNOWN=4,
    WMM_AC_BE=0,
    WMM_AC_BK=1,
    WMM_AC_VI=2,
    WMM_AC_VO=3
} anon_enum_8.conflict985;

typedef struct me_set_ps_disable_req me_set_ps_disable_req, *Pme_set_ps_disable_req;

struct me_set_ps_disable_req { // DWARF DIE: 2f02
    _Bool ps_disable;
    uint8_t vif_idx;
};

typedef struct me_set_active_req me_set_active_req, *Pme_set_active_req;

struct me_set_active_req { // DWARF DIE: 2eda
    _Bool active;
    uint8_t vif_idx;
};

typedef struct rxu_mgt_ind rxu_mgt_ind, *Prxu_mgt_ind;

struct rxu_mgt_ind { // DWARF DIE: 3ed5
    uint16_t length;
    uint16_t framectrl;
    uint16_t center_freq;
    uint8_t band;
    uint8_t sta_idx;
    uint8_t inst_nbr;
    uint8_t sa[6];
    undefined field_0xf;
    uint32_t tsflo;
    uint32_t tsfhi;
    int8_t rssi;
    int8_t ppm_abs;
    int8_t ppm_rel;
    uint8_t data_rate;
    uint32_t[0] payload;
};

typedef uint wint_t;

typedef long int32_t;

typedef int32_t BaseType_t;

typedef struct rxu_cntrl_env_tag rxu_cntrl_env_tag, *Prxu_cntrl_env_tag;

typedef struct rx_cntrl_rx_status rx_cntrl_rx_status, *Prx_cntrl_rx_status;

typedef struct rx_cntrl_ipcdesc rx_cntrl_ipcdesc, *Prx_cntrl_ipcdesc;

typedef struct rx_cntrl_dupli rx_cntrl_dupli, *Prx_cntrl_dupli;

typedef struct rx_cntrl_pm_mon rx_cntrl_pm_mon, *Prx_cntrl_pm_mon;

struct rx_cntrl_pm_mon { // DWARF DIE: 2585
    struct mac_addr addr;
    uint8_t pm_state;
    _Bool mon;
};

struct rx_cntrl_dupli { // DWARF DIE: 255a
    struct mac_addr last_src_addr;
    uint16_t last_seq_cntl;
};

struct rx_cntrl_ipcdesc { // DWARF DIE: 253d
    uint32_t host_id;
};

struct rx_cntrl_rx_status { // DWARF DIE: 2442
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

struct rxu_cntrl_env_tag { // DWARF DIE: 25be
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

typedef struct mac_hdr mac_hdr, *Pmac_hdr;

struct mac_hdr { // DWARF DIE: 1335
    uint16_t fctl;
    uint16_t durid;
    struct mac_addr addr1;
    struct mac_addr addr2;
    struct mac_addr addr3;
    uint16_t seq;
};

typedef union anon_union.conflict5ae0 anon_union.conflict5ae0, *Panon_union.conflict5ae0;

union anon_union.conflict5ae0 { // DWARF DIE: 5ae0
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

typedef struct pmkElement_t pmkElement_t, *PpmkElement_t;

typedef union anon_union.conflict5ae0_for_key anon_union.conflict5ae0_for_key, *Panon_union.conflict5ae0_for_key;

typedef char SINT8;

union anon_union.conflict5ae0_for_key { // DWARF DIE: 5ae0
    IEEEtypes_MacAddr_t Bssid;
    char Ssid[32];
};

struct pmkElement_t { // DWARF DIE: 5b12
    union anon_union.conflict5ae0_for_key key;
    UINT8 PMK[32];
    UINT8 length;
    UINT8 psk_length;
    SINT8 replacementRank;
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf3_for___value anon_union.conflictf3_for___value, *Panon_union.conflictf3_for___value;

union anon_union.conflictf3_for___value { // DWARF DIE: f3
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 125
    int __count;
    union anon_union.conflictf3_for___value __value;
};

typedef union anon_union.conflictf3 anon_union.conflictf3, *Panon_union.conflictf3;

union anon_union.conflictf3 { // DWARF DIE: f3
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

struct la_mem_format { // DWARF DIE: 14af
    uint32_t word[4];
};

typedef struct dma_env_tag dma_env_tag, *Pdma_env_tag;

struct dma_env_tag { // DWARF DIE: 1429
    struct dma_desc * last_dma[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

struct mm_timer_env_tag { // DWARF DIE: 23ed
    struct co_list prog;
};

typedef struct sm_connect_req sm_connect_req, *Psm_connect_req;

struct sm_connect_req { // DWARF DIE: 1143
    struct mac_ssid ssid;
    struct mac_addr bssid;
    struct scan_chan_tag chan;
    undefined field_0x2e;
    undefined field_0x2f;
    uint32_t flags;
    uint16_t ctrl_port_ethertype;
    uint16_t ie_len;
    uint16_t listen_interval;
    _Bool dont_wait_bcmc;
    uint8_t auth_type;
    uint8_t uapsd_queues;
    uint8_t vif_idx;
    undefined field_0x3e;
    undefined field_0x3f;
    uint32_t ie_buf[64];
    _Bool is_supplicant_enabled;
    uint8_t phrase[64];
    uint8_t phrase_pmk[64];
    undefined field_0x1c1;
    undefined field_0x1c2;
    undefined field_0x1c3;
};

typedef struct sm_disconnect_ind sm_disconnect_ind, *Psm_disconnect_ind;

struct sm_disconnect_ind { // DWARF DIE: 3da9
    uint16_t reason_code;
    uint8_t vif_idx;
    _Bool ft_over_ds;
};

typedef enum sm_state_tag {
    SM_ACTIVATING=7,
    SM_ASSOCIATING=6,
    SM_AUTHENTICATING=5,
    SM_BSS_PARAM_SETTING=4,
    SM_DISCONNECTING=8,
    SM_IDLE=0,
    SM_JOINING=2,
    SM_SCANNING=1,
    SM_STATE_MAX=9,
    SM_STA_ADDING=3
} sm_state_tag;

typedef enum sm_msg_tag {
    SM_CONNECT_CFM=6145,
    SM_CONNECT_IND=6146,
    SM_CONNECT_REQ=6144,
    SM_DISCONNECT_CFM=6148,
    SM_DISCONNECT_IND=6149,
    SM_DISCONNECT_REQ=6147,
    SM_RSP_TIMEOUT_IND=6150
} sm_msg_tag;

typedef struct sm_connect_ind sm_connect_ind, *Psm_connect_ind;

struct sm_connect_ind { // DWARF DIE: 1223
    uint16_t status_code;
    struct mac_addr bssid;
    _Bool roamed;
    uint8_t vif_idx;
    uint8_t ap_idx;
    uint8_t ch_idx;
    _Bool qos;
    uint8_t acm;
    uint16_t assoc_req_ie_len;
    uint16_t assoc_rsp_ie_len;
    undefined field_0x12;
    undefined field_0x13;
    uint32_t assoc_ie_buf[200];
    uint16_t aid;
    uint8_t band;
    undefined field_0x337;
    uint16_t center_freq;
    uint8_t width;
    undefined field_0x33b;
    uint32_t center_freq1;
    uint32_t center_freq2;
    uint32_t ac_param[4];
};

typedef struct rx_swdesc rx_swdesc, *Prx_swdesc;

typedef struct rx_dmadesc rx_dmadesc, *Prx_dmadesc;

typedef struct rx_payloaddesc rx_payloaddesc, *Prx_payloaddesc;

typedef struct rx_pbd rx_pbd, *Prx_pbd;

typedef struct rx_hd rx_hd, *Prx_hd;

typedef struct phy_channel_info phy_channel_info, *Pphy_channel_info;

struct rx_swdesc { // DWARF DIE: 1863
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

struct phy_channel_info { // DWARF DIE: 1487
    uint32_t info1;
    uint32_t info2;
};

struct rx_pbd { // DWARF DIE: 18f8
    uint32_t upattern;
    uint32_t next;
    uint32_t datastartptr;
    uint32_t dataendptr;
    uint16_t bufstatinfo;
    uint16_t reserved;
};

struct rx_hd { // DWARF DIE: 1758
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

struct rx_payloaddesc { // DWARF DIE: 19cb
    struct rx_pbd pbd;
    uint32_t pd_status;
    uint32_t * buffer_rx;
    void * pbuf_holder[6];
};

struct rx_dmadesc { // DWARF DIE: 195b
    struct rx_hd hd;
    struct phy_channel_info phy_info;
    uint32_t flags;
    uint32_t pattern;
    uint32_t payl_offset;
    uint32_t reserved_pad[2];
    uint32_t use_in_tcpip;
};

typedef uchar uint8;

typedef long SINT32;

typedef struct mm_sta_del_req mm_sta_del_req, *Pmm_sta_del_req;

struct mm_sta_del_req { // DWARF DIE: 1fc5
    uint8_t sta_idx;
};

typedef struct mm_set_edca_req mm_set_edca_req, *Pmm_set_edca_req;

struct mm_set_edca_req { // DWARF DIE: 1f45
    uint32_t ac_param;
    _Bool uapsd;
    uint8_t hw_queue;
    uint8_t inst_nbr;
    undefined field_0x7;
};

typedef enum mm_msg_tag {
    MM_ADD_IF_CFM=7,
    MM_ADD_IF_REQ=6,
    MM_BA_ADD_CFM=41,
    MM_BA_ADD_REQ=40,
    MM_BA_DEL_CFM=43,
    MM_BA_DEL_REQ=42,
    MM_BCN_CHANGE_CFM=64,
    MM_BCN_CHANGE_REQ=63,
    MM_BFMER_ENABLE_REQ=80,
    MM_CFG_RSSI_REQ=86,
    MM_CHANNEL_PRE_SWITCH_IND=69,
    MM_CHANNEL_SURVEY_IND=79,
    MM_CHANNEL_SWITCH_IND=68,
    MM_CHAN_CTXT_ADD_CFM=52,
    MM_CHAN_CTXT_ADD_REQ=51,
    MM_CHAN_CTXT_DEL_CFM=54,
    MM_CHAN_CTXT_DEL_REQ=53,
    MM_CHAN_CTXT_LINK_CFM=56,
    MM_CHAN_CTXT_LINK_REQ=55,
    MM_CHAN_CTXT_SCHED_CFM=62,
    MM_CHAN_CTXT_SCHED_REQ=61,
    MM_CHAN_CTXT_UNLINK_CFM=58,
    MM_CHAN_CTXT_UNLINK_REQ=57,
    MM_CHAN_CTXT_UPDATE_CFM=60,
    MM_CHAN_CTXT_UPDATE_REQ=59,
    MM_CONNECTION_LOSS_IND=67,
    MM_CSA_COUNTER_IND=78,
    MM_CSA_FINISH_IND=88,
    MM_CSA_TRAFFIC_IND=89,
    MM_DENOISE_REQ=48,
    MM_FORCE_IDLE_REQ=96,
    MM_KEY_ADD_CFM=37,
    MM_KEY_ADD_REQ=36,
    MM_KEY_DEL_CFM=39,
    MM_KEY_DEL_REQ=38,
    MM_MAX=99,
    MM_MONITOR_CFM=93,
    MM_MONITOR_CHANNEL_CFM=95,
    MM_MONITOR_CHANNEL_REQ=94,
    MM_MONITOR_REQ=92,
    MM_MU_GROUP_UPDATE_CFM=91,
    MM_MU_GROUP_UPDATE_REQ=90,
    MM_P2P_NOA_UPD_IND=85,
    MM_P2P_VIF_PS_CHANGE_IND=77,
    MM_PRIMARY_TBTT_IND=44,
    MM_PS_CHANGE_IND=73,
    MM_REMAIN_ON_CHANNEL_CFM=71,
    MM_REMAIN_ON_CHANNEL_EXP_IND=72,
    MM_REMAIN_ON_CHANNEL_REQ=70,
    MM_REMOVE_IF_CFM=9,
    MM_REMOVE_IF_REQ=8,
    MM_RESET_CFM=1,
    MM_RESET_REQ=0,
    MM_RSSI_STATUS_IND=87,
    MM_SCAN_CHANNEL_END_IND=98,
    MM_SCAN_CHANNEL_START_IND=97,
    MM_SECONDARY_TBTT_IND=45,
    MM_SET_BASIC_RATES_CFM=23,
    MM_SET_BASIC_RATES_REQ=22,
    MM_SET_BEACON_INT_CFM=21,
    MM_SET_BEACON_INT_REQ=20,
    MM_SET_BSSID_CFM=25,
    MM_SET_BSSID_REQ=24,
    MM_SET_CHANNEL_CFM=17,
    MM_SET_CHANNEL_REQ=16,
    MM_SET_DTIM_CFM=19,
    MM_SET_DTIM_REQ=18,
    MM_SET_EDCA_CFM=27,
    MM_SET_EDCA_REQ=26,
    MM_SET_FILTER_CFM=15,
    MM_SET_FILTER_REQ=14,
    MM_SET_IDLE_CFM=35,
    MM_SET_IDLE_REQ=34,
    MM_SET_MODE_CFM=29,
    MM_SET_MODE_REQ=28,
    MM_SET_P2P_NOA_CFM=83,
    MM_SET_P2P_NOA_REQ=81,
    MM_SET_P2P_OPPPS_CFM=84,
    MM_SET_P2P_OPPPS_REQ=82,
    MM_SET_POWER_CFM=47,
    MM_SET_POWER_REQ=46,
    MM_SET_PS_MODE_CFM=50,
    MM_SET_PS_MODE_REQ=49,
    MM_SET_PS_OPTIONS_CFM=76,
    MM_SET_PS_OPTIONS_REQ=75,
    MM_SET_SLOTTIME_CFM=33,
    MM_SET_SLOTTIME_REQ=32,
    MM_SET_VIF_STATE_CFM=31,
    MM_SET_VIF_STATE_REQ=30,
    MM_START_CFM=3,
    MM_START_REQ=2,
    MM_STA_ADD_CFM=11,
    MM_STA_ADD_REQ=10,
    MM_STA_DEL_CFM=13,
    MM_STA_DEL_REQ=12,
    MM_TIM_UPDATE_CFM=66,
    MM_TIM_UPDATE_REQ=65,
    MM_TRAFFIC_REQ_IND=74,
    MM_VERSION_CFM=5,
    MM_VERSION_REQ=4
} mm_msg_tag;

typedef struct mm_set_bssid_req mm_set_bssid_req, *Pmm_set_bssid_req;

struct mm_set_bssid_req { // DWARF DIE: 1f1a
    struct mac_addr bssid;
    uint8_t inst_nbr;
};

typedef struct mm_set_basic_rates_req mm_set_basic_rates_req, *Pmm_set_basic_rates_req;

struct mm_set_basic_rates_req { // DWARF DIE: 1ee1
    uint32_t rates;
    uint8_t inst_nbr;
    uint8_t band;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct mm_set_vif_state_req mm_set_vif_state_req, *Pmm_set_vif_state_req;

struct mm_set_vif_state_req { // DWARF DIE: 1f8c
    uint16_t aid;
    _Bool active;
    uint8_t inst_nbr;
};

typedef enum mm_state_tag {
    MM_ACTIVE=1,
    MM_GOING_TO_IDLE=2,
    MM_HOST_BYPASSED=3,
    MM_IDLE=0,
    MM_STATE_MAX=4
} mm_state_tag;

typedef struct mm_set_beacon_int_req mm_set_beacon_int_req, *Pmm_set_beacon_int_req;

struct mm_set_beacon_int_req { // DWARF DIE: 1eb6
    uint16_t beacon_int;
    uint8_t inst_nbr;
    undefined field_0x3;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: 14f7
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct ke_env_tag ke_env_tag, *Pke_env_tag;

typedef uint32_t evt_field_t;

struct ke_env_tag { // DWARF DIE: 3272
    evt_field_t evt_field;
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * mblock_first;
};

typedef struct co_read16_struct co_read16_struct, *Pco_read16_struct;

struct co_read16_struct { // DWARF DIE: 80b0
    uint16_t val;
};

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t { // DWARF DIE: 4fa6
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 4fe3
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

struct EAPOL_KeyMsg_t { // DWARF DIE: 50a9
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

struct ether_hdr_t { // DWARF DIE: 4f20
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 516b
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef union anon_union.conflict45ea anon_union.conflict45ea, *Panon_union.conflict45ea;

union anon_union.conflict45ea { // DWARF DIE: 45ea
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef uint16_t ke_state_t;

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg { // DWARF DIE: f42
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t[0] param;
};

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef struct vif_info_tag vif_info_tag, *Pvif_info_tag;

typedef union anon_union.conflict4371_for_u anon_union.conflict4371_for_u, *Panon_union.conflict4371_for_u;

typedef struct anon_struct.conflict41a9 anon_struct.conflict41a9, *Panon_struct.conflict41a9;

typedef struct anon_struct.conflict4276 anon_struct.conflict4276, *Panon_struct.conflict4276;

struct anon_struct.conflict41a9 { // DWARF DIE: 41a9
    uint16_t listen_interval;
    _Bool dont_wait_bcmc;
    uint8_t ps_retry;
    uint8_t ap_id;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    uint32_t uapsd_last_rxtx;
    uint8_t uapsd_queues;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    uint32_t mon_last_tx;
    uint32_t mon_last_crc;
    uint8_t beacon_loss_cnt;
    int8_t rssi;
    int8_t rssi_thold;
    uint8_t rssi_hyst;
    _Bool rssi_status;
    uint8_t csa_count;
    _Bool csa_occured;
    undefined field_0x1f;
};

struct anon_struct.conflict4276 { // DWARF DIE: 4276
    uint32_t dummy;
    struct txl_frame_desc_tag bcn_desc;
    uint16_t bcn_len;
    uint16_t tim_len;
    uint16_t tim_bitmap_set;
    uint16_t bcn_int;
    uint8_t bcn_tbtt_ratio;
    uint8_t bcn_tbtt_cnt;
    _Bool bcn_configured;
    uint8_t dtim_count;
    uint8_t tim_n1;
    uint8_t tim_n2;
    uint8_t bc_mc_status;
    uint8_t csa_count;
    uint8_t csa_oft[2];
    uint8_t ps_sta_cnt;
    undefined field_0x2ef;
    uint16_t ctrl_port_ethertype;
    undefined field_0x2f2;
    undefined field_0x2f3;
};

union anon_union.conflict4371_for_u { // DWARF DIE: 4371
    struct anon_struct.conflict41a9 sta;
    struct anon_struct.conflict4276 ap;
};

struct vif_info_tag { // DWARF DIE: 4394
    struct co_list_hdr list_hdr;
    uint32_t prevent_sleep;
    uint32_t txq_params[4];
    struct mm_timer_tag tbtt_timer;
    struct mm_timer_tag tmr_bcn_to;
    struct mac_addr bssid;
    undefined field_0x3e;
    undefined field_0x3f;
    struct chan_ctxt_tag * chan_ctxt;
    struct chan_tbtt_tag tbtt_switch;
    struct mac_addr mac_addr;
    uint8_t type;
    uint8_t index;
    _Bool active;
    int8_t tx_power;
    int8_t user_tx_power;
    undefined field_0x5b;
    union anon_union.conflict4371_for_u u;
    struct co_list sta_list;
    struct mac_bss_info bss_info;
    undefined field_0x41c;
    undefined field_0x41d;
    undefined field_0x41e;
    undefined field_0x41f;
    struct key_info_tag key_info[4];
    struct key_info_tag * default_key;
    uint32_t flags;
    struct mm_chan_ctxt_add_req csa_channel;
    undefined field_0x5d2;
    undefined field_0x5d3;
    undefined field_0x5d4;
    undefined field_0x5d5;
    undefined field_0x5d6;
    undefined field_0x5d7;
};

typedef union anon_union.conflict4371 anon_union.conflict4371, *Panon_union.conflict4371;

union anon_union.conflict4371 { // DWARF DIE: 4371
    struct anon_struct.conflict41a9 sta;
    struct anon_struct.conflict4276 ap;
};

typedef struct vif_mgmt_env_tag vif_mgmt_env_tag, *Pvif_mgmt_env_tag;

struct vif_mgmt_env_tag { // DWARF DIE: 44cf
    struct co_list free_list;
    struct co_list used_list;
    uint8_t vif_sta_cnt;
    uint8_t vif_ap_cnt;
    uint8_t low_bcn_int_idx;
    undefined field_0x13;
};

typedef struct hal_dma_env_tag hal_dma_env_tag, *Phal_dma_env_tag;

struct hal_dma_env_tag { // DWARF DIE: 211b
    struct co_list prog[2];
    struct co_list free_gp_dma_descs;
    uint16_t lli_cnt[2];
};

typedef struct hal_dma_desc_tag hal_dma_desc_tag, *Phal_dma_desc_tag;

struct hal_dma_desc_tag { // DWARF DIE: 20d4
    struct co_list_hdr hdr;
    struct dma_desc * dma_desc;
    void (* cb)(void *, int);
    void * env;
};

typedef struct sta_mgmt_ba_info sta_mgmt_ba_info, *Psta_mgmt_ba_info;

struct sta_mgmt_ba_info { // DWARF DIE: 2a75
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

typedef struct rc_sta_stats rc_sta_stats, *Prc_sta_stats;

typedef struct rc_rate_stats rc_rate_stats, *Prc_rate_stats;

typedef struct step step, *Pstep;

typedef union anon_union.conflict2d91_for_rate_map anon_union.conflict2d91_for_rate_map, *Panon_union.conflict2d91_for_rate_map;

union anon_union.conflict2d91_for_rate_map { // DWARF DIE: 2d91
    uint8_t ht[4];
};

struct rc_rate_stats { // DWARF DIE: 2cf4
    uint16_t attempts;
    uint16_t success;
    uint16_t probability;
    uint16_t rate_config;
    uint8_t sample_skipped;
    _Bool old_prob_available;
    uint8_t n_retry;
    _Bool rate_allowed;
};

struct step { // DWARF DIE: 2d6a
    uint32_t tp;
    uint16_t idx;
    undefined field_0x6;
    undefined field_0x7;
};

struct rc_sta_stats { // DWARF DIE: 290f
    uint32_t last_rc_time;
    struct rc_rate_stats rate_stats[10];
    struct step retry[4];
    struct step max_tp_2_trial;
    uint16_t ampdu_len;
    uint16_t ampdu_packets;
    uint32_t avg_ampdu_len;
    uint8_t sample_wait;
    uint8_t sample_slow;
    uint8_t trial_status;
    uint8_t info;
    uint8_t sw_retry_step;
    uint8_t format_mod;
    union anon_union.conflict2d91_for_rate_map rate_map;
    uint16_t rate_map_l;
    uint8_t mcs_max;
    uint8_t r_idx_min;
    uint8_t r_idx_max;
    uint8_t bw_max;
    uint8_t no_ss;
    uint8_t short_gi;
    uint8_t p_type;
    undefined field_0xbf;
    uint16_t no_samples;
    uint16_t max_amsdu_len;
    uint16_t curr_amsdu_len;
    uint16_t fixed_rate_cfg;
};

struct sta_pol_tbl_cntl { // DWARF DIE: 288c
    struct txl_buffer_control * buf_ctrl;
    struct rc_sta_stats * sta_stats;
    uint32_t prot_cfg;
    uint16_t ppdu_tx_cfg;
    uint8_t upd_field;
    undefined field_0xf;
};

struct sta_mgmt_sec_info { // DWARF DIE: 2851
    struct key_info_tag key_info;
    struct key_info_tag * pairwise_key;
    struct key_info_tag * * cur_key;
};

struct sta_info_tag { // DWARF DIE: 2ac4
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

struct sta_info_env_tag { // DWARF DIE: 2cad
    struct co_list free_sta_list;
};

typedef union anon_union.conflict2d91 anon_union.conflict2d91, *Panon_union.conflict2d91;

union anon_union.conflict2d91 { // DWARF DIE: 2d91
    uint8_t ht[4];
};

typedef struct sm_env_tag sm_env_tag, *Psm_env_tag;

struct sm_env_tag { // DWARF DIE: 10da
    struct sm_connect_req * connect_param;
    struct sm_connect_ind * connect_ind;
    struct co_list bss_config;
    _Bool join_passive;
    _Bool ft_over_ds;
    undefined field_0x12;
    undefined field_0x13;
    int exist_ssid_idx;
    struct mac_addr ft_old_bssid;
    undefined field_0x1e;
    undefined field_0x1f;
};

typedef struct scan_env_tag scan_env_tag, *Pscan_env_tag;

struct scan_env_tag { // DWARF DIE: 21c1
    struct hal_dma_desc_tag dma_desc;
    struct scan_start_req * param;
    uint32_t ds_ie;
    ke_task_id_t req_id;
    uint8_t chan_idx;
    _Bool abort;
};

typedef struct scan_probe_req_ie_tag scan_probe_req_ie_tag, *Pscan_probe_req_ie_tag;

struct scan_probe_req_ie_tag { // DWARF DIE: 217c
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
    uint32_t buf[50];
};

typedef struct txl_buffer_list_tag txl_buffer_list_tag, *Ptxl_buffer_list_tag;

struct txl_buffer_list_tag { // DWARF DIE: 33c9
    struct txl_buffer_tag * first;
    struct txl_buffer_tag * last;
};

typedef struct txl_buffer_hw_desc_tag txl_buffer_hw_desc_tag, *Ptxl_buffer_hw_desc_tag;

struct txl_buffer_hw_desc_tag { // DWARF DIE: 33a1
    struct dma_desc dma_desc;
    struct tx_pbd pbd;
};

typedef struct txl_buffer_idx_tag txl_buffer_idx_tag, *Ptxl_buffer_idx_tag;

struct txl_buffer_idx_tag { // DWARF DIE: 33f1
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

typedef union anon_union.conflict347a anon_union.conflict347a, *Panon_union.conflict347a;

union anon_union.conflict347a { // DWARF DIE: 347a
    struct tx_policy_tbl policy_tbl;
    struct tx_compressed_policy_tbl comp_pol_tbl;
};

typedef struct txl_buffer_env_tag txl_buffer_env_tag, *Ptxl_buffer_env_tag;

struct txl_buffer_env_tag { // DWARF DIE: 349c
    struct txl_buffer_idx_tag buf_idx[5][1];
    struct txl_buffer_list_tag list[5];
};

typedef union anon_union.conflict15f0 anon_union.conflict15f0, *Panon_union.conflict15f0;

union anon_union.conflict15f0 { // DWARF DIE: 15f0
    uint32_t datastartptr;
    uint32_t sec_user2_ptr;
};

typedef union anon_union.conflict15cb anon_union.conflict15cb, *Panon_union.conflict15cb;

union anon_union.conflict15cb { // DWARF DIE: 15cb
    uint32_t first_pbd_ptr;
    uint32_t sec_user1_ptr;
};

typedef union anon_union.conflict1615 anon_union.conflict1615, *Panon_union.conflict1615;

union anon_union.conflict1615 { // DWARF DIE: 1615
    uint32_t dataendptr;
    uint32_t sec_user3_ptr;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8cd_for__new anon_union.conflict8cd_for__new, *Panon_union.conflict8cd_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict741 anon_struct.conflict741, *Panon_struct.conflict741;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint { // DWARF DIE: 17b
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6f8
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6b3
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __tm { // DWARF DIE: 1eb
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

struct anon_struct.conflict741 { // DWARF DIE: 741
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

union anon_union.conflict8cd_for__new { // DWARF DIE: 8cd
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict741 _unused;
};

struct __sbuf { // DWARF DIE: 323
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 351
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

struct _on_exit_args { // DWARF DIE: 26e
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2c3
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4bd
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
    union anon_union.conflict8cd_for__new _new;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
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

typedef union anon_union.conflict8cd anon_union.conflict8cd, *Panon_union.conflict8cd;

union anon_union.conflict8cd { // DWARF DIE: 8cd
    struct anon_struct.conflict741 _reent;
    struct anon_struct.conflict741 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef struct IEEEtypes_WPAElement_t IEEEtypes_WPAElement_t, *PIEEEtypes_WPAElement_t;

struct IEEEtypes_WPAElement_t { // DWARF DIE: 4b94
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

struct IEEEtypes_RSNElement_t { // DWARF DIE: 4d0e
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

typedef struct scanu_env_tag scanu_env_tag, *Pscanu_env_tag;

struct scanu_env_tag { // DWARF DIE: 3df6
    struct scanu_start_req * param;
    struct hal_dma_desc_tag dma_desc;
    uint16_t result_cnt;
    undefined field_0x16;
    undefined field_0x17;
    struct mac_scan_result scan_result[6];
    ke_task_id_t src_id;
    _Bool joining;
    uint8_t band;
    struct mac_addr bssid;
    struct mac_ssid ssid;
};

typedef struct scanu_add_ie_tag scanu_add_ie_tag, *Pscanu_add_ie_tag;

struct scanu_add_ie_tag { // DWARF DIE: 3e95
    struct dma_desc dma_desc;
    uint32_t buf[50];
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 8026

uint16_t txl_get_seq_ctrl(void)

{
  _DAT_00000054 += 1;
  return (uint16_t)(_DAT_00000054 * 0x10);
}



// DWARF DIE: 7da6

void sm_delete_resources(vif_info_tag *vif)

{
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  int extraout_a0_01;
  undefined *extraout_a0_02;
  
  _L0();
  _LVL4();
  *extraout_a0 = 0;
  extraout_a0[1] = vif->index;
  _L0();
  if (vif->active != false) {
    FUN_00010078();
    *(undefined *)(extraout_a0_01 + 2) = 0;
    *(uint8_t *)(extraout_a0_01 + 3) = vif->index;
    _L0();
  }
  if (*(char *)&(vif->u).field_0x4 != -1) {
    FUN_000100a8();
    *extraout_a0_02 = *(undefined *)&(vif->u).field_0x4;
    _L0();
  }
  if (vif->chan_ctxt != (chan_ctxt_tag *)0x0) {
    FUN_000100c8();
  }
  *extraout_a0_00 = 0;
  extraout_a0_00[1] = vif->index;
  _L0();
  (vif->bss_info).valid_flags = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  undefined *extraout_a0_00;
  int extraout_a0_01;
  undefined *extraout_a0_02;
  
  _L0();
  _LVL4();
  *extraout_a0 = 0;
  extraout_a0[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010078();
    *(undefined *)(extraout_a0_01 + 2) = 0;
    *(undefined *)(extraout_a0_01 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(char *)(unaff_s0 + 0x60) != -1) {
    FUN_000100a8();
    *extraout_a0_02 = *(undefined *)(unaff_s0 + 0x60);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *extraout_a0_00 = 0;
  extraout_a0_00[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void _LVL4(void)

{
  int unaff_s0;
  undefined *extraout_a0;
  int extraout_a0_00;
  undefined *extraout_a0_01;
  undefined *unaff_s2;
  
  _LVL4();
  *unaff_s2 = 0;
  unaff_s2[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010078();
    *(undefined *)(extraout_a0_00 + 2) = 0;
    *(undefined *)(extraout_a0_00 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(char *)(unaff_s0 + 0x60) != -1) {
    FUN_000100a8();
    *extraout_a0_01 = *(undefined *)(unaff_s0 + 0x60);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *extraout_a0 = 0;
  extraout_a0[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  int extraout_a0;
  undefined *extraout_a0_00;
  
  _L0();
  if (*(char *)(unaff_s0 + 0x58) != '\0') {
    FUN_00010078();
    *(undefined *)(extraout_a0 + 2) = 0;
    *(undefined *)(extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x57);
    _L0();
  }
  if (*(char *)(unaff_s0 + 0x60) != -1) {
    FUN_000100a8();
    *extraout_a0_00 = *(undefined *)(unaff_s0 + 0x60);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void FUN_00010078(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  int extraout_a0;
  undefined *extraout_a0_00;
  
  FUN_00010078();
  *(undefined *)(extraout_a0 + 2) = 0;
  *(undefined *)(extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  if (*(char *)(unaff_s0 + 0x60) != -1) {
    FUN_000100a8();
    *extraout_a0_00 = *(undefined *)(unaff_s0 + 0x60);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  undefined *extraout_a0;
  
  _L0();
  if (*(char *)(unaff_s0 + 0x60) != -1) {
    FUN_000100a8();
    *extraout_a0 = *(undefined *)(unaff_s0 + 0x60);
    _L0();
  }
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void FUN_000100a8(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  undefined *extraout_a0;
  
  FUN_000100a8();
  *extraout_a0 = *(undefined *)(unaff_s0 + 0x60);
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  
  _L0();
  if (*(int *)(unaff_s0 + 0x40) != 0) {
    FUN_000100c8();
  }
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void FUN_000100c8(void)

{
  int unaff_s0;
  undefined *unaff_s1;
  
  FUN_000100c8();
  *unaff_s1 = 0;
  unaff_s1[1] = *(undefined *)(unaff_s0 + 0x57);
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x3e0) = 0;
  return;
}



// DWARF DIE: 8164

void sm_frame_tx_cfm_handler(void *env,uint32_t status)

{
  int extraout_a0;
  
  _L0();
  if (((status & 0x40030000) != 0) && (extraout_a0 - 5U < 2)) {
    FUN_00010122();
    *(undefined *)((int)env + 0x2d6) = 1;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  uint in_stack_0000000c;
  
  _L0();
  if (((in_stack_0000000c & 0x40030000) != 0) && (extraout_a0 - 5U < 2)) {
    FUN_00010122();
    *(undefined *)(unaff_s0 + 0x2d6) = 1;
  }
  return;
}



void FUN_00010122(void)

{
  int unaff_s0;
  undefined unaff_s1;
  
  FUN_00010122();
  *(undefined *)(unaff_s0 + 0x2d6) = unaff_s1;
  return;
}



// DWARF DIE: 7d7b

void sm_init(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7c29

void sm_get_bss_params(mac_addr **bssid,scan_chan_tag **chan)

{
  int iVar1;
  int iVar2;
  int iVar3;
  mac_addr *pmVar4;
  mac_addr *extraout_a0;
  mac_addr *extraout_a0_00;
  int index;
  
  iVar1 = iRam00000000;
  *bssid = (mac_addr *)0x0;
  *chan = (scan_chan_tag *)0x0;
  _L0();
  iVar2 = 0;
  pmVar4 = (mac_addr *)(iVar1 + 0x22);
  do {
    iVar3 = iVar2 + 1;
    _L0(iVar2,(uint)pmVar4->array[0]);
    pmVar4 = (mac_addr *)(pmVar4->array + 1);
    iVar2 = iVar3;
  } while (iVar3 != 3);
  if (((*(byte *)(iVar1 + 0x22) & 1) == 0) &&
     ((((*(byte *)(iVar1 + 0x22) != 0 || (*(char *)(iVar1 + 0x23) != '\0')) ||
       (*(char *)(iVar1 + 0x24) != '\0')) ||
      (((*(char *)(iVar1 + 0x25) != '\0' || (*(char *)(iVar1 + 0x26) != '\0')) ||
       (*(char *)(iVar1 + 0x27) != '\0')))))) {
    FUN_0001025a();
    *bssid = (mac_addr *)(iVar1 + 0x22);
    _L0();
    pmVar4 = extraout_a0_00;
    if (extraout_a0_00 == (mac_addr *)0x0) goto _L0;
  }
  else {
    FUN_000101ec();
    FUN_000101f8();
    FUN_0001020c();
    if (extraout_a0 == (mac_addr *)0x0) {
_L0:
      if (*(short *)(iVar1 + 0x28) != -1) {
        *chan = (scan_chan_tag *)(iVar1 + 0x28);
      }
      goto _L0;
    }
    pmVar4 = extraout_a0;
    if (false) {
      *bssid = extraout_a0;
      _DAT_00000014 = 0xffffffff;
    }
  }
  *chan = *(scan_chan_tag **)(pmVar4[7].array + 1);
_L0:
  FUN_00010232();
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  ushort *puVar2;
  ushort *extraout_a0;
  ushort *extraout_a0_00;
  ushort *unaff_s2;
  int *unaff_s4;
  int unaff_s5;
  ushort **unaff_s6;
  int in_stack_0000000c;
  
  _L0();
  puVar2 = unaff_s2;
  do {
    iVar1 = unaff_s1 + 1;
    _L0(unaff_s1,(uint)*puVar2);
    puVar2 = puVar2 + 1;
    unaff_s1 = iVar1;
  } while (iVar1 != 3);
  if (((*(byte *)(unaff_s0 + 0x22) & 1) == 0) &&
     ((((*(byte *)(unaff_s0 + 0x22) != 0 || (*(char *)(unaff_s0 + 0x23) != '\0')) ||
       (*(char *)(unaff_s0 + 0x24) != '\0')) ||
      (((*(char *)(unaff_s0 + 0x25) != '\0' || (*(char *)(unaff_s0 + 0x26) != '\0')) ||
       (*(char *)(unaff_s0 + 0x27) != '\0')))))) {
    FUN_0001025a();
    *unaff_s6 = unaff_s2;
    _L0();
    puVar2 = extraout_a0_00;
    if (extraout_a0_00 == (ushort *)0x0) goto _L0;
  }
  else {
    FUN_000101ec();
    FUN_000101f8();
    FUN_0001020c();
    if (extraout_a0 == (ushort *)0x0) {
_L0:
      if (*(short *)(unaff_s0 + 0x28) != -1) {
        *unaff_s4 = unaff_s0 + 0x28;
      }
      goto _L0;
    }
    puVar2 = extraout_a0;
    if (-1 < in_stack_0000000c) {
      *unaff_s6 = extraout_a0;
      *(int *)(unaff_s5 + 0x14) = in_stack_0000000c;
    }
  }
  *unaff_s4 = *(int *)(puVar2 + 0x16);
_L0:
  FUN_00010232();
  return;
}



void _L0(int param_1,uint param_2)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  ushort *unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int in_stack_0000000c;
  
  while( true ) {
    iVar1 = unaff_s1;
    _L0(param_1,param_2);
    unaff_s2 = unaff_s2 + 1;
    if (iVar1 == unaff_s7) break;
    param_2 = (uint)*unaff_s2;
    unaff_s1 = iVar1 + 1;
    param_1 = iVar1;
  }
  if (((*(byte *)(unaff_s0 + 0x22) & 1) == 0) &&
     ((((*(byte *)(unaff_s0 + 0x22) != 0 || (*(char *)(unaff_s0 + 0x23) != '\0')) ||
       (*(char *)(unaff_s0 + 0x24) != '\0')) ||
      (((*(char *)(unaff_s0 + 0x25) != '\0' || (*(char *)(unaff_s0 + 0x26) != '\0')) ||
       (*(char *)(unaff_s0 + 0x27) != '\0')))))) {
    FUN_0001025a();
    *unaff_s6 = unaff_s3;
    _L0();
    iVar1 = extraout_a0_00;
    if (extraout_a0_00 == 0) goto _L0;
  }
  else {
    FUN_000101ec();
    FUN_000101f8();
    FUN_0001020c();
    if (extraout_a0 == 0) {
_L0:
      if (*(short *)(unaff_s0 + 0x28) != -1) {
        *unaff_s4 = unaff_s0 + 0x28;
      }
      goto _L0;
    }
    iVar1 = extraout_a0;
    if (-1 < in_stack_0000000c) {
      *unaff_s6 = extraout_a0;
      *(int *)(unaff_s5 + 0x14) = in_stack_0000000c;
    }
  }
  *unaff_s4 = *(int *)(iVar1 + 0x2c);
_L0:
  FUN_00010232();
  return;
}



void FUN_000101ec(void)

{
  int unaff_s0;
  int extraout_a0;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int in_stack_0000000c;
  
  FUN_000101ec();
  FUN_000101f8();
  FUN_0001020c();
  if (extraout_a0 == 0) {
    if (*(short *)(unaff_s0 + 0x28) != -1) {
      *unaff_s4 = unaff_s0 + 0x28;
    }
  }
  else {
    if (-1 < in_stack_0000000c) {
      *unaff_s6 = extraout_a0;
      *(int *)(unaff_s5 + 0x14) = in_stack_0000000c;
    }
    *unaff_s4 = *(int *)(extraout_a0 + 0x2c);
  }
  FUN_00010232();
  return;
}



void FUN_000101f8(void)

{
  int unaff_s0;
  int extraout_a0;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int in_stack_0000000c;
  
  FUN_000101f8();
  FUN_0001020c();
  if (extraout_a0 == 0) {
    if (*(short *)(unaff_s0 + 0x28) != -1) {
      *unaff_s4 = unaff_s0 + 0x28;
    }
  }
  else {
    if (-1 < in_stack_0000000c) {
      *unaff_s6 = extraout_a0;
      *(int *)(unaff_s5 + 0x14) = in_stack_0000000c;
    }
    *unaff_s4 = *(int *)(extraout_a0 + 0x2c);
  }
  FUN_00010232();
  return;
}



void FUN_0001020c(void)

{
  int unaff_s0;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int in_stack_0000000c;
  
  FUN_0001020c();
  if (unaff_s1 == 0) {
    if (*(short *)(unaff_s0 + 0x28) != -1) {
      *unaff_s4 = unaff_s0 + 0x28;
    }
  }
  else {
    if (-1 < in_stack_0000000c) {
      *unaff_s6 = unaff_s1;
      *(int *)(unaff_s5 + 0x14) = in_stack_0000000c;
    }
    *unaff_s4 = *(int *)(unaff_s1 + 0x2c);
  }
  FUN_00010232();
  return;
}



void FUN_00010232(void)

{
  FUN_00010232();
  return;
}



void FUN_0001025a(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined4 unaff_s3;
  int *unaff_s4;
  undefined4 *unaff_s6;
  
  FUN_0001025a();
  *unaff_s6 = unaff_s3;
  _L0();
  if (extraout_a0 == 0) {
    if (*(short *)(unaff_s0 + 0x28) != -1) {
      *unaff_s4 = unaff_s0 + 0x28;
    }
  }
  else {
    *unaff_s4 = *(int *)(extraout_a0 + 0x2c);
  }
  FUN_00010232();
  return;
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  int *unaff_s4;
  
  _L0();
  if (extraout_a0 == 0) {
    if (*(short *)(unaff_s0 + 0x28) != -1) {
      *unaff_s4 = unaff_s0 + 0x28;
    }
  }
  else {
    *unaff_s4 = *(int *)(extraout_a0 + 0x2c);
  }
  FUN_00010232();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7ad1

void sm_scan_bss(mac_addr *bssid,scan_chan_tag *chan_1)

{
  undefined uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined2 uStack44;
  undefined2 uStack42;
  uint8_t chan_cnt [2];
  scan_chan_tag *chan [2];
  
  iVar4 = iRam00000000;
  iVar5 = 0x1000;
  _L0(_DAT_0000012c);
  uVar1 = *(undefined *)(iVar4 + 0x3d);
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(undefined *)(iVar5 + 0x14e) = uVar1;
  *(undefined2 *)(iVar5 + 0x14c) = 0;
  FUN_000102d4(_DAT_0000012c);
  *(undefined *)(iVar5 + 0x150) = 1;
  _L46(_DAT_0000012c);
  uVar3 = _DAT_0000012c;
  if (chan_1 == (scan_chan_tag *)0x0) {
    _chan_cnt = 0x30;
    chan[0] = (scan_chan_tag *)0x84;
    *(undefined *)(iVar5 + 0x14f) = 0;
    puVar6 = &uStack44;
    uStack44 = uVar3;
    piVar7 = (int *)chan_cnt;
    do {
      for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)puVar6; iVar4 += 1) {
        if ((*(byte *)(iVar4 * 6 + *piVar7 + 3) & 2) == 0) {
          bVar2 = *(byte *)(iVar5 + 0x14f);
          *(byte *)(iVar5 + 0x14f) = bVar2 + 1;
          FUN_00010396((uint)bVar2 * 6 + iVar5,6);
        }
      }
      puVar6 = (undefined2 *)((int)puVar6 + 1);
      piVar7 = piVar7 + 1;
    } while (puVar6 != &uStack42);
  }
  else {
    FUN_00010306();
    *(undefined *)(iVar5 + 0x14f) = 1;
  }
  FUN_00010316();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined2 uRam0000012c)

{
  undefined uVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_s1;
  int iVar4;
  int in_a0;
  undefined2 *puVar5;
  int unaff_s3;
  int *piVar6;
  undefined2 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0(uRam0000012c);
  uVar1 = *(undefined *)(unaff_s3 + 0x3d);
  *(undefined4 *)(in_a0 + 0x148) = 0;
  *(undefined *)(in_a0 + 0x14e) = uVar1;
  *(undefined2 *)(in_a0 + 0x14c) = 0;
  FUN_000102d4(uRam0000012c);
  *(undefined *)(in_a0 + 0x150) = 1;
  _L46(uRam0000012c);
  uVar3 = uRam0000012c;
  if (unaff_s1 == 0) {
    in_stack_00000008 = 0x30;
    in_stack_0000000c = 0x84;
    *(undefined *)(in_a0 + 0x14f) = 0;
    puVar5 = (undefined2 *)&stack0x00000004;
    in_stack_00000004 = uVar3;
    piVar6 = (int *)&stack0x00000008;
    do {
      for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)puVar5; iVar4 += 1) {
        if ((*(byte *)(iVar4 * 6 + *piVar6 + 3) & 2) == 0) {
          bVar2 = *(byte *)(in_a0 + 0x14f);
          *(byte *)(in_a0 + 0x14f) = bVar2 + 1;
          FUN_00010396((uint)bVar2 * 6 + in_a0,6);
        }
      }
      puVar5 = (undefined2 *)((int)puVar5 + 1);
      piVar6 = piVar6 + 1;
    } while (puVar5 != (undefined2 *)&stack0x00000006);
  }
  else {
    FUN_00010306();
    *(undefined *)(in_a0 + 0x14f) = 1;
  }
  FUN_00010316();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102d4(undefined2 uRam0000012c)

{
  byte bVar1;
  undefined2 uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000102d4(uRam0000012c);
  *(undefined *)(unaff_s0 + 0x150) = 1;
  _L46(uRam0000012c);
  uVar2 = uRam0000012c;
  if (unaff_s1 == 0) {
    in_stack_00000008 = 0x30;
    in_stack_0000000c = 0x84;
    *(undefined *)(unaff_s0 + 0x14f) = 0;
    puVar4 = (undefined2 *)&stack0x00000004;
    in_stack_00000004 = uVar2;
    piVar5 = (int *)&stack0x00000008;
    do {
      for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)puVar4; iVar3 += 1) {
        if ((*(byte *)(iVar3 * 6 + *piVar5 + 3) & 2) == 0) {
          bVar1 = *(byte *)(unaff_s0 + 0x14f);
          *(byte *)(unaff_s0 + 0x14f) = bVar1 + 1;
          FUN_00010396((uint)bVar1 * 6 + unaff_s0,6);
        }
      }
      puVar4 = (undefined2 *)((int)puVar4 + 1);
      piVar5 = piVar5 + 1;
    } while (puVar4 != (undefined2 *)&stack0x00000006);
  }
  else {
    FUN_00010306();
    *(undefined *)(unaff_s0 + 0x14f) = 1;
  }
  FUN_00010316();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L46(undefined2 uRam0000012c)

{
  byte bVar1;
  undefined2 uVar2;
  int unaff_s0;
  int unaff_s1;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L46(uRam0000012c);
  uVar2 = uRam0000012c;
  if (unaff_s1 == 0) {
    in_stack_00000008 = 0x30;
    in_stack_0000000c = 0x84;
    *(undefined *)(unaff_s0 + 0x14f) = 0;
    puVar4 = (undefined2 *)&stack0x00000004;
    in_stack_00000004 = uVar2;
    piVar5 = (int *)&stack0x00000008;
    do {
      for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)puVar4; iVar3 += 1) {
        if ((*(byte *)(iVar3 * 6 + *piVar5 + 3) & 2) == 0) {
          bVar1 = *(byte *)(unaff_s0 + 0x14f);
          *(byte *)(unaff_s0 + 0x14f) = bVar1 + 1;
          FUN_00010396((uint)bVar1 * 6 + unaff_s0,6);
        }
      }
      puVar4 = (undefined2 *)((int)puVar4 + 1);
      piVar5 = piVar5 + 1;
    } while (puVar4 != (undefined2 *)&stack0x00000006);
  }
  else {
    FUN_00010306();
    *(undefined *)(unaff_s0 + 0x14f) = 1;
  }
  FUN_00010316();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010306(void)

{
  int unaff_s0;
  
  FUN_00010306();
  *(undefined *)(unaff_s0 + 0x14f) = 1;
  FUN_00010316();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010316(void)

{
  FUN_00010316();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010396(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  byte *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  byte *unaff_s5;
  
  do {
    FUN_00010396(param_1,param_2);
    do {
      unaff_s1 += 1;
      while ((int)(uint)*unaff_s2 <= unaff_s1) {
        unaff_s2 = unaff_s2 + 1;
        unaff_s3 = unaff_s3 + 1;
        if (unaff_s2 == unaff_s5) {
          FUN_00010316();
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        unaff_s1 = 0;
      }
    } while ((*(byte *)(unaff_s1 * unaff_s4 + *unaff_s3 + 3) & 2) != 0);
    bVar1 = *(byte *)(unaff_s0 + 0x14f);
    param_2 = 6;
    *(byte *)(unaff_s0 + 0x14f) = bVar1 + 1;
    param_1 = (uint)bVar1 * unaff_s4 + unaff_s0;
  } while( true );
}



// DWARF DIE: 79a3

void sm_join_bss(mac_addr *bssid,scan_chan_tag *chan,_Bool passive)

{
  int iVar1;
  int extraout_a0;
  undefined3 in_register_00002031;
  
  iVar1 = iRam00000000;
  _L0();
  _L0();
  *(undefined *)(extraout_a0 + 0x14f) = 1;
  FUN_00010402();
  *(undefined *)(extraout_a0 + 0x150) = 1;
  *(undefined2 *)(extraout_a0 + 0x14c) = 0;
  *(undefined4 *)(extraout_a0 + 0x148) = 0;
  *(undefined *)(extraout_a0 + 0x14e) = *(undefined *)(iVar1 + 0x3d);
  FUN_00010426();
  if (CONCAT31(in_register_00002031,passive) != 0) {
    *(byte *)(extraout_a0 + 3) = *(byte *)(extraout_a0 + 3) | 1;
  }
  DAT_00000010 = passive;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  int extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  _L0();
  _L0();
  *(undefined *)(extraout_a0 + 0x14f) = 1;
  FUN_00010402();
  *(undefined *)(extraout_a0 + 0x150) = 1;
  *(undefined2 *)(extraout_a0 + 0x14c) = 0;
  *(undefined4 *)(extraout_a0 + 0x148) = 0;
  *(undefined *)(extraout_a0 + 0x14e) = *(undefined *)(unaff_s3 + 0x3d);
  FUN_00010426();
  if (unaff_s2 != 0) {
    *(byte *)(extraout_a0 + 3) = *(byte *)(extraout_a0 + 3) | 1;
  }
  *(char *)(unaff_s1 + 0x10) = (char)unaff_s2;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined unaff_s4;
  
  _L0();
  *(undefined *)(unaff_s0 + 0x14f) = unaff_s4;
  FUN_00010402();
  *(undefined *)(unaff_s0 + 0x150) = unaff_s4;
  *(undefined2 *)(unaff_s0 + 0x14c) = 0;
  *(undefined4 *)(unaff_s0 + 0x148) = 0;
  *(undefined *)(unaff_s0 + 0x14e) = *(undefined *)(unaff_s3 + 0x3d);
  FUN_00010426();
  if (unaff_s2 != 0) {
    *(byte *)(unaff_s0 + 3) = *(byte *)(unaff_s0 + 3) | 1;
  }
  *(char *)(unaff_s1 + 0x10) = (char)unaff_s2;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010402(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined unaff_s4;
  
  FUN_00010402();
  *(undefined *)(unaff_s0 + 0x150) = unaff_s4;
  *(undefined2 *)(unaff_s0 + 0x14c) = 0;
  *(undefined4 *)(unaff_s0 + 0x148) = 0;
  *(undefined *)(unaff_s0 + 0x14e) = *(undefined *)(unaff_s3 + 0x3d);
  FUN_00010426();
  if (unaff_s2 != 0) {
    *(byte *)(unaff_s0 + 3) = *(byte *)(unaff_s0 + 3) | 1;
  }
  *(char *)(unaff_s1 + 0x10) = (char)unaff_s2;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010426(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  FUN_00010426();
  if (unaff_s2 != 0) {
    *(byte *)(unaff_s0 + 3) = *(byte *)(unaff_s0 + 3) | 1;
  }
  *(char *)(unaff_s1 + 0x10) = (char)unaff_s2;
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



// DWARF DIE: 7924

uint8_t sm_add_chan_ctx(uint8_t *p_chan_idx)

{
  uint8_t extraout_a0;
  mm_chan_ctxt_add_req req;
  
  _L0();
  return extraout_a0;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 74c6

void sm_send_next_bss_param(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    FUN_00010500();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  
  _L0();
  if (extraout_a0 == 0) {
    FUN_00010500();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010500(void)

{
  FUN_00010500();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 7557

void sm_set_bss_param(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined4 *extraout_a0;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  
  iVar2 = iRam00000000;
  puVar3 = (undefined *)0x1413;
  bVar1 = *(byte *)(iRam00000000 + 0x3d);
  _L0(_DAT_00000020);
  iVar4 = 0x18;
  FUN_0001055a(_DAT_00000020);
  piVar5 = (int *)0x16;
  _LVL103(_DAT_00000020);
  puVar6 = (undefined2 *)&DAT_00000014;
  _LVL106(_DAT_00000020);
  puVar7 = (undefined *)0x1411;
  _LVL109(_DAT_00000020);
  _LVL112(_DAT_00000020);
  *puVar3 = 1;
  puVar3[1] = *(undefined *)(iVar2 + 0x3d);
  _L0(_DAT_00000020);
  iVar10 = (uint)bVar1 * 0x5d8;
  FUN_000105e6(_DAT_00000020);
  *(undefined *)(iVar4 + 6) = *(undefined *)(iVar2 + 0x3d);
  _L0(_DAT_00000020);
  iVar4 = iVar10 + 0x3b0;
  *(undefined *)((int)piVar5 + 5) = *(undefined *)(*(int *)(iVar10 + 0x3a4) + 2);
  _L0(_DAT_00000020);
  *piVar5 = iVar4;
  *(undefined *)(piVar5 + 1) = *(undefined *)(iVar2 + 0x3d);
  _L0(_DAT_00000020);
  *puVar6 = *(undefined2 *)(iVar10 + 0x3ac);
  pbVar11 = (byte *)0x0;
  *(undefined *)(puVar6 + 1) = *(undefined *)(iVar2 + 0x3d);
  _L0();
  iVar4 = iVar10;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar9 = *(undefined4 *)(iVar4 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar11;
    *extraout_a0 = uVar9;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(iVar2 + 0x3d);
    bVar8 = false;
    if ((_DAT_00000020 != 0) && (*(char *)(iVar10 + 0x3c0) < '\0')) {
      bVar8 = (*pbVar11 & *(byte *)(iVar2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar8;
    pbVar11 = pbVar11 + 1;
    _LVL133(8,extraout_a0 + -3);
    iVar4 += 4;
  } while (pbVar11 != &DAT_00000004);
  *puVar7 = 1;
  puVar7[1] = *(undefined *)(iVar2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000020)

{
  int unaff_s1;
  undefined *in_a0;
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined4 *extraout_a0;
  bool bVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s3;
  int iVar7;
  byte *pbVar8;
  
  _L0(iRam00000020);
  iVar1 = 0x18;
  FUN_0001055a(iRam00000020);
  piVar2 = (int *)0x16;
  _LVL103(iRam00000020);
  puVar3 = (undefined2 *)&DAT_00000014;
  _LVL106(iRam00000020);
  puVar4 = (undefined *)(unaff_s1 + 0x411);
  _LVL109(iRam00000020);
  _LVL112(iRam00000020);
  *in_a0 = 1;
  in_a0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar7 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(iVar1 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar1 = iVar7 + 0x3b0;
  *(undefined *)((int)piVar2 + 5) = *(undefined *)(*(int *)(iVar7 + 0x3a4) + 2);
  _L0(iRam00000020);
  *piVar2 = iVar1;
  *(undefined *)(piVar2 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *puVar3 = *(undefined2 *)(iVar7 + 0x3ac);
  pbVar8 = (byte *)0x0;
  *(undefined *)(puVar3 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = iVar7;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar6 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar8;
    *extraout_a0 = uVar6;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar5 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar7 + 0x3c0) < '\0')) {
      bVar5 = (*pbVar8 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar5;
    pbVar8 = pbVar8 + 1;
    _LVL133(8,extraout_a0 + -3);
    iVar1 += 4;
  } while (pbVar8 != &DAT_00000004);
  *puVar4 = 1;
  puVar4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001055a(int iRam00000020)

{
  undefined *unaff_s0;
  int unaff_s1;
  int in_a0;
  int *piVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *extraout_a0;
  bool bVar5;
  undefined4 uVar6;
  int unaff_s2;
  int unaff_s3;
  int iVar7;
  byte *pbVar8;
  
  FUN_0001055a(iRam00000020);
  piVar1 = (int *)0x16;
  _LVL103(iRam00000020);
  puVar2 = (undefined2 *)&DAT_00000014;
  _LVL106(iRam00000020);
  puVar3 = (undefined *)(unaff_s1 + 0x411);
  _LVL109(iRam00000020);
  _LVL112(iRam00000020);
  *unaff_s0 = 1;
  unaff_s0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar7 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(in_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar4 = iVar7 + 0x3b0;
  *(undefined *)((int)piVar1 + 5) = *(undefined *)(*(int *)(iVar7 + 0x3a4) + 2);
  _L0(iRam00000020);
  *piVar1 = iVar4;
  *(undefined *)(piVar1 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *puVar2 = *(undefined2 *)(iVar7 + 0x3ac);
  pbVar8 = (byte *)0x0;
  *(undefined *)(puVar2 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar4 = iVar7;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar6 = *(undefined4 *)(iVar4 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar8;
    *extraout_a0 = uVar6;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar5 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar7 + 0x3c0) < '\0')) {
      bVar5 = (*pbVar8 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar5;
    pbVar8 = pbVar8 + 1;
    _LVL133(8,extraout_a0 + -3);
    iVar4 += 4;
  } while (pbVar8 != &DAT_00000004);
  *puVar3 = 1;
  puVar3[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL103(int iRam00000020)

{
  undefined *unaff_s0;
  int unaff_s1;
  int *in_a0;
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *extraout_a0;
  bool bVar4;
  undefined4 uVar5;
  int unaff_s2;
  int unaff_s3;
  int iVar6;
  byte *pbVar7;
  int unaff_s8;
  
  _LVL103(iRam00000020);
  puVar1 = (undefined2 *)&DAT_00000014;
  _LVL106(iRam00000020);
  puVar2 = (undefined *)(unaff_s1 + 0x411);
  _LVL109(iRam00000020);
  _LVL112(iRam00000020);
  *unaff_s0 = 1;
  unaff_s0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar6 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(unaff_s8 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar3 = iVar6 + 0x3b0;
  *(undefined *)((int)in_a0 + 5) = *(undefined *)(*(int *)(iVar6 + 0x3a4) + 2);
  _L0(iRam00000020);
  *in_a0 = iVar3;
  *(undefined *)(in_a0 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *puVar1 = *(undefined2 *)(iVar6 + 0x3ac);
  pbVar7 = (byte *)0x0;
  *(undefined *)(puVar1 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar3 = iVar6;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar5 = *(undefined4 *)(iVar3 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar7;
    *extraout_a0 = uVar5;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar4 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar6 + 0x3c0) < '\0')) {
      bVar4 = (*pbVar7 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar4;
    pbVar7 = pbVar7 + 1;
    _LVL133(8,extraout_a0 + -3);
    iVar3 += 4;
  } while (pbVar7 != &DAT_00000004);
  *puVar2 = 1;
  puVar2[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL106(int iRam00000020)

{
  undefined *unaff_s0;
  int unaff_s1;
  undefined2 *in_a0;
  undefined *puVar1;
  int iVar2;
  undefined4 *extraout_a0;
  bool bVar3;
  undefined4 uVar4;
  int unaff_s2;
  int unaff_s3;
  int iVar5;
  byte *pbVar6;
  int *unaff_s5;
  int unaff_s8;
  
  _LVL106(iRam00000020);
  puVar1 = (undefined *)(unaff_s1 + 0x411);
  _LVL109(iRam00000020);
  _LVL112(iRam00000020);
  *unaff_s0 = 1;
  unaff_s0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar5 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(unaff_s8 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar2 = iVar5 + 0x3b0;
  *(undefined *)((int)unaff_s5 + 5) = *(undefined *)(*(int *)(iVar5 + 0x3a4) + 2);
  _L0(iRam00000020);
  *unaff_s5 = iVar2;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *in_a0 = *(undefined2 *)(iVar5 + 0x3ac);
  pbVar6 = (byte *)0x0;
  *(undefined *)(in_a0 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar2 = iVar5;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar4 = *(undefined4 *)(iVar2 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar6;
    *extraout_a0 = uVar4;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar3 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar5 + 0x3c0) < '\0')) {
      bVar3 = (*pbVar6 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar3;
    pbVar6 = pbVar6 + 1;
    _LVL133(8,extraout_a0 + -3);
    iVar2 += 4;
  } while (pbVar6 != &DAT_00000004);
  *puVar1 = 1;
  puVar1[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL109(int iRam00000020)

{
  undefined *unaff_s0;
  undefined *in_a0;
  int iVar1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  int iVar4;
  byte *pbVar5;
  int *unaff_s5;
  undefined2 *unaff_s7;
  int unaff_s8;
  
  _LVL109(iRam00000020);
  _LVL112(iRam00000020);
  *unaff_s0 = 1;
  unaff_s0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar4 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(unaff_s8 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar1 = iVar4 + 0x3b0;
  *(undefined *)((int)unaff_s5 + 5) = *(undefined *)(*(int *)(iVar4 + 0x3a4) + 2);
  _L0(iRam00000020);
  *unaff_s5 = iVar1;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(iVar4 + 0x3ac);
  pbVar5 = (byte *)0x0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = iVar4;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar5;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar4 + 0x3c0) < '\0')) {
      bVar2 = (*pbVar5 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    pbVar5 = pbVar5 + 1;
    _LVL133(8,extraout_a0 + -3);
    iVar1 += 4;
  } while (pbVar5 != &DAT_00000004);
  *in_a0 = 1;
  in_a0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL112(int iRam00000020)

{
  undefined *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  int iVar4;
  byte *pbVar5;
  undefined *unaff_s4;
  int *unaff_s5;
  undefined2 *unaff_s7;
  int unaff_s8;
  
  _LVL112(iRam00000020);
  *unaff_s0 = 1;
  unaff_s0[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar4 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(unaff_s8 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar1 = iVar4 + 0x3b0;
  *(undefined *)((int)unaff_s5 + 5) = *(undefined *)(*(int *)(iVar4 + 0x3a4) + 2);
  _L0(iRam00000020);
  *unaff_s5 = iVar1;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(iVar4 + 0x3ac);
  pbVar5 = (byte *)0x0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = iVar4;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar5;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar4 + 0x3c0) < '\0')) {
      bVar2 = (*pbVar5 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    pbVar5 = pbVar5 + 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (pbVar5 != &DAT_00000004);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000020)

{
  int unaff_s1;
  int iVar1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  int iVar4;
  byte *pbVar5;
  undefined *unaff_s4;
  int *unaff_s5;
  undefined2 *unaff_s7;
  int unaff_s8;
  
  _L0(iRam00000020);
  iVar4 = unaff_s3 * 0x5d8;
  FUN_000105e6(iRam00000020);
  *(undefined *)(unaff_s8 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar1 = iVar4 + 0x3b0;
  *(undefined *)((int)unaff_s5 + 5) = *(undefined *)(*(int *)(iVar4 + 0x3a4) + 2);
  _L0(iRam00000020);
  *unaff_s5 = iVar1;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(iVar4 + 0x3ac);
  pbVar5 = (byte *)0x0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = iVar4;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar5;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(iVar4 + 0x3c0) < '\0')) {
      bVar2 = (*pbVar5 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    pbVar5 = pbVar5 + 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (pbVar5 != &DAT_00000004);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105e6(int iRam00000020)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar4;
  undefined *unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  undefined2 *unaff_s7;
  int unaff_s8;
  
  FUN_000105e6(iRam00000020);
  *(undefined *)(unaff_s8 + 6) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  iVar1 = unaff_s3 + 0x3b0 + unaff_s6;
  *(undefined *)((int)unaff_s5 + 5) = *(undefined *)(*(int *)(unaff_s0 + 0x3a4) + 2);
  _L0(iRam00000020);
  *unaff_s5 = iVar1;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(unaff_s0 + 0x3ac);
  pbVar4 = (byte *)0x0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = unaff_s0;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar4;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(unaff_s0 + 0x3c0) < '\0')) {
      bVar2 = (*pbVar4 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    pbVar4 = pbVar4 + 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (pbVar4 != &DAT_00000004);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000020)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar4;
  undefined *unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  undefined2 *unaff_s7;
  
  _L0(iRam00000020);
  iVar1 = unaff_s3 + 0x3b0 + unaff_s6;
  *(undefined *)((int)unaff_s5 + 5) = *(undefined *)(*(int *)(unaff_s0 + 0x3a4) + 2);
  _L0(iRam00000020);
  *unaff_s5 = iVar1;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(unaff_s0 + 0x3ac);
  pbVar4 = (byte *)0x0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = unaff_s0;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)pbVar4;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(unaff_s0 + 0x3c0) < '\0')) {
      bVar2 = (*pbVar4 & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    pbVar4 = pbVar4 + 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (pbVar4 != &DAT_00000004);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000020)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 in_a0;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int iVar4;
  undefined *unaff_s4;
  undefined4 *unaff_s5;
  int unaff_s6;
  undefined2 *unaff_s7;
  
  _L0(iRam00000020);
  *unaff_s5 = in_a0;
  *(undefined *)(unaff_s5 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(unaff_s0 + 0x3ac);
  iVar4 = 0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = unaff_s0;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)iVar4;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(unaff_s0 + 0x3c0) < '\0')) {
      bVar2 = (*(byte *)(iVar4 + unaff_s6) & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    iVar4 += 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (iVar4 != 4);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(int iRam00000020)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int iVar4;
  undefined *unaff_s4;
  int unaff_s6;
  undefined2 *unaff_s7;
  
  _L0(iRam00000020);
  *unaff_s7 = *(undefined2 *)(unaff_s0 + 0x3ac);
  iVar4 = 0;
  *(undefined *)(unaff_s7 + 1) = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  iVar1 = unaff_s0;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)iVar4;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((iRam00000020 != 0) && (*(char *)(unaff_s0 + 0x3c0) < '\0')) {
      bVar2 = (*(byte *)(iVar4 + unaff_s6) & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    iVar4 += 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (iVar4 != 4);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *extraout_a0;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  _L0();
  iVar1 = unaff_s0;
  do {
    FUN_0001067c(0x1a,0,6,8);
    uVar3 = *(undefined4 *)(iVar1 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)unaff_s3;
    *extraout_a0 = uVar3;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar2 = false;
    if ((*(int *)(unaff_s5 + 0x20) != 0) && (*(char *)(unaff_s0 + 0x3c0) < '\0')) {
      bVar2 = (*(byte *)(unaff_s3 + unaff_s6) & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar2;
    unaff_s3 += 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    iVar1 += 4;
  } while (unaff_s3 != 4);
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001067c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 *extraout_a0;
  bool bVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  while( true ) {
    FUN_0001067c(param_1,param_2,param_3,param_4);
    uVar2 = *(undefined4 *)(unaff_s0 + 0x3c4);
    *(char *)((int)extraout_a0 + 5) = (char)unaff_s3;
    *extraout_a0 = uVar2;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar1 = false;
    if ((*(int *)(unaff_s5 + 0x20) != 0) && (*(char *)(unaff_s8 + 0x3c0) < '\0')) {
      bVar1 = (*(byte *)(unaff_s3 + unaff_s6) & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar1;
    unaff_s3 += 1;
    _LVL133(unaff_s1 + 8,extraout_a0 + -3);
    unaff_s0 += 4;
    if (unaff_s3 == unaff_s7) break;
    param_4 = 8;
    param_3 = 6;
    param_2 = 0;
    param_1 = 0x1a;
  }
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL133(int param_1,undefined4 *param_2)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 *extraout_a0;
  bool bVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  while( true ) {
    _LVL133(param_1,param_2);
    if (unaff_s3 == unaff_s7) break;
    FUN_0001067c(0x1a,0,6,8);
    uVar2 = *(undefined4 *)(unaff_s0 + 0x3c8);
    *(char *)((int)extraout_a0 + 5) = (char)unaff_s3;
    *extraout_a0 = uVar2;
    *(undefined *)((int)extraout_a0 + 6) = *(undefined *)(unaff_s2 + 0x3d);
    bVar1 = false;
    if ((*(int *)(unaff_s5 + 0x20) != 0) && (*(char *)(unaff_s8 + 0x3c0) < '\0')) {
      bVar1 = (*(byte *)(unaff_s3 + unaff_s6) & *(byte *)(unaff_s2 + 0x3c)) != 0;
    }
    *(bool *)(extraout_a0 + 1) = bVar1;
    param_2 = extraout_a0 + -3;
    unaff_s3 += 1;
    param_1 = unaff_s1 + 8;
    unaff_s0 = unaff_s0 + 4;
  }
  *unaff_s4 = 1;
  unaff_s4[1] = *(undefined *)(unaff_s2 + 0x3d);
  _L0();
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
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
// DWARF DIE: 7234

void sm_disconnect_process(vif_info_tag *vif,uint16_t reason)

{
  uint16_t *puVar1;
  
  puVar1 = (uint16_t *)0x1805;
  _L0(_DAT_00000010);
  FUN_00010742(_DAT_00000010);
  *puVar1 = reason;
  *(uint8_t *)(puVar1 + 1) = vif->index;
  if (DAT_00000011 != '\0') {
    *(undefined *)((int)puVar1 + 3) = 1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined2 param_1)

{
  int unaff_s1;
  undefined2 *in_a0;
  undefined2 unaff_s2;
  
  _L0(param_1);
  FUN_00010742(param_1);
  *in_a0 = unaff_s2;
  *(undefined *)(in_a0 + 1) = *(undefined *)(unaff_s1 + 0x57);
  if (param_1._1_1_ != '\0') {
    *(undefined *)((int)in_a0 + 3) = 1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010742(undefined2 param_1)

{
  undefined2 *unaff_s0;
  int unaff_s1;
  undefined2 unaff_s2;
  
  FUN_00010742(param_1);
  *unaff_s0 = unaff_s2;
  *(undefined *)(unaff_s0 + 1) = *(undefined *)(unaff_s1 + 0x57);
  if (param_1._1_1_ != '\0') {
    *(undefined *)((int)unaff_s0 + 3) = 1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 81fb

void sm_deauth_cfm(void *env,uint32_t status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 72c6

void sm_disconnect(uint8_t vif_index,uint16_t reason_code)

{
  undefined2 extraout_a0;
  undefined3 in_register_00002029;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int iVar1;
  int iVar2;
  
  iVar1 = CONCAT31(in_register_00002029,vif_index) * 0x5d8;
  if ((*(char *)(iVar1 + 0x56) == '\0') && (*(char *)(iVar1 + 0x58) != '\0')) {
    _L0();
    FUN_000107dc();
    if (extraout_a0_00 != 0) {
      FUN_000107ec();
      iVar2 = *(int *)(extraout_a0_00 + 0x68);
      *(undefined *)(iVar2 + 0x14c) = 0xc0;
      *(undefined *)(iVar2 + 0x14d) = 0;
      *(undefined *)(iVar2 + 0x14e) = 0;
      *(undefined *)(iVar2 + 0x14f) = 0;
      FUN_00010828();
      FUN_0001083a();
      FUN_0001084a();
      _L0();
      *(char *)(iVar2 + 0x162) = (char)extraout_a0;
      *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
      *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
      *(int *)(extraout_a0_00 + 0x2d0) = iVar1;
      *(uint8_t *)(extraout_a0_00 + 0x2f) = vif_index;
      *(undefined *)(extraout_a0_00 + 0x30) = *(undefined *)(iVar1 + 0x60);
      _L0();
      iVar1 = *(int *)(extraout_a0_00 + 0x6c);
      *(int *)(iVar1 + 0x1c) = extraout_a0_01 + 0x1c;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_01;
      _LVL170();
      if (extraout_a0_02 != 0) {
        return;
      }
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int iVar1;
  undefined unaff_s4;
  
  _L0();
  FUN_000107dc();
  if (extraout_a0_00 != 0) {
    FUN_000107ec();
    iVar1 = *(int *)(extraout_a0_00 + 0x68);
    *(undefined *)(iVar1 + 0x14c) = 0xc0;
    *(undefined *)(iVar1 + 0x14d) = 0;
    *(undefined *)(iVar1 + 0x14e) = 0;
    *(undefined *)(iVar1 + 0x14f) = 0;
    FUN_00010828();
    FUN_0001083a();
    FUN_0001084a();
    _L0();
    *(char *)(iVar1 + 0x162) = (char)extraout_a0;
    *(char *)(iVar1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
    *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
    *(int *)(extraout_a0_00 + 0x2d0) = unaff_s0;
    *(undefined *)(extraout_a0_00 + 0x2f) = unaff_s4;
    *(undefined *)(extraout_a0_00 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
    _L0();
    iVar1 = *(int *)(extraout_a0_00 + 0x6c);
    *(int *)(iVar1 + 0x1c) = extraout_a0_01 + 0x1c;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_01;
    _LVL170();
    if (extraout_a0_02 != 0) {
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107dc(void)

{
  int unaff_s0;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int iVar1;
  undefined unaff_s4;
  
  FUN_000107dc();
  if (extraout_a0_00 != 0) {
    FUN_000107ec();
    iVar1 = *(int *)(extraout_a0_00 + 0x68);
    *(undefined *)(iVar1 + 0x14c) = 0xc0;
    *(undefined *)(iVar1 + 0x14d) = 0;
    *(undefined *)(iVar1 + 0x14e) = 0;
    *(undefined *)(iVar1 + 0x14f) = 0;
    FUN_00010828();
    FUN_0001083a();
    FUN_0001084a();
    _L0();
    *(char *)(iVar1 + 0x162) = (char)extraout_a0;
    *(char *)(iVar1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
    *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
    *(int *)(extraout_a0_00 + 0x2d0) = unaff_s0;
    *(undefined *)(extraout_a0_00 + 0x2f) = unaff_s4;
    *(undefined *)(extraout_a0_00 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
    _L0();
    iVar1 = *(int *)(extraout_a0_00 + 0x6c);
    *(int *)(iVar1 + 0x1c) = extraout_a0_01 + 0x1c;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_01;
    _LVL170();
    if (extraout_a0_02 != 0) {
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107ec(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  undefined unaff_s4;
  
  FUN_000107ec();
  iVar1 = *(int *)(unaff_s1 + 0x68);
  *(undefined *)(iVar1 + 0x14c) = 0xc0;
  *(undefined *)(iVar1 + 0x14d) = 0;
  *(undefined *)(iVar1 + 0x14e) = 0;
  *(undefined *)(iVar1 + 0x14f) = 0;
  FUN_00010828();
  FUN_0001083a();
  FUN_0001084a();
  _L0();
  *(char *)(iVar1 + 0x162) = (char)extraout_a0;
  *(char *)(iVar1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(int *)(unaff_s1 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s4;
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
  _L0();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL170();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010828(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  int unaff_s2;
  undefined unaff_s4;
  
  FUN_00010828();
  FUN_0001083a();
  FUN_0001084a();
  _L0();
  *(char *)(unaff_s2 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(int *)(unaff_s1 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s4;
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
  _L0();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL170();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001083a(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  int unaff_s2;
  undefined unaff_s4;
  
  FUN_0001083a();
  FUN_0001084a();
  _L0();
  *(char *)(unaff_s2 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(int *)(unaff_s1 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s4;
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
  _L0();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL170();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001084a(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  int unaff_s2;
  undefined unaff_s4;
  
  FUN_0001084a();
  _L0();
  *(char *)(unaff_s2 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(int *)(unaff_s1 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s4;
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
  _L0();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL170();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  int unaff_s2;
  undefined unaff_s4;
  
  _L0();
  *(char *)(unaff_s2 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(int *)(unaff_s1 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s4;
  *(undefined *)(unaff_s1 + 0x30) = *(undefined *)(unaff_s0 + 0x60);
  _L0();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL170();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int iVar1;
  
  _L0();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0;
  _LVL170();
  if (extraout_a0_00 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL170(void)

{
  int extraout_a0;
  
  _LVL170();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 70ae

void sm_connect_ind(uint16_t status)

{
  byte bVar1;
  uint16_t *puVar2;
  int iVar3;
  undefined2 in_register_0000202a;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = _DAT_00000014;
  puVar2 = _DAT_00000004;
  bVar1 = *(byte *)(iRam00000000 + 0x3d);
  iVar6 = (uint)bVar1 * 0x5d8;
  *(byte *)((int)_DAT_00000004 + 9) = bVar1;
  FUN_00010938();
  *(undefined *)(puVar2 + 5) = *(undefined *)(iVar6 + 0x60);
  FUN_00010954();
  iVar7 = *(int *)(iVar6 + 0x40);
  *(undefined *)((int)puVar2 + 0xb) = 0;
  if (iVar7 == 0) {
    *(undefined *)(puVar2 + 0x19b) = 0;
    puVar2[0x19c] = 0;
    *(undefined4 *)(puVar2 + 0x19e) = 0;
    *(undefined4 *)(puVar2 + 0x1a0) = 0;
    *(undefined *)(puVar2 + 0x19d) = 0;
  }
  else {
    *(undefined *)(puVar2 + 0x19b) = *(undefined *)(*(int *)(iVar6 + 0x40) + 4);
    puVar2[0x19c] = *(uint16_t *)(*(int *)(iVar6 + 0x40) + 6);
    *(uint *)(puVar2 + 0x19e) = (uint)*(ushort *)(*(int *)(iVar6 + 0x40) + 8);
    *(uint *)(puVar2 + 0x1a0) = (uint)*(ushort *)(*(int *)(iVar6 + 0x40) + 10);
    *(undefined *)(puVar2 + 0x19d) = *(undefined *)(*(int *)(iVar6 + 0x40) + 5);
  }
  iVar6 = (uint)bVar1 * 0x5d8;
  uVar4 = 0;
  uVar5 = *(uint *)(iVar6 + 0x3e0) & 1;
  *(char *)(puVar2 + 6) = (char)uVar5;
  if (uVar5 != 0) {
    uVar4 = *(undefined *)(iVar6 + 0x3c1);
  }
  *(undefined *)((int)puVar2 + 0xd) = uVar4;
  *(undefined *)(puVar2 + 4) = 0;
  if (CONCAT22(in_register_0000202a,status) == 0) {
    FUN_000109c2();
  }
  else {
    FUN_00010a22();
    FUN_00010a38();
    if (-1 < iVar3) {
      FUN_00010a4c();
      FUN_00010a58();
      _DAT_00000014 = -1;
    }
    FUN_00010a70();
  }
  FUN_000109d0();
  iRam00000000 = 0;
  DAT_00000011 = 0;
  *puVar2 = status;
  FUN_000109e6();
  _DAT_00000004 = (uint16_t *)0x0;
  return;
}



void FUN_00010938(void)

{
  undefined2 *unaff_s0;
  int unaff_s1;
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  
  FUN_00010938();
  *(undefined *)(unaff_s0 + 5) = *(undefined *)(unaff_s1 + 0x60);
  FUN_00010954();
  iVar3 = *(int *)(unaff_s1 + 0x40);
  *(undefined *)((int)unaff_s0 + 0xb) = 0;
  if (iVar3 == 0) {
    *(undefined *)(unaff_s0 + 0x19b) = 0;
    unaff_s0[0x19c] = 0;
    *(undefined4 *)(unaff_s0 + 0x19e) = 0;
    *(undefined4 *)(unaff_s0 + 0x1a0) = 0;
    *(undefined *)(unaff_s0 + 0x19d) = 0;
  }
  else {
    *(undefined *)(unaff_s0 + 0x19b) = *(undefined *)(*(int *)(unaff_s1 + 0x40) + 4);
    unaff_s0[0x19c] = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 6);
    *(uint *)(unaff_s0 + 0x19e) = (uint)*(ushort *)(*(int *)(unaff_s1 + 0x40) + 8);
    *(uint *)(unaff_s0 + 0x1a0) = (uint)*(ushort *)(*(int *)(unaff_s1 + 0x40) + 10);
    *(undefined *)(unaff_s0 + 0x19d) = *(undefined *)(*(int *)(unaff_s1 + 0x40) + 5);
  }
  uVar1 = 0;
  iVar3 = unaff_s3 * 0x5d8 + unaff_s4;
  uVar2 = *(uint *)(iVar3 + 0x3e0) & 1;
  *(char *)(unaff_s0 + 6) = (char)uVar2;
  if (uVar2 != 0) {
    uVar1 = *(undefined *)(iVar3 + 0x3c1);
  }
  *(undefined *)((int)unaff_s0 + 0xd) = uVar1;
  *(undefined *)(unaff_s0 + 4) = 0;
  if (unaff_s6 == 0) {
    FUN_000109c2();
  }
  else {
    FUN_00010a22();
    FUN_00010a38();
    if (-1 < unaff_s7) {
      FUN_00010a4c();
      FUN_00010a58();
      unaff_s2[5] = 0xffffffff;
    }
    FUN_00010a70();
  }
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = (short)unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_00010954(void)

{
  undefined2 *unaff_s0;
  int unaff_s1;
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  
  FUN_00010954();
  iVar3 = *(int *)(unaff_s1 + 0x40);
  *(undefined *)((int)unaff_s0 + 0xb) = 0;
  if (iVar3 == 0) {
    *(undefined *)(unaff_s0 + 0x19b) = 0;
    unaff_s0[0x19c] = 0;
    *(undefined4 *)(unaff_s0 + 0x19e) = 0;
    *(undefined4 *)(unaff_s0 + 0x1a0) = 0;
    *(undefined *)(unaff_s0 + 0x19d) = 0;
  }
  else {
    *(undefined *)(unaff_s0 + 0x19b) = *(undefined *)(*(int *)(unaff_s1 + 0x40) + 4);
    unaff_s0[0x19c] = *(undefined2 *)(*(int *)(unaff_s1 + 0x40) + 6);
    *(uint *)(unaff_s0 + 0x19e) = (uint)*(ushort *)(*(int *)(unaff_s1 + 0x40) + 8);
    *(uint *)(unaff_s0 + 0x1a0) = (uint)*(ushort *)(*(int *)(unaff_s1 + 0x40) + 10);
    *(undefined *)(unaff_s0 + 0x19d) = *(undefined *)(*(int *)(unaff_s1 + 0x40) + 5);
  }
  uVar1 = 0;
  iVar3 = unaff_s3 * 0x5d8 + unaff_s4;
  uVar2 = *(uint *)(iVar3 + 0x3e0) & 1;
  *(char *)(unaff_s0 + 6) = (char)uVar2;
  if (uVar2 != 0) {
    uVar1 = *(undefined *)(iVar3 + 0x3c1);
  }
  *(undefined *)((int)unaff_s0 + 0xd) = uVar1;
  *(undefined *)(unaff_s0 + 4) = 0;
  if (unaff_s6 == 0) {
    FUN_000109c2();
  }
  else {
    FUN_00010a22();
    FUN_00010a38();
    if (-1 < unaff_s7) {
      FUN_00010a4c();
      FUN_00010a58();
      unaff_s2[5] = 0xffffffff;
    }
    FUN_00010a70();
  }
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = (short)unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_000109c2(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  
  FUN_000109c2();
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_000109d0(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_000109e6(void)

{
  int unaff_s2;
  
  FUN_000109e6();
  *(undefined4 *)(unaff_s2 + 4) = 0;
  return;
}



void FUN_00010a22(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  int unaff_s7;
  
  FUN_00010a22();
  FUN_00010a38();
  if (-1 < unaff_s7) {
    FUN_00010a4c();
    FUN_00010a58();
    unaff_s2[5] = 0xffffffff;
  }
  FUN_00010a70();
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_00010a38(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  int unaff_s7;
  
  FUN_00010a38();
  if (-1 < unaff_s7) {
    FUN_00010a4c();
    FUN_00010a58();
    unaff_s2[5] = 0xffffffff;
  }
  FUN_00010a70();
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_00010a4c(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  
  FUN_00010a4c();
  FUN_00010a58();
  unaff_s2[5] = 0xffffffff;
  FUN_00010a70();
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_00010a58(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  
  FUN_00010a58();
  unaff_s2[5] = 0xffffffff;
  FUN_00010a70();
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



void FUN_00010a70(void)

{
  undefined2 *unaff_s0;
  undefined4 *unaff_s2;
  undefined2 unaff_s6;
  
  FUN_00010a70();
  FUN_000109d0();
  *unaff_s2 = 0;
  *(undefined *)((int)unaff_s2 + 0x11) = 0;
  *unaff_s0 = unaff_s6;
  FUN_000109e6();
  unaff_s2[1] = 0;
  return;
}



// DWARF DIE: 65a9

void sm_supplicant_deauth_cfm(void *env,uint32_t status)

{
  if (-1 < (int)(status << 8)) {
    _L0();
  }
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



// DWARF DIE: 6e71

void sm_auth_send(uint16_t auth_seq,uint32_t *challenge)

{
  undefined uVar1;
  int iVar2;
  undefined2 extraout_a0;
  undefined2 in_register_0000202a;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar3;
  int iVar4;
  
  iVar3 = iRam00000000;
  iVar4 = (uint)*(byte *)(iRam00000000 + 0x3d) * 0x5d8;
  FUN_00010af0();
  if (extraout_a0_00 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL209();
  iVar2 = *(int *)(extraout_a0_00 + 0x68);
  *(undefined *)(iVar2 + 0x14c) = 0xb0;
  *(undefined *)(iVar2 + 0x14d) = 0;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  FUN_00010b3c();
  FUN_00010b4e();
  FUN_00010b5e();
  _L0();
  *(char *)(iVar2 + 0x162) = (char)extraout_a0;
  *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(extraout_a0_00 + 0x2f) = *(undefined *)(iVar4 + 0x57);
  uVar1 = *(undefined *)(iVar4 + 0x60);
  *(undefined *)(extraout_a0_00 + 0x5e) = 0;
  *(undefined *)(extraout_a0_00 + 0x60) = 0;
  *(undefined *)(extraout_a0_00 + 0x30) = uVar1;
  iVar4 = 0x18;
  if ((*(char *)(iVar3 + 0x3b) == '\x01') && (CONCAT22(in_register_0000202a,auth_seq) == 3)) {
    FUN_00010bac();
    iVar4 = *(byte *)(extraout_a0_00 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar2 = *(int *)(extraout_a0_00 + 0x6c);
  *(int *)(extraout_a0_00 + 0x2d0) = extraout_a0_00;
  iVar3 = extraout_a0_01 + (uint)*(byte *)(extraout_a0_00 + 0x60) + iVar4;
  *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar3 + 4;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + iVar3;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010af0(void)

{
  undefined uVar1;
  int iVar2;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar3;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010af0();
  if (extraout_a0_00 == 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _LVL209();
  iVar2 = *(int *)(extraout_a0_00 + 0x68);
  *(undefined *)(iVar2 + 0x14c) = 0xb0;
  *(undefined *)(iVar2 + 0x14d) = 0;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  FUN_00010b3c();
  FUN_00010b4e();
  FUN_00010b5e();
  _L0();
  *(char *)(iVar2 + 0x162) = (char)extraout_a0;
  *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(extraout_a0_00 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(undefined *)(extraout_a0_00 + 0x5e) = 0;
  *(undefined *)(extraout_a0_00 + 0x60) = 0;
  *(undefined *)(extraout_a0_00 + 0x30) = uVar1;
  iVar2 = 0x18;
  if ((*(char *)(unaff_s4 + 0x3b) == '\x01') && (unaff_s5 == 3)) {
    FUN_00010bac();
    iVar2 = *(byte *)(extraout_a0_00 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar3 = *(int *)(extraout_a0_00 + 0x6c);
  *(int *)(extraout_a0_00 + 0x2d0) = extraout_a0_00;
  iVar2 = extraout_a0_01 + (uint)*(byte *)(extraout_a0_00 + 0x60) + iVar2;
  *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
  *(int *)(iVar3 + 0x1c) = iVar2 + 4;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + iVar2;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL209(void)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar3;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  
  _LVL209();
  iVar2 = *(int *)(unaff_s0 + 0x68);
  *(undefined *)(iVar2 + 0x14c) = 0xb0;
  *(undefined *)(iVar2 + 0x14d) = 0;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  FUN_00010b3c();
  FUN_00010b4e();
  FUN_00010b5e();
  _L0();
  *(char *)(iVar2 + 0x162) = (char)extraout_a0;
  *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  iVar2 = 0x18;
  if ((*(char *)(unaff_s4 + 0x3b) == '\x01') && (unaff_s5 == 3)) {
    FUN_00010bac();
    iVar2 = *(byte *)(unaff_s0 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar2 = extraout_a0_00 + (uint)*(byte *)(unaff_s0 + 0x60) + iVar2;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar3 + 0x1c) = iVar2 + 4;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + iVar2;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b3c(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010b3c();
  FUN_00010b4e();
  FUN_00010b5e();
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  iVar3 = 0x18;
  if ((*(char *)(unaff_s4 + 0x3b) == '\x01') && (unaff_s5 == 3)) {
    FUN_00010bac();
    iVar3 = *(byte *)(unaff_s0 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar3 = extraout_a0_00 + (uint)*(byte *)(unaff_s0 + 0x60) + iVar3;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar3 + 4;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + iVar3;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b4e(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010b4e();
  FUN_00010b5e();
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  iVar3 = 0x18;
  if ((*(char *)(unaff_s4 + 0x3b) == '\x01') && (unaff_s5 == 3)) {
    FUN_00010bac();
    iVar3 = *(byte *)(unaff_s0 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar3 = extraout_a0_00 + (uint)*(byte *)(unaff_s0 + 0x60) + iVar3;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar3 + 4;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + iVar3;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010b5e(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  
  FUN_00010b5e();
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  iVar3 = 0x18;
  if ((*(char *)(unaff_s4 + 0x3b) == '\x01') && (unaff_s5 == 3)) {
    FUN_00010bac();
    iVar3 = *(byte *)(unaff_s0 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar3 = extraout_a0_00 + (uint)*(byte *)(unaff_s0 + 0x60) + iVar3;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar3 + 4;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + iVar3;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s4;
  int unaff_s5;
  
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(undefined *)(unaff_s0 + 0x5e) = 0;
  *(undefined *)(unaff_s0 + 0x60) = 0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  iVar3 = 0x18;
  if ((*(char *)(unaff_s4 + 0x3b) == '\x01') && (unaff_s5 == 3)) {
    FUN_00010bac();
    iVar3 = *(byte *)(unaff_s0 + 0x5e) + 0x18;
  }
  FUN_00010bca();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar3 = extraout_a0_00 + (uint)*(byte *)(unaff_s0 + 0x60) + iVar3;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar3 + 4;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + iVar3;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010bac(void)

{
  byte bVar1;
  int unaff_s0;
  int extraout_a0;
  int iVar2;
  int iVar3;
  
  FUN_00010bac();
  bVar1 = *(byte *)(unaff_s0 + 0x5e);
  FUN_00010bca();
  iVar3 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar2 = extraout_a0 + (uint)*(byte *)(unaff_s0 + 0x60) + bVar1 + 0x18;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar3 + 0x1c) = iVar2 + 4;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x14) + -1 + iVar2;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010bca(void)

{
  int unaff_s0;
  int extraout_a0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  FUN_00010bca();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  iVar1 = extraout_a0 + (uint)*(byte *)(unaff_s0 + 0x60) + unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar1 + 4;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + -1 + iVar1;
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL225(void)

{
  _LVL225();
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010c10(void)

{
  FUN_00010c10();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6bb8

void sm_assoc_req_send(undefined2 param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar5;
  ushort uStack54;
  int iStack52;
  
  bVar1 = *(byte *)(iRam00000000 + 0x3d);
  FUN_00010ca6();
  iVar3 = _DAT_00000004;
  if (extraout_a0_00 == 0) {
    _LVL269();
  }
  else {
    _L0();
    iVar4 = *(int *)(extraout_a0_00 + 0x68);
    if (param_1._1_1_ != '\0') {
      param_1._1_1_ = ' ';
    }
    *(char *)(iVar4 + 0x14c) = param_1._1_1_;
    *(undefined *)(iVar4 + 0x14d) = 0;
    *(undefined *)(iVar4 + 0x14e) = 0;
    *(undefined *)(iVar4 + 0x14f) = 0;
    FUN_00010d0e();
    iVar5 = (uint)bVar1 * 0x5d8;
    FUN_00010d2a();
    FUN_00010d3a();
    _L0();
    *(char *)(iVar4 + 0x162) = (char)extraout_a0;
    *(char *)(iVar4 + 0x163) = (char)((ushort)extraout_a0 >> 8);
    FUN_00010d6c();
    iVar4 = *(int *)(extraout_a0_00 + 0x6c);
    *(undefined *)(extraout_a0_00 + 0x2f) = *(undefined *)(iVar5 + 0x57);
    uVar2 = *(undefined *)(iVar5 + 0x60);
    *(int *)(extraout_a0_00 + 0x2d0) = extraout_a0_00;
    *(undefined *)(extraout_a0_00 + 0x30) = uVar2;
    *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x14) + 0x17 + extraout_a0_01;
    *(int *)(iVar4 + 0x1c) = extraout_a0_01 + 0x1c;
    for (iVar4 = iVar3; iVar4 != (uint)uStack54 + iVar3; iVar4 += 1) {
      *(undefined *)(iVar4 + 0x14) = *(undefined *)((iStack52 - iVar3) + iVar4);
    }
    *(ushort *)(iVar3 + 0xe) = uStack54;
    _L0();
    FUN_00010dd4();
    FUN_00010de0();
  }
  return;
}



void FUN_00010ca6(void)

{
  undefined uVar1;
  int iVar2;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  char cVar3;
  int unaff_s2;
  int iVar4;
  int unaff_s5;
  int unaff_s7;
  int iVar5;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  FUN_00010ca6();
  if (extraout_a0_00 == 0) {
    _LVL269();
  }
  else {
    iVar5 = *(int *)(unaff_s7 + 4);
    _L0();
    cVar3 = *(char *)(unaff_s7 + 0x11);
    iVar2 = *(int *)(extraout_a0_00 + 0x68);
    if (cVar3 != '\0') {
      cVar3 = ' ';
    }
    *(char *)(iVar2 + 0x14c) = cVar3;
    *(undefined *)(iVar2 + 0x14d) = 0;
    *(undefined *)(iVar2 + 0x14e) = 0;
    *(undefined *)(iVar2 + 0x14f) = 0;
    FUN_00010d0e();
    iVar4 = unaff_s2 * 0x5d8 + unaff_s5;
    FUN_00010d2a();
    FUN_00010d3a();
    _L0();
    *(char *)(iVar2 + 0x162) = (char)extraout_a0;
    *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
    FUN_00010d6c();
    iVar2 = *(int *)(extraout_a0_00 + 0x6c);
    *(undefined *)(extraout_a0_00 + 0x2f) = *(undefined *)(iVar4 + 0x57);
    uVar1 = *(undefined *)(iVar4 + 0x60);
    *(int *)(extraout_a0_00 + 0x2d0) = extraout_a0_00;
    *(undefined *)(extraout_a0_00 + 0x30) = uVar1;
    *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
    *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_01;
    *(int *)(iVar2 + 0x1c) = extraout_a0_01 + 0x1c;
    for (iVar2 = iVar5; iVar2 != (uint)in_stack_0000000a + iVar5; iVar2 += 1) {
      *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - iVar5) + iVar2);
    }
    *(ushort *)(iVar5 + 0xe) = in_stack_0000000a;
    _L0();
    FUN_00010dd4();
    FUN_00010de0();
  }
  return;
}



void _L0(void)

{
  undefined uVar1;
  int unaff_s0;
  int iVar2;
  undefined2 extraout_a0;
  int extraout_a0_00;
  char cVar3;
  int unaff_s2;
  int iVar4;
  int unaff_s5;
  int unaff_s7;
  int unaff_s8;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  _L0();
  cVar3 = *(char *)(unaff_s7 + 0x11);
  iVar2 = *(int *)(unaff_s0 + 0x68);
  if (cVar3 != '\0') {
    cVar3 = ' ';
  }
  *(char *)(iVar2 + 0x14c) = cVar3;
  *(undefined *)(iVar2 + 0x14d) = 0;
  *(undefined *)(iVar2 + 0x14e) = 0;
  *(undefined *)(iVar2 + 0x14f) = 0;
  FUN_00010d0e();
  iVar4 = unaff_s2 * 0x5d8 + unaff_s5;
  FUN_00010d2a();
  FUN_00010d3a();
  _L0();
  *(char *)(iVar2 + 0x162) = (char)extraout_a0;
  *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  FUN_00010d6c();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(iVar4 + 0x57);
  uVar1 = *(undefined *)(iVar4 + 0x60);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_00;
  *(int *)(iVar2 + 0x1c) = extraout_a0_00 + 0x1c;
  for (iVar2 = unaff_s8; iVar2 != (uint)in_stack_0000000a + unaff_s8; iVar2 += 1) {
    *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - unaff_s8) + iVar2);
  }
  *(ushort *)(unaff_s8 + 0xe) = in_stack_0000000a;
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void FUN_00010d0e(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s5;
  int unaff_s8;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  FUN_00010d0e();
  iVar3 = unaff_s2 * 0x5d8 + unaff_s5;
  FUN_00010d2a();
  FUN_00010d3a();
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  FUN_00010d6c();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(iVar3 + 0x57);
  uVar1 = *(undefined *)(iVar3 + 0x60);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_00;
  *(int *)(iVar2 + 0x1c) = extraout_a0_00 + 0x1c;
  for (iVar2 = unaff_s8; iVar2 != (uint)in_stack_0000000a + unaff_s8; iVar2 += 1) {
    *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - unaff_s8) + iVar2);
  }
  *(ushort *)(unaff_s8 + 0xe) = in_stack_0000000a;
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void FUN_00010d2a(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int unaff_s8;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  FUN_00010d2a();
  FUN_00010d3a();
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  FUN_00010d6c();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_00;
  *(int *)(iVar2 + 0x1c) = extraout_a0_00 + 0x1c;
  for (iVar2 = unaff_s8; iVar2 != (uint)in_stack_0000000a + unaff_s8; iVar2 += 1) {
    *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - unaff_s8) + iVar2);
  }
  *(ushort *)(unaff_s8 + 0xe) = in_stack_0000000a;
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void FUN_00010d3a(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int unaff_s8;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  FUN_00010d3a();
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  FUN_00010d6c();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_00;
  *(int *)(iVar2 + 0x1c) = extraout_a0_00 + 0x1c;
  for (iVar2 = unaff_s8; iVar2 != (uint)in_stack_0000000a + unaff_s8; iVar2 += 1) {
    *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - unaff_s8) + iVar2);
  }
  *(ushort *)(unaff_s8 + 0xe) = in_stack_0000000a;
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void _L0(void)

{
  undefined uVar1;
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int iVar2;
  int unaff_s2;
  int unaff_s8;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  _L0();
  *(char *)(unaff_s1 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  FUN_00010d6c();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_00;
  *(int *)(iVar2 + 0x1c) = extraout_a0_00 + 0x1c;
  for (iVar2 = unaff_s8; iVar2 != (uint)in_stack_0000000a + unaff_s8; iVar2 += 1) {
    *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - unaff_s8) + iVar2);
  }
  *(ushort *)(unaff_s8 + 0xe) = in_stack_0000000a;
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void FUN_00010d6c(void)

{
  undefined uVar1;
  int unaff_s0;
  int extraout_a0;
  int iVar2;
  int unaff_s2;
  int unaff_s8;
  ushort in_stack_0000000a;
  int in_stack_0000000c;
  
  FUN_00010d6c();
  iVar2 = *(int *)(unaff_s0 + 0x6c);
  *(undefined *)(unaff_s0 + 0x2f) = *(undefined *)(unaff_s2 + 0x57);
  uVar1 = *(undefined *)(unaff_s2 + 0x60);
  *(int *)(unaff_s0 + 0x2d0) = unaff_s0;
  *(undefined *)(unaff_s0 + 0x30) = uVar1;
  *(undefined4 *)(unaff_s0 + 0x2cc) = 0;
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0;
  *(int *)(iVar2 + 0x1c) = extraout_a0 + 0x1c;
  for (iVar2 = unaff_s8; iVar2 != (uint)in_stack_0000000a + unaff_s8; iVar2 += 1) {
    *(undefined *)(iVar2 + 0x14) = *(undefined *)((in_stack_0000000c - unaff_s8) + iVar2);
  }
  *(ushort *)(unaff_s8 + 0xe) = in_stack_0000000a;
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void _L0(void)

{
  _L0();
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void FUN_00010dd4(void)

{
  FUN_00010dd4();
  FUN_00010de0();
  return;
}



void FUN_00010de0(void)

{
  FUN_00010de0();
  return;
}



void _LVL269(void)

{
  _LVL269();
  return;
}



// DWARF DIE: 6b28

void sm_assoc_done(uint16_t aid)

{
  int iVar1;
  uint16_t *extraout_a0;
  
  iVar1 = iRam00000000;
  _L0();
  *extraout_a0 = aid;
  *(undefined *)(extraout_a0 + 1) = 1;
  *(undefined *)((int)extraout_a0 + 3) = *(undefined *)(iVar1 + 0x3d);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  undefined2 unaff_s1;
  undefined2 *extraout_a0;
  
  _L0();
  *extraout_a0 = unaff_s1;
  *(undefined *)(extraout_a0 + 1) = 1;
  *(undefined *)((int)extraout_a0 + 3) = *(undefined *)(unaff_s0 + 0x3d);
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



// DWARF DIE: 6982

void sm_auth_handler(rxu_mgt_ind *param)

{
  _L0();
  if (param[1].center_freq != 0) {
    if ((*(char *)(iRam00000000 + 0x3b) != '\x01') || (*(char *)(iRam00000000 + 0x140) == '\0')) {
      FUN_00010f6a();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    *(undefined *)(iRam00000000 + 0x3b) = 0;
_L0:
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (param[1].length != 0) {
    if (param[1].length != 1) {
      return;
    }
    if (param[1].framectrl != 4) {
      if (param[1].framectrl != 2) {
        FUN_00010f14();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (param->length < 0x88) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      goto _L0;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  ushort *unaff_s0;
  int unaff_s1;
  
  _L0();
  if (*(short *)(unaff_s1 + 4) != 0) {
    if ((*(char *)(iRam00000000 + 0x3b) != '\x01') || (*(char *)(iRam00000000 + 0x140) == '\0')) {
      FUN_00010f6a();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    *(undefined *)(iRam00000000 + 0x3b) = 0;
_L0:
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (unaff_s0[0xe] != 0) {
    if (unaff_s0[0xe] != 1) {
      return;
    }
    if (*(short *)(unaff_s1 + 2) != 4) {
      if (*(short *)(unaff_s1 + 2) != 2) {
        FUN_00010f14();
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (*unaff_s0 < 0x88) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      goto _L0;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f14(void)

{
  FUN_00010f14();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010f6a(void)

{
  FUN_00010f6a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 6741

void sm_assoc_rsp_handler(rxu_mgt_ind *param)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint8_t idx;
  int8_t pwr;
  
  iVar3 = _DAT_00000004;
  bVar1 = *(byte *)(iRam00000000 + 0x3d);
  _L0();
  uVar4 = (uint)param[1].framectrl;
  if (uVar4 == 0) {
    if (5 < param->length) {
      uVar4 = (uint)(ushort)(param->length - 6);
    }
    _L0();
    FUN_0001103a();
    _L0();
    uVar2 = *(ushort *)(iVar3 + 0xe);
    for (uVar5 = 0; uVar4 != uVar5; uVar5 += 1) {
      *(uint8_t *)((uint)uVar2 + iVar3 + 0x14 + uVar5) = param[1].sa[uVar5 - 3];
    }
    *(short *)(iVar3 + 0x10) = (short)uVar4;
    if ((*(uint *)((uint)bVar1 * 0x5d8 + 1000) & 0x12a00) != 0) {
      FUN_000110b2();
    }
  }
  else {
    FUN_000110ee();
    FUN_000110f8();
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  uint uVar2;
  int unaff_s1;
  int iVar3;
  uint uVar4;
  int unaff_s2;
  ushort *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  char cStack0000000f;
  
  _L0();
  uVar2 = (uint)*(ushort *)(unaff_s2 + 2);
  if (uVar2 == 0) {
    if (5 < *unaff_s5) {
      uVar2 = (uint)(ushort)(*unaff_s5 - 6);
    }
    _L0();
    FUN_0001103a();
    iVar3 = unaff_s1 + unaff_s7 * 0x5d8;
    cStack0000000f = *(char *)(*(int *)(iVar3 + 0x3a4) + 4) - *(char *)(iVar3 + 0x3dc);
    _L0();
    uVar1 = *(ushort *)(unaff_s6 + 0xe);
    for (uVar4 = 0; uVar2 != uVar4; uVar4 += 1) {
      *(undefined *)((uint)uVar1 + unaff_s6 + 0x14 + uVar4) =
           *(undefined *)((int)unaff_s5 + uVar4 + 0x22);
    }
    *(short *)(unaff_s6 + 0x10) = (short)uVar2;
    if ((*(uint *)(unaff_s7 * 0x5d8 + unaff_s1 + 1000) & 0x12a00) != 0) {
      FUN_000110b2();
    }
  }
  else {
    FUN_000110ee();
    FUN_000110f8();
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  char cStack0000000f;
  
  _L0();
  FUN_0001103a();
  cStack0000000f =
       *(char *)(*(int *)(unaff_s1 + unaff_s3 + 0x3a4) + 4) - *(char *)(unaff_s1 + unaff_s3 + 0x3dc)
  ;
  _L0();
  uVar1 = *(ushort *)(unaff_s6 + 0xe);
  for (iVar2 = 0; unaff_s0 != iVar2; iVar2 += 1) {
    *(undefined *)((uint)uVar1 + unaff_s6 + 0x14 + iVar2) = *(undefined *)(unaff_s5 + iVar2 + 0x22);
  }
  *(short *)(unaff_s6 + 0x10) = (short)unaff_s0;
  if ((*(uint *)(unaff_s7 * 0x5d8 + unaff_s1 + 1000) & 0x12a00) != 0) {
    FUN_000110b2();
  }
  return;
}



void FUN_0001103a(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  char cStack0000000f;
  
  FUN_0001103a();
  cStack0000000f =
       *(char *)(*(int *)(unaff_s1 + unaff_s3 + 0x3a4) + 4) - *(char *)(unaff_s1 + unaff_s3 + 0x3dc)
  ;
  _L0();
  uVar1 = *(ushort *)(unaff_s6 + 0xe);
  for (iVar2 = 0; unaff_s0 != iVar2; iVar2 += 1) {
    *(undefined *)((uint)uVar1 + unaff_s6 + 0x14 + iVar2) = *(undefined *)(unaff_s5 + iVar2 + 0x22);
  }
  *(short *)(unaff_s6 + 0x10) = (short)unaff_s0;
  if ((*(uint *)(unaff_s7 * 0x5d8 + unaff_s1 + 1000) & 0x12a00) != 0) {
    FUN_000110b2();
  }
  return;
}



void _L0(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  _L0();
  uVar1 = *(ushort *)(unaff_s6 + 0xe);
  for (iVar2 = 0; unaff_s0 != iVar2; iVar2 += 1) {
    *(undefined *)((uint)uVar1 + unaff_s6 + 0x14 + iVar2) = *(undefined *)(unaff_s5 + iVar2 + 0x22);
  }
  *(short *)(unaff_s6 + 0x10) = (short)unaff_s0;
  if ((*(uint *)(unaff_s7 * 0x5d8 + unaff_s1 + 1000) & 0x12a00) != 0) {
    FUN_000110b2();
  }
  return;
}



void FUN_000110b2(void)

{
  FUN_000110b2();
  return;
}



void FUN_000110ee(void)

{
  FUN_000110ee();
  FUN_000110f8();
  return;
}



void FUN_000110f8(void)

{
  FUN_000110f8();
  return;
}



// DWARF DIE: 6603

int sm_deauth_handler(rxu_mgt_ind *param)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = iRam00000000;
  bVar1 = param->inst_nbr;
  iVar3 = _L0();
  if (iVar3 != 8) {
    iVar3 = FUN_00011140();
    if (iVar3 == 0) {
      if (*(char *)((uint)bVar1 * 0x5d8 + 0x58) == '\0') {
        return 0;
      }
      _L0();
      FUN_000111a0();
      FUN_000111ac();
      return 0;
    }
    if (*(uint8_t *)(iVar2 + 0x3d) == param->inst_nbr) {
      FUN_00011158();
      return 0;
    }
  }
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  iVar1 = _L0();
  if (iVar1 != 8) {
    iVar1 = FUN_00011140();
    if (iVar1 == 0) {
      if (*(char *)(unaff_s1 * 0x5d8 + 0x58) == '\0') {
        return 0;
      }
      _L0();
      FUN_000111a0();
      FUN_000111ac();
      return 0;
    }
    if (*(char *)(unaff_s0 + 0x3d) == *(char *)(unaff_s2 + 8)) {
      FUN_00011158();
      return 0;
    }
  }
  return 2;
}



undefined4 FUN_00011140(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 uVar2;
  
  iVar1 = FUN_00011140();
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*(char *)(unaff_s1 * 0x5d8 + 0x58) != '\0') {
      _L0();
      FUN_000111a0();
      FUN_000111ac();
    }
  }
  else {
    if (*(char *)(unaff_s0 + 0x3d) == *(char *)(unaff_s2 + 8)) {
      FUN_00011158();
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}



undefined4 FUN_00011158(void)

{
  FUN_00011158();
  return 0;
}



void _L0(void)

{
  _L0();
  FUN_000111a0();
  FUN_000111ac();
  return;
}



void FUN_000111a0(void)

{
  FUN_000111a0();
  FUN_000111ac();
  return;
}



void FUN_000111ac(void)

{
  FUN_000111ac();
  return;
}



// DWARF DIE: 638c

void sm_handle_supplicant_result(uint8_t sta_id,uint16_t reason_code)

{
  byte bVar1;
  undefined2 extraout_a0;
  undefined3 in_register_00002029;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined2 in_register_0000202e;
  int iVar2;
  
  iVar2 = CONCAT31(in_register_00002029,sta_id) * 0x1b0;
  bVar1 = *(byte *)(iVar2 + 0x1a);
  if (CONCAT22(in_register_0000202e,reason_code) == 0) {
    *(undefined *)(iVar2 + 0x31) = 2;
  }
  else {
    if (CONCAT22(in_register_0000202e,reason_code) == 0xf) {
      FUN_00011218();
    }
    FUN_00011242();
    if (extraout_a0_00 != 0) {
      FUN_00011252();
      iVar2 = *(int *)(extraout_a0_00 + 0x68);
      *(undefined *)(iVar2 + 0x14c) = 0xc0;
      *(undefined *)(iVar2 + 0x14d) = 0;
      *(undefined *)(iVar2 + 0x14e) = 0;
      *(undefined *)(iVar2 + 0x14f) = 0;
      FUN_00011284();
      FUN_00011296();
      FUN_000112a6();
      _L0();
      *(char *)(iVar2 + 0x162) = (char)extraout_a0;
      *(char *)(iVar2 + 0x163) = (char)((ushort)extraout_a0 >> 8);
      *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
      *(uint *)(extraout_a0_00 + 0x2d0) = (uint)bVar1 * 0x5d8;
      *(byte *)(extraout_a0_00 + 0x2f) = bVar1;
      *(uint8_t *)(extraout_a0_00 + 0x30) = sta_id;
      FUN_000112de();
      iVar2 = *(int *)(extraout_a0_00 + 0x6c);
      *(int *)(iVar2 + 0x1c) = extraout_a0_01 + 0x1c;
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) + 0x17 + extraout_a0_01;
      _LVL375();
      if (extraout_a0_02 != 0) {
        return;
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011218(void)

{
  int iVar1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined unaff_s5;
  int unaff_s6;
  
  FUN_00011218();
  FUN_00011242();
  if (extraout_a0_00 != 0) {
    FUN_00011252();
    iVar1 = *(int *)(extraout_a0_00 + 0x68);
    *(undefined *)(iVar1 + 0x14c) = 0xc0;
    *(undefined *)(iVar1 + 0x14d) = 0;
    *(undefined *)(iVar1 + 0x14e) = 0;
    *(undefined *)(iVar1 + 0x14f) = 0;
    FUN_00011284();
    FUN_00011296();
    FUN_000112a6();
    _L0();
    *(char *)(iVar1 + 0x162) = (char)extraout_a0;
    *(char *)(iVar1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
    *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
    *(int *)(extraout_a0_00 + 0x2d0) = unaff_s6 * 0x5d8;
    *(char *)(extraout_a0_00 + 0x2f) = (char)unaff_s6;
    *(undefined *)(extraout_a0_00 + 0x30) = unaff_s5;
    FUN_000112de();
    iVar1 = *(int *)(extraout_a0_00 + 0x6c);
    *(int *)(iVar1 + 0x1c) = extraout_a0_01 + 0x1c;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_01;
    _LVL375();
    if (extraout_a0_02 != 0) {
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011242(void)

{
  int iVar1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  undefined4 unaff_s2;
  undefined unaff_s5;
  undefined unaff_s6;
  
  FUN_00011242();
  if (extraout_a0_00 != 0) {
    FUN_00011252();
    iVar1 = *(int *)(extraout_a0_00 + 0x68);
    *(undefined *)(iVar1 + 0x14c) = 0xc0;
    *(undefined *)(iVar1 + 0x14d) = 0;
    *(undefined *)(iVar1 + 0x14e) = 0;
    *(undefined *)(iVar1 + 0x14f) = 0;
    FUN_00011284();
    FUN_00011296();
    FUN_000112a6();
    _L0();
    *(char *)(iVar1 + 0x162) = (char)extraout_a0;
    *(char *)(iVar1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
    *(undefined4 *)(extraout_a0_00 + 0x2cc) = 0;
    *(undefined4 *)(extraout_a0_00 + 0x2d0) = unaff_s2;
    *(undefined *)(extraout_a0_00 + 0x2f) = unaff_s6;
    *(undefined *)(extraout_a0_00 + 0x30) = unaff_s5;
    FUN_000112de();
    iVar1 = *(int *)(extraout_a0_00 + 0x6c);
    *(int *)(iVar1 + 0x1c) = extraout_a0_01 + 0x1c;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_01;
    _LVL375();
    if (extraout_a0_02 != 0) {
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011252(void)

{
  int iVar1;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  undefined4 unaff_s2;
  undefined unaff_s5;
  undefined unaff_s6;
  
  FUN_00011252();
  iVar1 = *(int *)(unaff_s1 + 0x68);
  *(undefined *)(iVar1 + 0x14c) = 0xc0;
  *(undefined *)(iVar1 + 0x14d) = 0;
  *(undefined *)(iVar1 + 0x14e) = 0;
  *(undefined *)(iVar1 + 0x14f) = 0;
  FUN_00011284();
  FUN_00011296();
  FUN_000112a6();
  _L0();
  *(char *)(iVar1 + 0x162) = (char)extraout_a0;
  *(char *)(iVar1 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s2;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s6;
  *(undefined *)(unaff_s1 + 0x30) = unaff_s5;
  FUN_000112de();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL375();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011284(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  undefined4 unaff_s2;
  undefined unaff_s5;
  undefined unaff_s6;
  
  FUN_00011284();
  FUN_00011296();
  FUN_000112a6();
  _L0();
  *(char *)(unaff_s0 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s0 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s2;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s6;
  *(undefined *)(unaff_s1 + 0x30) = unaff_s5;
  FUN_000112de();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL375();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011296(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  undefined4 unaff_s2;
  undefined unaff_s5;
  undefined unaff_s6;
  
  FUN_00011296();
  FUN_000112a6();
  _L0();
  *(char *)(unaff_s0 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s0 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s2;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s6;
  *(undefined *)(unaff_s1 + 0x30) = unaff_s5;
  FUN_000112de();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL375();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000112a6(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  undefined4 unaff_s2;
  undefined unaff_s5;
  undefined unaff_s6;
  
  FUN_000112a6();
  _L0();
  *(char *)(unaff_s0 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s0 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s2;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s6;
  *(undefined *)(unaff_s1 + 0x30) = unaff_s5;
  FUN_000112de();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL375();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined2 extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int iVar1;
  undefined4 unaff_s2;
  undefined unaff_s5;
  undefined unaff_s6;
  
  _L0();
  *(char *)(unaff_s0 + 0x162) = (char)extraout_a0;
  *(char *)(unaff_s0 + 0x163) = (char)((ushort)extraout_a0 >> 8);
  *(undefined4 *)(unaff_s1 + 0x2cc) = 0;
  *(undefined4 *)(unaff_s1 + 0x2d0) = unaff_s2;
  *(undefined *)(unaff_s1 + 0x2f) = unaff_s6;
  *(undefined *)(unaff_s1 + 0x30) = unaff_s5;
  FUN_000112de();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0_00 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0_00;
  _LVL375();
  if (extraout_a0_01 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000112de(void)

{
  int unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int iVar1;
  
  FUN_000112de();
  iVar1 = *(int *)(unaff_s1 + 0x6c);
  *(int *)(iVar1 + 0x1c) = extraout_a0 + 0x1c;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14) + 0x17 + extraout_a0;
  _LVL375();
  if (extraout_a0_00 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL375(void)

{
  int extraout_a0;
  
  _LVL375();
  if (extraout_a0 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


