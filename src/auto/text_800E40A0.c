/* Functions from 0x800E40A0 to 0x800F5578, found by decomp-toolkit. */
#include "common.h"
extern u32 IDSerialPort1_8035A9B8;
extern u8 lbl_802E05C8[];
double fn_800EFA20(double);

extern unsigned char lbl_802E06C8[];
extern double lbl_803636C0;
extern s32 lbl_8035A998;
extern s32 lbl_8035A99C;
extern u8 lbl_8035A9A4;
double fn_800EF80C(double, double, int);
int fn_800EE484(double, double*);
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
s32 fn_800F0CC4(u32, void*, s32);

typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;

static int unicode_to_UTF8(char *s, u16 wchar) {
    int number_of_bytes;
    u16 wide_char;
    char *target_ptr;
    char first_byte_mark[4] = {0x00, 0x00, 0xC0, 0xE0};

    if (!s) {
        return 0;
    }

    wide_char = wchar;

    if (wide_char < 0x0080) {
        number_of_bytes = 1;
    } else if (wide_char < 0x0800) {
        number_of_bytes = 2;
    } else {
        number_of_bytes = 3;
    }

    target_ptr = s + number_of_bytes;

    switch (number_of_bytes) {
    case 3:
        *--target_ptr = (wide_char & 0x003F) | 0x80;
        wide_char >>= 6;
    case 2:
        *--target_ptr = (wide_char & 0x003F) | 0x80;
        wide_char >>= 6;
    case 1:
        *--target_ptr = wide_char | first_byte_mark[number_of_bytes];
    }

    return number_of_bytes;
}

typedef void (*EXICallback)(s32 chan, void *context);
typedef struct EXIControl {
    EXICallback exiCallback;
    EXICallback tcCallback;
    EXICallback extCallback;
    volatile s32 state;
    int immLen;
    u8 *immBuf;
    u32 dev;
    u32 id;
    s32 idTime;
    int items;
    struct {
        u32 dev;
        EXICallback callback;
    } queue[3];
} EXIControl;
extern char Ecb_80328410[];
s32 EXIGetID(s32, u32, u32 *);
void __OSUnmaskInterrupts(u32);

typedef struct FragmentInfo {
    void *eti_info;
    void *toc;
    int active;
} FragmentInfo;
extern FragmentInfo fragmentinfo_80327F98[1];

extern int lbl_80359530;
extern char lbl_8029BFD0[];
extern char lbl_8029C008[];
void OSReport(const char *, ...);
void *OSGetArenaLo(void);
void *OSGetArenaHi(void);
void OSSetArenaLo(void *);
int fn_800B44C8(int, int, int);
int fn_800B4538(int, int);
int fn_800B44B8(int);
void fn_800B443C(int, int);

typedef struct decimal {
    char sign;
    char unk1;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[36];
        unsigned char unused;
    } sig;
} decimal;

typedef struct decform {
    char style;
    char unused;
    short digits;
} decform;

void fn_800E5B48(decimal *d, double x);
void fn_800EA1DC(decimal *dec, int new_length);
char *fn_800EB764(char *, const char *);
extern const char lbl_8029C148[];

static int __must_round(const decimal *d, int digits) {
    const unsigned char *i = d->sig.text + digits;

    if (*i > 5) {
        return 1;
    }
    if (*i < 5) {
        return -1;
    }
    {
        const unsigned char *e = d->sig.text + d->sig.length;
        for (i++; i < e; i++) {
            if (*i != 0) {
                return 1;
            }
        }
    }
    if (d->sig.text[digits - 1] & 1) {
        return 1;
    }
    return -1;
}

static void __dorounddecup(decimal *d, int digits) {
    unsigned char *b = d->sig.text;
    unsigned char *i = b + digits - 1;

    while (1) {
        if (*i < 9) {
            (*i)++;
            break;
        }
        if (i == b) {
            *i = 1;
            d->exp++;
            break;
        }
        *i-- = 0;
    }
}

static inline int __less_dec(const decimal *x, const decimal *y) {
    if (x->sig.text[0] == 0) {
        if (y->sig.text[0] != 0) {
            return 1;
        }
        return 0;
    }
    if (y->sig.text[0] == 0) {
        return 0;
    }
    if (x->exp == y->exp) {
        int i;
        int l = x->sig.length;
        if (l > y->sig.length) {
            l = y->sig.length;
        }
        for (i = 0; i < l; ++i) {
            if (x->sig.text[i] < y->sig.text[i]) {
                return 1;
            }
            if (y->sig.text[i] < x->sig.text[i]) {
                return 0;
            }
        }
        if (l == x->sig.length) {
            for (; i < y->sig.length; ++i) {
                if (y->sig.text[i] != 0) {
                    return 1;
                }
            }
        }
        return 0;
    }
    return x->exp < y->exp;
}

static inline void __str2dec(decimal *d, const char *s, short exp) {
    int i;
    d->exp = exp;
    d->sign = 0;
    for (i = 0; i < 36 && *s;) {
        d->sig.text[i++] = *s++ - '0';
    }
    d->sig.length = i;
    if (*s != 0) {
        if (*s < 5) {
            return;
        }
        if (*s > 5) {
            goto round;
        }
        {
            const char *p = s + 1;
            for (; *p != 0; ++p) {
                if (*p != '0') {
                    goto round;
                }
            }
            if ((d->sig.text[i - 1] & 1) == 0) {
                return;
            }
        }
    round:
        __dorounddecup(d, d->sig.length);
    }
}

static inline int __tolower_dec(int c) {
    return (c == -1 ? -1 : lbl_802E06C8[c]);
}

static inline int __fpclassifyd_dec(double x) {
    switch (*(int *)&x & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 1;
        return 2;
    case 0:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 5;
        return 3;
    }
    return 4;
}


static void __rounddec(decimal *d, int digits) {
    if (digits > 0 && digits < d->sig.length) {
        int unkBool = __must_round(d, digits);
        d->sig.length = digits;
        if (unkBool >= 0) {
            __dorounddecup(d, digits);
        }
    }
}

extern int __aborting;
extern int __atexit_curr_func;
extern void (*__atexit_funcs[])(void);
extern void (*__console_exit)(void);
extern void (*__stdio_exit)(void);
extern void (*_dtors[])(void);
void __destroy_global_chain(void);
int raise(int);
void _ExitProcess(void);
void __begin_critical_region(int region);
void __end_critical_region(int region);
void __kill_critical_regions(void);
void fn_800E43C8(void *pool, void *ptr);
void fn_800E4420(void *pool, void *ptr, u32 size);
void fn_800E4578(void *pool, void *ptr);
int fflush(void *file);
int fclose(void *file);
void *memset(void *, int, u32);
extern u8 lbl_803280A8[];
extern u8 lbl_8035A970;

extern u8 __files[];

typedef struct MslFileMode {
    unsigned int open_mode : 2;
    unsigned int io_mode : 3;
    unsigned int buffer_mode : 2;
    unsigned int file_kind : 3;
    unsigned int file_orientation : 2;
    unsigned int binary_io : 1;
} MslFileMode;

typedef struct MslFile {
    u32 handle;
    MslFileMode mode;
    struct {
        unsigned char io_state : 3;
        unsigned char free_buffer : 1;
        unsigned char eof;
        unsigned char error;
        unsigned char pad;
    } state;
    u8 is_dynamically_allocated;
    u8 pad[0x18 - 0xD];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 saved_buffer_len;
    u32 buffer_position;
    void *position_proc;
    void *read_proc;
    int (*write_proc)(u32, u8 *, u32 *, void *);
    void *close_proc;
    void *ref_con;
    struct MslFile *next_file;
} MslFile;

typedef struct FixBlock {
    struct FixBlock *prev_;
    struct FixBlock *next_;
    u32 client_size_;
    struct FixSubBlock *start_;
    u32 n_allocated_;
} FixBlock;

typedef struct FixSubBlock {
    FixBlock *block_;
    struct FixSubBlock *next_;
} FixSubBlock;

typedef struct FixStart {
    FixBlock *tail_;
    FixBlock *head_;
} FixStart;

typedef struct __mem_pool_obj {
    void *start_;
    FixStart fix_start[6];
} __mem_pool_obj;

extern u32 lbl_8029C048[];

extern u8 lbl_8029BFB0[];






void fn_800E4114(int size) {
    int arenaLo;
    int arenaHi;

    if (lbl_80359530 == -1) {
        OSReport(lbl_8029BFD0);
        OSReport(lbl_8029C008);
        arenaLo = (int)OSGetArenaLo();
        arenaHi = (int)OSGetArenaHi();
        arenaLo = fn_800B44C8(arenaLo, arenaHi, 1);
        OSSetArenaLo((void *)arenaLo);
        arenaLo = (arenaLo + 0x1F) & ~0x1F;
        arenaHi = arenaHi & ~0x1F;
        fn_800B44B8(fn_800B4538(arenaLo, arenaHi));
        OSSetArenaLo((void *)arenaHi);
    }
    fn_800B443C(lbl_80359530, size);
}







void fn_800E4420(void *pool, void *ptr, u32 size);
void fn_800E4578(void *pool, void *ptr);
int fflush(void *file);
int fclose(void *file);
void *memset(void *, int, u32);
extern u8 lbl_803280A8[];
extern u8 lbl_8035A970;




#pragma push
#pragma inline_depth(0)

#pragma pop


#pragma push
#pragma dont_inline on


double fn_800EFD7C(double, double);
double fn_800F04FC(double, double);
double fn_800F004C(double, int);
void fn_800E5EFC(decimal *result, const decimal *x, const decimal *y);
int fn_800E63F8(const decimal *x, const decimal *y);
extern float lbl_803596B4[];
extern double lbl_803596C0[];
extern double lbl_802E0460[];
extern char lbl_8029C060[];
#pragma push
#pragma dont_inline off

#pragma pop

#pragma push
#pragma dont_inline off




#pragma pop


void fn_800E7C88(decimal *result, const decimal *x, const decimal *y);
#pragma push
#pragma dont_inline off

#pragma pop

#pragma use_lmw_stmw on











typedef struct __va_list_struct {
    char gpr;
    char fpr;
    char reserved[2];
    char *input_arg_area;
    char *reg_save_area;
} va_list[1];
#define va_start(ap, fmt) ((void)fmt, __builtin_va_info(&ap))
#define va_end(ap) ((void)0)
extern u8 __files[];
int fwide(void *, int);
void *__FileWrite(void *file, const void *buf, u32 len);



extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
extern s32 lbl_8035A978;




#pragma push
#pragma dont_inline on


s32 ftell(void *file);


#pragma push
#pragma dont_inline on

#pragma pop

#pragma push
#pragma dont_inline on




#pragma push
#pragma dont_inline on


char *fn_800EB720(char *dst, const char *src, u32 n);
#pragma push
#pragma dont_inline off
#pragma use_lmw_stmw on

#pragma pop






void __copy_longs_rev_unaligned(void *dst, const void *src, unsigned long n);
void __copy_longs_unaligned(void *dst, const void *src, unsigned long n);
void __copy_longs_rev_aligned(void *d, const void *s, unsigned long n);
void __copy_longs_aligned(void *d, const void *s, unsigned long n);


#define cps ((unsigned char*)src)
#define cpd ((unsigned char*)dst)
#define lps ((unsigned long*)src)
#define lpd ((unsigned long*)dst)
#define deref_auto_inc(p) *++(p)

#undef cps
#undef cpd
#undef lps
#undef lpd
#undef deref_auto_inc




#pragma pop
#define cps ((unsigned char*)src)
#define cpd ((unsigned char*)dst)
#define lps ((unsigned long*)src)
#define lpd ((unsigned long*)dst)
#define deref_auto_inc(p) *++(p)

#undef cps
#undef cpd
#undef lps
#undef lpd
#undef deref_auto_inc


#define cps ((unsigned char*)src)
#define cpd ((unsigned char*)dst)
#define lps ((unsigned long*)src)
#define lpd ((unsigned long*)dst)
#define deref_auto_inc(p) *++(p)

#undef cps
#undef cpd
#undef lps
#undef lpd
#undef deref_auto_inc


extern void __close_all(void);
extern void (*__stdio_exit)(void);
extern int __pformatter();
void *__va_arg(va_list, int);
unsigned int strlen(const char *s);
char *strchr(const char *str, int chr);
void *__StringWrite(void *ctx, const void *buf, u32 len);


#pragma push
#pragma use_lmw_stmw on

#pragma pop





#pragma pop

#pragma push
#pragma dont_inline on






char *longlong2str(long long num, char *buff, print_format format);
char *long2str(long num, char *buff, print_format format);
char *float2str(double num, char *buff, print_format format);
char *double2hex(char *buff, print_format format, double x);
char *parse_format(char *format, va_list args, print_format *out);
#pragma push
#pragma use_lmw_stmw on

#pragma pop





static char *long2str(long, char *, print_format);
char *fn_800EB764(char *, const char *);
extern const char lbl_8029C148[];
#pragma push
#pragma pool_strings on

#pragma pop




void *__va_arg(va_list, int);
#pragma push
#pragma use_lmw_stmw off

#pragma pop

#pragma pop
extern s32 lbl_803596A0;










extern unsigned char* lbl_803596A8;
extern unsigned char* lbl_803596AC;


















typedef unsigned int size_t;
















typedef struct ExpCoefficients { double half[2]; double hi[2]; double lo[2]; } ExpCoefficients;




extern double lbl_8035A988, lbl_80363358, lbl_80363360, lbl_80363368;
extern double lbl_80363370, lbl_80363378, lbl_80363380, lbl_80363388, lbl_80363390;
extern double lbl_80363398, lbl_803633A0, lbl_803633A8, lbl_803633B0;
extern double lbl_803633B8, lbl_803633C0, lbl_803633C8;



extern double lbl_803634E8, lbl_803634F0, lbl_803634F8, lbl_80363500, lbl_80363508, lbl_80363510, lbl_80363518, lbl_80363520, lbl_80363528, lbl_80363530;
extern int lbl_8029C6B0[];
extern int lbl_8029C5A8[];
int fn_800EE918(double*, double*, int, int, int, const int*);











































#pragma push
#pragma dont_inline on

#pragma pop












void __OSMaskInterrupts(u32);
void __OSUnmaskInterrupts(u32);
void __OSSetInterruptHandler(s16, void*);
void fn_800F0AC0(void);
void fn_800F0B00(void);
extern void* lbl_8035A994;



typedef struct EXI2Control {
    u8 unk0[0xC];
    volatile u32 state;
    s32 immLen;
    u8 *immBuf;
} EXI2Control;
extern EXI2Control *lbl_803596F0;

s32 fn_800F0E4C(void *buf, s32 len, s32 mode);






volatile u32 __EXIRegs[16] : 0xCC006800;

extern u8 *lbl_803596F8;
extern void (*lbl_8035A9B0)(s32);
extern u8 lbl_803283F8[];
void fn_800F1500(void (*)(void));
void fn_800F16A4(void);
s32 fn_800F10E4(void *, s32, s32, s32);
s32 fn_800F1328(void);
s32 fn_800F156C(s32);
s32 fn_800F15EC(void);
void *memset(void *, int, unsigned long);
void EXI2_Init(u8 **inputPendingPtr, void (*monitorCallback)(s32)) {
    s32 ret;
    u32 cmd;
    u32 status;
    u32 data;
    int enabled;

    *inputPendingPtr = lbl_803596F8;
    enabled = OSDisableInterrupts();
    lbl_8035A9B0 = monitorCallback;
    OSRestoreInterrupts(enabled);
    fn_800F16E4();
    ret = 0;
    data = 0;
    status = 0x01000003;
    while (ret == 0) {
        ret = fn_800F156C(5);
    }
    cmd = 0x80000000;
    fn_800F10E4(&cmd, 2, 1, 0);
    fn_800F1328();
    fn_800F10E4(&status, 4, 1, 0);
    fn_800F1328();
    fn_800F10E4(&data, 4, 1, 0);
    fn_800F1328();
    fn_800F15EC();
}

extern s32 lbl_8035A9AC;
extern char lbl_802E0B78[];





#pragma push
#pragma use_lmw_stmw on
#pragma pop

extern void __OSMaskInterrupts(u32);
extern void OSClearContext(void *);
extern void OSSetCurrentContext(void *);

extern void SetExiInterruptMask(s32 chan, EXIControl *exi);
extern void *memmove(void *, const void *, unsigned long);

static inline BOOL __EXIAttach(s32 chan, EXICallback extCallback) {
    EXIControl *exi = &((EXIControl *)Ecb_80328410)[chan];
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & 8) || __EXIProbe(chan) == FALSE) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    EXIClearInterrupts(chan, TRUE, FALSE, FALSE);
    exi->extCallback = extCallback;
    __OSUnmaskInterrupts(0x100000U >> (chan * 3));
    exi->state |= 8;
    OSRestoreInterrupts(enabled);
    return TRUE;
}

static inline BOOL __EXIDetach(s32 chan) {
    EXIControl *exi = &((EXIControl *)Ecb_80328410)[chan];
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if (!(exi->state & 8)) {
        OSRestoreInterrupts(enabled);
        return TRUE;
    }
    if ((exi->state & 0x10) && exi->dev == 0) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state &= ~8;
    __OSMaskInterrupts(0x500000U >> (chan * 3));
    OSRestoreInterrupts(enabled);
    return TRUE;
}

extern char Ecb_80328410[];
extern s32 lbl_8035A9C0;
extern s32 lbl_8035A9C4;
extern s32 lbl_8035A9C8;
extern s32 lbl_8035A9CC;
s32 EXIGetID(s32, u32, u32 *);
s32 fn_800B31A4();
typedef volatile u32 vu32_t;
extern struct { s32 unk0; volatile u32 poll; u32 unk8[2]; } Si_802E0CEC;



extern u32 IDSerialPort1_8035A9B8;
void UnlockedHandler(void);
extern BOOL EXILock(s32 chan, u32 dev, EXICallback unlockedCallback);
extern BOOL EXISelect(s32 chan, u32 dev, u32 freq);
extern BOOL EXIImm(s32 chan, void *buf, s32 len, u32 type, EXICallback callback);
extern BOOL EXISync(s32 chan);
#pragma push
#pragma use_lmw_stmw on
#pragma pop






#define SIREGS ((vu32_t *)0xCC006400)


#pragma scheduling off
#pragma scheduling reset


typedef void (*SITypeAndStatusCallback)(s32 chan, u32 type);
extern u32 Type_802E0D00[];
extern SITypeAndStatusCallback lbl_80328630[][4];
u32 SIGetType(s32 chan);








extern unsigned char lbl_802E05C8[];
extern unsigned char lbl_802E07C8[];
#define su_isspace(c) (lbl_802E05C8[(unsigned char)(c)] & 0x06)
#define su_isdigit(c) (lbl_802E05C8[(unsigned char)(c)] & 0x10)
#define su_isalpha(c) (lbl_802E05C8[(unsigned char)(c)] & 0xC0)
#define su_toupper(c) ((c) == -1 ? -1 : (int)lbl_802E07C8[(unsigned char)(c)])
#define fetch() (count++, (*ReadProc)(ReadProcArg, 0, 0))
#define unfetch(c) (*ReadProc)(ReadProcArg, c, 1)

#pragma push
#pragma use_lmw_stmw on

#pragma pop
#undef su_isspace
#undef su_isdigit
#undef su_isalpha
#undef su_toupper
#undef fetch
#undef unfetch

#ifndef SIREGS /* standalone judging only: the unit already defines these */
typedef struct decimal {
    char sign;
    char unk1;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[36];
        unsigned char unused;
    } sig;
} decimal;
#endif

unsigned long long fn_800E2B94(double);

static inline int __count_trailing_zerol(unsigned long x) {
    int result = 0;
    int bits_not_checked = sizeof(unsigned long) * 8;
    int n = sizeof(unsigned long) * 8 / 2;
    unsigned long mask = 0xFFFF;
    int sh = n;
    while (bits_not_checked) {
        if ((x & mask) == 0) {
            result += sh;
            x >>= sh;
            bits_not_checked -= sh;
        } else if (mask == 1) {
            break;
        }
        if (n > 1) n /= 2;
        if (mask > 1) {
            mask >>= n;
            sh -= n;
        }
    }
    return result;
}

static inline int __count_trailing_zero(double x) {
    unsigned long *l = (unsigned long *)&x;
    if (l[1] != 0) return __count_trailing_zerol(l[1]);
    return (int)(32 + __count_trailing_zerol(l[0] | 0x00100000));
}

static inline void __ull2dec(decimal *result, unsigned long long val) {
    result->sign = 0;
    if (val == 0) {
        result->exp = 0;
        result->sig.length = 1;
        result->sig.text[0] = 0;
        return;
    }
    result->sig.length = 0;
    for (; val != 0; val /= 10) {
        result->sig.text[result->sig.length++] = (unsigned char)(val % 10);
    }
    {
        unsigned char *i = result->sig.text;
        unsigned char *j = result->sig.text + result->sig.length;
        for (; i < --j; ++i) {
            unsigned char t = *i;
            *i = *j;
            *j = t;
        }
    }
    result->exp = result->sig.length - 1;
}

extern const double lbl_803631A0;
#pragma push
#pragma use_lmw_stmw on
#pragma dont_inline off
static inline int __fpclassifyd_n2d(double x) {
    switch (*(int *)&x & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 1;
        return 2;
    case 0:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 5;
        return 3;
    }
    return 4;
}

#pragma pop
