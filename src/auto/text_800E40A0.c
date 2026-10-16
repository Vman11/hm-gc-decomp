/* Functions from 0x800E40A0 to 0x800F5578, found by decomp-toolkit. */
#include "common.h"

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

extern int __aborting;
extern int __atexit_curr_func;
extern void (*__atexit_funcs[])(void);
extern void (*__console_exit)(void);
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
    u8 state[4];
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
#pragma pop

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

#pragma push
#pragma dont_inline on
u32 fwrite(const void *ptr, u32 size, u32 count, void *file) {
    u32 result;
    __begin_critical_region(2);
    result = __fwrite(ptr, size, count, file);
    __end_critical_region(2);
    return result;
}
#pragma push
#pragma dont_inline on
int fseek(void *file, s32 offset, int mode) {
    int result;
    __begin_critical_region(2);
    result = fn_800E8720(file, offset, mode);
    __end_critical_region(2);
    return result;
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

void fn_800ECE54(void);
void fn_800F045C(void) {
    fn_800ECE54();
}

void fn_800ED164(void);
void fn_800F047C(void) {
    fn_800ED164();
}

void fn_800ED3F4(void);
void fn_800F049C(void) {
    fn_800ED3F4();
}

void fn_800ED618(void);
void fn_800F04BC(void) {
    fn_800ED618();
}

void fn_800ED954(void);
void fn_800F04DC(void) {
    fn_800ED954();
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

