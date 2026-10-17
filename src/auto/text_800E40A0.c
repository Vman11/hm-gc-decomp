/* Functions from 0x800E40A0 to 0x800F5578, found by decomp-toolkit. */
#include "common.h"
double fn_800EFA20(double);

extern unsigned char lbl_802E06C8[];
extern double lbl_803636C0;
extern s32 lbl_8035A998;
extern s32 lbl_8035A99C;
extern u8 lbl_8035A9A4;
double fn_800F04FC(double);
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
BOOL __EXIProbe(s32 chan);
void __OSUnmaskInterrupts(u32);
u32 EXIClearInterrupts(s32 chan, BOOL exi, BOOL tc, BOOL ext);

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
void __unregister_fragment(int fragmentID) {
    FragmentInfo *f;

    if (fragmentID >= 0 && fragmentID < 1) {
        f = &fragmentinfo_80327F98[fragmentID];
        f->eti_info = 0;
        f->toc = 0;
        f->active = 0;
    }
}

int __register_fragment(void *info, void *TOC) {
    FragmentInfo *f;
    int i;

    for (i = 0, f = fragmentinfo_80327F98; i < 1; ++i, ++f) {
        if (f->active == 0) {
            f->eti_info = info;
            f->toc = TOC;
            f->active = 1;
            return i;
        }
    }
    return -1;
}

u8 *fn_800E4108(void) {
    return lbl_8029BFB0;
}

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
extern u32 __pformatter();
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
    r = __pformatter(fn_800E92B8, &ctx, fmt, args, -1);
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

static char *long2str_800EA91C(long, char *, print_format);
char *fn_800EB764(char *, const char *);
extern const char lbl_8029C148[];
#pragma push
#pragma pool_strings on
char *double2hex(char *buff, print_format *format, double x) {
    decimal d;
    print_format exp_format;
    double bits;
    decform df;
    char *p;
    int i;
    char digit;
    bits = x;
    if (format->precision > 509) return 0;
    df.style = 0;
    df.digits = 32;
    fn_800E59A4(&df, x, &d);
    if (d.sig.text[0] == 'I') {
        if ((*(short *)&bits) & 0x8000) {
            buff -= 5;
            if (format->conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 1);
            else fn_800EB764(buff, lbl_8029C148 + 6);
        } else {
            buff -= 4;
            if (format->conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 11);
            else fn_800EB764(buff, lbl_8029C148 + 15);
        }
        return buff;
    }
    if (d.sig.text[0] == 'N') {
        if (((unsigned char *)&x)[0] & 0x80) {
            buff -= 5;
            if (format->conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 19);
            else fn_800EB764(buff, lbl_8029C148 + 24);
        } else {
            buff -= 4;
            if (format->conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 29);
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
    p = long2str_800EA91C((short)(((*(short *)&bits) >> 4) & 0x7ff) - 1023, buff, exp_format);
    if (format->conversion_char == 'a') *--p = 'p';
    else *--p = 'P';
    for (i = format->precision; i >= 1; --i) {
        unsigned char c = ((unsigned char *)&x)[i / 2 + 1];
        digit = (c >> 4) & 15;
        if (i % 2) digit = c & 15;
        if (digit < 10) digit += '0';
        else if (format->conversion_char == 'a') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
    }
    if (format->precision != 0 || format->alternate_form) *--p = '.';
    *--p = '1';
    if (format->conversion_char == 'a') *--p = 'x';
    else *--p = 'X';
    *--p = '0';
    if ((*(short *)&bits) & 0x8000) *--p = '-';
    else if (format->sign_options == 1) *--p = '+';
    else if (format->sign_options == 2) *--p = ' ';
    return p;
}
#pragma pop
static char *longlong2str_800EA640(long long num, char *buff, print_format format) {
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

static char *long2str_800EA91C(long num, char *buff, print_format format) {
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

#pragma push
#pragma use_lmw_stmw on
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

int fn_800EC8D0(char *str) {
    u32 fn_800EC990(int, int, int (*)(void *, int, int), void *, int *, int *, int *);
    extern s32 lbl_8035A978;
    struct { char *str; int end; } state;
    int error;
    int negative;
    int count;
    u32 value;
    state.str = str;
    state.end = 0;
    value = fn_800EC990(10, 0x7FFFFFFF, fn_800EB1D4, &state, &count, &negative, &error);
    if (error != 0 || (negative == 0 && value > 0x7FFFFFFFU) || (negative != 0 && value > 0x80000000U)) {
        value = 0x7FFFFFFF;
        lbl_8035A978 = 0x22;
        value += (negative != 0);
        return value;
    }
    if (negative != 0) value = -value;
    return value;
}

u32 fn_800EC990(int base_arg, int width_arg, int (*read_arg)(void *, int, int), void *context, int *count_arg, int *negative_arg, int *overflow_arg) {
    extern u8 lbl_802E05C8[];
    extern u8 lbl_802E07C8[];
    int n = 0;
    int (*read)(void *, int, int) = read_arg;
    int base = base_arg;
    void *arg = context;
    u32 value = 0;
    u32 limit = 0;
    int state = 1;
    int *overflow = overflow_arg;
    int spaces = 0;
    int max_width = width_arg;
    int *negative = negative_arg;
    int *count = count_arg;
    int c;
    *negative = *overflow = 0;
    if (base < 0 || base == 1 || base > 36 || max_width < 1) {
        state = 64;
    } else {
        c = read(arg, 0, 0);
        n = 1;
    }
    if (base) limit = 0xFFFFFFFF / base;
    while (n <= max_width && c != -1 && !(state & 96)) {
        switch (state) {
        case 1:
            if (lbl_802E05C8[(u8)c] & 6) {
                c = read(arg, 0, 0);
                spaces++;
                break;
            }
            if (c == '+') {
                n++;
                c = read(arg, 0, 0);
            } else if (c == '-') {
                n++;
                c = read(arg, 0, 0);
                *negative = 1;
            }
            state = 2;
            break;
        case 2:
            if ((base == 0 || base == 16) && c == '0') {
                state = 4;
                n++;
                c = read(arg, 0, 0);
            } else state = 8;
            break;
        case 4:
            if (c == 'X' || c == 'x') {
                base = 16;
                state = 8;
                n++;
                c = read(arg, 0, 0);
            } else {
                if (!base) base = 8;
                state = 16;
            }
            break;
        case 8:
        case 16:
            if (!base) base = 10;
            if (!limit) limit = 0xFFFFFFFF / base;
            if (lbl_802E05C8[(u8)c] & 16) {
                c -= '0';
                if (c >= base) {
                    state = state == 16 ? 32 : 64;
                    c += '0';
                    break;
                }
            } else if (!(lbl_802E05C8[(u8)c] & 192) ||
                (c == -1 ? -1 : lbl_802E07C8[(u8)c]) - 55 >= base) {
                if (state == 16) state = 32;
                else state = 64;
                break;
            } else c = (c == -1 ? -1 : lbl_802E07C8[(u8)c]) - 55;
            if (value > limit) *overflow = 1;
            value *= base;
            if ((u32)c > 0xFFFFFFFF - value) *overflow = 1;
            value += c;
            state = 16;
            n++;
            c = read(arg, 0, 0);
            break;
        }
    }
    if (!(state & 52)) {
        *count = 0;
        value = 0;
    } else *count = n + spaces - 1;
    read(arg, c, 1);
    return value;
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
        hfsq=(lbl_80363380*f)*f;
        if(k==0) return f-(hfsq-s*(hfsq+R));
        return lbl_80363370*dk-((hfsq-(s*(hfsq+R)+lbl_80363378*dk))-f);
    } else {
        if(k==0) return f-s*(f-R);
        return lbl_80363370*dk-((s*(f-R)-lbl_80363378*dk)-f);
    }
}

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

double fn_800EDBD0(double);
double fn_800F04FC(double x) {
    return fn_800EDBD0(x);
}

f32 fn_800F051C(f32 x) {
    return fn_800F04FC(x);
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

s32 Hu_IsStub(void) {
    return 0;
}

void DBClose(void) {

}

void DBOpen(void) {

}

int DBRead(void* buf, u32 size) {
    int enabled = OSDisableInterrupts();
    fn_800F0CC4(((lbl_8035A998 & 0x10000) ? 0x1000 : 0) + 0x1E000, buf, (size + 3) & ~3);
    lbl_8035A99C = 0;
    lbl_8035A9A4 = 0;
    OSRestoreInterrupts(enabled);
    return 0;
}

void __OSMaskInterrupts(u32);
void __OSUnmaskInterrupts(u32);
void __OSSetInterruptHandler(s16, void*);
void fn_800F0AC0(void);
void fn_800F0B00(void);
extern void* lbl_8035A994;
void DBInitInterrupts(void) {
    __OSMaskInterrupts(0x18000);
    __OSMaskInterrupts(0x40);
    lbl_8035A994 = fn_800F0B00;
    __OSSetInterruptHandler(0x19, fn_800F0AC0);
    __OSUnmaskInterrupts(0x40);
}

void DBInitComm(u8 **inputFlagPtr, s32 mtrCallback) {
    extern u8 *lbl_8035A9A0;
    extern s32 lbl_8035A990;
    int enabled = OSDisableInterrupts();
    lbl_8035A9A0 = &lbl_8035A9A4;
    *inputFlagPtr = lbl_8035A9A0;
    lbl_8035A990 = mtrCallback;
    __OSMaskInterrupts(0x18000);
    *(volatile u32 *)0xCC006828 = 0;
    OSRestoreInterrupts(enabled);
}

void fn_800F0B00(void) {
    extern M2C_UNK (*lbl_8035A990)(M2C_UNK);
    lbl_8035A9A4 = 1;
    if (lbl_8035A990 != NULL) {
        lbl_8035A990(0);
    }
}

typedef struct EXI2Control {
    u8 unk0[0xC];
    volatile u32 state;
    s32 immLen;
    u8 *immBuf;
} EXI2Control;
extern EXI2Control *lbl_803596F0;

s32 fn_800F0E4C(void *buf, s32 len, s32 mode);
s32 fn_800F0B3C(u32 *data) {
    u32 cmd;
    BOOL err;
    volatile u32 *exi = (volatile u32 *)0xCC006800;

    exi[10] = (exi[10] & 0x405) | 0xC0;
    cmd = 0x40000000;
    err = !fn_800F0E4C(&cmd, 2, 1);
    while (exi[13] & 1) {
    }
    err |= !fn_800F0E4C(data, 4, 0);
    while (exi[13] & 1) {
    }
    exi[10] &= 0x405;
    return !err;
}

s32 fn_800F0BE8(u32 addr, u32 *data, s32 size) {
    u32 cmd;
    BOOL err;
    volatile u32 *exi = (volatile u32 *)0xCC006800;

    exi[10] = (exi[10] & 0x405) | 0xC0;
    cmd = ((addr << 8) & 0x01FFFC00) | 0xA0000000;
    err = !fn_800F0E4C(&cmd, 4, 1);
    while (exi[13] & 1) {
    }
    while (size != 0) {
        cmd = *data++;
        err |= !fn_800F0E4C(&cmd, 4, 1);
        while (exi[13] & 1) {
        }
        size -= 4;
        if (size < 0) {
            size = 0;
        }
    }
    exi[10] &= 0x405;
    return !err;
}

s32 fn_800F0CC4(u32 addr, void *buf, s32 size) {
    u32 cmd;
    u32 value;
    BOOL err;
    u32 *data = buf;
    volatile u32 *exi = (volatile u32 *)0xCC006800;

    exi[10] = (exi[10] & 0x405) | 0xC0;
    cmd = ((addr << 8) & 0x01FFFC00) | 0x20000000;
    err = !fn_800F0E4C(&cmd, 4, 1);
    while (exi[13] & 1) {
    }
    while (size != 0) {
        err |= !fn_800F0E4C(&value, 4, 0);
        while (exi[13] & 1) {
        }
        *data++ = value;
        size -= 4;
        if (size < 0) {
            size = 0;
        }
    }
    exi[10] &= 0x405;
    return !err;
}

s32 fn_800F0DA0(u32 *data) {
    u32 cmd;
    BOOL err;
    volatile u32 *exi = (volatile u32 *)0xCC006800;

    exi[10] = (exi[10] & 0x405) | 0xC0;
    cmd = 0x60000000;
    err = !fn_800F0E4C(&cmd, 2, 1);
    while (exi[13] & 1) {
    }
    err |= !fn_800F0E4C(data, 4, 0);
    while (exi[13] & 1) {
    }
    exi[10] &= 0x405;
    return !err;
}

s32 fn_800F1328(void) {
    int enabled;
    s32 i;
    s32 len;
    u8 *buf;
    u32 data;
    EXI2Control *exi = lbl_803596F0;

    while (exi->state & 4) {
        if (!(((volatile u32 *)0xCC006800)[13] & 1)) {
            enabled = OSDisableInterrupts();
            if (lbl_803596F0->state & 3) {
                if ((lbl_803596F0->state & 2) && (len = lbl_803596F0->immLen) != 0) {
                    buf = lbl_803596F0->immBuf;
                    data = ((volatile u32 *)0xCC006800)[14];
                    for (i = 0; i < len; i++) {
                        *buf++ = data >> ((3 - i) * 8);
                    }
                }
                lbl_803596F0->state &= ~3;
            }
            OSRestoreInterrupts(enabled);
            break;
        }
    }
}

volatile u32 __EXIRegs[16] : 0xCC006800;
void fn_800F14C0(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        *(volatile u32 *)0xCC003000 = (*(volatile u32 *)0xCC003000 & 0x1000) | 0x1000;
    }
    if (arg1 != 0) {
        __EXIRegs[10] = (__EXIRegs[10] & 0x7F5) | 8;
    }
}

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
u32 EXI2_Poll(void) {
    s32 ret;
    u32 cmd;
    u32 unused;
    u32 status;

    if (!(*(volatile u32 *)0xCC003000 & 0x1000) && *lbl_803596F8 == 0) {
        status = 0;
    } else {
        if (lbl_8035A9AC == 0) {
            ret = 0;
            while (ret == 0) {
                ret = fn_800F156C(5);
            }
            if (ret == 0) {
                fn_800E91D0(lbl_802E0B78);
            } else {
                lbl_8035A9AC = 1;
                cmd = 0;
                fn_800F10E4(&cmd, 2, 1, 0);
                fn_800F1328();
                fn_800F10E4(&unused, 2, 0, 0);
                fn_800F1328();
            }
        }
        fn_800F10E4(&status, 4, 0, 0);
        fn_800F1328();
        if (*lbl_803596F8 == 0) {
            *lbl_803596F8 = 1;
            *(volatile u32 *)0xCC003000 = *(volatile u32 *)0xCC003000 & 0x1000;
        }
    }
    return status;
}

void EXI2_Reserve(void) {

}

void EXI2_Unreserve(void) {

}

s32 AMC_IsStub(void) {
    return 0;
}

u32 EXIClearInterrupts(s32 chan, BOOL exi, BOOL tc, BOOL ext) {
    u32 cpr;
    u32 prev;

    prev = cpr = ((volatile u32 *)0xCC006800)[chan * 5];
    cpr &= 0x7F5;
    if (exi) {
        cpr |= 2;
    }
    if (tc) {
        cpr |= 8;
    }
    if (ext) {
        cpr |= 0x800;
    }
    ((volatile u32 *)0xCC006800)[chan * 5] = cpr;
    return prev;
}

#pragma push
#pragma use_lmw_stmw on
BOOL fn_800F2864(s32 chan, EXICallback extCallback) {
    EXIControl *exi = &((EXIControl *)Ecb_80328410)[chan];
    BOOL enabled;
    BOOL rc;
    u32 id;

    if (__EXIProbe(chan) && exi->idTime == 0) {
        EXIGetID(chan, 0, &id);
    }
    enabled = OSDisableInterrupts();
    if (exi->idTime == 0) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    rc = OSDisableInterrupts();
    if ((exi->state & 8) || __EXIProbe(chan) == FALSE) {
        OSRestoreInterrupts(rc);
        rc = FALSE;
    } else {
        EXIClearInterrupts(chan, TRUE, FALSE, FALSE);
        exi->extCallback = extCallback;
        __OSUnmaskInterrupts(0x100000U >> (chan * 3));
        exi->state |= 8;
        OSRestoreInterrupts(rc);
        rc = TRUE;
    }
    OSRestoreInterrupts(enabled);
    return rc;
}
#pragma pop
BOOL __EXIProbe(s32 chan);
BOOL EXIDeselect(s32 chan) {
    EXIControl *exi = &((EXIControl *)Ecb_80328410)[chan];
    BOOL enabled;
    u32 cpr;

    enabled = OSDisableInterrupts();
    if (!(exi->state & 4)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state &= ~4;
    cpr = ((volatile u32 *)0xCC006800)[chan * 5];
    ((volatile u32 *)0xCC006800)[chan * 5] = cpr & 0x405;
    if (exi->state & 8) {
        switch (chan) {
        case 0:
            __OSUnmaskInterrupts(0x100000);
            break;
        case 1:
            __OSUnmaskInterrupts(0x20000);
            break;
        }
    }
    OSRestoreInterrupts(enabled);
    if (chan != 2 && (cpr & 0x80)) {
        return __EXIProbe(chan) ? TRUE : FALSE;
    }
    return TRUE;
}

extern void __OSMaskInterrupts(u32);
extern void OSClearContext(void *);
extern void OSSetCurrentContext(void *);
void TCIntrruptHandler(s16 interrupt, void *context) {
    u8 temporaryContext[0x2C8];
    EXICallback callback;
    s32 chan;
    EXIControl *exi;
    chan = (interrupt - 10) / 3;
    exi = (EXIControl *)(Ecb_80328410 + chan * 64);
    __OSMaskInterrupts(0x80000000U >> interrupt);
    ((volatile u32 *)0xCC006800)[chan * 5] = (((volatile u32 *)0xCC006800)[chan * 5] & 0x7F5) | 8;
    callback = exi->tcCallback;
    if (callback) {
        exi->tcCallback = 0;
        if (exi->state & 3) {
            if (exi->state & 2) {
                int length = exi->immLen;
                if (length) {
                    int i;
                    u8 *buffer = exi->immBuf;
                    u32 data = ((volatile u32 *)0xCC006800)[chan * 5 + 4];
                    for (i = 0; i < length; i++) {
                        *buffer++ = data >> ((3 - i) * 8);
                    }
                }
            }
            exi->state &= ~3;
        }
        OSClearContext(temporaryContext);
        OSSetCurrentContext(temporaryContext);
        callback(chan, context);
        OSClearContext(temporaryContext);
        OSSetCurrentContext(context);
    }
}

extern void SetExiInterruptMask(s32 chan, EXIControl *exi);
extern void *memmove(void *, const void *, unsigned long);
BOOL EXIUnlock(s32 chan) {
    EXIControl *exi = &((EXIControl *)Ecb_80328410)[chan];
    BOOL enabled;
    EXICallback unlockedCallback;

    enabled = OSDisableInterrupts();
    if (!(exi->state & 0x10)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }
    exi->state &= ~0x10;
    SetExiInterruptMask(chan, exi);

    if (0 < exi->items) {
        unlockedCallback = exi->queue[0].callback;
        if (0 < --exi->items) {
            memmove(&exi->queue[0], &exi->queue[1], sizeof(exi->queue[0]) * exi->items);
        }
        unlockedCallback(chan, 0);
    }

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

s32 fn_800F33BC(s32 arg0) {
    return ((struct { u32 unk0[3]; s32 state; u32 unk10[12]; } *)Ecb_80328410)[arg0].state;
}

void UnlockedHandler(void) {
    M2C_UNK EXIGetID(M2C_UNK, M2C_UNK *);
    M2C_UNK sp10;

    EXIGetID(0, &sp10);
}

s32 fn_800F37AC(s32 chan, u32 dev, u32 *id) {
    s32 EXIDeselect(s32);
    s32 EXIImm(s32, void *, s32, s32, void *);
    s32 EXILock(s32, u32, void *);
    s32 EXISelect(s32, u32, s32);
    s32 EXISync(s32);
    s32 EXIUnlock(s32);
    s32 fn_800F2864(s32, void *);
    s32 fn_800F2970(s32);
    BOOL err;
    u32 cmd;

    if (chan != 2 && dev == 0 && !fn_800F2864(chan, 0)) {
        return 0;
    }
    err = !EXILock(chan, dev, 0);
    if (!err) {
        err = !EXISelect(chan, dev, 0);
        if (!err) {
            cmd = 0x20011300;
            err = FALSE;
            err |= !EXIImm(chan, &cmd, 4, 1, 0);
            err |= !EXISync(chan);
            err |= !EXIImm(chan, id, 4, 0, 0);
            err |= !EXISync(chan);
            err |= !EXIDeselect(chan);
        }
        EXIUnlock(chan);
    }
    if (chan != 2 && dev == 0) {
        fn_800F2970(chan);
    }
    if (err) {
        return 0;
    }
    return (*id + 1 != 0x10000) ? 1 : 0;
}

s32 fn_800F3AF4(void) {
    if ((u32) (lbl_8035A9CC + 0x5A010000) == 0x5AU) {
        return 0;
    }
    if (!(fn_800B31A4() & 0x10000000)) {
        lbl_8035A9C8 = 0;
        return 2;
    }
    lbl_8035A9C8 = 0xA5FF005A;
    lbl_8035A9C0 = 0;
    lbl_8035A9C4 = 1;
    return 0;
}

s32 fn_800F3B64(void *buf, u32 len) {
    u32 cmd;
    u32 qcmd;
    int qLen;
    s32 xLen;
    char *ptr;
    BOOL locked;
    BOOL enabled;
    u32 error;

    if ((u32)(lbl_8035A9C8 - 0xA5FF005A) != 0) {
        return 2;
    }
    enabled = OSDisableInterrupts();
    locked = EXILock(lbl_8035A9C0, lbl_8035A9C4, 0);
    if (!locked) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    for (ptr = (char *)buf; ptr - (char *)buf < len; ptr++) {
        if (*ptr == '\n') {
            *ptr = '\r';
        }
    }
    error = 0;
    cmd = 0xA0010000;
    while (len) {
        if (!EXISelect(lbl_8035A9C0, lbl_8035A9C4, 3)) {
            qLen = -1;
        } else {
            qcmd = 0x20010000;
            EXIImm(lbl_8035A9C0, &qcmd, 4, 1, 0);
            EXISync(lbl_8035A9C0);
            EXIImm(lbl_8035A9C0, &qcmd, 1, 0, 0);
            EXISync(lbl_8035A9C0);
            EXIDeselect(lbl_8035A9C0);
            qLen = 16 - (int)((qcmd >> 24) & 0xff);
        }
        if (qLen < 0) {
            error = 3;
            break;
        }
        if (qLen < 12 && qLen < len) {
            continue;
        }
        if (!EXISelect(lbl_8035A9C0, lbl_8035A9C4, 3)) {
            error = 3;
            break;
        }
        EXIImm(lbl_8035A9C0, &cmd, 4, 1, 0);
        EXISync(lbl_8035A9C0);
        while (qLen && len) {
            if (qLen < 4 && qLen < len) {
                break;
            }
            xLen = (len < 4) ? (s32)len : 4;
            EXIImm(lbl_8035A9C0, buf, xLen, 1, 0);
            buf = (char *)buf + xLen;
            len -= xLen;
            qLen -= xLen;
            EXISync(lbl_8035A9C0);
        }
        EXIDeselect(lbl_8035A9C0);
    }
    EXIUnlock(lbl_8035A9C0);
    OSRestoreInterrupts(enabled);
    return error;
}

s32 fn_800F3D80(void) {
    if (Si_802E0CEC.unk0 == -1) {
        return 0;
    }
    return 1;
}

BOOL fn_800F3DA0(s32 chan) {
    extern struct { s32 chan; u32 unk4[7]; } Packet_803284D0[];
    BOOL busy = TRUE;
    if (Packet_803284D0[chan].chan == -1 && Si_802E0CEC.unk0 != chan) {
        busy = FALSE;
    }
    return busy;
}

#define SIREGS ((vu32_t *)0xCC006400)

void fn_800F49B0(s32 chan, u32 val) {
    SIREGS[chan * 3] = val;
}

void fn_800F49C4(void) {
    SIREGS[14] = 0x80000000;
}

u32 SISetXY(u32 x, u32 y) {
    u32 poll;
    int enabled;
    poll = (x << 16) | (y << 8);
    enabled = OSDisableInterrupts();
    Si_802E0CEC.poll &= ~0x03FFFF00;
    Si_802E0CEC.poll |= poll;
    poll = Si_802E0CEC.poll;
    SIREGS[12] = poll;
    OSRestoreInterrupts(enabled);
    return poll;
}

u32 fn_800F4A40(u32 poll) {
    int enabled;
    u32 en;
    if (poll == 0) {
        return Si_802E0CEC.poll;
    }
    enabled = OSDisableInterrupts();
    poll >>= 24;
    en = (poll >> 4) & 0xF;
    Si_802E0CEC.poll &= ~en;
    poll &= (en | 0x03FFFFF0);
    poll &= 0xFC0000FF;
    Si_802E0CEC.poll |= poll;
    poll = Si_802E0CEC.poll;
    SIREGS[14] = 0x80000000;
    SIREGS[12] = poll;
    OSRestoreInterrupts(enabled);
    return poll;
}

typedef void (*SITypeAndStatusCallback)(s32 chan, u32 type);
extern u32 Type_802E0D00[];
extern SITypeAndStatusCallback lbl_80328630[][4];
u32 SIGetType(s32 chan);
u32 fn_800F5334(s32 chan, SITypeAndStatusCallback callback) {
    int enabled;
    u32 type;

    enabled = OSDisableInterrupts();
    type = SIGetType(chan);
    if (Type_802E0D00[chan] & 0x80) {
        int i;
        for (i = 0; i < 4; ++i) {
            if (lbl_80328630[chan][i] == callback) {
                break;
            }
            if (lbl_80328630[chan][i] == 0) {
                lbl_80328630[chan][i] = callback;
                break;
            }
        }
    } else {
        callback(chan, type);
    }
    OSRestoreInterrupts(enabled);
    return type;
}

