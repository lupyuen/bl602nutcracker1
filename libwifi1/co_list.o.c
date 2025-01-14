typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict882_for__new anon_union.conflict882_for__new, *Panon_union.conflict882_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6f6 anon_struct.conflict6f6, *Panon_struct.conflict6f6;

typedef struct anon_struct.conflict83b anon_struct.conflict83b, *Panon_struct.conflict83b;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflicta8_for___value anon_union.conflicta8_for___value, *Panon_union.conflicta8_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct _Bigint { // DWARF DIE: 130
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct __tm { // DWARF DIE: 1a0
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

union anon_union.conflicta8_for___value { // DWARF DIE: a8
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: da
    int __count;
    union anon_union.conflicta8_for___value __value;
};

struct _rand48 { // DWARF DIE: 6ad
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict6f6 { // DWARF DIE: 6f6
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

struct _glue { // DWARF DIE: 668
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict83b { // DWARF DIE: 83b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict882_for__new { // DWARF DIE: 882
    struct anon_struct.conflict6f6 _reent;
    struct anon_struct.conflict83b _unused;
};

struct _on_exit_args { // DWARF DIE: 223
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 278
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 2d8
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 306
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

struct _reent { // DWARF DIE: 472
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
    union anon_union.conflict882_for__new _new;
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

struct __locale_t { // DWARF DIE: 8b7
};

typedef union anon_union.conflict882 anon_union.conflict882, *Panon_union.conflict882;

union anon_union.conflict882 { // DWARF DIE: 882
    struct anon_struct.conflict6f6 _reent;
    struct anon_struct.conflict83b _unused;
};

typedef union anon_union.conflicta8 anon_union.conflicta8, *Panon_union.conflicta8;

union anon_union.conflicta8 { // DWARF DIE: a8
    wint_t __wch;
    uchar __wchb[4];
};

typedef uint size_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr { // DWARF DIE: 95c
    uint16_t array[3];
};

typedef uchar uint8_t;

typedef ulong uint32_t;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 9ec
    struct co_list_hdr * next;
};

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: a17
    struct co_list_hdr * first;
    struct co_list_hdr * last;
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




// DWARF DIE: 102f

void co_list_init(co_list *list)

{
  list->first = (co_list_hdr *)0x0;
  list->last = (co_list_hdr *)0x0;
  return;
}



// DWARF DIE: e89

void co_list_push_back(co_list *list,co_list_hdr *list_hdr)

{
  if (list_hdr == (co_list_hdr *)0x0) {
    FUN_0001002c();
  }
  if (list->first == (co_list_hdr *)0x0) {
    list->first = list_hdr;
  }
  else {
    list->last->next = list_hdr;
  }
  list->last = list_hdr;
  list_hdr->next = (co_list_hdr *)0x0;
  return;
}



void FUN_0001002c(void)

{
  undefined4 *unaff_s0;
  int *unaff_s1;
  
  FUN_0001002c();
  if (*unaff_s1 == 0) {
    *unaff_s1 = (int)unaff_s0;
  }
  else {
    *(undefined4 **)unaff_s1[1] = unaff_s0;
  }
  unaff_s1[1] = (int)unaff_s0;
  *unaff_s0 = 0;
  return;
}



// DWARF DIE: ee2

void co_list_pool_init(co_list *list,void *pool,size_t elmt_size,uint32_t elmt_cnt,
                      void *default_value)

{
  uint32_t uVar1;
  
  list->first = (co_list_hdr *)0x0;
  list->last = (co_list_hdr *)0x0;
  for (uVar1 = 0; uVar1 != elmt_cnt; uVar1 += 1) {
    if (default_value != (void *)0x0) {
      FUN_00010094((int)pool);
    }
    FUN_000100a0((int)pool);
    pool = (void *)((int)pool + elmt_size);
  }
  return;
}



void FUN_00010094(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  do {
    FUN_00010094(param_1);
    do {
      FUN_000100a0(unaff_s0);
      unaff_s0 += unaff_s3;
      unaff_s1 += 1;
      if (unaff_s1 == unaff_s5) {
        return;
      }
      param_1 = unaff_s0;
    } while (unaff_s4 == 0);
  } while( true );
}



void FUN_000100a0(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  while( true ) {
    FUN_000100a0(param_1);
    unaff_s0 += unaff_s3;
    unaff_s1 += 1;
    if (unaff_s1 == unaff_s5) break;
    param_1 = unaff_s0;
    if (unaff_s4 != 0) {
      FUN_00010094(unaff_s0);
    }
  }
  return;
}



// DWARF DIE: e30

void co_list_push_front(co_list *list,co_list_hdr *list_hdr)

{
  if (list_hdr == (co_list_hdr *)0x0) {
    FUN_000100d0();
  }
  if (list->first == (co_list_hdr *)0x0) {
    list->last = list_hdr;
  }
  list_hdr->next = list->first;
  list->first = list_hdr;
  return;
}



void FUN_000100d0(void)

{
  int *unaff_s0;
  int **unaff_s1;
  
  FUN_000100d0();
  if (*unaff_s1 == (int *)0x0) {
    unaff_s1[1] = unaff_s0;
  }
  *unaff_s0 = (int)*unaff_s1;
  *unaff_s1 = unaff_s0;
  return;
}



// DWARF DIE: df7

co_list_hdr * co_list_pop_front(co_list *list)

{
  co_list_hdr *pcVar1;
  
  pcVar1 = list->first;
  if (pcVar1 != (co_list_hdr *)0x0) {
    list->first = pcVar1->next;
  }
  return pcVar1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: d8e

void co_list_extract(co_list *list,co_list_hdr *list_hdr)

{
  co_list_hdr cVar1;
  co_list_hdr cVar2;
  
  if (list == (co_list *)0x0) {
    FUN_0001011a();
  }
  cVar1 = (co_list_hdr)list->first;
  if (cVar1 != (co_list_hdr)0x0) {
    if (cVar1 == (co_list_hdr)list_hdr) {
      list->first = list_hdr->next;
    }
    else {
      do {
        cVar2 = cVar1;
        cVar1 = *(co_list_hdr *)cVar2;
        if (cVar1 == (co_list_hdr)0x0) {
          return;
        }
      } while (cVar1 != (co_list_hdr)list_hdr);
      if (list->last == list_hdr) {
        ((co_list_hdr *)&list->last)->next = (co_list_hdr *)cVar2;
      }
      *(co_list_hdr **)cVar2 = list_hdr->next;
    }
  }
  return;
}



void FUN_0001011a(void)

{
  int **unaff_s0;
  int **unaff_s1;
  int **ppiVar1;
  int **ppiVar2;
  
  FUN_0001011a();
  ppiVar1 = (int **)*unaff_s0;
  if (ppiVar1 != (int **)0x0) {
    if (ppiVar1 == unaff_s1) {
      *unaff_s0 = *unaff_s1;
    }
    else {
      do {
        ppiVar2 = ppiVar1;
        ppiVar1 = (int **)*ppiVar2;
        if (ppiVar1 == (int **)0x0) {
          return;
        }
      } while (ppiVar1 != unaff_s1);
      if ((int **)unaff_s0[1] == unaff_s1) {
        unaff_s0[1] = (int *)ppiVar2;
      }
      *ppiVar2 = *unaff_s1;
    }
  }
  return;
}



// DWARF DIE: d44

_Bool co_list_find(co_list *list,co_list_hdr *list_hdr)

{
  do {
    list = (co_list *)list->first;
    if (list == (co_list *)list_hdr) break;
  } while (list != (co_list *)0x0);
  return (_Bool)((co_list *)list_hdr == list);
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: cf0

uint32_t co_list_cnt(co_list *list)

{
  uint32_t uVar1;
  int *piVar2;
  
  uVar1 = 0;
  for (piVar2 = (int *)list->first; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    uVar1 += 1;
  }
  return uVar1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: c4e

void co_list_insert(co_list *list,co_list_hdr *element,
                   anon_subr__Bool_co_list_hdr_ptr_co_list_hdr_ptr *cmp)

{
  co_list_hdr cVar1;
  co_list_hdr cVar2;
  _Bool _Var3;
  undefined3 extraout_var;
  co_list_hdr cVar4;
  
  cVar1 = (co_list_hdr)list->first;
  cVar4 = (co_list_hdr)(co_list_hdr *)0x0;
  while (cVar2 = cVar1, cVar2 != (co_list_hdr)0x0) {
    _Var3 = (*cmp)(element,(co_list_hdr *)cVar2);
    if (CONCAT31(extraout_var,_Var3) != 0) goto _L0;
    cVar4 = cVar2;
    cVar1 = *(co_list_hdr *)cVar2;
  }
  list->last = element;
_L0:
  element->next = (co_list_hdr *)cVar2;
  if (cVar4 == (co_list_hdr)0x0) {
    list->first = element;
  }
  else {
    *(co_list_hdr **)cVar4 = element;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: bdd

void co_list_insert_after(co_list *list,co_list_hdr *prev_element,co_list_hdr *element)

{
  co_list_hdr cVar1;
  
  cVar1 = (co_list_hdr)list->first;
  if (prev_element == (co_list_hdr *)0x0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  while( true ) {
    if (cVar1 == (co_list_hdr)0x0) {
      return;
    }
    if (cVar1 == (co_list_hdr)prev_element) break;
    cVar1 = *(co_list_hdr *)cVar1;
  }
  element->next = *(co_list_hdr **)cVar1;
  *(co_list_hdr **)cVar1 = element;
  if (element->next == (co_list_hdr *)0x0) {
    list->last = element;
    return;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: b41

void co_list_insert_before(co_list *list,co_list_hdr *next_element,co_list_hdr *element)

{
  co_list_hdr cVar1;
  co_list_hdr cVar2;
  
  if (next_element == (co_list_hdr *)0x0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  cVar1 = (co_list_hdr)list->first;
  if (list->first != next_element) {
    do {
      cVar2 = cVar1;
      if (cVar2 == (co_list_hdr)0x0) {
        return;
      }
      cVar1 = *(co_list_hdr *)cVar2;
    } while (*(co_list_hdr *)cVar2 != (co_list_hdr)next_element);
    element->next = next_element;
    *(co_list_hdr **)cVar2 = element;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: b0b

void co_list_concat(co_list *list1,co_list *list2)

{
  co_list_hdr *pcVar1;
  
  pcVar1 = list2->first;
  if (pcVar1 != (co_list_hdr *)0x0) {
    if (list1->first == (co_list_hdr *)0x0) {
      list1->first = pcVar1;
    }
    else {
      list1->last->next = pcVar1;
    }
    list1->last = list2->last;
    list2->first = (co_list_hdr *)0x0;
  }
  return;
}



// DWARF DIE: a44

void co_list_remove(co_list *list,co_list_hdr *prev_element,co_list_hdr *element)

{
  if (list == (co_list *)0x0) {
    FUN_00010252();
  }
  if (prev_element == (co_list_hdr *)0x0) {
    if (element == (co_list_hdr *)0x0) goto _L0;
_L0:
    list->first = element->next;
  }
  else {
    if (prev_element->next != element) {
      FUN_00010276();
    }
    if (element == (co_list_hdr *)0x0) {
_L0:
      FUN_000102a8();
      if (prev_element == (co_list_hdr *)0x0) goto _L0;
    }
    prev_element->next = element->next;
    if (list->last == element) {
      list->last = prev_element;
    }
  }
  element->next = (co_list_hdr *)0x0;
  return;
}



void FUN_00010252(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  
  FUN_00010252();
  if (unaff_s1 == (undefined4 *)0x0) {
    if (unaff_s0 == (undefined4 *)0x0) goto _L0;
_L0:
    *unaff_s2 = *unaff_s0;
  }
  else {
    if ((undefined4 *)*unaff_s1 != unaff_s0) {
      FUN_00010276();
    }
    if (unaff_s0 == (undefined4 *)0x0) {
_L0:
      FUN_000102a8();
      if (unaff_s1 == (undefined4 *)0x0) goto _L0;
    }
    *unaff_s1 = *unaff_s0;
    if ((undefined4 *)unaff_s2[1] == unaff_s0) {
      unaff_s2[1] = unaff_s1;
    }
  }
  *unaff_s0 = 0;
  return;
}



void FUN_00010276(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  
  FUN_00010276();
  if ((unaff_s0 == (undefined4 *)0x0) && (FUN_000102a8(), unaff_s1 == (undefined4 *)0x0)) {
    *unaff_s2 = uRam00000000;
  }
  else {
    *unaff_s1 = *unaff_s0;
    if ((undefined4 *)unaff_s2[1] == unaff_s0) {
      unaff_s2[1] = unaff_s1;
    }
  }
  *unaff_s0 = 0;
  return;
}



void FUN_000102a8(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  
  FUN_000102a8();
  if (unaff_s1 == (undefined4 *)0x0) {
    *unaff_s2 = *unaff_s0;
  }
  else {
    *unaff_s1 = *unaff_s0;
    if ((undefined4 *)unaff_s2[1] == unaff_s0) {
      unaff_s2[1] = unaff_s1;
    }
  }
  *unaff_s0 = 0;
  return;
}


