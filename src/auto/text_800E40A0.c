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
int fn_800EB264(int);
void _ExitProcess(void);
void __begin_critical_region(int region);
void __end_critical_region(int region);
void __kill_critical_regions(void);
void fn_800E43C8(void *pool, void *ptr);
void fn_800E4420(void *pool, void *ptr, u32 size);
void fn_800E4578(void *pool, void *ptr);
int fn_800E83C0(void *file);
int fn_800E84F8(void *file);
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

void exit(int status) {
    void (**dtor)(void);

    if (!__aborting) {
        __begin_critical_region(0);
        __end_critical_region(0);
        __destroy_global_chain();
        dtor = _dtors;
        while (*dtor != 0) {
            (*dtor)();
            dtor++;
        }
        if (__stdio_exit) {
            __stdio_exit();
            __stdio_exit = 0;
        }
    }
    __begin_critical_region(0);
    while (__atexit_curr_func > 0) {
        __atexit_funcs[--__atexit_curr_func]();
    }
    __end_critical_region(0);
    __kill_critical_regions();
    if (__console_exit) {
        __console_exit();
        __console_exit = 0;
    }
    _ExitProcess();
}

void fn_800E42BC(void) {
    fn_800EB264(1);
    __aborting = 1;
    __begin_critical_region(0);
    while (__atexit_curr_func > 0) {
        __atexit_funcs[--__atexit_curr_func]();
    }
    __end_critical_region(0);
    __kill_critical_regions();
    if (__console_exit) {
        __console_exit();
        __console_exit = 0;
    }
    _ExitProcess();
}

void fn_800E4358(void *ptr) {
    __begin_critical_region(1);
    if (!lbl_8035A970) {
        memset(lbl_803280A8, 0, 0x34);
        lbl_8035A970 = 1;
    }
    fn_800E43C8(lbl_803280A8, ptr);
    __end_critical_region(1);
}

void fn_800E4420(void *pool, void *ptr, u32 size);
void fn_800E4578(void *pool, void *ptr);
int fn_800E83C0(void *file);
int fn_800E84F8(void *file);
void *memset(void *, int, u32);
extern u8 lbl_803280A8[];
extern u8 lbl_8035A970;
void fn_800E43C8(void *pool, void *ptr) {
    u32 size;
    u32 *blk;

    if (ptr == NULL) {
        return;
    }
    blk = (u32 *)((u32 *)ptr)[-1];
    if (((u32)blk & 1) == 0) {
        size = blk[2];
    } else {
        size = (((u32 *)ptr)[-2] & ~7) - 8;
    }
    if (size <= 0x44) {
        fn_800E4420(pool, ptr, size);
    } else {
        fn_800E4578(pool, ptr);
    }
}

void fn_800E4420(void *pool, void *ptr, u32 size) {
    __mem_pool_obj *pool_obj = (__mem_pool_obj *)pool;
    u32 i = 0;
    FixSubBlock *p;
    FixBlock *b;
    FixStart *fs;

    while (size > lbl_8029C048[i])
        ++i;

    p = (FixSubBlock *)((char *)ptr - 4);
    b = p->block_;
    fs = &pool_obj->fix_start[i];

    if (b->start_ == 0 && fs->head_ != b) {
        if (fs->tail_ == b) {
            fs->head_ = fs->head_->prev_;
            fs->tail_ = fs->tail_->prev_;
        } else {
            b->prev_->next_ = b->next_;
            b->next_->prev_ = b->prev_;
            b->next_ = fs->head_;
            b->prev_ = b->next_->prev_;
            b->prev_->next_ = b;
            b->next_->prev_ = b;
            fs->head_ = b;
        }
    }

    p->next_ = b->start_;
    b->start_ = p;

    if (--b->n_allocated_ == 0) {
        if (fs->head_ == b)
            fs->head_ = b->next_;
        if (fs->tail_ == b)
            fs->tail_ = b->prev_;
        b->prev_->next_ = b->next_;
        b->next_->prev_ = b->prev_;
        if (fs->head_ == b)
            fs->head_ = 0;
        if (fs->tail_ == b)
            fs->tail_ = 0;
        fn_800E4578(pool_obj, b);
    }
}

#pragma push
#pragma inline_depth(0)
void fn_800E4578(void *pool, void *ptr) {
    u32 *prev;
    u32 oldsize;
    u32 *p;
    u32 *next;
    u32 size;
    u32 *b;
    u32 *arena;
    u32 **head;
    u32 total;
    int empty;
    u32 *link;
    b = (u32 *)((char *)ptr - 8);
    size = b[0] & ~7;
    arena = (u32 *)(b[1] & ~1);
    next = (u32 *)((char *)b + size);
    b[0] &= ~2;
    next[0] &= ~4;
    next[-1] = size;
    head = (u32 **)((char *)arena + (arena[3] & ~7) - 4);
    if (*head) {
        b[2] = (*head)[2];
        ((u32 *)b[2])[3] = (u32)b;
        b[3] = (u32)*head;
        (*head)[2] = (u32)b;
        *head = b;
        p = *head;
        if (!(p[0] & 4)) {
            oldsize = p[-1];
            if (oldsize & 2) {
                prev = p;
            } else {
                prev = (u32 *)((char *)p - oldsize);
                prev[0] &= 7;
                prev[0] |= (oldsize + (p[0] & ~7)) & ~7;
                if (!(prev[0] & 2)) {
                    total = oldsize + (p[0] & ~7);
                    *(u32 *)((char *)prev + total - 4) = total;
                }
                if (*head == p) *head = (u32 *)(*head)[3];
                ((u32 *)p[3])[2] = p[2];
                link = (u32 *)p[3];
                ((u32 *)link[2])[3] = (u32)link;
            }
        } else prev = p;
        *head = prev;
        p = *head;
        oldsize = p[0] & ~7;
        next = (u32 *)((char *)p + oldsize);
        total = next[0];
        if (!(total & 2)) {
            p[0] &= 7;
            total = oldsize + (total & ~7);
            p[0] |= total & ~7;
            if (!(p[0] & 2)) *(u32 *)((char *)p + total - 4) = total;
            if (!(p[0] & 2)) *(u32 *)((char *)p + total) &= ~4;
            else *(u32 *)((char *)p + total) |= 4;
            if (*head == next) *head = (u32 *)(*head)[3];
            if (*head == next) *head = 0;
            ((u32 *)next[3])[2] = next[2];
            ((u32 *)next[2])[3] = next[3];
        }
    } else {
        *head = b;
        b[2] = (u32)b;
        b[3] = (u32)b;
    }
    size = (*head)[0] & ~7;
    if (arena[2] < size) arena[2] = size;
    empty = 0;
    if (!(arena[4] & 2) && (arena[4] & ~7) == (arena[3] & ~7) - 0x18) empty = 1;
    if (empty) {
        link = (u32 *)arena[1];
        if (link == arena) link = 0;
        if (*(u32 **)pool == arena) *(u32 **)pool = link;
        if (link) {
            link[0] = arena[0];
            ((u32 *)link[0])[1] = (u32)link;
        }
        arena[1] = 0;
        arena[0] = 0;
        fn_800E4114((int)arena);
    }
}
#pragma pop
int fn_800E480C(void) {
    int result = 0;
    MslFile *file = (MslFile *)__files;

    while (file) {
        if (file->mode.file_kind && fn_800E83C0(file)) {
            result = -1;
        }
        file = file->next_file;
    }
    return result;
}

#pragma push
#pragma dont_inline on
void __close_all(void) {
    MslFile *p = (MslFile *)__files;
    MslFile *plast;

    __begin_critical_region(2);
    while (p) {
        if (p->mode.file_kind != 0) {
            fn_800E84F8(p);
        }
        plast = p;
        p = p->next_file;
        if (plast->is_dynamically_allocated) {
            fn_800E4358(plast);
        } else {
            plast->mode.file_kind = 3;
            if (p && p->is_dynamically_allocated) {
                plast->next_file = NULL;
            }
        }
    }
    __end_critical_region(2);
}

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
double fn_800E4924(const decimal *d) {
    if (d->sig.length <= 0) {
        return fn_800EFD7C(0.0, d->sign == 0 ? 1.0 : -1.0);
    }

    switch (d->sig.text[0]) {
    case '0':
        return fn_800EFD7C(0.0, d->sign == 0 ? 1.0 : -1.0);
    case 'I':
        return fn_800EFD7C(lbl_803596B4[0], d->sign == 0 ? 1.0 : -1.0);
    case 'N': {
        double result;
        unsigned long long *ll = (unsigned long long *)&result;

        *ll = 0x7FF0000000000000ULL;
        if (d->sign) {
            *ll |= 0x8000000000000000ULL;
        }
        if (d->sig.length == 1) {
            *ll |= 0x0008000000000000ULL;
        } else {
            unsigned char *p = (unsigned char *)&result + 1;
            int placed_non_zero = 0;
            int low = 1;
            int i;
            int e = d->sig.length;
            if (e > 14) {
                e = 14;
            }
            for (i = 1; i < e; ++i) {
                unsigned char c = d->sig.text[i];
                if (lbl_802E05C8[c] & 0x10) {
                    c -= '0';
                } else {
                    c = (unsigned char)((d->sig.text[i] == -1 ? -1 : lbl_802E06C8[d->sig.text[i]]) - 'a' + 10);
                }
                if (c != 0) {
                    placed_non_zero = 1;
                }
                if (low) {
                    *p++ |= c;
                } else {
                    *p = (unsigned char)(c << 4);
                }
                low = !low;
            }
            if (!placed_non_zero) {
                *ll |= 0x0008000000000000ULL;
            }
        }
        return result;
    }
    }

    {
        decimal dec = *d;
        unsigned char *i = dec.sig.text;
        unsigned char *e = i + dec.sig.length;
        double first_guess;
        int exponent;

        for (; i < e; ++i) {
            *i -= '0';
        }
        exponent = dec.exp += dec.sig.length - 1;

        i = dec.sig.text;
        first_guess = *i++;

        while (i < e) {
            unsigned long ival = 0;
            int n = (e - i) % 8;
            int j;
            double scaled;
            double next_guess;
            if (n == 0) {
                n = 8;
            }
            for (j = 0; j < n; ++j, ++i) {
                ival = 10 * ival + *i;
            }
            scaled = first_guess * lbl_802E0460[n - 1];
            next_guess = scaled + ival;
            if (ival != 0 && scaled == next_guess) {
                break;
            }
            first_guess = next_guess;
            exponent -= n;
        }

        if (exponent < 0) {
            first_guess /= fn_800F04FC(5.0, -exponent);
        } else {
            first_guess *= fn_800F04FC(5.0, exponent);
        }
        first_guess = fn_800F004C(first_guess, exponent);

        if (__fpclassifyd_dec(first_guess) == 2) {
            decimal max;
            __str2dec(&max, lbl_8029C060, 308);
            if (__less_dec(&max, &dec)) {
                goto done;
            }
            first_guess = lbl_803596C0[0];
        }
        {
            decimal feedback1;
            fn_800E5B48(&feedback1, first_guess);
            if (fn_800E63F8(&feedback1, &dec)) {
                goto done;
            }
            if (__less_dec(&feedback1, &dec)) {
                decimal feedback2, difflow, diffhigh;
                double next_guess = first_guess;
                unsigned long long *ull = (unsigned long long *)&next_guess;
                ++*ull;
                if (__fpclassifyd_dec(next_guess) == 2) {
                    first_guess = next_guess;
                    goto done;
                }
                fn_800E5B48(&feedback2, next_guess);
                while (__less_dec(&feedback2, &dec)) {
                    feedback1 = feedback2;
                    first_guess = next_guess;
                    ++*ull;
                    if (__fpclassifyd_dec(next_guess) == 2) {
                        first_guess = next_guess;
                        goto done;
                    }
                    fn_800E5B48(&feedback2, next_guess);
                }
                fn_800E5EFC(&difflow, &dec, &feedback1);
                fn_800E5EFC(&diffhigh, &feedback2, &dec);
                if (fn_800E63F8(&difflow, &diffhigh)) {
                    if (*(unsigned long long *)&first_guess & 1) {
                        first_guess = next_guess;
                    }
                } else if (!__less_dec(&difflow, &diffhigh)) {
                    first_guess = next_guess;
                }
            } else {
                decimal feedback2, difflow, diffhigh;
                double next_guess = first_guess;
                unsigned long long *ull = (unsigned long long *)&next_guess;
                --*ull;
                fn_800E5B48(&feedback2, next_guess);
                while (__less_dec(&dec, &feedback2)) {
                    feedback1 = feedback2;
                    first_guess = next_guess;
                    --*ull;
                    fn_800E5B48(&feedback2, next_guess);
                }
                fn_800E5EFC(&difflow, &dec, &feedback2);
                fn_800E5EFC(&diffhigh, &feedback1, &dec);
                if (fn_800E63F8(&difflow, &diffhigh)) {
                    if (*(unsigned long long *)&first_guess & 1) {
                        first_guess = next_guess;
                    }
                } else if (__less_dec(&difflow, &diffhigh)) {
                    first_guess = next_guess;
                }
            }
        }
    done:
        if (dec.sign) {
            first_guess = -first_guess;
        }
        return first_guess;
    }
}
#pragma pop

#pragma push
#pragma dont_inline off
void fn_800E59A4(const decform *f, double x, decimal *d) {
    short digits = f->digits;
    int i;

    fn_800E5B48(d, x);
    if (d->sig.text[0] > 9) {
        return;
    }
    if (digits > 36) {
        digits = 36;
    }
    __rounddec(d, digits);
    while (d->sig.length < digits) {
        d->sig.text[d->sig.length++] = 0;
    }
    d->exp -= d->sig.length - 1;
    for (i = 0; i < d->sig.length; i++) {
        d->sig.text[i] += '0';
    }
}

void fn_800E5EFC(decimal *result, const decimal *x, const decimal *y) {
    unsigned char *b, *i;
    const unsigned char *yb, *j, *end;
    int offset, length, n;
    *result = *x;
    if (y->sig.text[0] == 0) return;
    length = result->sig.length;
    if (length < y->sig.length) length = y->sig.length;
    offset = result->exp - y->exp;
    length += offset;
    if (length > 36) length = 36;
    while (result->sig.length < length)
        result->sig.text[result->sig.length++] = 0;
    b = result->sig.text;
    i = b + length;
    n = y->sig.length + offset;
    if (n < length) i = b + n;
    yb = y->sig.text;
    j = yb + (i - b - offset);
    end = j;
    while (i > b && j > yb) {
        if (*--i < *--j) {
            unsigned char *k = i - 1;
            while (*k == 0) --k;
            while (k != i) {
                --*k;
                *++k += 10;
            }
        }
        *i -= *j;
    }
    n = end - yb;
    if (n < y->sig.length) {
        int round = 0;
        if (*end < 5) round = 1;
        else if (*end == 5) {
            const unsigned char *e = y->sig.text + y->sig.length;
            i = (unsigned char *)end + 1;
            while (i < e) {
                if (*i != 0) goto normalize;
                ++i;
            }
            i = b + (n + offset - 1);
            if (*i & 1) round = 1;
        }
        if (round) {
            if (*i < 1) {
                unsigned char *k = i - 1;
                while (*k == 0) --k;
                while (k != i) {
                    --*k;
                    *++k += 10;
                }
            }
            --*i;
        }
    }
normalize:
    i = b;
    while (*i == 0) ++i;
    if (i > b) {
        unsigned char count = i - b;
        unsigned char *e;
        result->exp -= count;
        e = b + result->sig.length;
        while (i < e) *b++ = *i++;
        result->sig.length -= count;
    }
    b = result->sig.text;
    i = b + result->sig.length;
    while (i > b) {
        if (*--i != 0) break;
    }
    result->sig.length = i - b + 1;
}

#pragma pop
int fn_800E63F8(const decimal *x, const decimal *y) {
    int i;
    int l;

    if (x->sig.text[0] == 0) {
        return y->sig.text[0] == 0;
    }
    if (y->sig.text[0] == 0) {
        return x->sig.text[0] == 0;
    }
    if (x->exp == y->exp) {
        l = x->sig.length;
        if (l > y->sig.length) {
            l = y->sig.length;
        }
        for (i = 0; i < l; i++) {
            if (x->sig.text[i] != y->sig.text[i]) {
                return 0;
            }
        }
        if (l == x->sig.length) {
            for (; i < y->sig.length; i++) {
                if (y->sig.text[i] != 0) {
                    return 0;
                }
            }
        } else {
            for (; i < x->sig.length; i++) {
                if (x->sig.text[i] != 0) {
                    return 0;
                }
            }
        }
        return 1;
    }
    return 0;
}

void fn_800E7C88(decimal *result, const decimal *x, const decimal *y);
#pragma push
#pragma dont_inline off
void fn_800E6504(decimal *result, long exp) {
    decimal x2, temp;

    switch (exp) {
    case -64:
        __str2dec(result, lbl_8029C060 + 0x25, -20);
        return;
    case -53:
        __str2dec(result, lbl_8029C060 + 0x53, -16);
        return;
    case -32:
        __str2dec(result, lbl_8029C060 + 0x7A, -10);
        return;
    case -16:
        __str2dec(result, lbl_8029C060 + 0x92, -5);
        return;
    case -8:
        __str2dec(result, lbl_8029C060 + 0x9F, -3);
        return;
    case -7:
        __str2dec(result, lbl_8029C060 + 0xA6, -3);
        return;
    case -6:
        __str2dec(result, lbl_8029C060 + 0xAC, -2);
        return;
    case -5:
        __str2dec(result, lbl_8029C060 + 0xB2, -2);
        return;
    case -4:
        __str2dec(result, lbl_8029C060 + 0xB7, -2);
        return;
    case -3:
        __str2dec(result, lbl_8029C060 + 0xBB, -1);
        return;
    case -2:
        __str2dec(result, lbl_8029C060 + 0xBF, -1);
        return;
    case -1:
        __str2dec(result, lbl_8029C060 + 0xC2, -1);
        return;
    case 0:
        __str2dec(result, lbl_8029C060 + 0xC4, 0);
        return;
    case 1:
        __str2dec(result, lbl_8029C060 + 0xC6, 0);
        return;
    case 2:
        __str2dec(result, lbl_8029C060 + 0xC8, 0);
        return;
    case 3:
        __str2dec(result, lbl_8029C060 + 0xCA, 0);
        return;
    case 4:
        __str2dec(result, lbl_8029C060 + 0xCC, 1);
        return;
    case 5:
        __str2dec(result, lbl_8029C060 + 0xCF, 1);
        return;
    case 6:
        __str2dec(result, lbl_8029C060 + 0xD2, 1);
        return;
    case 7:
        __str2dec(result, lbl_8029C060 + 0xD5, 2);
        return;
    case 8:
        __str2dec(result, lbl_8029C060 + 0xD9, 2);
        return;
    }
    fn_800E6504(&x2, ((long)((0x80000000UL & exp) >> 31) + exp) >> 1);
    fn_800E7C88(result, &x2, &x2);
    if (exp & 1) {
        temp = *result;
        if (exp > 0) {
            __str2dec(&x2, lbl_8029C060 + 0xC6, 0);
        } else {
            __str2dec(&x2, lbl_8029C060 + 0xC2, -1);
        }
        fn_800E7C88(result, &temp, &x2);
    }
}
#pragma pop

#pragma use_lmw_stmw on
void fn_800E7C88(decimal *result, const decimal *x, const decimal *y) {
    unsigned char mantissa[80];
    int ny = y->sig.length;
    int nx = x->sig.length;
    unsigned long accumulator = 0;
    int i = nx + ny - 1;
    unsigned char *ip = mantissa + i + 1;
    unsigned char *ep = ip;
    result->sign = 0;
    for (; i > 0; --i) {
        int k = ny - 1;
        int j = i - k - 1;
        int l;
        int t;
        const unsigned char *jp;
        const unsigned char *kp;
        if (j < 0) { j = 0; k = i - 1; }
        jp = x->sig.text + j;
        kp = y->sig.text + k;
        l = k + 1;
        t = nx - j;
        if (l > t) l = t;
        for (; l > 0; --l, ++jp, --kp) accumulator += *jp * *kp;
        *--ip = (unsigned char)(accumulator % 10);
        accumulator /= 10;
    }
    result->exp = (short)(x->exp + y->exp);
    if (accumulator > 0) { *--ip = (unsigned char)accumulator; result->exp++; }
    for (i = 0; i < 36 && ip < ep; ++i, ++ip) result->sig.text[i] = *ip;
    result->sig.length = (unsigned char)i;
    if (ip < ep && *ip >= 5) {
        if (*ip == 5) {
            unsigned char *jp = ip + 1;
            for (; jp < ep; ++jp) if (*jp != 0) goto round;
            if ((*(ip - 1) & 1) == 0) return;
        }
    round:
        {
            unsigned char *i;
            unsigned char *b = result->sig.text;
            i = b + result->sig.length - 1;
            while (1) {
                if (*i < 9) { (*i)++; break; }
                if (i == b) { *i = 1; result->exp++; break; }
                *i-- = 0;
            }
        }
    }
}
s32 fn_800E7F00(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

int __flush_buffer(MslFile *file, u32 *length) {
    u32 count;
    int result;
    count = file->buffer_ptr - file->buffer;
    if (count != 0) {
        file->buffer_len = count;
        result = file->write_proc(file->handle, file->buffer, &file->buffer_len, file->ref_con);
        if (length != NULL) {
            *length = file->buffer_len;
        }
        if (result != 0) {
            return result;
        }
        file->position += file->buffer_len;
    }
    file->buffer_ptr = file->buffer;
    file->buffer_len = file->buffer_size;
    file->buffer_len -= file->position & file->buffer_alignment;
    file->buffer_position = file->position;
    return 0;
}

void __prep_buffer(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - (M2C_FIELD(arg0, s32 *, 0x18) & M2C_FIELD(arg0, s32 *, 0x2C)));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}

void __end_critical_region(int region) {

}

void __begin_critical_region(int region) {

}

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

void __kill_critical_regions(void) {

}

extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int fn_800E8720(void *file, s32 offset, int mode);
extern s32 lbl_8035A978;
int fn_800E8014(int c) {
    if (c == -1) {
        return -1;
    }
    return lbl_802E06C8[(u8)c];
}

u32 __fwrite(const void *ptr, u32 size, u32 count, void *arg) {
    int fwide(void *, int);
    int fseek(MslFile *, int, int);
    void __stdio_atexit(void);
    void __prep_buffer(void *);
    int __flush_buffer(MslFile *, u32 *);
    void *__memrchr(const void *, int, u32);
    void *memcpy(void *, const void *, u32);
    int buffered;
    const u8 *src;
    u32 bytes;
    s32 written;
    u8 *newline;
    u32 amount;
    int binary_buffer;
    MslFile *file = arg;

    if (!fwide(file, 0)) fwide(file, -1);
    bytes = size * count;
    if (!bytes || file->state.error || !file->mode.file_kind) return 0;
    if (file->mode.file_kind == 2) __stdio_atexit();
    buffered = 1;
    binary_buffer = !file->mode.binary_io || file->mode.buffer_mode == 2;
    if (!binary_buffer && file->mode.buffer_mode != 1)
        buffered = 0;
    if (file->state.io_state == 0 && (file->mode.io_mode & 2)) {
        if ((file->mode.io_mode & 4) && fseek(file, 0, 2)) return 0;
        file->state.io_state = 1;
        __prep_buffer(file);
    }
    if (file->state.io_state != 1) {
        file->state.error = 1;
        file->buffer_len = 0;
        return 0;
    }
    src = ptr;
    written = 0;
    if (bytes && (file->buffer_ptr != file->buffer || buffered)) {
        file->buffer_len = file->buffer_size - (file->buffer_ptr - file->buffer);
        do {
            amount = file->buffer_len;
            newline = 0;
            if (amount > bytes) amount = bytes;
            if (file->mode.buffer_mode == 1 && amount) {
                newline = __memrchr(src, 10, amount);
                if (newline) amount = newline + 1 - src;
            }
            if (amount) {
                memcpy(file->buffer_ptr, src, amount);
                src += amount;
                written += amount;
                bytes -= amount;
                file->buffer_ptr += amount;
                file->buffer_len -= amount;
            }
            if ((!file->buffer_len || newline || !file->mode.buffer_mode) && __flush_buffer(file, 0)) {
                file->state.error = 1;
                file->buffer_len = 0;
                bytes = 0;
                break;
            }
        } while (bytes && buffered);
    }
    if (bytes && !buffered) {
        u8 *saved_buffer = file->buffer;
        u32 saved_size = file->buffer_size;
        file->buffer = (u8 *)src;
        file->buffer_size = bytes;
        file->buffer_ptr = (u8 *)src + bytes;
        if (__flush_buffer(file, &amount)) {
            file->state.error = 1;
            file->buffer_len = 0;
        }
        written += amount;
        file->buffer = saved_buffer;
        file->buffer_size = saved_size;
        __prep_buffer(file);
        file->buffer_len = 0;
    }
    if (file->mode.buffer_mode != 2) file->buffer_len = 0;
    return (written + size - 1) / size;
}

#pragma push
#pragma dont_inline on
u32 fwrite(const void *ptr, u32 size, u32 count, void *file) {
    u32 result;
    __begin_critical_region(2);
    result = __fwrite(ptr, size, count, file);
    __end_critical_region(2);
    return result;
}

s32 fn_800E895C(void *file);
int fn_800E83C0(void *arg0) {
    MslFile *file = (MslFile *)arg0;
    u32 position;

    if (file == NULL) {
        return fn_800E480C();
    }
    if (file->state.error || file->mode.file_kind == 0) {
        return -1;
    }
    if (file->mode.io_mode == 1) {
        return 0;
    }
    if (file->state.io_state >= 3) {
        file->state.io_state = 2;
    }
    if (file->state.io_state == 2) {
        file->buffer_len = 0;
    }
    if (file->state.io_state != 1) {
        file->state.io_state = 0;
        return 0;
    }
    if (file->mode.file_kind != 1) {
        position = 0;
    } else {
        position = fn_800E895C(file);
    }
    if (__flush_buffer(file, 0)) {
        file->state.error = 1;
        file->buffer_len = 0;
        return -1;
    }
    file->state.io_state = 0;
    file->position = position;
    file->buffer_len = 0;
    return 0;
}

#pragma push
#pragma dont_inline on
int fn_800E84F8(void *arg0) {
    MslFile *file = (MslFile *)arg0;
    int flush_result;
    int close_result;
    u32 position;

    if (file == NULL) {
        return -1;
    }
    if (file->mode.file_kind == 0) {
        return 0;
    }
    if (file == NULL) {
        flush_result = fn_800E480C();
    } else if (file->state.error || file->mode.file_kind == 0) {
        flush_result = -1;
    } else if (file->mode.io_mode == 1) {
        flush_result = 0;
    } else {
        if (file->state.io_state >= 3) {
            file->state.io_state = 2;
        }
        if (file->state.io_state == 2) {
            file->buffer_len = 0;
        }
        flush_result = 0;
        if (file->state.io_state != 1) {
            file->state.io_state = 0;
        } else {
            if (file->mode.file_kind != 1) {
                position = 0;
            } else {
                position = fn_800E895C(file);
            }
            if (__flush_buffer(file, 0)) {
                file->state.error = 1;
                file->buffer_len = 0;
                flush_result = -1;
            } else {
                file->state.io_state = 0;
                file->position = position;
                file->buffer_len = 0;
            }
        }
    }
    close_result = ((int (*)(u32))file->close_proc)(file->handle);
    file->mode.file_kind = 0;
    file->handle = 0;
    if (file->state.free_buffer) {
        fn_800E4358(file->buffer);
    }
    return (flush_result || close_result) ? -1 : 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
int fseek(void *file, s32 offset, int mode) {
    int result;
    __begin_critical_region(2);
    result = fn_800E8720(file, offset, mode);
    __end_critical_region(2);
    return result;
}

int fn_800E8720(void *arg0, long offset, int whence) {
    MslFile *file = (MslFile *)arg0;
    u32 position;
    if (file->mode.file_kind != 1 || file->state.error) {
        lbl_8035A978 = 0x28;
        return -1;
    }
    if (file->state.io_state == 1 && __flush_buffer(file, 0)) {
        file->state.error = 1;
        file->buffer_len = 0;
        lbl_8035A978 = 0x28;
        return -1;
    }
    if (whence == 1) {
        whence = 0;
        if ((file->mode.file_kind != 1 && file->mode.file_kind != 2) || file->state.error) {
            lbl_8035A978 = 0x28;
            position = -1;
        } else if (file->state.io_state == 0) {
            position = file->position;
        } else {
            position = file->buffer_position + (file->buffer_ptr - file->buffer);
            if (file->state.io_state >= 3)
                position -= file->state.io_state - 2;
        }
        offset += position;
    }
    if (whence != 2 && file->mode.io_mode != 3 &&
        (file->state.io_state == 2 || file->state.io_state == 3)) {
        if (offset >= file->position || offset < file->buffer_position) {
            file->state.io_state = 0;
        } else {
            file->buffer_ptr = file->buffer + (offset - file->buffer_position);
            file->buffer_len = file->position - offset;
            file->state.io_state = 2;
        }
    } else {
        file->state.io_state = 0;
    }
    if (file->state.io_state == 0) {
        if (file->position_proc && ((int (*)(u32,long *,int,void *))file->position_proc)(file->handle, &offset, whence, file->ref_con)) {
            file->state.error = 1;
            file->buffer_len = 0;
            lbl_8035A978 = 0x28;
            return -1;
        }
        file->state.eof = 0;
        file->position = offset;
        file->buffer_len = 0;
    }
    return 0;
}

#pragma push
#pragma dont_inline on
s32 fn_800E895C(void *file) {
    s32 position;
    u32 kind;
    u32 state;

    __begin_critical_region(2);
    kind = (M2C_FIELD(file, u16 *, 0x4) >> 6) & 7;
    if ((kind != 1 && kind != 2) || M2C_FIELD(file, u8 *, 0xA) != 0) {
        position = -1;
        lbl_8035A978 = 0x28;
    } else {
        state = (M2C_FIELD(file, u8 *, 0x8) >> 5) & 7;
        if (state == 0) {
            position = M2C_FIELD(file, s32 *, 0x18);
        } else {
            position = M2C_FIELD(file, s32 *, 0x34) + (M2C_FIELD(file, s32 *, 0x24) - M2C_FIELD(file, s32 *, 0x1C));
            if (state >= 3) {
                position -= state - 2;
            }
        }
    }
    __end_critical_region(2);
    return position;
}

char *fn_800EB720(char *dst, const char *src, u32 n);
#pragma push
#pragma dont_inline off
#pragma use_lmw_stmw on
u32 wcstombs(char *s, const u16 *pwcs, u32 n) {
    int chars_written = 0;
    int result;
    char temp[3];
    u16 *source;

    if (!s || !pwcs) {
        return 0;
    }

    source = (u16 *)pwcs;
    while (chars_written <= n) {
        if (!*source) {
            *(s + chars_written) = '\0';
            break;
        } else {
            result = unicode_to_UTF8(temp, *source++);
            if ((chars_written + result) <= n) {
                fn_800EB720(s + chars_written, temp, result);
                chars_written += result;
            } else {
                break;
            }
        }
    }

    return chars_written;
}
#pragma pop
int fn_800E8B1C(const void* src1, const void* src2, unsigned long n) {
    const unsigned char* p1;
    const unsigned char* p2;

    for (p1 = (const unsigned char*)src1 - 1, p2 = (const unsigned char*)src2 - 1, n++; --n;) {
        if (*++p1 != *++p2) {
            return (*p1 < *p2) ? -1 : +1;
        }
    }
    return 0;
}

void* __memrchr(const void* src, int val, unsigned long n) {
    const unsigned char* p;
    unsigned long v = (val & 0xff);

    for (p = (unsigned char*)src + n, n++; --n;) {
        if (*--p == v) {
            return (void*)p;
        }
    }
    return 0;
}

void* memchr(const void* src, int val, unsigned long n) {
    const unsigned char* p;
    unsigned long v = (val & 0xff);

    for (p = (unsigned char*)src - 1, n++; --n;) {
        if ((*++p & 0xff) == v) {
            return (void*)p;
        }
    }
    return 0;
}

void fn_800E8C8C(void *dst, const void *src, unsigned long n);
void fn_800E8D38(void *dst, const void *src, unsigned long n);
void fn_800E8DF8(u8 *d, const u8 *s, u32 n);
void fn_800E8EA0(u8 *d, const u8 *s, u32 n);
void *memmove(void *dst, const void *src, unsigned long n) {
    const unsigned char *p;
    unsigned char *q;
    int rev = ((unsigned long)src < (unsigned long)dst);

    if (n >= 32) {
        if (((unsigned long)dst ^ (unsigned long)src) & 3) {
            if (!rev) {
                fn_800E8D38(dst, src, n);
            } else {
                fn_800E8C8C(dst, src, n);
            }
        } else {
            if (!rev) {
                fn_800E8EA0(dst, src, n);
            } else {
                fn_800E8DF8(dst, src, n);
            }
        }
        return dst;
    }

    if (!rev) {
        for (p = (const unsigned char *)src - 1, q = (unsigned char *)dst - 1, n++; --n;) {
            *++q = *++p;
        }
    } else {
        for (p = (const unsigned char *)src + n, q = (unsigned char *)dst + n, n++; --n;) {
            *--q = *--p;
        }
    }
    return dst;
}

void fn_800E8C8C(void* dst, const void* src, unsigned long n) {
    unsigned long i;
    int src_offset, left_shift, right_shift;
    unsigned long v1, v2;
    const char* cps = ((char*)src) + n;
    char* cpd = ((char*)dst) + n;

    if ((i = ((unsigned long)cpd) & 3)) {
        n -= i;
        do {
            *--cpd = *--cps;
        } while (--i);
    }
    src_offset = ((unsigned long)cps) & 3;
    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;
    cps += 4 - src_offset;
    i = n >> 3;
    v1 = *--((unsigned long*)cps);
    do {
        v2 = *--((unsigned long*)cps);
        *--((unsigned long*)cpd) = (v2 << left_shift) | (v1 >> right_shift);
        v1 = *--((unsigned long*)cps);
        *--((unsigned long*)cpd) = (v1 << left_shift) | (v2 >> right_shift);
    } while (--i);
    if (n & 4) {
        v2 = *--((unsigned long*)cps);
        *--((unsigned long*)cpd) = (v2 << left_shift) | (v1 >> right_shift);
    }
    if ((n &= 3)) {
        cps += src_offset;
        do {
            *--cpd = *--cps;
        } while (--n);
    }
}

void fn_800E8D38(void *dst, const void *src, unsigned long n) {
    unsigned long i, v1, v2;
    unsigned int src_offset, left_shift, right_shift;

    i = (-(unsigned long)dst) & 3;

    ((unsigned char *)src) = ((unsigned char *)src) - 1;
    ((unsigned char *)dst) = ((unsigned char *)dst) - 1;

    if (i) {
        n -= i;
        do
            *++((unsigned char *)dst) = *++((unsigned char *)src);
        while (--i);
    }

    src_offset = ((unsigned int)(((unsigned char *)src) + 1)) & 3;

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    ((unsigned char *)src) -= src_offset;

    ((unsigned long *)src) = ((unsigned long *)(((unsigned char *)src) + 1)) - 1;
    ((unsigned long *)dst) = ((unsigned long *)(((unsigned char *)dst) + 1)) - 1;

    i = n >> 3;

    v1 = *++((unsigned long *)src);

    do {
        v2 = *++((unsigned long *)src);
        *++((unsigned long *)dst) = (v1 << left_shift) | (v2 >> right_shift);
        v1 = *++((unsigned long *)src);
        *++((unsigned long *)dst) = (v2 << left_shift) | (v1 >> right_shift);
    } while (--i);

    if (n & 4) {
        v2 = *++((unsigned long *)src);
        *++((unsigned long *)dst) = (v1 << left_shift) | (v2 >> right_shift);
    }

    ((unsigned char *)src) = ((unsigned char *)(((unsigned long *)src) + 1)) - 1;
    ((unsigned char *)dst) = ((unsigned char *)(((unsigned long *)dst) + 1)) - 1;

    n &= 3;

    if (n) {
        ((unsigned char *)src) -= 4 - src_offset;
        do
            *++((unsigned char *)dst) = *++((unsigned char *)src);
        while (--n);
    }
}

#pragma pop
void fn_800E8DF8(u8 *d, const u8 *s, u32 n) {
    u32 a, b;
    u32 i;
    s += n;
    d += n;
    i = (u32)d & 3;
    if (i != 0) {
        n -= i;
        do {
            *--d = *--s;
        } while (--i != 0);
    }
    i = n >> 5;
    if (i != 0) {
        do {
            a = ((u32 *)s)[-1];
            b = ((u32 *)s)[-2];
            ((u32 *)d)[-1] = a;
            a = ((u32 *)s)[-3];
            ((u32 *)d)[-2] = b;
            b = ((u32 *)s)[-4];
            ((u32 *)d)[-3] = a;
            a = ((u32 *)s)[-5];
            ((u32 *)d)[-4] = b;
            b = ((u32 *)s)[-6];
            ((u32 *)d)[-5] = a;
            a = ((u32 *)s)[-7];
            ((u32 *)d)[-6] = b;
            b = ((u32 *)s)[-8];
            s -= 32;
            ((u32 *)d)[-7] = a;
            d -= 32;
            *(u32 *)d = b;
        } while (--i != 0);
    }
    i = (n >> 2) & 7;
    if (i != 0) {
        do {
            s -= 4;
            d -= 4;
            *(u32 *)d = *(u32 *)s;
        } while (--i != 0);
    }
    n &= 3;
    if (n != 0) {
        do {
            *--d = *--s;
        } while (--n != 0);
    }
}

void fn_800E8EA0(u8 *d, const u8 *s, u32 n) {
    u32 a, b;
    u32 i;
    i = (-(u32)d) & 3;
    s -= 1;
    d -= 1;
    if (i != 0) {
        n -= i;
        do {
            *++d = *++s;
        } while (--i != 0);
    }
    i = n >> 5;
    s -= 3;
    d -= 3;
    if (i != 0) {
        do {
            a = ((u32 *)s)[1];
            b = ((u32 *)s)[2];
            ((u32 *)d)[1] = a;
            a = ((u32 *)s)[3];
            ((u32 *)d)[2] = b;
            b = ((u32 *)s)[4];
            ((u32 *)d)[3] = a;
            a = ((u32 *)s)[5];
            ((u32 *)d)[4] = b;
            b = ((u32 *)s)[6];
            ((u32 *)d)[5] = a;
            a = ((u32 *)s)[7];
            ((u32 *)d)[6] = b;
            b = ((u32 *)s)[8];
            s += 32;
            ((u32 *)d)[7] = a;
            d += 32;
            *(u32 *)d = b;
        } while (--i != 0);
    }
    i = (n >> 2) & 7;
    if (i != 0) {
        do {
            s += 4;
            d += 4;
            *(u32 *)d = *(u32 *)s;
        } while (--i != 0);
    }
    s += 3;
    d += 3;
    n &= 3;
    if (n != 0) {
        do {
            *++d = *++s;
        } while (--n != 0);
    }
}

extern void __close_all(void);
extern void (*__stdio_exit)(void);
extern int __pformatter();
void *__va_arg(va_list, int);
unsigned int strlen(const char *s);
char *strchr(const char *str, int chr);
void *fn_800E92B8(void *ctx, const void *buf, u32 len);
void __stdio_atexit(void) { __stdio_exit = __close_all; }

#pragma push
#pragma use_lmw_stmw on
int fn_800E8F6C(char *s, const char *fmt, ...) {
    va_list args;
    struct {
        char *s;
        s32 n;
        u32 c;
    } ctx;
    u32 r;
    u32 idx;
    va_start(args, fmt);
    ctx.s = s;
    ctx.n = -1;
    ctx.c = 0;
    r = __pformatter(fn_800E92B8, &ctx, fmt, args);
    if (s != 0) {
        idx = -2;
        if (r < 0xFFFFFFFF) idx = r;
        s[idx] = 0;
    }
    return r;
}
#pragma pop
void fn_800E904C(char *s, const char *fmt, void *args) {
    struct {
        char *s;
        s32 n;
        u32 c;
    } ctx;
    u32 r;
    u32 idx;
    ctx.s = s;
    ctx.n = -1;
    ctx.c = 0;
    r = __pformatter(fn_800E92B8, &ctx, fmt, args);
    if (s != 0) {
        idx = -2;
        if (r < 0xFFFFFFFF) idx = r;
        s[idx] = 0;
    }
}

u32 fn_800E90C4(char *s, u32 n, const char *fmt, void *args) {
    struct {
        char *s;
        u32 n;
        u32 c;
    } ctx;
    u32 r;
    u32 idx;
    ctx.s = s;
    ctx.n = n;
    ctx.c = 0;
    r = __pformatter(fn_800E92B8, &ctx, fmt, args);
    if (s != 0) {
        idx = n - 1;
        if (r < n) idx = r;
        s[idx] = 0;
    }
    return r;
}

int vprintf(const char *format, void *args) {
    int result;

    if (fwide(__files + 0x50, -1) >= 0) {
        return -1;
    }
    __begin_critical_region(2);
    result = __pformatter(__FileWrite, __files + 0x50, format, args);
    __end_critical_region(2);
    return result;
}
#pragma pop

#pragma push
#pragma dont_inline on
int fn_800E91D0(const char *format, ...) {
    int result;
    va_list args;

    if (fwide(__files + 0x50, -1) >= 0) {
        return -1;
    }
    __begin_critical_region(2);
    va_start(args, format);
    result = __pformatter(__FileWrite, __files + 0x50, format, args);
    __end_critical_region(2);
    return result;
}

void *fn_800E92B8(void *ctx, const void *buf, u32 len) {
    u32 count;
    u32 c = M2C_FIELD(ctx, u32 *, 8);
    u32 n = M2C_FIELD(ctx, u32 *, 4);

    count = n - c;
    if (c + len <= n) {
        count = len;
    }
    memcpy(M2C_FIELD(ctx, char **, 0) + c, buf, count);
    M2C_FIELD(ctx, u32 *, 8) += count;
    return (void *)1;
}

void *__FileWrite(void *file, const void *buf, u32 len) {
    return (fwrite(buf, 1, len, file) == len) ? file : 0;
}

char *longlong2str(long long num, char *buff, print_format format);
char *long2str(long num, char *buff, print_format format);
char *float2str(double num, char *buff, print_format format);
char *double2hex(char *buff, print_format format, double x);
char *parse_format(char *format, va_list args, print_format *out);
#pragma push
#pragma use_lmw_stmw on
int __pformatter(void *(*WriteProc)(void *, const char *, u32), void *WriteProcArg, const char *format_str, va_list arg) {
    int num_chars, chars_written, field_width;
    const char *format_ptr;
    const char *curr_format;
    print_format format;
    long long long_long_num;
    double long_double_num;
    char buff[512];
    char *buff_ptr;
    char *string_end;
    char fill_char = ' ';
    long long_num;

    format_ptr = format_str;
    chars_written = 0;

    while (*format_ptr) {
        if (!(curr_format = strchr(format_ptr, '%'))) {
            num_chars = strlen(format_ptr);
            chars_written += num_chars;
            if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
                return -1;
            }
            break;
        }

        num_chars = curr_format - format_ptr;
        chars_written += num_chars;

        if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
            return -1;
        }

        format_ptr = curr_format;
        format_ptr = parse_format((char *)format_ptr, arg, &format);

        switch (format.conversion_char) {
        case 'd':
        case 'i':
            if (format.argument_options == 3) {
                long_num = *(long *)__va_arg(arg, 1);
            } else if (format.argument_options == 4) {
                long_long_num = *(long long *)__va_arg(arg, 2);
            } else {
                long_num = *(int *)__va_arg(arg, 1);
            }

            if (format.argument_options == 2) {
                long_num = (short)long_num;
            }

            if (format.argument_options == 1) {
                long_num = (signed char)long_num;
            }

            if (format.argument_options == 4) {
                if (!(buff_ptr = longlong2str(long_long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            } else {
                if (!(buff_ptr = long2str(long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 'o':
        case 'u':
        case 'x':
        case 'X':
            if (format.argument_options == 3) {
                long_num = *(unsigned long *)__va_arg(arg, 1);
            } else if (format.argument_options == 4) {
                long_long_num = *(long long *)__va_arg(arg, 2);
            } else {
                long_num = *(unsigned int *)__va_arg(arg, 1);
            }

            if (format.argument_options == 2) {
                long_num = (unsigned short)long_num;
            }

            if (format.argument_options == 1) {
                long_num = (unsigned char)long_num;
            }

            if (format.argument_options == 4) {
                if (!(buff_ptr = longlong2str(long_long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            } else {
                if (!(buff_ptr = long2str(long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 'f':
        case 'F':
        case 'e':
        case 'E':
        case 'g':
        case 'G':
            if (format.argument_options == 5) {
                long_double_num = *(double *)__va_arg(arg, 3);
            } else {
                long_double_num = *(double *)__va_arg(arg, 3);
            }

            if (!(buff_ptr = float2str(long_double_num, buff + 512, format))) {
                goto conversion_error;
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 'a':
        case 'A':
            if (format.argument_options == 5) {
                long_double_num = *(double *)__va_arg(arg, 3);
            } else {
                long_double_num = *(double *)__va_arg(arg, 3);
            }

            if (!(buff_ptr = double2hex(buff + 512, format, long_double_num))) {
                goto conversion_error;
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 's':
            if (format.argument_options == 6) {
                u16 *wcs_ptr = *(u16 **)__va_arg(arg, 1);

                if (wcs_ptr == NULL) {
                    wcs_ptr = L"";
                }

                if ((num_chars = wcstombs(buff, wcs_ptr, sizeof(buff))) < 0) {
                    goto conversion_error;
                }

                buff_ptr = &buff[0];
            } else {
                buff_ptr = *(char **)__va_arg(arg, 1);
            }

            if (buff_ptr == NULL) {
                buff_ptr = "";
            }

            if (format.alternate_form) {
                num_chars = (unsigned char)*buff_ptr++;

                if (format.precision_specified && num_chars > format.precision) {
                    num_chars = format.precision;
                }
            } else if (format.precision_specified) {
                num_chars = format.precision;

                if ((string_end = (char *)memchr(buff_ptr, 0, num_chars)) != 0) {
                    num_chars = string_end - buff_ptr;
                }
            } else {
                num_chars = strlen(buff_ptr);
            }

            break;

        case 'n':
            buff_ptr = *(char **)__va_arg(arg, 1);

            switch (format.argument_options) {
            case 0:
                *(int *)buff_ptr = chars_written;
                break;
            case 2:
                *(short *)buff_ptr = chars_written;
                break;
            case 3:
                *(long *)buff_ptr = chars_written;
                break;
            case 4:
                *(long long *)buff_ptr = chars_written;
                break;
            }

            continue;

        case 'c':
            buff_ptr = buff;
            *buff_ptr = *(int *)__va_arg(arg, 1);
            num_chars = 1;
            break;

        case '%':
            buff_ptr = buff;
            *buff_ptr = '%';
            num_chars = 1;
            break;

        case 0xFF:
        default:
        conversion_error:
            num_chars = strlen(curr_format);
            chars_written += num_chars;

            if (num_chars && !(*WriteProc)(WriteProcArg, curr_format, num_chars)) {
                return -1;
            }

            return chars_written;
        }

        field_width = num_chars;

        if (format.justification_options != 0) {
            fill_char = (format.justification_options == 2) ? '0' : ' ';

            if (((*buff_ptr == '+') || (*buff_ptr == '-') || (*buff_ptr == ' ')) && (fill_char == '0')) {
                if ((*WriteProc)(WriteProcArg, buff_ptr, 1) == 0) {
                    return -1;
                }

                ++buff_ptr;
                num_chars--;
            }

            while (field_width < format.field_width) {
                if ((*WriteProc)(WriteProcArg, &fill_char, 1) == 0) {
                    return -1;
                }

                ++field_width;
            }
        }

        if (num_chars && !(*WriteProc)(WriteProcArg, buff_ptr, num_chars)) {
            return -1;
        }

        if (format.justification_options == 0) {
            while (field_width < format.field_width) {
                char blank = ' ';

                if ((*WriteProc)(WriteProcArg, &blank, 1) == 0) {
                    return -1;
                }

                ++field_width;
            }
        }

        chars_written += field_width;
    }

    return chars_written;
}
#pragma pop

char *float2str(double num, char *buff, print_format format) {
    decimal dec;
    decform form;
    char *p;
    char *q;
    int n, digits, sign;
    int int_digits, frac_digits;

    if (format.precision > 509) {
        return 0;
    }

    form.style = 0;
    form.digits = 32;

    fn_800E59A4(&form, num, &dec);

    p = (char *)dec.sig.text + dec.sig.length;

    while (dec.sig.length > 1 && *--p == '0') {
        --dec.sig.length;
        ++dec.exp;
    }

    switch (*dec.sig.text) {
    case '0':
        dec.exp = 0;
        break;
    case 'I':
        if (num < 0) {
            buff -= 5;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 1);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 6);
            }
        } else {
            buff -= 4;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 11);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 15);
            }
        }
        return buff;
    case 'N':
        if (dec.sign) {
            buff -= 5;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 19);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 24);
            }
        } else {
            buff -= 4;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 29);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 33);
            }
        }
        return buff;
    }

    dec.exp += dec.sig.length - 1;
    p = buff;
    *--p = 0;

    switch (format.conversion_char) {
    case 'g':
    case 'G':
        if (dec.sig.length > format.precision) {
            fn_800EA1DC(&dec, format.precision);
        }
        if (dec.exp < -4 || dec.exp >= format.precision) {
            if (format.alternate_form) {
                --format.precision;
            } else {
                format.precision = dec.sig.length - 1;
            }
            if (format.conversion_char == 'g') {
                format.conversion_char = 'e';
            } else {
                format.conversion_char = 'E';
            }
            goto e_format;
        }
        if (format.alternate_form) {
            format.precision -= dec.exp + 1;
        } else {
            if ((format.precision = dec.sig.length - (dec.exp + 1)) < 0) {
                format.precision = 0;
            }
        }
        goto f_format;

    case 'e':
    case 'E':
    e_format:
        if (dec.sig.length > format.precision + 1) {
            fn_800EA1DC(&dec, format.precision + 1);
        }
        n = dec.exp;
        sign = '+';
        if (n < 0) {
            n = -n;
            sign = '-';
        }
        for (digits = 0; n || digits < 2; ++digits) {
            *--p = n % 10 + '0';
            n /= 10;
        }
        *--p = sign;
        *--p = format.conversion_char;
        if (buff - p + format.precision > 509) {
            return 0;
        }
        if (dec.sig.length < format.precision + 1) {
            for (n = format.precision + 1 - dec.sig.length + 1; --n;) {
                *--p = '0';
            }
        }
        for (n = dec.sig.length, q = (char *)dec.sig.text + dec.sig.length; --n;) {
            *--p = *--q;
        }
        if (format.precision || format.alternate_form) {
            *--p = '.';
        }
        *--p = *dec.sig.text;
        if (dec.sign) {
            *--p = '-';
        } else if (format.sign_options == 1) {
            *--p = '+';
        } else if (format.sign_options == 2) {
            *--p = ' ';
        }
        break;

    case 'f':
    case 'F':
    f_format:
        if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0) {
            frac_digits = 0;
        }
        if (frac_digits > format.precision) {
            fn_800EA1DC(&dec, dec.sig.length - (frac_digits - format.precision));
            if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0) {
                frac_digits = 0;
            }
        }
        if ((int_digits = dec.exp + 1) < 0) {
            int_digits = 0;
        }
        if (int_digits + frac_digits > 509) {
            return 0;
        }
        q = (char *)dec.sig.text + dec.sig.length;
        for (digits = 0; digits < (format.precision - frac_digits); ++digits) {
            *--p = '0';
        }
        for (digits = 0; digits < frac_digits && digits < dec.sig.length; ++digits) {
            *--p = *--q;
        }
        for (; digits < frac_digits; ++digits) {
            *--p = '0';
        }
        if (format.precision || format.alternate_form) {
            *--p = '.';
        }
        if (int_digits) {
            for (digits = 0; digits < int_digits - dec.sig.length; ++digits) {
                *--p = '0';
            }
            for (; digits < int_digits; ++digits) {
                *--p = *--q;
            }
        } else {
            *--p = '0';
        }
        if (dec.sign) {
            *--p = '-';
        } else if (format.sign_options == 1) {
            *--p = '+';
        } else if (format.sign_options == 2) {
            *--p = ' ';
        }
        break;
    }
    return p;
}

void fn_800EA1DC(decimal *dec, int new_length) {
    char c;
    char *p;
    int carry;

    if (new_length < 0) {
    return_zero:
        dec->exp = 0;
        dec->sig.length = 1;
        *dec->sig.text = '0';
        return;
    }

    if (new_length >= dec->sig.length)
        return;

    p = (char *)dec->sig.text + new_length + 1;
    c = *--p - '0';

    if (c == 5) {
        char *q = &((char *)dec->sig.text)[dec->sig.length];

        while (--q > p && *q == '0')
            ;

        carry = (q == p) ? p[-1] & 1 : 1;
    } else
        carry = (c > 5);

    while (new_length) {
        c = (*--p - '0') + carry;

        if ((carry = (c > 9)) != 0 || c == 0)
            --new_length;
        else {
            *p = c + '0';
            break;
        }
    }

    if (carry) {
        dec->exp += 1;
        dec->sig.length = 1;
        *dec->sig.text = '1';
        return;
    } else if (new_length == 0)
        goto return_zero;

    dec->sig.length = new_length;
}

static char *long2str(long, char *, print_format);
char *fn_800EB764(char *, const char *);
extern const char lbl_8029C148[];
#pragma push
#pragma pool_strings on
char *double2hex(char *buff, print_format format, double x) {
    decimal d;
    print_format exp_format;
    double bits;
    decform df;
    char *p;
    int i;
    char digit;
    bits = x;
    if (format.precision > 509) return 0;
    df.style = 0;
    df.digits = 32;
    fn_800E59A4(&df, x, &d);
    if (d.sig.text[0] == 'I') {
        if ((*(short *)&bits) & 0x8000) {
            buff -= 5;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 1);
            else fn_800EB764(buff, lbl_8029C148 + 6);
        } else {
            buff -= 4;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 11);
            else fn_800EB764(buff, lbl_8029C148 + 15);
        }
        return buff;
    }
    if (d.sig.text[0] == 'N') {
        if (((unsigned char *)&x)[0] & 0x80) {
            buff -= 5;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 19);
            else fn_800EB764(buff, lbl_8029C148 + 24);
        } else {
            buff -= 4;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 29);
            else fn_800EB764(buff, lbl_8029C148 + 33);
        }
        return buff;
    }
    exp_format.justification_options = 1;
    exp_format.sign_options = 1;
    exp_format.precision_specified = 0;
    exp_format.alternate_form = 0;
    exp_format.argument_options = 0;
    exp_format.conversion_char = 'd';
    exp_format.field_width = 0;
    exp_format.precision = 1;
    p = long2str((short)(((*(short *)&bits) >> 4) & 0x7ff) - 1023, buff, exp_format);
    if (format.conversion_char == 'a') *--p = 'p';
    else *--p = 'P';
    for (i = format.precision; i >= 1; --i) {
        unsigned char c = ((unsigned char *)&x)[i / 2 + 1];
        digit = (c >> 4) & 15;
        if (i % 2) digit = c & 15;
        if (digit < 10) digit += '0';
        else if (format.conversion_char == 'a') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
    }
    if (format.precision != 0 || format.alternate_form) *--p = '.';
    *--p = '1';
    if (format.conversion_char == 'a') *--p = 'x';
    else *--p = 'X';
    *--p = '0';
    if ((*(short *)&bits) & 0x8000) *--p = '-';
    else if (format.sign_options == 1) *--p = '+';
    else if (format.sign_options == 2) *--p = ' ';
    return p;
}
#pragma pop
static char *longlong2str(long long num, char *buff, print_format format) {
    unsigned long long unsigned_num, base;
    char *p;
    int n, digit;
    int minus = 0;
    unsigned_num = num;
    minus = 0;
    p = buff;
    *--p = 0;
    n = 0;
    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o')) return p;
    switch (format.conversion_char) {
    case 'd': case 'i':
        base = 10;
        if (num < 0) { unsigned_num = -unsigned_num; minus = 1; }
        break;
    case 'o': base = 8; format.sign_options = 0; break;
    case 'u': base = 10; format.sign_options = 0; break;
    case 'x': case 'X': base = 16; format.sign_options = 0; break;
    }
    do {
        digit = unsigned_num % base;
        unsigned_num /= base;
        if (digit < 10) digit += '0';
        else if (format.conversion_char == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
        ++n;
    } while (unsigned_num != 0);
    if (base == 8 && format.alternate_form && *p != '0') { *--p = '0'; ++n; }
    if (format.justification_options == 2) {
        format.precision = format.field_width;
        if (minus || format.sign_options != 0) --format.precision;
        if (base == 16 && format.alternate_form) format.precision -= 2;
    }
    if (buff - p + format.precision > 509) return 0;
    while (n < format.precision) { *--p = '0'; ++n; }
    if (base == 16 && format.alternate_form) { *--p = format.conversion_char; *--p = '0'; }
    if (minus) *--p = '-';
    else if (format.sign_options == 1) *--p = '+';
    else if (format.sign_options == 2) *--p = ' ';
    return p;
}

static char *long2str(long num, char *buff, print_format format) {
    unsigned long unsigned_num, base;
    char *p;
    int n, digit;
    int minus = 0;

    unsigned_num = num;
    minus = 0;

    p = buff;

    *--p = 0;

    n = 0;

    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o')) {
        return p;
    }

    switch (format.conversion_char) {
    case 'd':
    case 'i':
        base = 10;
        if (num < 0) {
            unsigned_num = -unsigned_num;
            minus = 1;
        }
        break;
    case 'o':
        base = 8;
        format.sign_options = 0;
        break;
    case 'u':
        base = 10;
        format.sign_options = 0;
        break;
    case 'x':
    case 'X':
        base = 16;
        format.sign_options = 0;
        break;
    }

    do {
        digit = unsigned_num % base;
        unsigned_num /= base;
        if (digit < 10) {
            digit += '0';
        } else if (format.conversion_char == 'x') {
            digit += 'a' - 10;
        } else {
            digit += 'A' - 10;
        }
        *--p = digit;
        ++n;
    } while (unsigned_num != 0);

    if (base == 8 && format.alternate_form && *p != '0') {
        *--p = '0';
        ++n;
    }

    if (format.justification_options == 2) {
        format.precision = format.field_width;
        if (minus || format.sign_options != 0) {
            --format.precision;
        }
        if (base == 16 && format.alternate_form) {
            format.precision -= 2;
        }
    }

    if (buff - p + format.precision > 509) {
        return 0;
    }

    while (n < format.precision) {
        *--p = '0';
        ++n;
    }

    if (base == 16 && format.alternate_form) {
        *--p = format.conversion_char;
        *--p = '0';
    }

    if (minus) {
        *--p = '-';
    } else if (format.sign_options == 1) {
        *--p = '+';
    } else if (format.sign_options == 2) {
        *--p = ' ';
    }

    return p;
}

void *__va_arg(va_list, int);
#pragma push
#pragma use_lmw_stmw off
char *parse_format(char *format, va_list args, print_format *out) {
print_format f;
int c = *(format + 1);
int flag;
char *p = format + 1;
f.sign_options = 0;
f.justification_options = 1;
f.precision_specified = 0;
f.alternate_form = 0;
f.argument_options = 0;
f.field_width = 0;
f.precision = 0;
if (c == '%') { f.conversion_char = c; *out = f; return p + 1; }
for (;;) {
flag = 1;
switch (c) {
case '-': f.justification_options = 0; break;
case '+': f.sign_options = 1; break;
case ' ': if (f.sign_options != 1) f.sign_options = 2; break;
case '#': f.alternate_form = 1; break;
case '0': if (f.justification_options != 0) f.justification_options = 2; break;
default: flag = 0; break;
}
if (flag) c = *++p;
else break;
}
if (c == '*') {
f.field_width = *(int *)__va_arg(args, 1);
if (f.field_width < 0) { f.justification_options = 0; f.field_width = -f.field_width; }
c = *++p;
} else {
while (lbl_802E05C8[(u8)c] & 16) {
f.field_width = f.field_width * 10 + (c - '0');
c = *++p;
}
}
if (f.field_width > 509) { f.conversion_char = 0xFF; *out = f; return p + 1; }
if (c == '.') {
c = *++p;
f.precision_specified = 1;
if (c == '*') {
f.precision = *(int *)__va_arg(args, 1);
if (f.precision < 0) f.precision_specified = 0;
c = *++p;
} else {
while (lbl_802E05C8[(u8)c] & 16) {
f.precision = f.precision * 10 + (c - '0');
c = *++p;
}
}
}
flag = 1;
switch (c) {
case 'h': f.argument_options = 2; if (p[1] == 'h') { f.argument_options = 1; c = *++p; } break;
case 'l': f.argument_options = 3; if (p[1] == 'l') { f.argument_options = 4; c = *++p; } break;
case 'L': f.argument_options = 5; break;
default: flag = 0; break;
}
if (flag) c = *++p;
f.conversion_char = c;
switch (c) {
case 'd': case 'i': case 'o': case 'u': case 'x': case 'X':
if (f.argument_options == 5) f.conversion_char = 0xFF;
else if (!f.precision_specified) f.precision = 1;
else if (f.justification_options == 2) f.justification_options = 1;
break;
case 'f': case 'F':
if (f.argument_options == 2 || f.argument_options == 4) f.conversion_char = 0xFF;
else if (!f.precision_specified) f.precision = 6;
break;
case 'a': case 'A':
if (!f.precision_specified) f.precision = 13;
if (f.argument_options == 2 || f.argument_options == 4 || f.argument_options == 1) f.conversion_char = 0xFF;
break;
case 'g': case 'G':
if (f.precision == 0) f.precision = 1;
case 'e': case 'E':
if (f.argument_options == 2 || f.argument_options == 4 || f.argument_options == 1) f.conversion_char = 0xFF;
else if (!f.precision_specified) f.precision = 6;
break;
case 'p':
f.conversion_char = 'x'; f.alternate_form = 1; f.argument_options = 3; f.precision = 8;
break;
case 'c':
if (f.argument_options == 3) f.argument_options = 6;
else if (f.precision_specified || f.argument_options != 0) f.conversion_char = 0xFF;
break;
case 's':
if (f.argument_options == 3) f.argument_options = 6;
else if (f.argument_options != 0) f.conversion_char = 0xFF;
break;
case 'n':
if (f.argument_options == 5) f.conversion_char = 0xFF;
break;
default: f.conversion_char = 0xFF; break;
}
*out = f;
return p + 1;
}
#pragma pop
void fn_800EB040(void* table_base, u32 num_members, u32 member_size, int (*compare_members)(const void*, const void*)) {
    u32 l, r, j;
    char* lp;
    char* rp;
    char* ip;
    char* jp;
    char* kp;

    if (num_members < 2)
        return;

    r = num_members;
    l = (r / 2) + 1;

    lp = (char*)table_base + member_size * (l - 1);
    rp = (char*)table_base + member_size * (r - 1);

    for (;;) {
        if (l > 1) {
            l--;
            lp -= member_size;
        } else {
            {
                s8* p;
                s8* q;
                u32 n;
                s32 tmp;
                for (p = (s8*)rp - 1, q = (s8*)lp - 1, n = member_size + 1; --n;) {
                    tmp = *++q;
                    *q = *++p;
                    *p = tmp;
                }
            }
            if (--r == 1)
                return;
            rp -= member_size;
        }

        j = l;
        jp = (char*)table_base + member_size * (j - 1);

        while (j * 2 <= r) {
            ip = jp;
            j *= 2;
            jp = (char*)table_base + member_size * (j - 1);
            if (j < r) {
                kp = jp + member_size;
                if (compare_members(jp, kp) < 0) {
                    j++;
                    jp = kp;
                }
            }
            if (compare_members(ip, jp) < 0) {
                s8* p;
                s8* q;
                u32 n;
                s32 tmp;
                for (p = (s8*)jp - 1, q = (s8*)ip - 1, n = member_size + 1; --n;) {
                    tmp = *++q;
                    *q = *++p;
                    *p = tmp;
                }
            } else
                break;
        }
    }
}
#pragma pop
extern s32 lbl_803596A0;
void fn_800EB1AC(s32 arg0) {
    lbl_803596A0 = arg0;
}

s32 fn_800EB1B4(void) {
    u32 temp_r0;

    temp_r0 = (lbl_803596A0 * 0x41C64E6D) + 0x3039;
    lbl_803596A0 = temp_r0;
    return (temp_r0 >> 0x10U) & 0x7FFF;
}

int fn_800EB1D4(void *arg0, int arg1, int arg2) {
    u8 *s;
    u8 c;
    switch (arg2) {
    case 0:
        s = M2C_FIELD(arg0, u8 **, 0);
        c = *s;
        if ((s8)c == 0) {
            M2C_FIELD(arg0, int *, 4) = 1;
            return -1;
        }
        M2C_FIELD(arg0, u8 **, 0) = s + 1;
        return c;
    case 1:
        if (M2C_FIELD(arg0, int *, 4) == 0)
            M2C_FIELD(arg0, u8 **, 0)--;
        else
            M2C_FIELD(arg0, int *, 4) = 0;
        return arg1;
    case 2:
        return M2C_FIELD(arg0, int *, 4);
    default:
        return 0;
    }
}

int fn_800EB264(int sig) {
    extern void (*lbl_803283E0[])(int);
    void exit(int);
    void (*handler)(int);
    if (sig < 1 || sig > 6) return -1;
    __begin_critical_region(4);
    handler = lbl_803283E0[sig - 1];
    if (handler != (void (*)(int))1) lbl_803283E0[sig - 1] = 0;
    __end_critical_region(4);
    if (handler == (void (*)(int))1 || (handler == 0 && sig == 1)) return 0;
    if (handler == 0) exit(0);
    handler(sig);
    return 0;
}

char* fn_800EB324(const char* str, const char* pat) {
    unsigned char* s1 = (unsigned char*)str - 1;
    unsigned char* p1 = (unsigned char*)pat - 1;
    unsigned long firstc, c1, c2;

    if ((pat == 0) || (!(firstc = *++p1))) {
        return (char*)str;
    }
    while (c1 = *++s1) {
        if (c1 == firstc) {
            const unsigned char* s2 = s1 - 1;
            const unsigned char* p2 = p1 - 1;

            while ((c1 = *++s2) == (c2 = *++p2) && c1)
                ;
            if (!c2) {
                return (char*)s1;
            }
        }
    }
    return 0;
}

extern unsigned char* lbl_803596A8;
extern unsigned char* lbl_803596AC;
char* fn_800EB38C(char* str, const char* set) {
    unsigned char *p, *n;
    int c;
    unsigned char map[32] = {0};

    if (str) {
        lbl_803596AC = (unsigned char*)str;
    }

    p = (unsigned char*)set - 1;
    while (c = *++p) {
        map[(unsigned char)c >> 3] |= (1 << (c & 7));
    }

    p = lbl_803596AC - 1;
    while (c = *++p) {
        if (!(map[(unsigned char)c >> 3] & (1 << (c & 7)))) {
            break;
        }
    }

    if (!c) {
        lbl_803596AC = lbl_803596A8;
        return NULL;
    }

    n = p;
    while (c = *++p) {
        if (map[(unsigned char)c >> 3] & (1 << (c & 7))) {
            break;
        }
    }

    if (!c) {
        lbl_803596AC = lbl_803596A8;
        return (char*)n;
    }

    lbl_803596AC = p + 1;
    *p = 0;
    return (char*)n;
}

char* fn_800EB4C8(const char* str, int chr) {
    const unsigned char* p = (unsigned char*)str - 1;
    const unsigned char* q = 0;
    unsigned long c = (chr & 0xff);
    unsigned long ch;

    while (ch = *++p) {
        if (ch == c) {
            q = p;
        }
    }
    if (q) {
        return (char*)q;
    }
    return c ? 0 : (char*)p;
}

char* strchr(const char* str, int chr) {
    const unsigned char* p = (unsigned char*)str - 1;
    unsigned long c = (chr & 0xff);
    unsigned long ch;

    while (ch = *++p) {
        if (ch == c) {
            return (char*)p;
        }
    }
    return c ? 0 : (char*)p;
}

int fn_800EB540(const char* str1, const char* str2, unsigned long n) {
    const unsigned char* p1 = (unsigned char*)str1 - 1;
    const unsigned char* p2 = (unsigned char*)str2 - 1;
    unsigned long c1, c2;

    n++;
    while (--n) {
        if ((c1 = *++p1) != (c2 = *++p2)) {
            return c1 - c2;
        } else if (!c1) {
            break;
        }
    }
    return 0;
}

int fn_800EB580(const char *str1, const char *str2) {
    register unsigned char *left = (unsigned char *)str1;
    register unsigned char *right = (unsigned char *)str2;
    unsigned long align, l1, r1, x;

    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }

    if ((align = ((int)left & 3)) != ((int)right & 3)) {
        goto bytecopy;
    }
    if (align) {
        if (l1 == 0) {
            return 0;
        }
        for (align = 3 - align; align; align--) {
            l1 = *(++left);
            r1 = *(++right);
            if (l1 - r1) {
                return (l1 - r1);
            }
            if (l1 == 0) {
                return 0;
            }
        }
        left++;
        right++;
    }

    l1 = *(int *)left;
    r1 = *(int *)right;
    x = l1 + 0xFEFEFEFF;
    if (x & 0x80808080) {
        goto adjust;
    }
    while (l1 == r1) {
        l1 = *(++((int *)(left)));
        r1 = *(++((int *)(right)));
        x = l1 + 0xFEFEFEFF;
        if (x & 0x80808080) {
            goto adjust;
        }
    }
    if (l1 > r1) {
        return 1;
    }
    return -1;

adjust:
    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }
bytecopy:
    if (l1 == 0) {
        return 0;
    }
    do {
        l1 = *(++left);
        r1 = *(++right);
        if (l1 - r1) {
            return (l1 - r1);
        }
        if (l1 == 0) {
            return 0;
        }
    } while (1);
}

char* fn_800EB6A8(char* dst, const char* src, u32 n) {
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    while (*++q);
    q--;
    n++;
    while (--n) {
        if (!(*++q = *++p)) {
            q--;
            break;
        }
    }
    *++q = 0;
    return dst;
}

char* fn_800EB6F4(char* dst, const char* src) {
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    while (*++q);
    q--;
    while (*++q = *++p);
    return dst;
}

char* fn_800EB720(char* dst, const char* src, u32 n) {
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    n++;
    while (--n) {
        if (!(*++q = *++p)) {
            while (--n) *++q = 0;
            break;
        }
    }
    return dst;
}

char* fn_800EB764(char* dst, const char* src) {
    register unsigned char *destb, *fromb;
    register unsigned long w, align;

    fromb = (unsigned char*)src;
    destb = (unsigned char*)dst;
    if ((align = ((int)fromb & 3)) != ((int)destb & 3)) goto bytecopy;
    if (align) {
        if ((*destb = *fromb) == 0) return dst;
        for (align = 3 - align; align; align--) {
            if ((*(++destb) = *(++fromb)) == 0) return dst;
        }
        ++destb;
        ++fromb;
    }
    w = *((unsigned long*)fromb);
    if ((w + 0xfefefeff) & 0x80808080) goto bytecopy;
    destb -= 4;
    do {
        destb += 4;
        *(unsigned long*)destb = w;
        fromb += 4;
        w = *(unsigned long*)fromb;
    } while (!((w + 0xfefefeff) & 0x80808080));
    destb += 4;
bytecopy:
    if ((*destb = *fromb) == 0) return dst;
    do {
        if ((*(++destb) = *(++fromb)) == 0) return dst;
    } while (1);
    return dst;
}

typedef unsigned int size_t;
size_t strlen(const char* s) {
    const unsigned char* p = (const unsigned char*)s - 1;
    size_t n = -1;
    do {
        n++;
    } while (*++p != 0);
    return n;
}

double fn_800EB838(char *str) {
    double fn_800EB8C4(int, int (*)(void *, int, int), void *, int *, int *);
    
    extern double lbl_803596B8[], lbl_803596C0[];
    extern double lbl_803631E8;
    extern s32 lbl_8035A978;
    struct { char *str; int end; } state;
    int error;
    int count;
    double value, magnitude;
    state.str = str;
    state.end = 0;
    value = fn_800EB8C4(0x7FFFFFFF, fn_800EB1D4, &state, &count, &error);
    magnitude = __fabs(value);
    if (error != 0 || (lbl_803631E8 != value && (magnitude < lbl_803596B8[0] || magnitude > lbl_803596C0[0])))
        lbl_8035A978 = 0x22;
    return value;
}

double fn_800EB8C4(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *overflow) {
    extern u8 lbl_802E07C8[];
    extern struct { char *decimal_point; char *thousands_sep; char *grouping; char *int_curr_symbol; } lbl_802E08C8;
    extern float lbl_803596B0[], lbl_803596B4[];
    extern double lbl_803596C8[], lbl_803596D0[], lbl_803596D8[];
    extern double lbl_803631E8, lbl_803631F0;
    double fn_800E4924(decimal *);
    int scan_state = 1;
    int hex_scan_state = 0;
    int count = 0;
    int spaces = 0;
    int c;
    decimal d = { 0, 0, 0, { 0, "" } };
    int sig_negative = 0;
    int exp_negative = 0;
    long exp_value = 0;
    int exp_adjust = 0;
    double result;
    int sign_detected = 0;
    unsigned char *chptr = (unsigned char *)&result;
    unsigned char uch, uch1;
    int ui;
    int NibbleIndex;
    int expsign = 0;
    int exp_digits = 0;
    unsigned intdigits = 0;
    short expvalue = 0;
    int radix_marker = *(unsigned char *)lbl_802E08C8.decimal_point;

    *overflow = 0;
    c = (count++, ReadProc(ReadProcArg, 0, 0));

    while (count <= max_width && c != -1 && !(scan_state & 0x1800)) {
        switch (scan_state) {
        case 1:
            if (lbl_802E05C8[(u8)c] & 6) {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                count--;
                spaces++;
                break;
            }
            switch (c == -1 ? -1 : lbl_802E07C8[(u8)c]) {
            case '-':
                sig_negative = 1;
            case '+':
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                sign_detected = 1;
                break;
            case 'I':
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                scan_state = 0x4000;
                break;
            case 'N':
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                scan_state = 0x2000;
                break;
            default:
                scan_state = 2;
                break;
            }
            break;
        case 0x4000: {
            int i = 1;
            char model[] = "INFINITY";

            while (i < 8 && (c == -1 ? -1 : lbl_802E07C8[(u8)c]) == model[i]) {
                i++;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
            }
            if (i == 3 || i == 8) {
                if (sig_negative) {
                    result = -lbl_803596B4[0];
                } else {
                    result = lbl_803596B4[0];
                }
                *chars_scanned = spaces + i + sign_detected;
                return result;
            } else {
                scan_state = 0x1000;
            }
            break;
        }
        case 0x2000: {
            int i = 1, j = 0;
            char model[] = "NAN(";

            while (i < 4 && (c == -1 ? -1 : lbl_802E07C8[(u8)c]) == model[i]) {
                i++;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
            }
            if (i == 3 || i == 4) {
                if (i == 4) {
                    while (j < 32 && ((lbl_802E05C8[(u8)c] & 0x10) || (lbl_802E05C8[(u8)c] & 0xC0))) {
                        j++;
                        c = (count++, ReadProc(ReadProcArg, 0, 0));
                    }
                    if (c != ')') {
                        scan_state = 0x1000;
                        break;
                    } else {
                        j++;
                    }
                }
                if (sig_negative) {
                    result = -lbl_803596B0[0];
                } else {
                    result = lbl_803596B0[0];
                }
                *chars_scanned = spaces + i + j + sign_detected;
                return result;
            } else {
                scan_state = 0x1000;
            }
            break;
        }
        case 2:
            if (c == radix_marker) {
                scan_state = 0x10;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x1000;
                break;
            }
            if (c == '0') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                if ((c == -1 ? -1 : lbl_802E07C8[(u8)c]) == 'X') {
                    scan_state = 0x8000;
                    hex_scan_state = 1;
                } else {
                    scan_state = 4;
                }
                break;
            }
            scan_state = 8;
            break;
        case 4:
            if (c == '0') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 8;
            break;
        case 8:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                if (c == radix_marker) {
                    scan_state = 0x20;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    scan_state = 0x40;
                }
                break;
            }
            if (d.sig.length < 20) {
                d.sig.text[d.sig.length++] = c;
            } else {
                exp_adjust++;
            }
            c = (count++, ReadProc(ReadProcArg, 0, 0));
            break;
        case 0x10:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x1000;
                break;
            }
            scan_state = 0x20;
            break;
        case 0x20:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x40;
                break;
            }
            if (d.sig.length < 20) {
                if (c != '0' || d.sig.length) {
                    d.sig.text[d.sig.length++] = c;
                }
                exp_adjust--;
            }
            c = (count++, ReadProc(ReadProcArg, 0, 0));
            break;
        case 0x40:
            if ((c == -1 ? -1 : lbl_802E07C8[(u8)c]) == 'E') {
                scan_state = 0x80;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 0x800;
            break;
        case 0x80:
            if (c == '+') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
            } else if (c == '-') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                exp_negative = 1;
            }
            scan_state = 0x100;
            break;
        case 0x100:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x1000;
                break;
            }
            if (c == '0') {
                scan_state = 0x200;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 0x400;
            break;
        case 0x200:
            if (c == '0') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 0x400;
            break;
        case 0x400:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x800;
                break;
            }
            exp_value = exp_value * 10 + (c - '0');
            if (exp_value > 0x7FFF) {
                *overflow = 1;
            }
            c = (count++, ReadProc(ReadProcArg, 0, 0));
            break;
        case 0x8000:
            switch (hex_scan_state) {
            case 1:
                chptr[0] = 0;
                chptr[1] = 0;
                chptr[2] = 0;
                chptr[3] = 0;
                chptr[4] = 0;
                chptr[5] = 0;
                chptr[6] = 0;
                chptr[7] = 0;
                NibbleIndex = 2;
                hex_scan_state = 2;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            case 2:
                if (c == '0') {
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                    break;
                }
                hex_scan_state = 4;
                break;
            case 4:
                if (!(lbl_802E05C8[(u8)c] & 0x20)) {
                    if (c == radix_marker) {
                        hex_scan_state = 8;
                        c = (count++, ReadProc(ReadProcArg, 0, 0));
                    } else {
                        hex_scan_state = 0x10;
                    }
                    break;
                }
                if (NibbleIndex < 17) {
                    intdigits++;
                    uch = chptr[NibbleIndex / 2];
                    ui = (c == -1 ? -1 : lbl_802E07C8[(u8)c]);
                    if (ui >= 'A') {
                        ui = ui - 'A' + 10;
                    } else {
                        ui -= '0';
                    }
                    uch1 = ui;
                    if ((NibbleIndex % 2) != 0) {
                        uch |= uch1;
                    } else {
                        uch |= (uch1 << 4);
                    }
                    chptr[NibbleIndex++ / 2] = uch;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                }
                break;
            case 8:
                if (!(lbl_802E05C8[(u8)c] & 0x20)) {
                    hex_scan_state = 0x10;
                    break;
                }
                if (NibbleIndex < 17) {
                    uch = chptr[NibbleIndex / 2];
                    ui = (c == -1 ? -1 : lbl_802E07C8[(u8)c]);
                    if (ui >= 'A') {
                        ui = ui - 'A' + 10;
                    } else {
                        ui -= '0';
                    }
                    uch1 = ui;
                    if ((NibbleIndex % 2) != 0) {
                        uch |= uch1;
                    } else {
                        uch |= (uch1 << 4);
                    }
                    chptr[NibbleIndex++ / 2] = uch;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                }
                break;
            case 0x10:
                if ((c == -1 ? -1 : lbl_802E07C8[(u8)c]) == 'P') {
                    hex_scan_state = 0x20;
                    exp_digits++;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    scan_state = 0x800;
                }
                break;
            case 0x20:
                exp_digits++;
                if (c == '-') {
                    expsign = 1;
                } else if (c != '+') {
                    ReadProc(ReadProcArg, c, 1);
                    exp_digits--;
                }
                hex_scan_state = 0x40;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            case 0x40:
                if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                    scan_state = 0x1000;
                    break;
                }
                if (c == '0') {
                    hex_scan_state = 0x80;
                    exp_digits++;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                    break;
                }
                hex_scan_state = 0x100;
                break;
            case 0x100:
                if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                    scan_state = 0x800;
                    break;
                }
                expvalue = expvalue * 10 + (c - '0');
                if (exp_value > 0x7FFF) {
                    *overflow = 1;
                }
                exp_digits++;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            break;
        }
    }

    if (!(scan_state & 0xE2C)) {
        count = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }
    ReadProc(ReadProcArg, c, 1);

    if (hex_scan_state == 0) {
        if (exp_negative) {
            exp_value = -exp_value;
        }
        {
            int n = d.sig.length;
            unsigned char *p = &d.sig.text[n];

            while (n-- && *--p == '0') {
                exp_adjust++;
            }
            d.sig.length = n + 1;
            if (d.sig.length == 0) {
                d.sig.text[d.sig.length++] = '0';
            }
        }
        exp_value += exp_adjust;
        if (exp_value < -0x8000 || exp_value > 0x7FFF) {
            *overflow = 1;
        }
        if (*overflow) {
            if (exp_negative) {
                return lbl_803631E8;
            } else {
                return sig_negative ? -lbl_803596C8[0] : lbl_803596C8[0];
            }
        }
        d.exp = exp_value;
        result = fn_800E4924(&d);
        if (lbl_803631E8 != result && result < lbl_803596D0[0]) {
            *overflow = 1;
        } else if (result > lbl_803596D8[0]) {
            *overflow = 1;
            result = lbl_803596C8[0];
        }
        if (sig_negative && (scan_state & 0xE2C)) {
            result = -result;
        }
        return result;
    } else {
        unsigned long long *uptr = (unsigned long long *)&result;

        if (result != lbl_803631F0) {
            if (expsign) {
                expvalue = -expvalue;
            }
            while ((*(short *)&result & 0x00F0) != 0x0010) {
                *uptr >>= 1;
                expvalue++;
            }
            expvalue += (intdigits - 1) * 4;
            *(short *)&result &= 0x000F;
            *(short *)&result |= ((expvalue + 1023) << 4);
            *chars_scanned = spaces + sign_detected + NibbleIndex + 1 + exp_digits;
            if (0.0 != result && result < lbl_803596D0[0]) {
                *overflow = 1;
                result = 0.0;
            } else if (result > lbl_803596D8[0]) {
                *overflow = 1;
                result = lbl_803596C8[0];
            }
            if (sig_negative) {
                *(short *)&result |= 0x8000;
            }
        } else {
            result = lbl_803631E8;
        }
        return result;
    }
}



s32 fn_800ECD08(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    M2C_UNK fn_800E1B68(s32, s32, s32 *, s32);
    s32 fn_800F3AF4(M2C_UNK);
    s32 fn_800F3B64(s32, s32);
    extern s32 lbl_8035A980;
    s32 var_r3;

    var_r3 = 0;
    if ((s32) lbl_8035A980 == 0) {
        var_r3 = fn_800F3AF4(0xE100);
        if (var_r3 == 0) {
            lbl_8035A980 = 1;
        }
    }
    if (var_r3 != 0) {
        return 1;
    }
    if (fn_800F3B64(arg1, *arg2) != 0) {
        *arg2 = 0;
        return 1;
    }
    fn_800E1B68(arg0, arg1, arg2, arg3);
    return 0;
}

int fwide(void *file, int mode) {
    MslFile *stream = (MslFile *)file;
    int orientation;
    int result;

    if (stream == NULL || stream->mode.file_kind == 0) {
        return 0;
    }
    orientation = stream->mode.file_orientation;
    switch (orientation) {
    case 0:
        if (mode > 0) {
            stream->mode.file_orientation = 2;
        } else if (mode < 0) {
            stream->mode.file_orientation = 1;
        }
        result = mode;
        break;
    case 2:
        result = 1;
        break;
    case 1:
        result = -1;
        break;
    }
    return result;
}

double fn_800ECE54(double x) {
extern float lbl_803596B0[], lbl_803596B4[];
extern double lbl_803631F8, lbl_80363200, lbl_80363208, lbl_80363210, lbl_80363218, lbl_80363220, lbl_80363228, lbl_80363230, lbl_80363238, lbl_80363240, lbl_80363248, lbl_80363250, lbl_80363258, lbl_80363260, lbl_80363268, lbl_80363270, lbl_80363278, lbl_80363280;
double z,p,q,r,w,s,c,df;
int hx,ix;
hx=*(int*)&x; ix=hx&0x7fffffff;
if(ix>=0x3ff00000) {
if(((ix-0x3ff00000)|*((int*)&x+1))==0) { if(hx>0) return lbl_803631F8; else return lbl_80363200; }
return lbl_803596B0[0];
}
if(ix<0x3fe00000) {
if(ix<=0x3c600000) return lbl_80363208;
z=x*x; p = z*(lbl_80363218+z*(lbl_80363220+z*(lbl_80363228+z*(lbl_80363230+z*(lbl_80363238+lbl_80363240*z))))); q = lbl_80363248+z*(lbl_80363250+z*(lbl_80363258+z*(lbl_80363260+lbl_80363268*z)));
r=p/q; return lbl_80363208-(x-(lbl_80363210-x*r));
} else if(hx<0) {
x=(lbl_80363248+x)*lbl_80363270; p = x*(lbl_80363218+x*(lbl_80363220+x*(lbl_80363228+x*(lbl_80363230+x*(lbl_80363238+lbl_80363240*x))))); q = lbl_80363248+x*(lbl_80363250+x*(lbl_80363258+x*(lbl_80363260+lbl_80363268*x)));
{ double guess; if (x > lbl_803631F8) { guess = __frsqrte(x); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - x * (guess * guess)); s = x * guess; } else if (x == lbl_803631F8) s = lbl_803631F8; else if (x != lbl_803631F8) s = lbl_803596B0[0]; else s = lbl_803596B4[0]; }
r=p/q; w=r*s-lbl_80363210; return lbl_80363200-lbl_80363280*(s+w);
} else {
z=(lbl_80363248-x)*lbl_80363270;
{ double guess; if (z > lbl_803631F8) { guess = __frsqrte(z); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); guess = lbl_80363270 * guess * (lbl_80363278 - z * (guess * guess)); s = z * guess; } else if (z == lbl_803631F8) s = lbl_803631F8; else if (z != lbl_803631F8) s = lbl_803596B0[0]; else s = lbl_803596B4[0]; }
df=s; *((int*)&df+1)=0;
p = z*(lbl_80363218+z*(lbl_80363220+z*(lbl_80363228+z*(lbl_80363230+z*(lbl_80363238+lbl_80363240*z))))); q = lbl_80363248+z*(lbl_80363250+z*(lbl_80363258+z*(lbl_80363260+lbl_80363268*z)));
c=(z-df*df)/(s+df); r=p/q; w=r*s+c; return lbl_80363280*(df+w);
}
}

extern double lbl_80363288, lbl_80363290, lbl_80363298, lbl_803632A0;
extern double lbl_803632A8, lbl_803632B0, lbl_803632B8, lbl_803632C0;
extern double lbl_803632C8, lbl_803632D0, lbl_803632D8;
double fn_800ED164(double y, double x) {
    double z;
    int k,m,hx,hy,ix,iy;
    unsigned int lx,ly;
    hx=((int *)&x)[0]; lx=((unsigned int *)&x)[1];
    hy=((int *)&y)[0]; ly=((unsigned int *)&y)[1];
    ix=hx&0x7fffffff; iy=hy&0x7fffffff;
    if ((ix|((lx|-lx)>>31))>0x7ff00000 || (iy|((ly|-ly)>>31))>0x7ff00000)
        return x+y;
    if (((hx-0x3ff00000)|lx)==0) return fn_800EFA20(y);
    m=((hy>>31)&1)|((hx>>30)&2);
    if ((iy|ly)==0) {
        switch(m) {
        case 0: case 1: return y;
        case 2: return lbl_80363288;
        case 3: return lbl_80363290;
        }
    }
    if ((ix|lx)==0) return hy<0 ? lbl_80363298 : lbl_803632A0;
    if (ix==0x7ff00000) {
        if (iy==0x7ff00000) {
            switch(m) {
            case 0: return lbl_803632A8;
            case 1: return lbl_803632B0;
            case 2: return lbl_803632B8;
            case 3: return lbl_803632C0;
            }
        } else {
            switch(m) {
            case 0: return lbl_803632C8;
            case 1: return lbl_803632D0;
            case 2: return lbl_80363288;
            case 3: return lbl_80363290;
            }
        }
    }
    if (iy==0x7ff00000) return hy<0 ? lbl_80363298 : lbl_803632A0;
    k=(iy-ix)>>20;
    if (k>60) z=lbl_803632A0;
    else if (hx<0 && k< -60) z=lbl_803632C8;
    else z=fn_800EFA20(__fabs(y/x));
    switch(m) {
    case 0: return z;
    case 1: ((unsigned int *)&z)[0]^=0x80000000; return z;
    case 2: return lbl_80363288-(z-lbl_803632D8);
    default: return (z-lbl_803632D8)-lbl_80363288;
    }
}

typedef struct ExpCoefficients { double half[2]; double hi[2]; double lo[2]; } ExpCoefficients;
extern double lbl_8029C538[];
extern double lbl_803632E0, lbl_803632E8, lbl_803632F0, lbl_803632F8;
extern double lbl_80363300, lbl_80363308, lbl_80363310, lbl_80363318;
extern double lbl_80363320, lbl_80363328, lbl_80363330, lbl_80363338;
extern double lbl_80363340, lbl_80363348;
double fn_800ED3F4(double x) {
    double y, hi, lo, c, t;
    int k, xsb;
    ExpCoefficients *coeff = (ExpCoefficients *)lbl_8029C538;
    unsigned hx;
    hx = ((unsigned *)&x)[0];
    xsb = (hx >> 31) & 1;
    hx &= 0x7fffffff;
    if (hx >= 0x40862e42) {
        if (hx >= 0x7ff00000) {
            if (((hx & 0xfffff) | ((unsigned *)&x)[1]) != 0) return x + x;
            return xsb == 0 ? x : lbl_803632E0;
        }
        if (x > lbl_803632E8) return lbl_803632F0;
        if (x < lbl_803632F8) return lbl_803632E0;
    }
    if (hx > 0x3fd62e42) {
        if (hx < 0x3ff0a2b2) {
            hi = x - *(coeff->hi + xsb);
            lo = *(coeff->lo + xsb);
            k = 1 - xsb - xsb;
        } else {
            k = lbl_80363300 * x + coeff->half[xsb];
            t = k;
            hi = x - t * coeff->hi[0];
            lo = t * coeff->lo[0];
        }
        x = hi - lo;
    } else if (hx < 0x3e300000) {
        if (lbl_80363308 + x > lbl_80363310) return lbl_80363310 + x;
    } else k = 0;
    t = x * x;
    c = x - t * (lbl_80363318 + t * (lbl_80363320 + t * (lbl_80363328 + t * (lbl_80363330 + t * lbl_80363338))));
    if (k == 0) return lbl_80363310 - ((x * c) / (c - lbl_80363340) - x);
    y = lbl_80363310 - ((lo - (x * c) / (lbl_80363340 - c)) - hi);
    if (k >= -1021) {
        ((int *)&y)[0] += k << 20;
        return y;
    }
    ((int *)&y)[0] += (k + 1000) << 20;
    return y * lbl_80363348;
}

extern double lbl_8029C568[];
double fn_800ED618(double x, double y) {
    int n, hx, hy, hz, ix, iy, sx, i;
    unsigned lx, ly, lz;

    hx = *(int *)&x;
    lx = *(1 + (unsigned *)&x);
    hy = *(int *)&y;
    ly = *(1 + (unsigned *)&y);
    sx = hx & 0x80000000;
    hx ^= sx;
    hy &= 0x7fffffff;

    if ((hy | ly) == 0 || (hx >= 0x7ff00000) || ((hy | ((ly | -ly) >> 31)) > 0x7ff00000))
        return (x * y) / (x * y);
    if (hx <= hy) {
        if ((hx < hy) || (lx < ly)) return x;
        if (lx == ly) return lbl_8029C568[(unsigned)sx >> 31];
    }

    if (hx < 0x00100000) {
        if (hx == 0) {
            for (ix = -1043, i = lx; i > 0; i <<= 1) ix -= 1;
        } else {
            for (ix = -1022, i = (hx << 11); i > 0; i <<= 1) ix -= 1;
        }
    } else ix = (hx >> 20) - 1023;

    if (hy < 0x00100000) {
        if (hy == 0) {
            for (iy = -1043, i = ly; i > 0; i <<= 1) iy -= 1;
        } else {
            for (iy = -1022, i = (hy << 11); i > 0; i <<= 1) iy -= 1;
        }
    } else iy = (hy >> 20) - 1023;

    if (ix >= -1022)
        hx = 0x00100000 | (0x000fffff & hx);
    else {
        n = -1022 - ix;
        if (n <= 31) {
            hx = (hx << n) | (lx >> (32 - n));
            lx <<= n;
        } else {
            hx = lx << (n - 32);
            lx = 0;
        }
    }
    if (iy >= -1022)
        hy = 0x00100000 | (0x000fffff & hy);
    else {
        n = -1022 - iy;
        if (n <= 31) {
            hy = (hy << n) | (ly >> (32 - n));
            ly <<= n;
        } else {
            hy = ly << (n - 32);
            ly = 0;
        }
    }

    n = ix - iy;
    while (n--) {
        hz = hx - hy;
        lz = lx - ly;
        if (lx < ly) hz -= 1;
        if (hz < 0) {
            hx = hx + hx + (lx >> 31);
            lx = lx + lx;
        } else {
            if ((hz | lz) == 0)
                return lbl_8029C568[(unsigned)sx >> 31];
            hx = hz + hz + (lz >> 31);
            lx = lz + lz;
        }
    }
    hz = hx - hy;
    lz = lx - ly;
    if (lx < ly) hz -= 1;
    if (hz >= 0) {
        hx = hz;
        lx = lz;
    }

    if ((hx | lx) == 0)
        return lbl_8029C568[(unsigned)sx >> 31];
    while (hx < 0x00100000) {
        hx = hx + hx + (lx >> 31);
        lx = lx + lx;
        iy -= 1;
    }
    if (iy >= -1022) {
        hx = ((hx - 0x00100000) | ((iy + 1023) << 20));
        *(int *)&x = hx | sx;
        *(1 + (unsigned *)&x) = lx;
    } else {
        n = -1022 - iy;
        if (n <= 20) {
            lx = (lx >> n) | ((unsigned)hx << (32 - n));
            hx >>= n;
        } else if (n <= 31) {
            lx = (hx << (32 - n)) | (lx >> n);
            hx = sx;
        } else {
            lx = hx >> (n - 32);
            hx = sx;
        }
        *(int *)&x = hx | sx;
        *(1 + (unsigned *)&x) = lx;
    }
    return x;
}

extern double lbl_8035A988, lbl_80363358, lbl_80363360, lbl_80363368;
extern double lbl_80363370, lbl_80363378, lbl_80363380, lbl_80363388, lbl_80363390;
extern double lbl_80363398, lbl_803633A0, lbl_803633A8, lbl_803633B0;
extern double lbl_803633B8, lbl_803633C0, lbl_803633C8;

extern double lbl_8029C578[];
extern double lbl_803633D8, lbl_803633E0, lbl_803633E8, lbl_803633F0, lbl_803633F8;
extern double lbl_80363400, lbl_80363408, lbl_80363410, lbl_80363418, lbl_80363420, lbl_80363428;
extern double lbl_80363430, lbl_80363438, lbl_80363440, lbl_80363448, lbl_80363450, lbl_80363458;
extern double lbl_80363460, lbl_80363468, lbl_80363470, lbl_80363478, lbl_80363480, lbl_80363488, lbl_80363490;
extern double lbl_80363498, lbl_803634A0, lbl_803634A8, lbl_803634B0, lbl_803634B8, lbl_803634C0, lbl_803634C8, lbl_803634D0, lbl_803634D8;
double fn_800EDBD0(double x, double y) {
    struct powtab { double bp[2], dp_h[2], dp_l[2]; };
    extern float lbl_803596B0[], lbl_803596B4[];
    extern double fn_800F004C(double, int);
    struct powtab *tab = (struct powtab *)lbl_8029C578;
    double z,ax,z_h,z_l,p_h,p_l;
    double y1,t1,t2,r,s,t,u,v,w;
    int i,j,k,yisint,n;
    int hx,hy,ix,iy;
    unsigned lx,ly;

    hx = *(int*)&x; lx = *(1+(unsigned*)&x);
    hy = *(int*)&y; ly = *(1+(unsigned*)&y);
    ix = hx&0x7fffffff; iy = hy&0x7fffffff;

    if((iy|ly)==0) return lbl_803633D8;

    if(ix > 0x7ff00000 || ((ix==0x7ff00000)&&(lx!=0)) ||
       iy > 0x7ff00000 || ((iy==0x7ff00000)&&(ly!=0)))
        return x+y;

    yisint = 0;
    if(hx<0) {
        if(iy>=0x43400000) yisint = 2;
        else if(iy>=0x3ff00000) {
            k = (iy>>20)-0x3ff;
            if(k>20) {
                j = ly>>(52-k);
                if((j<<(52-k))==ly) yisint = 2-(j&1);
            } else if(ly==0) {
                j = iy>>(20-k);
                if((j<<(20-k))==iy) yisint = 2-(j&1);
            }
        }
    }

    if(ly==0) {
        if (iy==0x7ff00000) {
            if(((ix-0x3ff00000)|lx)==0)
                return y - y;
            else if (ix >= 0x3ff00000)
                return (hy>=0)? y: lbl_803633E0;
            else
                return (hy<0)?-y: lbl_803633E0;
        }
        if(iy==0x3ff00000) {
            if(hy<0) return lbl_803633D8/x; else return x;
        }
        if(hy==0x40000000) return x*x;
        if(hy==0x3fe00000) {
            if(hx>=0) {
                double guess;
                if (x > lbl_803633E0) {
                    guess = __frsqrte(x);
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    guess = lbl_803633E8 * guess * (lbl_803633F0 - x * (guess * guess));
                    return x * guess;
                } else if (x == lbl_803633E0) return lbl_803633E0;
                else if (x != lbl_803633E0) return lbl_803596B0[0];
                return lbl_803596B4[0];
            }
        }
    }

    ax = __fabs(x);
    if(lx==0) {
        if(ix==0x7ff00000||ix==0||ix==0x3ff00000){
            z = ax;
            if(hy<0) z = lbl_803633D8/z;
            if(hx<0) {
                if(((ix-0x3ff00000)|yisint)==0) {
                    z = (z-z)/(z-z);
                } else if(yisint==1)
                    z = -z;
            }
            return z;
        }
    }

    n = (hx>>31)+1;

    if((n|yisint)==0) {
        lbl_8035A978 = 33;
        return lbl_803596B0[0];
    }

    if(iy>0x41e00000) {
        if(iy>0x43f00000){
            if(ix<=0x3fefffff) return (hy<0)? lbl_803633F8:lbl_803633E0;
            if(ix>=0x3ff00000) return (hy>0)? lbl_803633F8:lbl_803633E0;
        }
        if(ix<0x3fefffff) return (hy<0)? lbl_803633F8:lbl_803633E0;
        if(ix>0x3ff00000) return (hy>0)? lbl_803633F8:lbl_803633E0;
        t = x-lbl_803633D8;
        w = (t*t)*(lbl_803633E8-t*(lbl_80363400-t*lbl_80363408));
        u = lbl_80363410*t;
        v = t*lbl_80363418-w*lbl_80363420;
        t1 = u+v;
        *(1+(int*)&t1) = 0;
        t2 = v-(t1-u);
    } else {
        double ss,s2,s_h,s_l,t_h,t_l;
        n = 0;
        if(ix<0x00100000)
            {ax *= lbl_80363428; n -= 53; ix = *(int*)&ax; }
        n += ((ix)>>20)-0x3ff;
        j = ix&0x000fffff;
        ix = j|0x3ff00000;
        if(j<=0x3988E) k=0;
        else if(j<0xBB67A) k=1;
        else {k=0;n+=1;ix -= 0x00100000;}
        *(int*)&ax = ix;

        u = ax-tab->bp[k];
        v = lbl_803633D8/(ax+tab->bp[k]);
        ss = u*v;
        s_h = ss;
        *(1+(int*)&s_h) = 0;
        t_h = lbl_803633E0;
        *(int*)&t_h = ((ix>>1)|0x20000000)+0x00080000+(k<<18);
        t_l = ax - (t_h-tab->bp[k]);
        s_l = v*((u-s_h*t_h)-s_h*t_l);
        s2 = ss*ss;
        r = s2*s2*(lbl_80363430+s2*(lbl_80363438+s2*(lbl_80363440+s2*(lbl_80363448+s2*(lbl_80363450+s2*lbl_80363458)))));
        r += s_l*(s_h+ss);
        s2 = s_h*s_h;
        t_h = lbl_803633F0+s2+r;
        *(1+(int*)&t_h) = 0;
        t_l = r-((t_h-lbl_803633F0)-s2);
        u = s_h*t_h;
        v = s_l*t_h+t_l*ss;
        p_h = u+v;
        *(1+(int*)&p_h) = 0;
        p_l = v-(p_h-u);
        z_h = lbl_80363460*p_h;
        z_l = lbl_80363468*p_h+p_l*lbl_80363470+tab->dp_l[k];
        t = (double)n;
        t1 = (((z_h+z_l)+tab->dp_h[k])+t);
        *(1+(int*)&t1) = 0;
        t2 = z_l-(((t1-t)-tab->dp_h[k])-z_h);
    }

    s = lbl_803633D8;
    if((n|(yisint-1))==0)
        s = lbl_80363478;

    y1 = y;
    *(1+(int*)&y1) = 0;
    p_l = (y-y1)*t1+y*t2;
    p_h = y1*t1;
    z = p_l+p_h;
    j = *(int*)&z;
    i = *(1+(int*)&z);
    if (j>=0x40900000) {
        if(((j-0x40900000)|i)!=0)
            return s*lbl_80363480*lbl_80363480;
        else {
            if(p_l+lbl_80363488>z-p_h) return s*lbl_80363480*lbl_80363480;
        }
    } else if((j&0x7fffffff)>=0x4090cc00 ) {
        if(((j-0xc090cc00)|i)!=0)
            return s*lbl_80363490*lbl_80363490;
        else {
            if(p_l<=z-p_h) return s*lbl_80363490*lbl_80363490;
        }
    }
    i = j&0x7fffffff;
    k = (i>>20)-0x3ff;
    n = 0;
    if(i>0x3fe00000) {
        n = j+(0x00100000>>(k+1));
        k = ((n&0x7fffffff)>>20)-0x3ff;
        t = lbl_803633E0;
        *(int*)&t = (n&~(0x000fffff>>k));
        n = ((n&0x000fffff)|0x00100000)>>(20-k);
        if(j<0) n = -n;
        p_h -= t;
    }
    t = p_l+p_h;
    *(1+(int*)&t) = 0;
    u = t*lbl_80363498;
    v = (p_l-(t-p_h))*lbl_803634A0+t*lbl_803634A8;
    z = u+v;
    w = v-(z-u);
    t = z*z;
    t1 = z - t*(lbl_803634B0+t*(lbl_803634B8+t*(lbl_803634C0+t*(lbl_803634C8+t*lbl_803634D0))));
    r = (z*t1)/(t1-lbl_803634D8)-(w+z*w);
    z = lbl_803633D8-(r-z);
    j = *(int*)&z;
    j += (n<<20);
    if((j>>20)<=0) z = fn_800F004C(z,-n);
    else *(int*)&z += (n<<20);
    return s*z;
}

extern double lbl_803634E8, lbl_803634F0, lbl_803634F8, lbl_80363500, lbl_80363508, lbl_80363510, lbl_80363518, lbl_80363520, lbl_80363528, lbl_80363530;
extern int lbl_8029C6B0[];
extern int lbl_8029C5A8[];
int fn_800EE918(double*, double*, int, int, int, const int*);

double fn_800EE824(double x, double y) {
    extern double lbl_80363540;
    extern double lbl_80363548;
    extern double lbl_80363550;
    extern double lbl_80363558;
    extern double lbl_80363560;
    extern double lbl_80363568;
    extern double lbl_80363570;
    extern double lbl_80363578;
    extern double lbl_80363580;
    double a, hz, z, r, qx;
    int ix;
    ix = (*(int *)&x) & 0x7fffffff;
    if (ix < 0x3e400000) {
        if ((int)x == 0) return lbl_80363540;
    }
    z = x * x;
    r = z * (lbl_80363548 + z * (lbl_80363550 + z * (lbl_80363558 + z * (lbl_80363560 + z * (lbl_80363568 + lbl_80363570 * z)))));
    if (ix < 0x3FD33333)
        return lbl_80363540 - (lbl_80363578 * z - (z * r - x * y));
    else {
        if (ix > 0x3fe90000) {
            qx = lbl_80363580;
        } else {
            *(int *)&qx = ix - 0x00200000;
            *((int *)&qx + 1) = 0;
        }
        hz = lbl_80363578 * z - qx;
        a = lbl_80363540 - qx;
        return a - (hz - (z * r - x * y));
    }
}

extern int lbl_8029C730[];
extern double lbl_8029C740[];
extern double lbl_80363588, lbl_80363590, lbl_80363598, lbl_803635A0, lbl_803635A8, lbl_803635B0, lbl_803635B8;
double fn_800EFE78(double x);
double fn_800F004C(double x, int n);
int fn_800EE918(double *x, double *y, int e0, int nx, int prec, const int *ipio2)
{
    int jz,jx,jv,jp,jk,carry,n,iq[20],i,j,k,m,q0,ih;
    double z,fw,f[20],fq[20],q[20];

    jk = lbl_8029C730[prec];
    jp = jk;

    jx = nx-1;
    jv = (e0-3)/24; if(jv<0) jv=0;
    q0 = e0-24*(jv+1);

    j = jv-jx; m = jx+jk;
    for(i=0;i<=m;i++,j++) f[i] = (j<0)? 0.0 : (double) ipio2[j];

    for (i=0;i<=jk;i++) {
        for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j]; q[i] = fw;
    }

    jz = jk;
recompute:
    for(i=0,j=jz,z=q[jz];j>0;i++,j--) {
        fw    =  (double)((int)(5.96046447753906250000e-08* z));
        iq[i] =  (int)(z-1.67772160000000000000e+07*fw);
        z     =  q[j-1]+fw;
    }

    z  = fn_800F004C(z,q0);
    z -= 8.0*fn_800EFE78(z*0.125);
    n  = (int) z;
    z -= (double)n;
    ih = 0;
    if(q0>0) {
        i  = (iq[jz-1]>>(24-q0)); n += i;
        iq[jz-1] -= i<<(24-q0);
        ih = iq[jz-1]>>(23-q0);
    }
    else if(q0==0) ih = iq[jz-1]>>23;
    else if(z>=0.5) ih=2;

    if(ih>0) {
        n += 1; carry = 0;
        for(i=0;i<jz ;i++) {
            j = iq[i];
            if(carry==0) {
                if(j!=0) {
                    carry = 1; iq[i] = 0x1000000- j;
                }
            } else  iq[i] = 0xffffff - j;
        }
        if(q0>0) {
            switch(q0) {
            case 1:
                iq[jz-1] &= 0x7fffff; break;
            case 2:
                iq[jz-1] &= 0x3fffff; break;
            }
        }
        if(ih==2) {
            z = 1.0 - z;
            if(carry!=0) z -= fn_800F004C(1.0,q0);
        }
    }

    if(z==0.0) {
        j = 0;
        for (i=jz-1;i>=jk;i--) j |= iq[i];
        if(j==0) {
            for(k=1;iq[jk-k]==0;k++);

            for(i=jz+1;i<=jz+k;i++) {
                f[jx+i] = (double) ipio2[jv+i];
                for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j];
                q[i] = fw;
            }
            jz += k;
            goto recompute;
        }
    }

    if(z==0.0) {
        jz -= 1; q0 -= 24;
        while(iq[jz]==0) { jz--; q0-=24;}
    } else {
        z = fn_800F004C(z,-q0);
        if(z>=1.67772160000000000000e+07) {
            fw = (double)((int)(5.96046447753906250000e-08*z));
            iq[jz] = (int)(z-1.67772160000000000000e+07*fw);
            jz += 1; q0 += 24;
            iq[jz] = (int) fw;
        } else iq[jz] = (int) z ;
    }

    fw = fn_800F004C(1.0,q0);
    for(i=jz;i>=0;i--) {
        q[i] = fw*(double)iq[i]; fw*=5.96046447753906250000e-08;
    }

    for(i=jz;i>=0;i--) {
        for(fw=0.0,k=0;k<=jp&&k<=jz-i;k++) fw += lbl_8029C740[k]*q[i+k];
        fq[jz-i] = fw;
    }

    switch(prec) {
        case 0:
            fw = 0.0;
            for (i=jz;i>=0;i--) fw += fq[i];
            y[0] = (ih==0)? fw: -fw;
            break;
        case 1:
        case 2:
            fw = 0.0;
            for (i=jz;i>=0;i--) fw += fq[i];
            y[0] = (ih==0)? fw: -fw;
            fw = fq[0]-fw;
            for (i=1;i<=jz;i++) fw += fq[i];
            y[1] = (ih==0)? fw: -fw;
            break;
        case 3:
            for (i=jz;i>0;i--) {
                fw      = fq[i-1]+fq[i];
                fq[i]  += fq[i-1]-fw;
                fq[i-1] = fw;
            }
            for (i=jz;i>1;i--) {
                fw      = fq[i-1]+fq[i];
                fq[i]  += fq[i-1]-fw;
                fq[i-1] = fw;
            }
            for (fw=0.0,i=jz;i>=2;i--) fw += fq[i];
            if(ih==0) {
                y[0] =  fq[0]; y[1] =  fq[1]; y[2] =  fw;
            } else {
                y[0] = -fq[0]; y[1] = -fq[1]; y[2] = -fw;
            }
    }
    return n&7;
}

double fn_800EF76C(double x, double y, int iy) {
    extern double lbl_803635C8;
    extern double lbl_803635D0;
    extern double lbl_803635D8;
    extern double lbl_803635E0;
    extern double lbl_803635E8;
    extern double lbl_803635F0;
    extern double lbl_803635F8;
    double z, r, v;
    int ix;
    ix = (*(int *)&x) & 0x7fffffff;
    if (ix < 0x3e400000) {
        if ((int)x == 0) return x;
    }
    z = x * x;
    v = z * x;
    r = lbl_803635D0 + z * (lbl_803635D8 + z * (lbl_803635E0 + lbl_803635E8 * z));
    r = lbl_803635C8 + z * r;
    if (iy == 0) return x + v * (lbl_803635F0 + z * r);
    else return x - ((z * (lbl_803635F8 * y - v * r) - y) - lbl_803635F0 * v);
}

extern double lbl_8029C780[];
extern double lbl_80363600, lbl_80363608, lbl_80363610, lbl_80363618, lbl_80363620, lbl_80363628;
double fabs(double);
double fn_800EF80C(double x, double y, int iy) {
    double z,r,v,w,s;
    int ix,hx;
    hx = ((int *)&x)[0];
    ix = hx & 0x7fffffff;
    if(ix < 0x3e300000) {
        if((int)x == 0) {
            if((ix | ((int *)&x)[1] | (iy+1)) == 0)
                { w = __fabs(x); return lbl_80363600 / w; }
            else return (iy == 1) ? x : lbl_80363608 / x;
        }
    }
    if(ix >= 0x3fe59428) {
        if(hx < 0) { x = -x; y = -y; }
        z = lbl_80363610 - x;
        w = lbl_80363618 - y;
        x = z + w;
        y = lbl_80363620;
    }
    z = x*x;
    w = z*z;
    r = lbl_8029C780[1]+w*(lbl_8029C780[3]+w*(lbl_8029C780[5]+w*(lbl_8029C780[7]+w*(lbl_8029C780[9]+w*lbl_8029C780[11]))));
    v = z*(lbl_8029C780[2]+w*(lbl_8029C780[4]+w*(lbl_8029C780[6]+w*(lbl_8029C780[8]+w*(lbl_8029C780[10]+w*lbl_8029C780[12])))));
    s = z*x;
    r = y+z*(s*(r+v)+y);
    r += lbl_8029C780[0]*s;
    w = x+r;
    if(ix >= 0x3fe59428) {
        v = (double)iy;
        return (double)(1-((hx>>30)&2))*(v-lbl_80363628*(x-(w*w/(w+v)-r)));
    }
    if(iy == 1) return w;
    else {
        double a,t;
        z = w;
        ((int *)&z)[1] = 0;
        v = r-(z-x);
        t = a = lbl_80363608/w;
        ((int *)&t)[1] = 0;
        s = lbl_80363600+t*z;
        return t+a*(s+t*v);
    }
}

extern double lbl_8029C7E8[];
extern double lbl_80363638, lbl_80363640, lbl_80363648, lbl_80363650, lbl_80363658;
double fn_800EFA20(double x) {
    double w,z,s1,s2, ax;
    int ix,hx,id;
    double *base = lbl_8029C7E8;
    hx = ((int *)&x)[0];
    ix = hx & 0x7fffffff;
    if (ix >= 0x44100000) {
        if (ix > 0x7ff00000 || (ix == 0x7ff00000 && ((int *)&x)[1] != 0)) return x+x;
        if (hx > 0) return (base + 0)[3]+(base + 4)[3];
        else return -(base + 0)[3]-(base + 4)[3];
    }
    if (ix < 0x3fdc0000) {
        if (ix < 0x3e200000 && lbl_80363638+x > lbl_80363640) return x;
        id = -1;
    } else {
        ax = __fabs(x);
        x = ax;
        if (ix < 0x3ff30000) {
            if (ix < 0x3fe60000) {
                id=0; x=(lbl_80363648*x-lbl_80363640)/(lbl_80363648+x);
            } else {
                id=1; x=(x-lbl_80363640)/(lbl_80363640+x);
            }
        } else {
            if (ix < 0x40038000) {
                id=2; x=(x-lbl_80363650)/(lbl_80363640+lbl_80363650*x);
            } else {
                id=3; x=lbl_80363658/x;
            }
        }
    }
    z=x*x; w=z*z;
    s1=z*((base + 8)[0]+w*((base + 8)[2]+w*((base + 8)[4]+w*((base + 8)[6]+w*((base + 8)[8]+w*(base + 8)[10])))));
    s2=w*((base + 8)[1]+w*((base + 8)[3]+w*((base + 8)[5]+w*((base + 8)[7]+w*(base + 8)[9]))));
    if (id<0) return x-x*(s1+s2);
    z=(base + 0)[id]-((x*(s1+s2)-(base + 4)[id])-x);
    return hx<0 ? -z:z;
}

extern double lbl_80363660;
extern double lbl_80363668;
double fn_800EFC38(double x) {
    int i0, i1, j0;
    unsigned i, j;
    i0 = *(int*)&x;
    i1 = *(1 + (int*)&x);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            if (lbl_80363660 + x > lbl_80363668) {
                if (i0 < 0) {
                    i0 = 0x80000000;
                    i1 = 0;
                } else if ((i0 | i1) != 0) {
                    i0 = 0x3ff00000;
                    i1 = 0;
                }
            }
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) {
                return x;
            }
            if (lbl_80363660 + x > lbl_80363668) {
                if (i0 > 0) {
                    i0 += (0x00100000) >> j0;
                }
                i0 &= (~i);
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) {
            return x + x;
        } else {
            return x;
        }
    } else {
        i = ((unsigned)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) {
            return x;
        }
        if (lbl_80363660 + x > lbl_80363668) {
            if (i0 > 0) {
                if (j0 == 20) {
                    i0 += 1;
                } else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) {
                        i0 += 1;
                    }
                    i1 = j;
                }
            }
            i1 &= (~i);
        }
    }
    *(int*)&x = i0;
    *(1 + (int*)&x) = i1;
    return x;
}

double fn_800EFD7C(double x, double y) {
    *(int *)&x = (*(int *)&x & 0x7fffffff) | (*(int *)&y & 0x80000000);
    return x;
}

double fn_800EE824(double x, double y);
extern double lbl_80363670;
double fn_800EFDA4(double x) {
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_800EE824(x, lbl_80363670);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_800EE484(x, y);
        switch (n & 3) {
        case 0:
            return fn_800EE824(y[0], y[1]);
        case 1:
            return -fn_800EF76C(y[0], y[1], 1);
        case 2:
            return -fn_800EE824(y[0], y[1]);
        default:
            return fn_800EF76C(y[0], y[1], 1);
        }
    }
}

extern double lbl_80363678;
extern double lbl_80363680;
double fn_800EFE78(double x) {
    int i0, i1, j0;
    unsigned i, j;
    i0 = *(int *)&x;
    i1 = *(1 + (int *)&x);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            if (lbl_80363678 + x > lbl_80363680) {
                if (i0 >= 0) {
                    i0 = i1 = 0;
                } else if (((i0 & 0x7fffffff) | i1) != 0) {
                    i0 = 0xbff00000;
                    i1 = 0;
                }
            }
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) return x;
            if (lbl_80363678 + x > lbl_80363680) {
                if (i0 < 0) i0 += (0x00100000) >> j0;
                i0 &= (~i);
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) return x + x;
        else return x;
    } else {
        i = ((unsigned)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) return x;
        if (lbl_80363678 + x > lbl_80363680) {
            if (i0 < 0) {
                if (j0 == 20) i0 += 1;
                else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) i0 += 1;
                    i1 = j;
                }
            }
            i1 &= (~i);
        }
    }
    *(int *)&x = i0;
    *(1 + (int *)&x) = i1;
    return x;
}

double fn_800EFFC0(double x, int *eptr) {
    extern double lbl_80363688;
    int hx, ix, lx;
    hx = *(int *)&x;
    ix = 0x7fffffff & hx;
    lx = *(1 + (int *)&x);
    *eptr = 0;
    if (ix >= 0x7ff00000 || ((ix | lx) == 0)) return x;
    if (ix < 0x00100000) {
        double two54 = lbl_80363688;
        *eptr = -54;
        x *= two54;
        hx = *(int *)&x;
        ix = hx & 0x7fffffff;
    }
    *eptr += (ix >> 20) - 1022;
    hx = (hx & 0x800fffff) | 0x3fe00000;
    *(int *)&x = hx;
    return x;
}

extern double lbl_80363690;
extern double lbl_80363698;
extern double lbl_803636A0;
extern double lbl_803636A8;
extern double lbl_803636B0;
double fn_800F004C(double x, int n) {
    int k, hx, lx;
    int cls;
    double t = x;
    switch (*(int *)&t & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int *)&t & 0x000fffff) || *(1 + (int *)&t)) cls = 1;
        else cls = 2;
        break;
    case 0:
        if ((*(int *)&t & 0x000fffff) || *(1 + (int *)&t)) cls = 5;
        else cls = 3;
        break;
    default:
        cls = 4;
        break;
    }
    if (cls <= 2 || lbl_80363690 == x) return x;
    hx = *(int *)&x;
    lx = *(1 + (int *)&x);
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) return x;
        x *= lbl_80363698;
        hx = *(int *)&x;
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) return lbl_803636A0 * x;
    }
    if (k == 0x7ff) return x + x;
    k = k + n;
    if (k > 0x7fe) return lbl_803636A8 * fn_800EFD7C(lbl_803636A8, x);
    if (k > 0) {
        *(int *)&x = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) return lbl_803636A8 * fn_800EFD7C(lbl_803636A8, x);
        else return lbl_803636A0 * fn_800EFD7C(lbl_803636A0, x);
    }
    k += 54;
    *(int *)&x = (hx & 0x800fffff) | (k << 20);
    return lbl_803636B0 * x;
}

double fn_800F0210(double x, double *iptr)
{
    int i0, i1, j0;
    unsigned i;
    i0 = *(int *)&x;
    i1 = *(1 + (int *)&x);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            *(int *)iptr = i0 & 0x80000000;
            *(1 + (int *)iptr) = 0;
            return x;
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) {
                *iptr = x;
                *(int *)&x &= 0x80000000;
                *(1 + (int *)&x) = 0;
                return x;
            } else {
                *(int *)iptr = i0 & (~i);
                *(1 + (int *)iptr) = 0;
                return x - *iptr;
            }
        }
    } else if (j0 > 51) {
        *iptr = x;
        *(int *)&x &= 0x80000000;
        *(1 + (int *)&x) = 0;
        return x;
    } else {
        i = ((unsigned)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) {
            *iptr = x;
            *(int *)&x &= 0x80000000;
            *(1 + (int *)&x) = 0;
            return x;
        } else {
            *(int *)iptr = i0;
            *(1 + (int *)iptr) = i1 & (~i);
            return x - *iptr;
        }
    }
}

double fn_800F030C(double x) {
    extern double lbl_803636B8;
    double y[2];
    int n, ix;
    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_800EF76C(x, lbl_803636B8, 0);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_800EE484(x, y);
        switch (n & 3) {
        case 0: return fn_800EF76C(y[0], y[1], 1);
        case 1: return fn_800EE824(y[0], y[1]);
        case 2: return -fn_800EF76C(y[0], y[1], 1);
        default: return -fn_800EE824(y[0], y[1]);
        }
    }
}

double fn_800F03E4(double x) {
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_800EF80C(x, lbl_803636C0, 1);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_800EE484(x, y);
        return fn_800EF80C(y[0], y[1], 1 - ((n & 1) << 1));
    }
}

double fn_800ECE54(double);
double fn_800F045C(double x) {
    return fn_800ECE54(x);
}

double fn_800ED164(double, double);
double fn_800F047C(double y, double x) {
    return fn_800ED164(y, x);
}

double fn_800ED3F4(double);
double fn_800F049C(double x) {
    return fn_800ED3F4(x);
}

double fn_800ED618(double, double);
double fn_800F04BC(double x, double y) {
    return fn_800ED618(x, y);
}

double fn_800ED954(double);
double fn_800F04DC(double x) {
    return fn_800ED954(x);
}

double fn_800EDBD0(double, double);
double fn_800F04FC(double x, double y) {
    return fn_800EDBD0(x, y);
}

f32 fn_800F051C(f32 x, f32 y) {
    return fn_800F04FC(x, y);
}

#pragma push
#pragma dont_inline on
f32 fn_800F0540(f32 x) {
    return fn_800F03E4(x);
}
#pragma pop
double fn_800F030C(double);
f32 fn_800F0564(f32 x) {
    return fn_800F030C(x);
}

double fn_800EFDA4(double);
f32 fn_800F0588(f32 x) {
    return fn_800EFDA4(x);
}

double fn_800EFA20(double);
f32 fn_800F05AC(f32 x) {
    return fn_800EFA20(x);
}

int fn_800F05D0(const char* s1, const char* s2) {
    char c1, c2;
    int c;
    while (1) {
        c = *s1++;
        c1 = (c == -1) ? -1 : lbl_802E06C8[(unsigned char)c];
        c = *s2++;
        c2 = (c == -1) ? -1 : lbl_802E06C8[(unsigned char)c];
        if (c1 < c2) {
            return -1;
        }
        if (c1 > c2) {
            return 1;
        }
        if (c1 == 0) {
            return 0;
        }
    }
}





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

extern double lbl_80363358, lbl_8035A988, lbl_80363360, lbl_80363368, lbl_80363370, lbl_80363378, lbl_80363380, lbl_80363388, lbl_80363390, lbl_80363398, lbl_803633A0, lbl_803633A8, lbl_803633B0, lbl_803633B8, lbl_803633C0, lbl_803633C8;
double fn_800ED954(double x) {
    double hfsq,f,s,z,R,w,t1,t2,dk;
    int k,hx,i,j;
    unsigned int lx;
    hx = ((int*)&x)[0];
    lx = ((unsigned int*)&x)[1];
    k = 0;
    if (hx < 0x00100000) {
        if (((hx & 0x7fffffff) | lx) == 0) return lbl_80363358 / lbl_8035A988;
        if (hx < 0) {
            lbl_8035A978 = 33;
            return (x-x)/lbl_8035A988;
        }
        k -= 54;
        x *= lbl_80363360;
        hx = ((int*)&x)[0];
    }
    if (hx >= 0x7ff00000) return x+x;
    k += (hx >> 20)-1023;
    hx &= 0x000fffff;
    i = (hx+0x95f64)&0x100000;
    ((int*)&x)[0] = hx | (i^0x3ff00000);
    k += i>>20;
    f = x-lbl_80363368;
    if ((0x000fffff&(2+hx)) < 3) {
        if (f == lbl_8035A988) {
            if (k==0) return lbl_8035A988;
            dk=(double)k;
            return lbl_80363370*dk+lbl_80363378*dk;
        }
        R = (lbl_80363380-lbl_80363388*f)*(f*f);
        if (k==0) return f-R;
        dk=(double)k;
        return lbl_80363370*dk-((R-lbl_80363378*dk)-f);
    }
    s=f/(lbl_80363390+f);
    dk=(double)k;
    z=s*s;
    i=hx-0x6147a;
    w=z*z;
    j=0x6b851-hx;
    t1=w*(lbl_803633B8+w*(lbl_803633C0+lbl_803633C8*w));
    t2=z*(lbl_80363398+w*(lbl_803633A0+w*(lbl_803633A8+lbl_803633B0*w)));
    i |= j;
    R=t2+t1;
    if (i>0) {
        hfsq=0.5*f*f;
        if(k==0) return f-(hfsq-s*(hfsq+R));
        return lbl_80363370*dk-((hfsq-(s*(hfsq+R)+lbl_80363378*dk))-f);
    } else {
        if(k==0) return f-s*(f-R);
        return lbl_80363370*dk-((s*(f-R)-lbl_80363378*dk)-f);
    }
}


int fn_800EC8D0(char *str) {
    u32 fn_800EC990(int, int, int (*)(void *, int, int), void *, int *, int *, int *);
    unsigned long value;
    int overflow, negative, count;
    struct {
        char *NextChar;
        int NullCharDetected;
    } isc;

    isc.NextChar = str;
    isc.NullCharDetected = 0;
    value = fn_800EC990(10, 0x7FFFFFFF, fn_800EB1D4, &isc, &count, &negative, &overflow);
    if (overflow || (!negative && value > 0x7FFFFFFF) || (negative && value > 0x80000000)) {
        value = (negative ? 0x80000000 : 0x7FFFFFFF);
        lbl_8035A978 = 34;
    } else if (negative) {
        value = -value;
    }
    return (long)value;
}

int fn_800EE484(double x, double *y) {
 double w,z,t,r,fn,tx[3], saved;
 int e0,i,j,n,nx,hx,ix;
 hx = *(int*)&x; ix = hx & 0x7fffffff;
 if(ix<=0x3fe921fb) { y[0]=x; y[1]=0.0; return 0; }
 if(ix<0x4002d97c) {
  if(hx>0) {
   z=x-1.57079632673412561417e+00;
   if(ix!=0x3ff921fb) { w=6.07710050650619224932e-11; y[0]=z-w; y[1]=(z-y[0])-w; }
   else { z-=6.07710050630396597660e-11; w=2.02226624879595063154e-21; y[0]=z-w; y[1]=(z-y[0])-w; }
   return 1;
  } else {
   z=1.57079632673412561417e+00+x;
   if(ix!=0x3ff921fb) { w=6.07710050650619224932e-11; y[0]=w+z; y[1]=w+(z-y[0]); }
   else { z+=6.07710050630396597660e-11; w=2.02226624879595063154e-21; y[0]=w+z; y[1]=w+(z-y[0]); }
   return -1;
  }
 }
 if(ix<=0x413921fb) {
  t=__fabs(x); n=(int)(6.36619772367581382433e-01*t+0.5); fn=(double)n;
  r=t-1.57079632673412561417e+00*fn; w=6.07710050650619224932e-11*fn;
  if(n<32 && ix!=lbl_8029C6B0[n-1]) y[0]=r-w;
  else {
   j=ix>>20; y[0]=r-w; i=j-((*(int*)&y[0]>>20)&0x7ff);
   if(i>16) {
    saved=r; w=6.07710050630396597660e-11*fn; r-=w; w=2.02226624879595063154e-21*fn-((saved-r)-w); y[0]=r-w;
    i=j-((*(int*)&y[0]>>20)&0x7ff);
    if(i>49) { w=r; t=2.02226624871116645580e-21*fn; r=w-t; w=8.47842766036889956997e-32*fn-((w-r)-t); y[0]=r-w; }
   }
  }
  y[1]=(r-y[0])-w;
  if(hx<0) { y[0]=-y[0]; y[1]=-y[1]; return -n; } else return n;
 }
 if(ix>=0x7ff00000) { y[0]=y[1]=x-x; return 0; }
 *(int*)((char*)&z+4)=*(int*)((char*)&x+4);
 e0=(ix>>20)-1046; *(int*)&z=ix-(e0<<20);
 for(i=0;i<2;i++) { tx[i]=(double)(int)z; z=(z-tx[i])*16777216.0; }
 tx[2]=z; nx=3;
 while(tx[nx-1]==0.0) nx--;
 n=fn_800EE918(tx,y,e0,nx,2,lbl_8029C5A8);
 if(hx<0) { y[0]=-y[0]; y[1]=-y[1]; return -n; }
 return n;
}

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
u32 fn_800EC990(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *negative, int *overflow) {
    int scan_state = 1;
    int count = 0;
    int spaces = 0;
    unsigned long value = 0;
    unsigned long value_max = 0;
    int c;

    *negative = *overflow = 0;
    if (base < 0 || base == 1 || base > 36 || max_width < 1)
        scan_state = 64;
    else
        c = fetch();
    if (base != 0)
        value_max = 0xFFFFFFFF / base;
    while (count <= max_width && c != -1 && !(scan_state & 0x60)) {
        switch (scan_state) {
        case 1:
            if (su_isspace(c)) {
                c = fetch();
                count--;
                spaces++;
                break;
            }
            if (c == '+') {
                c = fetch();
            } else if (c == '-') {
                c = fetch();
                *negative = 1;
            }
            scan_state = 2;
            break;
        case 2:
            if (base == 0 || base == 16) {
                if (c == '0') {
                    scan_state = 4;
                    c = fetch();
                    break;
                }
            }
            scan_state = 8;
            break;
        case 4:
            if (c == 'X' || c == 'x') {
                base = 16;
                scan_state = 8;
                c = fetch();
                break;
            }
            if (base == 0)
                base = 8;
            scan_state = 16;
            break;
        case 8:
        case 16:
            if (base == 0)
                base = 10;
            if (!value_max)
                value_max = 0xFFFFFFFF / base;
            if (su_isdigit(c)) {
                if ((c -= '0') >= base) {
                    if (scan_state == 16)
                        scan_state = 32;
                    else
                        scan_state = 64;
                    c += '0';
                    break;
                }
            } else if (!su_isalpha(c) || (su_toupper(c) - 'A' + 10) >= base) {
                if (scan_state == 16)
                    scan_state = 32;
                else
                    scan_state = 64;
                break;
            } else
                c = su_toupper(c) - 'A' + 10;
            if (value > value_max)
                *overflow = 1;
            value *= base;
            if (c > (0xFFFFFFFF - value))
                *overflow = 1;
            value += c;
            scan_state = 16;
            c = fetch();
            break;
        }
    }
    if (!(scan_state & 0x34)) {
        count = 0;
        value = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }
    unfetch(c);
    return value;
}
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
void fn_800E5B48(decimal *d, double x) {
    char sign = (char)(*(unsigned long *)&x >> 31);

    if (lbl_803631A0 == x) {
        d->sign = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = 0;
        return;
    }

    if (__fpclassifyd_n2d(x) <= 2) {
        d->sign = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = (__fpclassifyd_n2d(x) == 1) ? 'N' : 'I';
        return;
    }

    if (sign) {
        x = -x;
    }

    {
        int exp;
        double frac = fn_800EFFC0(x, &exp);
        long num_bits_extract = 53 - __count_trailing_zero(frac);
        decimal int_d, pow2_d;
        double int_x;

        fn_800E6504(&pow2_d, exp - num_bits_extract);
        fn_800F0210(fn_800F004C(frac, num_bits_extract), &int_x);
        __ull2dec(&int_d, fn_800E2B94(int_x));
        fn_800E7C88(d, &int_d, &pow2_d);
        d->sign = sign;
    }
}
#pragma pop
