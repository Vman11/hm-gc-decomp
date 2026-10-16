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
void fn_800F0CC4(u32, void*, u32);

extern u8 lbl_8029BFB0[];
u8 *fn_800E4108(void) {
    return lbl_8029BFB0;
}

s32 fn_800E7F00(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
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
extern void __FileWrite(void);

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
extern void fn_800E92B8(void);
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

char* fn_800EB764(char* dst, const char* src) {
    unsigned char* d = (unsigned char*)dst;
    const unsigned char* s = (const unsigned char*)src;
    unsigned int a = (unsigned int)s & 3;
    if (((unsigned int)d & 3) == a) {
        if (a != 0) {
            unsigned char c = *s;
            *d = c;
            if (c == 0) return dst;
            {
                unsigned int k = 3 - a;
                while (k != 0) {
                    c = *++s;
                    *++d = c;
                    if (c == 0) return dst;
                    k--;
                }
            }
            d++;
            s++;
        }
        {
            unsigned int w = *(unsigned int*)s;
            if (!(((w - 0x01010101) & 0x80808080))) {
                d -= 4;
                do {
                    d += 4;
                    *(unsigned int*)d = w;
                    s += 4;
                    w = *(unsigned int*)s;
                } while (!(((w - 0x01010101) & 0x80808080)));
                d += 4;
            }
        }
    }
    {
        unsigned char c = *s;
        *d = c;
        if (c != 0) {
            do {
                c = *++s;
                *++d = c;
            } while (c != 0);
        }
    }
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

double fn_800EFD7C(double x, double y) {
    *(int *)&x = (*(int *)&x & 0x7fffffff) | (*(int *)&y & 0x80000000);
    return x;
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

void EXI2_Reserve(void) {

}

void EXI2_Unreserve(void) {

}

s32 AMC_IsStub(void) {
    return 0;
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

