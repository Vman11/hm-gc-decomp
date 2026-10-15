/* Functions from 0x80273E10 to 0x80293ED8, found by decomp-toolkit. */
#include "common.h"

s32 DVDGetDriveStatus(void);
void fn_800BFE7C(void *);
void fn_8027AFC0(void *);

void fn_8028ED28(f32 *, f32 *);
void fn_8028F484(f32 *, f32 *);

void fn_80275C64(void);
u32 fn_80274D04(u32 arg0);
void fn_80275F98();
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);
void fn_80275FC0(void *);
void fn_800C9A0C(s32, int);
s64 OSGetTime(void);
extern s64 lbl_802F3840;
extern u8 lbl_802FFC60[];
extern u8 *lbl_80300860[6];
void* OSGetArenaLo(void);
void OSSetArenaLo(void*);
void fn_800B48F4(void *, u32);
void fn_80274970(s32);
void fn_80274990(s32 arg0, u32 arg1);
void fn_802749AC(s32 arg0, s32 arg1);
u32 fn_80274D04(u32 arg0);

typedef struct OSContext {
    u8 data[0x2C8];
} OSContext;

extern s32 lbl_8035B854;
s32 fn_80273EAC(void) {
    return lbl_8035B854;
}

extern s32 lbl_8035B850;
s32 fn_80273EB4(void) {
    return lbl_8035B850;
}

extern s32 lbl_80359F08;
s32 fn_80273EBC(void) {
    return lbl_80359F08;
}

void fn_802740E4(void) {
    M2C_UNK fn_80274128();
    M2C_UNK fn_802742F8();
    M2C_UNK fn_8027438C();
    extern s32 lbl_80359F14;
    if ((s32) lbl_80359F14 == 0) {
        fn_80274128();
        return;
    }
    if ((s32) lbl_80359F14 == 1) {
        fn_802742F8();
        return;
    }
    fn_8027438C();
}

u32 fn_802744F8(u32 addr) {
    extern u32* lbl_8035B86C;
    void fn_80274558(u32);
    u32 phys = lbl_8035B86C[addr >> 12] & 0x7FFFFFFF;
    if (phys != 0) {
        return phys;
    }
    fn_80274558(addr);
    return 0;
}

BOOL fn_80274538(u32 addr) {
    extern u32* lbl_8035B86C;
    return (lbl_8035B86C[(addr >> 12) & 0x1FFF] & 0x7FFFFFFF) != 0;
}

void fn_80274558(u32 addr) {
    extern char lbl_802F37D8[];
    int fn_800E8F6C(char *, const char *, ...);
    void PPCHalt(void);
    char buf[1024];

    fn_800E8F6C(buf, lbl_802F37D8, addr);
    PPCHalt();
}

void fn_80274590(u32 arg0) {
    extern u32* lbl_8035B86C;
    lbl_8035B86C[(arg0 & 0x1FFFFFF) >> 12] |= 0x80000000;
}

u32 fn_802745A8(u32 arg0) {
    extern u32* lbl_8035B86C;
    return lbl_8035B86C[(arg0 & 0x1FFFFFF) >> 12] >> 31;
}

void fn_802745BC(void) {
    extern u32* lbl_8035B86C;
    u32 i;
    u8* lo = OSGetArenaLo();
    lbl_8035B86C = (u32*)lo;
    OSSetArenaLo(lo + 0x8000);
    for (i = 0; i < 0x8000; i += 4) {
        *(u32*)((u8*)lbl_8035B86C + i) = 0;
    }
}

void fn_80274664(void) {
    extern u32* lbl_8035B868;
    u32 i;
    lbl_8035B868 = OSGetArenaLo();
    OSSetArenaLo((u8*)lbl_8035B868 + 0x4000);
    for (i = 0; i < 0x4000; i += 4) {
        *(u32*)((u8*)lbl_8035B868 + i) = 0;
    }
}

void fn_802747D0(u32 arg0, u32 arg1, s32 arg2) {
    u32 *p = (u32 *)fn_80274D04(arg0);
    p[0] = 0x80000000 | ((arg0 >> 22) & 0x3F);
    p[1] = arg1 & 0x0FFFF000;
    fn_800B48F4(p, 8);
    fn_80274990(arg2, arg0);
}

void fn_8027483C(s32 arg0, s32 arg1) {
    u32 *p = (u32 *)fn_80274D04(arg0);
    p[0] = 0;
    p[1] = 0;
    fn_800B48F4(p, 8);
    fn_80274990(arg1, 0);
    fn_802749AC(arg1, 0);
    fn_80274970(arg0);
}

u32 fn_802748A8(u32 arg0) {
    return *(u32*)fn_80274D04(arg0) >> 31;
}

u32 fn_802748D0(u32 arg0) {
    return (((u32*)fn_80274D04(arg0))[1] >> 8) & 1;
}

u32 fn_80274D04(u32 arg0);
u32 fn_802748F8(u32 arg0) {
    return (((u32*)fn_80274D04(arg0))[1] >> 7) & 1;
}

void fn_80274920(u32 arg0, s32 arg1) {
    u32 fn_80274D04(u32 arg0);
    u32 *p = (u32 *)fn_80274D04(arg0);
    if (arg1 != 0) {
        p[1] |= 0x100;
    } else {
        p[1] &= ~0x100;
    }
}

void fn_80274970(s32 arg0) {
    M2C_ERROR(/* unknown instruction: tlbsync */);
    M2C_ERROR(/* unknown instruction: tlbie $r0 */);
}

u32 fn_80274980(s32 arg0) {
    extern u32* lbl_8035B87C;
    return lbl_8035B87C[arg0];
}

void fn_80274990(s32 arg0, u32 arg1) {
    extern u32* lbl_8035B87C;
    lbl_8035B87C[arg0] = arg1;
}

u8 fn_802749A0(s32 arg0) {
    extern u8* lbl_8035B880;
    return lbl_8035B880[arg0];
}

extern u8* lbl_8035B880;
void fn_80274BB4(void);
void fn_80274A78(void);
void fn_802749AC(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        lbl_8035B880[arg0] = 1;
    } else {
        lbl_8035B880[arg0] = 0;
    }
}

extern u32* lbl_8035B87C;
void* OSGetArenaLo(void);
void OSSetArenaLo(void*);
void fn_80274C8C(void);

extern s32 lbl_8035B884;
void fn_802749D4(s32 arg0) {
    lbl_8035B884 = arg0;
}

void fn_802749DC(void) {
    extern u32 lbl_8035B878;
    u32 lo = (u32)OSGetArenaLo();
    lbl_8035B878 = (lo + 0x10000) - (lo & 0xFFFF);
    OSSetArenaLo((void*)(lbl_8035B878 + 0x10000));
    fn_80274A78();
}

void fn_80274A18(void) {
    lbl_8035B880 = OSGetArenaLo();
    OSSetArenaLo(lbl_8035B880 + 0x1000);
    fn_80274BB4();
}

void fn_80274A48(void) {
    lbl_8035B87C = OSGetArenaLo();
    OSSetArenaLo((u8*)lbl_8035B87C + 0x4000);
    fn_80274C8C();
}

void fn_80274C8C(void) {
    u32 i;
    for (i = 0; i < 0x4000; i += 4) {
        *(u32*)((u8*)lbl_8035B87C + i) = 0;
    }
}

extern u32 lbl_8035B878;
u32 fn_80274D04(u32 arg0) {
    return ((arg0 >> 19) & 0x38) | (lbl_8035B878 | ((arg0 >> 6) & 0xFFC0));
}

void fn_80274D1C(void) {
    u32 addr = 0;
    int i;
    __tlbsync();
    for (i = 0; i < 64; ++i) {
        __tlbie(addr);
        addr += 0x1000;
    }
}

extern void fn_80274DE0(void);
extern u32 lbl_8035B878, lbl_8035B88C, lbl_8035B890;
void fn_80274D74(void) {
    u32 msr, table;
    lbl_8035B88C = __mfsr(7);
    __mtsr(7, 0);
    msr = __mfmsr();
    table = __mfspr(25);
    lbl_8035B890 = table;
    fn_80274DC8(msr & ~0x30, (table & 0xFFFF) + (lbl_8035B878 & 0x7FFF0000), 0);
}

void fn_80274E0C(void) {

}

void OSClearContext(OSContext *);
void OSSetCurrentContext(OSContext *);
void OSLoadContext(OSContext *);
void fn_802750D0(OSContext *ctx, s32 arg) {
    OSContext tmp;
    OSClearContext(&tmp);
    OSSetCurrentContext(&tmp);
    ((void (*)(s32))lbl_8035B884)(arg);
    OSSetCurrentContext(ctx);
    OSLoadContext(ctx);
}

void fn_80275278(OSContext *ctx, s32 arg) {
    OSContext tmp;
    OSClearContext(&tmp);
    OSSetCurrentContext(&tmp);
    ((void (*)(s32))lbl_8035B884)(arg);
    OSSetCurrentContext(ctx);
    OSLoadContext(ctx);
}

u32 fn_802752DC(u32 a, u32 b, u32 d) {
    u64 n;
    u32 inv;
    u32 d16;
    u32 q;
    s32 s;
    s32 sh;
    s32 mask;
    u32 hi;
    u32 lo;

    n = (u64)a * b;
    hi = n >> 32;
    lo = n;
    if ((d & (d - 1)) == 0) {
        s = __cntlzw(d);
        return (lo >> (31 - s)) | (hi << (s + 1));
    }
    inv = 0xFFFFFFFF / d;
    d16 = (d + 0xFFFF) >> 16;
    q = 0;
    if (d16 != 0) {
        s = __cntlzw(hi);
        q = (hi << s) / d16;
        sh = 16 - s;
        mask = sh >> 31;
        q = (q >> (-sh & mask)) << (sh & ~mask);
        n -= (u64)q * d;
    }
    while ((u32)(n >> 32) != 0) {
        u32 t = inv * (u32)(n >> 32);
        n -= (u64)t * d;
        q += t;
    }
    return q + (u32)n / d;
}

u32 fn_80275394(u32 a, u32 b, u32 s) {
    u32 hi = ((u64)a * b) >> 32;
    u32 lo = a * b;
    return (lo >> s) | (hi << (32 - s));
}

void fn_802753B4(u32 *dst, u16 val, u32 count) {
    s32 n = count >> 1;
    u32 v = (val << 16) | val;
    while (n-- != 0) {
        *dst++ = v;
    }
    if (count & 1) {
        *(u16 *)dst = val;
    }
}

#pragma push
#pragma use_lmw_stmw on
s32 fn_802753F0(void) {
    s64 now = OSGetTime();
    u32 t;
    if (lbl_802F3840 == 0) {
        lbl_802F3840 = now;
    }
    now -= lbl_802F3840;
    t = (u32)(now >> 32) * 0x19E40;
    now -= (u64)t * 40500;
    return (u32)(((u64)now * 0xCF2049A1ULL) >> 47) + t;
}

void fn_8027550C(u32 *dst) {
 s32 high1, low, high2;
 do { high1 = __mfspr(269); low = __mfspr(268); high2 = __mfspr(269); } while (high1 != high2);
 dst[0] = high1; dst[1] = low;
}

u32 fn_80275578(u32 hi, u32 lo, u32 d) {
    u64 n;
    u32 inv;
    u32 d16;
    u32 q;
    s32 s;
    s32 sh;
    s32 mask;

    if ((d & (d - 1)) == 0) {
        s = __cntlzw(d);
        return (lo >> (31 - s)) | (hi << (s + 1));
    }
    inv = 0xFFFFFFFF / d;
    d16 = (d + 0xFFFF) >> 16;
    q = 0;
    n = ((u64)hi << 32) | lo;
    if (d16 != 0) {
        s = __cntlzw(hi);
        q = (hi << s) / d16;
        sh = 16 - s;
        mask = sh >> 31;
        q = (q >> (-sh & mask)) << (sh & ~mask);
        n -= (u64)q * d;
    }
    while ((u32)(n >> 32) != 0) {
        u32 t = inv * (u32)(n >> 32);
        n -= (u64)t * d;
        q += t;
    }
    return q + (u32)n / d;
}

s64 OSGetTime(void);
extern s64 lbl_802F3840;
void fn_800C9A0C(s32, int);
void fn_8027564C(void *arg0, int arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x50) != 0) {
        fn_800C9A0C(*(s32 *)((u8 *)arg0 + 0x50), arg1);
    }
    if (*(s32 *)((u8 *)arg0 + 0x54) != 0) {
        fn_800C9A0C(*(s32 *)((u8 *)arg0 + 0x54), arg1);
    }
}

s32 fn_8027569C(void *arg0) {
    return (*(u32 *)(*(u8 **)((u8 *)arg0 + 0x50) + 0x1B2) << *(u32 *)((u8 *)arg0 + 0x60)) - *(u32 *)((u8 *)arg0 + 0x58);
}

void *memset();
#pragma push
#pragma use_lmw_stmw on
void fn_802757D0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p = arg0;
    u8 *sub = p + 0x14A;
    memset(sub, 0, 0x24);
    *(s16 *)(p + 0x14A) = arg2;
    *(s16 *)(sub + 4) = arg3;
    *(s16 *)(p + 0x19C) = arg1;
    *(s16 *)(p + 0x19E) = 0;
    *(s16 *)(p + 0x144) = 3;
    *(u32 *)(p + 0x1C) |= 0x212;
}

void fn_802757D0(void *, s32, s32, s32);
#pragma push
#pragma auto_inline off
#pragma inline off
void fn_80275844(void *arg0) {
    u8 *p = arg0;
    s32 v;
    s32 a = *(s32 *)(p + 0xC8);
    if (a != 0) {
        v = 0;
        if (*(s32 *)(p + 0x74) == 1) v = *(s32 *)(p + 0x80);
        fn_802757D0((void *)a, *(s32 *)(p + 0x78), *(s32 *)(p + 0x7C), v);
    }
    a = *(s32 *)(p + 0xCC);
    if (a != 0) fn_802757D0((void *)a, *(s32 *)(p + 0x78), 0, *(s32 *)(p + 0x80));
}
void fn_80275D00(u32 *src, u16 *left, u16 *right, u32 count) {
    u32 i = 0;
    u32 n = count >> 1;
    if (i < n) do {
        u32 a = *src++;
        u32 b = a >> 8;
        *left++ = ((a >> 16) & 0xFF00) | (u8)b;
        *right++ = (b & 0xFF00) | (u8)a;
    } while (++i < n);
    if (count & 1) {
        u16 a = *(u16 *)src;
        *(u8 *)left = a >> 8;
        *(u8 *)right = a;
    }
}
#pragma pop
#pragma push
#pragma dont_inline on
void fn_80275D6C(s16 *src, u8 *left, u8 *right, u32 count) {
    u32 i = 0;
    u32 n = count >> 2;
    u32 *p = (u32 *)src;
    if (i < n) do {
        u32 a = p[0];
        u32 b = p[1];
        p += 2;
        *(u32 *)left = (a & 0xFFFF0000) | (b >> 16);
        *(u32 *)right = (a << 16) | (u16)b;
        left += 4;
        right += 4;
    } while (++i < n);
    if (count & 3) {
        u32 a = *p;
        *(u16 *)left = a >> 16;
        *(u16 *)right = a;
    }
}

void fn_80275F08(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 4);
    *(s32 *)(p + 0xC4) = 0;
}

s32 fn_8027569C(void *);
#pragma push
#pragma auto_inline off
#pragma inline off
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void fn_80275F18(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 4);
    u8 *sub;
    if (*(s32 *)(p + 0xFC) == 0 && *(s32 *)(p + 0x60) != 0 && *(s32 *)(p + 0xF8) != 0) {
        sub = p + 0x78;
        *(s32 *)(p + 0x10C) = fn_8027569C(sub);
        *(s32 *)(p + 0x114) = fn_802753F0();
        *(s32 *)(p + 0xF8) = 2;
        fn_8027564C(sub, 1);
    }
    *(s32 *)(p + 0xC4) = 0;
}

void fn_80275F98(arg0)
void *arg0;
{
    fn_8027564C((u8 *)arg0 + 0x78, 0);
}

s32 fn_80275DD8(void *, u32, void *);
void fn_80275F18(void *);
void fn_80275F08(void *);
void fn_80275FC0(void *arg0) {
    u8 *p = arg0;
    void *callback;
    u32 size = *(u32 *)(p + 0x100);
    if (size >= *(u32 *)(p + 0x108) && *(s32 *)(p + 0xFC) == 0 && *(s32 *)(p + 0xC4) == 0) {
        *(s32 *)(p + 0xC4) = 1;
        if (*(s32 *)(p + 0xF8) == 0) {
            *(s32 *)(p + 0xF8) = 1;
            callback = fn_80275F18;
        } else {
            callback = fn_80275F08;
        }
        *(u32 *)(p + 0x100) -= fn_80275DD8(p, size, callback);
        *(u32 *)(p + 0x108) = *(u32 *)(p + 0xE0);
    }
}

#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void fn_80276058(void *arg0) {
    s32 state;
    u8 *sub;

    sub = (u8 *)arg0 + 0x78;
    state = *(s32 *)((u8 *)arg0 + 0xF8);
    ((void (*)(void *, int, int))fn_802756B8)(sub, *(s32 *)((u8 *)arg0 + 0x70), 0);
    fn_80275FC0(arg0);
    if (state == 2) {
        fn_8027564C(sub, 1);
    }
}
#pragma pop

s32 fn_802762D8(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = *(s32 *)(arg0 + 0xEC);
    *arg2 = *(s32 *)(arg0 + 0xE0) * *(s32 *)(arg0 + 0x74);
    return 1;
}

#pragma pop
s32 fn_80287804();
void fn_80287810(s32);
f32 fn_800F051C(f32, f32);
void fn_80275844(void *);
void *memcpy();
void fn_80275FC0(void *);
s32 fn_802762FC(u8 *arg0, u32 arg1) {
    u32 pos = *(u32 *)(arg0 + 0xF0);
    u32 end = pos + arg1;
    if (end >= *(u32 *)(arg0 + 0xDC)) {
        memcpy(*(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xEC), *(u32 *)(arg0 + 0xDC) - pos);
        memcpy(*(u8 **)(arg0 + 0xE4), *(u8 **)(arg0 + 0xEC) + *(u32 *)(arg0 + 0xDC) - *(u32 *)(arg0 + 0xF0), end - *(u32 *)(arg0 + 0xDC));
        *(u32 *)(arg0 + 0xF0) = end - *(u32 *)(arg0 + 0xDC);
    } else {
        memcpy(*(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xEC), arg1);
        *(u32 *)(arg0 + 0xF0) = end;
    }
    *(s32 *)(arg0 + 0x100) += arg1;
    fn_80275FC0(arg0);
    return 1;
}

void fn_80275D6C(s16 *, u8 *, u8 *, u32);
#pragma push
#pragma use_lmw_stmw on
s32 fn_802763BC(u8 *arg0, u32 arg1) {
    u32 n = arg1 >> 1;
    u32 pos = *(u32 *)(arg0 + 0xF0);
    u32 end = pos + n;
    if (end >= *(u32 *)(arg0 + 0xDC)) {
        u32 d;
        fn_80275D6C(*(s16 **)(arg0 + 0xEC), *(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xE8) + pos, *(u32 *)(arg0 + 0xDC) - pos);
        d = *(u32 *)(arg0 + 0xDC) - *(u32 *)(arg0 + 0xF0);
        fn_80275D6C((s16 *)(*(u8 **)(arg0 + 0xEC) + (d + d)), *(u8 **)(arg0 + 0xE4), *(u8 **)(arg0 + 0xE8), end - *(u32 *)(arg0 + 0xDC));
        *(u32 *)(arg0 + 0xF0) = end - *(u32 *)(arg0 + 0xDC);
    } else {
        fn_80275D6C(*(s16 **)(arg0 + 0xEC), *(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xE8) + pos, n);
        *(u32 *)(arg0 + 0xF0) = end;
    }
    *(s32 *)(arg0 + 0x100) += n;
    fn_80275FC0(arg0);
    return 1;
}
#pragma pop
s32 fn_802766C8(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (*(s32 *)(arg0 + 0x60) == 0) {
            *(s32 *)(arg0 + 0x60) = 1;
            *(s32 *)(arg0 + 0xF8) = 0;
            *(s32 *)(arg0 + 0xF4) = 0;
            *(s32 *)(arg0 + 0x108) = *(s32 *)(arg0 + 0x104);
            *(s32 *)(arg0 + 0x100) = 0;
            *(s32 *)(arg0 + 0xF0) = 0;
            fn_802756B8(arg0 + 0x78, *(s32 *)(arg0 + 0x70), 1, *(s32 *)(arg0 + 0x104));
        }
    } else if (*(s32 *)(arg0 + 0x60) == 1) {
        fn_8027564C(arg0 + 0x78, 0);
        *(s32 *)(arg0 + 0x60) = arg1;
    }
    return *(s32 *)(arg0 + 0x60);
}

s32 fn_80276758(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (*(s32 *)(arg0 + 0xFC) == 0) {
            *(s32 *)(arg0 + 0xFC) = 1;
            fn_80275F98();
        }
    } else if (*(s32 *)(arg0 + 0xFC) == 1) {
        *(s32 *)(arg0 + 0xFC) = arg1;
        fn_80276058(arg0);
    }
    return *(s32 *)(arg0 + 0xFC);
}

void fn_80275C64(void);
s32 fn_802753F0(void);
void fn_80276B84(void* arg0);
void fn_80275F98();
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);
extern unsigned int lbl_802F3848[2];
void fn_802767E0(void);
extern void fn_80275C64(void);
extern s32 fn_8027569C(void *);
extern s32 fn_802753F0(void);
extern s32 fn_80275DD8(void *, u32, void *);

extern void fn_80275F18(void *);
#pragma push
#pragma optimize_for_size on
void fn_802767C0(void) { fn_80275C64(); }
#pragma pop
void *fn_80276930(u32 *arg0)
{
    if (arg0 == 0) {
        lbl_802F3848[0] = 0;
        lbl_802F3848[1] = 0;
    } else {
        lbl_802F3848[0] = arg0[0];
        lbl_802F3848[1] = arg0[1];
    }
    return (void *)fn_802767E0;
}

extern u8 lbl_80357FC0[];
void fn_800EB764(void *, s32);
void fn_802769B8(s32 arg0) {
    fn_800EB764(lbl_80357FC0, arg0);
}

u8 *fn_802769E4(void) {
    return lbl_80357FC0;
}

#pragma push
#pragma opt_unroll_loops off
void fn_80276A90(s8 *dst, s16 *src, u32 len) {
    u32 n;
    for (n = len >> 1; n != 0; n--) {
        *dst++ = *src++ >> 8;
    }
}

void fn_80276E38(u8* arg0) {
    if (*(s32*)(arg0 + 0x280) == 0) {
        *(s32*)(arg0 + 0x280) = fn_802753F0();
        *(s32*)(arg0 + 0x284) = *(s32*)(arg0 + 0x270) - 1;
    }
}

#pragma pop
extern s32 lbl_802F3864[];
extern s32 lbl_803580C0[];
extern s32 lbl_802F3868[];
extern u32 lbl_802F3870;
extern u32 lbl_802F3874[];
extern s32 lbl_802F385C;
void fn_80283E90(s32, void *);
void fn_80276FA0(s32 arg0, s32 arg1) {
    lbl_802F3864[0] = arg0;
    lbl_803580C0[0] = arg1;
}

#pragma optimize_for_size on
#pragma opt_unroll_loops off
void fn_80276FB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    lbl_802F3868[0] = arg0;
}
void fn_80276FD8(u32 count, u32 *src) {
    u32 i;
    if (count > 8) {
        count = 8;
    }
    lbl_802F3870 = count;
    for (i = 0; i < count; i++) {
        lbl_802F3874[i] = src[i];
    }
}

void fn_80277114(u8 *arg0) {
    fn_80283E90(lbl_802F385C, arg0 + 0xFC);
}

u32 fn_802771B8(u32* arg0, u32 arg1) {
    u32 v = arg0[-1];
    if (v == arg1) {
        return 0;
    }
    return ~v;
}

void fn_802771D4(u8* arg0, s32 arg1) {
    u8* p = arg0 - 0x34C;
    if (*(s32*)(p + 0x2F8) != 0) {
        fn_80276B84(p);
    }
    *(s32*)(p + 0x348) = arg1;
}

void fn_80278F28(void *arg0, s32 arg1) {
    s32 old = *(s32 *)((u8 *)arg0 + 0x27C);
    if (old != 0) {
        s32 value = *(s32 *)((u8 *)arg0 + 0x2B4) + (arg1 - old);
        *(s32 *)((u8 *)arg0 + 0x27C) = 0;
        *(s32 *)((u8 *)arg0 + 0x2B4) = value;
    }
}

void fn_8027964C(u8 *arg0, u32 arg1) {
    s32 start;
    u32 delta;
    u32 max;
    u32 prev;

    start = *(s32 *)(arg0 + 0x28C);
    if (start != 0) {
        delta = arg1 - start;
        max = *(u32 *)(arg0 + 0x290);
        *(u32 *)(arg0 + 0x28C) = 0;
        if (delta > max) {
            prev = *(u32 *)(arg0 + 0x294);
            *(u32 *)(arg0 + 0x298) = max;
            *(u32 *)(arg0 + 0x294) = *(u32 *)(arg0 + 0xC);
            *(u32 *)(arg0 + 0x29C) = prev;
            *(u32 *)(arg0 + 0x290) = delta;
        } else if (delta > *(u32 *)(arg0 + 0x298)) {
            *(u32 *)(arg0 + 0x298) = delta;
            *(u32 *)(arg0 + 0x29C) = *(u32 *)(arg0 + 0xC);
        }
    }
}

void fn_80283D04(void *);
void fn_800B9CD8(void);
s32 fn_80283C94(void *);
void fn_800B3EF8(void *);
void fn_8027B790(void *);
extern u8 lbl_802F3898[];
u8 *fn_8027A710(void) {
    return lbl_802F3898;
}

s32 fn_8027B0D4(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x1C) != 0) {
        return 0;
    }
    switch (DVDGetDriveStatus()) {
    case 1:
    case 2:
    case 10:
        break;
    case 0:
        fn_8027AFC0(arg0);
        break;
    case -1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
        *(s32 *)((u8 *)arg0 + 0x1C) = 1;
        break;
    }
    return *(s32 *)((u8 *)arg0 + 0x20);
}

#pragma push
#pragma scheduling off
void fn_8027B168(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0xBC) = 1;
    fn_800BFE7C((u8 *)arg0 + 0x4C);
    while ((u32)(DVDGetDriveStatus() - 1) <= 1U) {
    }
    *(s32 *)((u8 *)arg0 + 0xBC) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
}
#pragma pop
u32 fn_8027B4CC(void *arg0, void *arg1) {
    return ((u32)arg1 + 0xFFF) & ~0xFFF;
}

void fn_8027B168(void *);
void fn_800BD474(void *);
int OSDisableInterrupts();
int OSRestoreInterrupts();
#pragma push
#pragma use_lmw_stmw on
void fn_8027B54C(void *arg0) {
 fn_8027B168(arg0);
 if (*(s32 *)((u8 *)arg0+0xA8)==0) fn_800BD474((u8 *)arg0+0x4C);
}

extern void (*lbl_803590CC)(void *);
extern u32 lbl_803018F8[];
extern u8 *lbl_803018FC[];
u8 *fn_8027B6D4(u32);
extern u8 *lbl_80301900[];
void fn_800B443C(void *, void *);
extern void *lbl_80359530[];
void fn_8027B790(void *arg0) {
    u8 *p = arg0;
    if (p != 0) {
        if ((s8)p[-2] == 3) {
            (*(void (**)(void *))(p - 8))(p - p[-1]);
        } else {
            fn_800B443C(lbl_80359530[0], p - p[-1]);
        }
    }
}

void fn_8027B7EC(u32 size) {
    u32 aligned = (size + 0x1F) & ~0x1F;
    u32 total = aligned * 2;
    if (total > lbl_803018F8[0]) {
        if (lbl_803018FC[0] != 0) {
            fn_8027B790(lbl_803018FC[0]);
            lbl_803018FC[0] = 0;
        }
        lbl_803018FC[0] = fn_8027B6D4(total);
        lbl_803018F8[0] = total;
    }
    lbl_80301900[0] = lbl_803018FC[0] + aligned;
}

void fn_8027B86C(void) {
    if (lbl_803018FC[0] != 0) {
        fn_8027B790(lbl_803018FC[0]);
        lbl_803018F8[0] = 0;
        lbl_803018FC[0] = 0;
    }
}

void fn_8027B8B4(void *arg0) {
 u8 *s1=lbl_80300860[1], *s0=lbl_80300860[0];
 u8 *s2=lbl_80300860[2], *s3=lbl_80300860[3];
 u8 *s6=lbl_80300860[6], *s7=lbl_80300860[7];
 u8 *s4=lbl_80300860[4], *s5=lbl_80300860[5];
 s32 d;
 lbl_803590CC(arg0);
 lbl_80300860[2]=s2; lbl_80300860[3]=s3;
 lbl_80300860[6]=s6; lbl_80300860[7]=s7;
 lbl_80300860[4]=s4; lbl_80300860[5]=s5;
 lbl_80300860[0]=s0+(s32)lbl_80300860[17];
 d=lbl_80300860[1]-s1;
 lbl_80300860[1]=s1+(s32)lbl_80300860[17];
 lbl_803590CC(arg0);
 lbl_80300860[0]=s0+d; lbl_80300860[1]=s1+d;
}

void fn_8027D938(s32 unused,s32 count) {
extern u32 lbl_80300460[];
s32 n=count-1;
if(count != 0) do {
u8 index=*lbl_80300860[2];
u32 v;
lbl_80300860[2]++;
v=lbl_80300460[index];
((u32 *)lbl_80300860[0])[0]=v;
((u32 *)lbl_80300860[0])[1]=v;
*(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
((u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
lbl_80300860[0]+=8;
} while(n-- != 0);
}

s32 fn_8027D9B4(s32 count,s32 offset) {
extern u32 lbl_80300460[];
u32 n=count;
do {
u8 index=*lbl_80300860[2];
u32 v;
lbl_80300860[2]++;
v=lbl_80300460[index];
((u32 *)lbl_80300860[0])[0]=v;
((u32 *)lbl_80300860[0])[1]=v;
*(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
((u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
index=*lbl_80300860[3];
lbl_80300860[3]++;
v=lbl_80300460[index];
((u32 *)lbl_80300860[1])[0]=v;
((u32 *)lbl_80300860[1])[1]=v;
*(u32 *)(lbl_80300860[1]+(s32)lbl_80300860[17])=v;
((u32 *)(lbl_80300860[1]+(s32)lbl_80300860[17]))[1]=v;
lbl_80300860[0]+=8;
lbl_80300860[1]+=8;
} while(--n != 0);
return offset+count;
}

void fn_8027E2A8(s32 unused,s32 count) {
extern u32 lbl_80300460[];
s32 n=count-1;
if(count != 0) do {
u8 *src=lbl_80300860[2];
*(u32 *)lbl_80300860[0]=lbl_80300460[*src++];
lbl_80300860[2]=src;
lbl_80300860[0]+=4;
} while(n-- != 0);
}

#pragma push
#pragma opt_unroll_loops off
s32 fn_8027E300(s32 count, s32 base) {
#pragma opt_unroll_loops off
    extern u32 lbl_80300460[];
    u32 n = count;
    do {
        *(u32 *)lbl_80300860[0] = lbl_80300460[*lbl_80300860[2]];
        lbl_80300860[2]++;
        *(u32 *)lbl_80300860[1] = lbl_80300460[*lbl_80300860[3]];
        lbl_80300860[3]++;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--n != 0);
    return base + count;
}
#pragma pop

#pragma push
#pragma opt_unroll_loops off
void fn_8027E5FC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11) {
extern u8 lbl_80301920[];
extern void fn_8027BFB8(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *);
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,0,lbl_80301920);
}

extern u8 lbl_80301920[];
void fn_8027BFB8(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *);
extern u32 lbl_80300460[];
#pragma push
#pragma opt_unroll_loops off
void fn_8027E658(s32 arg0, s32 n) {
    u32 v;
    while (n-- != 0) {
        v = lbl_80300460[*lbl_80300860[2]] | (*lbl_80300860[6] << 24);
        lbl_80300860[2]++;
        lbl_80300860[6]++;
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 8;
    }
}
#pragma pop
s32 fn_8027E6D0(s32 n, s32 arg1) {
    u32 v;
    s32 i = n;
    do {
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        v = lbl_80300460[*lbl_80300860[3]++] | (*lbl_80300860[7]++ << 24);
        ((u32 *)lbl_80300860[1])[0] = v;
        ((u32 *)lbl_80300860[1])[1] = v;
        lbl_80300860[0] += 8;
        lbl_80300860[1] += 8;
    } while (--i);
    return arg1 + n;
}

void fn_8027E788(s32 arg0, s32 n) {
    u32 v;
    while (n--) {
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        *(u32 *)lbl_80300860[0] = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
    }
}

s32 fn_8027E804(s32 count, s32 base) {
#pragma opt_unroll_loops off
    extern u32 lbl_80300460[];
    u32 n = count;
    do {
        u32 v = lbl_80300460[*lbl_80300860[2]] | ((u32)*lbl_80300860[6] << 24);
        lbl_80300860[2]++;
        lbl_80300860[6]++;
        *(u32 *)lbl_80300860[0] = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        v = lbl_80300460[*lbl_80300860[3]] | ((u32)*lbl_80300860[7] << 24);
        lbl_80300860[3]++;
        lbl_80300860[7]++;
        *(u32 *)lbl_80300860[1] = v;
        *(u32 *)(lbl_80300860[1] + (u32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--n != 0);
    return base + count;
}

#pragma push
#pragma opt_unroll_loops off
void fn_8027E8C4(s32 unused, s32 count) {
#pragma opt_unroll_loops off
    extern u32 lbl_80300460[];
    while (count--) {
        u32 v = lbl_80300460[*lbl_80300860[2]] | ((u32)*lbl_80300860[6] << 24);
        lbl_80300860[2]++;
        lbl_80300860[6]++;
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17] + 4) = v;
        lbl_80300860[0] += 8;
    }
}

void fn_8027F354(s32 unused, s32 count) {
s32 n=count-1;
if(count) do {
u8 *src=lbl_80300860[2], *alpha=lbl_80300860[6];
u32 index=*src;
u32 high=*alpha;
u32 v;
src++; alpha++;
v=lbl_80300460[index] | (high<<24);
*(u32 *)lbl_80300860[0]=v;
lbl_80300860[6]=alpha;
lbl_80300860[2]=src;
lbl_80300860[0]+=4;
} while(n-- != 0);
}

void fn_8027F738(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12) {
extern u8 lbl_803019A0[];
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a12,a11,lbl_803019A0);
}

#pragma pop
void fn_8027F794(s32 arg0, s32 n) {
    u16 v;
    while (n-- != 0) {
        v = *(u16 *)(lbl_802FFC60 + *lbl_80300860[2]++ * 4 + 2);
        *(u16 *)lbl_80300860[0] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 2;
    }
}
s32 fn_8027F7FC(s32 n, s32 arg1) {
    u16 v;
    s32 i = n;
    do {
        v = *(u16 *)(lbl_802FFC60 + *lbl_80300860[2]++ * 4 + 2);
        *(u16 *)lbl_80300860[0] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        v = *(u16 *)(lbl_802FFC60 + *lbl_80300860[3]++ * 4 + 2);
        *(u16 *)lbl_80300860[1] = v;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
    } while (--i != 0);
    return arg1 + n;
}

void fn_8027F894(s32 arg0, s32 n) {
    u16 v;
    while (n-- != 0) {
        v = *(u16 *)(lbl_802FFC60 + *lbl_80300860[2]++ * 4 + 2);
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 4;
    }
}

void fn_80280484(s32 unused, s32 count) {
s32 n=count-1;
if(count) do {
u32 index=*lbl_80300860[2];
lbl_80300860[2]++;
*(u16 *)lbl_80300860[0] = *(u16 *)(lbl_802FFC60+index*4+2);
lbl_80300860[0]+=2;
} while(n-- != 0);
}

s32 fn_802804E0(s32 count,s32 base) {
u32 n=count;
do {
u32 index=*lbl_80300860[2];
lbl_80300860[2]++;
*(u16 *)lbl_80300860[0] = *(u16 *)(lbl_802FFC60+index*4+2);
index=*lbl_80300860[3];
lbl_80300860[3]++;
*(u16 *)lbl_80300860[1] = *(u16 *)(lbl_802FFC60+index*4+2);
lbl_80300860[0]+=2;
lbl_80300860[1]+=2;
} while(--n);
return base+count;
}

void fn_80281E08(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u32 a, b, v, w;
        count -= 2;
        a = lbl_80300860[2][0];
        b = lbl_80300860[2][1];
        v = a | ((a << 16) | 0x80000000 | 0x8000);
        w = b | ((b << 16) | 0x80000000 | 0x8000);
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = w;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17] + 4) = w;
        lbl_80300860[2] += 2;
        lbl_80300860[0] += 8;
    } while (count >= 0);
}

void fn_80281F90(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u32 a, b;
        count -= 2;
        a = lbl_80300860[2][0];
        *(u32 *)lbl_80300860[0] = a | ((a << 16) | 0x80000000 | 0x8000);
        b = lbl_80300860[2][1];
        lbl_80300860[2] += 2;
        ((u32 *)lbl_80300860[0])[1] = b | ((b << 16) | 0x80000000 | 0x8000);
        lbl_80300860[0] += 8;
    } while (count >= 0);
}

void fn_802820C4(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u32 a, b, v;
        count -= 2;
        a = lbl_80300860[2][0];
        b = lbl_80300860[2][1] << 16;
        lbl_80300860[2] += 2;
        v = a | (b | 0x80000000 | 0x8000);
        *(u32 *)lbl_80300860[0] = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
    } while (count >= 0);
}

s32 fn_80282124(s32 count, s32 base) {
    register s32 n = count;
    do {
        u32 a, b, v;
        u8 *p = lbl_80300860[2];
        register u32 *dst = (u32 *)lbl_80300860[0];
        n -= 2;
        b = p[1] << 16;
        a = p[0];
        lbl_80300860[2] = p + 2;
        v = a | (b | 0x80000000 | 0x8000);
        *dst = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        p = lbl_80300860[3];
        dst = (u32 *)lbl_80300860[1];
        b = p[1] << 16;
        a = p[0];
        lbl_80300860[3] = p + 2;
        v = a | (b | 0x80000000 | 0x8000);
        *dst = v;
        *(u32 *)(lbl_80300860[1] + (u32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (n > 0);
    return base + count;
}

void fn_802821C8(s32 unused, s32 n) {
    n -= 2;
    if (n >= 0) do {
        u8 *p = lbl_80300860[2];
        s32 b, c, d;
        u32 v, w;
        u32 a;
        n -= 2;
        b = *lbl_80300860[4] << 8;
        a = p[0];
        d = *lbl_80300860[5] << 24;
        lbl_80300860[4]++;
        lbl_80300860[5]++;
        c = a << 16;
        v = a | b | c | d;
        *(u32 *)lbl_80300860[0] = v;
        a = p[1];
        w = (v & 0xFF00FF00) | a | (a << 16);
        ((u32 *)lbl_80300860[0])[1] = w;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17] + 4) = w;
        lbl_80300860[2] += 2;
        lbl_80300860[0] += 8;
    } while (n >= 0);
}

void fn_802823C4(s32 unused, s32 n) {
    n -= 2;
    if (n >= 0) do {
        s32 b, d;
        u32 v, a;
        n -= 2;
        b = *lbl_80300860[4] << 8;
        a = lbl_80300860[2][0];
        lbl_80300860[4]++;
        v = a | b | (a << 16);
        d = *lbl_80300860[5] << 24;
        lbl_80300860[5]++;
        v |= d;
        *(u32 *)lbl_80300860[0] = v;
        a = lbl_80300860[2][1];
        lbl_80300860[2] += 2;
        ((u32 *)lbl_80300860[0])[1] = (v & 0xFF00FF00) | a | (a << 16);
        lbl_80300860[0] += 8;
    } while (n >= 0);
}

void fn_8028256C(s32 arg0, register s32 n) {
 register u8 **state = lbl_80300860;
 n -= 2;
 if(n >= 0) do {
 u8 *p = state[2];
 s32 b = *state[4] << 8;
 s32 c = p[1] << 16;
 s32 d = *state[5] << 24;
 u32 v = p[0] | b | c;
 state[4]++;
 state[5]++;
 v |= d;
 state[2] = p + 2;
 *(u32 *)state[0] = v;
 *(u32 *)(state[0] + (u32)state[17]) = v;
 state[0] += 4;
 n -= 2;
 } while(n >= 0);
}

void fn_802826DC(s32 arg0, s32 n) {
 n -= 2;
 if(n >= 0) do {
 u8 *p = lbl_80300860[2];
 u32 v = p[0] | ((p[1] << 16) | 0x80008000);
 lbl_80300860[2] = p + 2;
 *(u32 *)lbl_80300860[0] = v;
 lbl_80300860[0] += 4;
 n -= 2;
 } while(n >= 0);
}

s32 fn_80282730(s32 arg0, s32 arg1) {
    register s32 count = arg0;
    do {
        u8 *p = lbl_80300860[2];
        u32 b = p[1];
        register u32 *dst = (u32 *)lbl_80300860[0];
        u32 v = p[0] | (b << 16) | 0x80008000;
        lbl_80300860[2] = p + 2;
        *dst = v;
        p = lbl_80300860[3];
        b = p[1];
        dst = (u32 *)lbl_80300860[1];
        v = p[0] | (b << 16) | 0x80008000;
        lbl_80300860[3] = p + 2;
        *dst = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        count -= 2;
    } while (count > 0);
    return arg1 + arg0;
}

#pragma pop
extern u8 *lbl_80300860[6];
void fn_802827BC(s32 arg0, s32 n) {
    while ((n -= 2) >= 0) {
        *(u32 *)lbl_80300860[0] = lbl_80300860[2][0] | (*lbl_80300860[4]++ << 8) | (lbl_80300860[2][1] << 16) | (*lbl_80300860[5]++ << 24);
        lbl_80300860[2] += 2;
        lbl_80300860[0] += 4;
    }
}

#pragma push
#pragma use_lmw_stmw on
void fn_802829C4(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13) {
    extern void fn_8027C408();
    extern u8 lbl_80301920[];
    fn_8027C408(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,0,lbl_80301920);
}

extern void fn_8027C408();
#pragma push
#pragma use_lmw_stmw on
void fn_80282A30(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g,s32 h,s32 i,s32 j,s32 k,s32 l,s32 m,s32 n,s32 o) {
 extern void fn_8027C408();
 extern u8 lbl_803019A0[];
 fn_8027C408(a,b,c,d,e,f,g,h,i,j,k,l,m,o,n,lbl_803019A0);
}
extern void fn_8027C408(void);
extern f64 lbl_802AAB60;
extern f64 lbl_80301C18[];
f32 fn_80282BE0(s32 arg0) {
    union { f64 d; u32 w[2]; } v;
    f32 result;
    v.w[0] = 0x43300000;
    v.w[1] = ((u32)arg0 & 0xEFFFFFFF) >> 5;
    result = (v.d - lbl_802AAB60) * lbl_80301C18[arg0 & 31];
    if (arg0 & 0x10000000) result = -result;
    return result;
}

void fn_80282C34(s16 *dst, f32 *src, s32 count, f32 scale) {
    s32 num = count;
    while (num--) {
        s32 n = (s32)(*src * scale);
        s16 *out = dst++;
        s32 v;
        if (n <= 0x7FFE) {
            v = -0x8000;
            if (n > -0x8000) v = n;
        } else v = 0x7FFF;
        *out = v;
        src++;
    }
}
#pragma pop
extern u8 lbl_803019A0[];
void fn_80282C94(s16 *dst, f32 *src, s32 count, f32 scale) {
 s32 remain = count - 1;
 if(count != 0) {
 do {
 s32 v = (s32)(*src * scale);
 s32 out;
 if(v <= 0x7FFE) { out = -0x8000; if(v > -0x8000) out = v; }
 else out = 0x7FFF;
 *dst++ = out;
 v = (s32)(src[count] * scale);
 if(v <= 0x7FFE) { out = -0x8000; if(v > -0x8000) out = v; }
 else out = 0x7FFF;
 *dst++ = out;
 src++;
 } while(remain-- != 0);
 }
}

s32 fn_802838BC(s32 arg0, s32 arg1) {
    s32 p;
    s32 n;
    if (arg0 == 0) {
        return 0;
    }
    p = *(s32 *)(arg0 + 0x30);
    if (p == arg1) {
        *(s32 *)(arg0 + 0x30) = *(s32 *)p;
        return 1;
    }
    while (*(s32 *)p != 0) {
        n = *(s32 *)p;
        if (n == arg1) {
            *(s32 *)p = *(s32 *)n;
            return 1;
        }
        p = n;
    }
    return 0;
}

s32 fn_80283C8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

#pragma push
#pragma optimize_for_size on
void fn_80283D04(void *arg0) {
    while (fn_80283C94(arg0) == 0) {
        fn_800B9CD8();
    }
}
#pragma pop
void fn_800B9CD8(void);
s32 fn_80283DFC(s32, void *);
void fn_80283E90(s32 a, void *b) {
    if (a && b && ((s32 *)b)[6] && ((s32 *)b)[5]) {
        while (fn_80283DFC(a, b) == 0) {
            fn_800B9CD8();
        }
    }
}

#pragma push
#pragma inline off
#pragma optimize_for_size on
#pragma use_lmw_stmw on
#pragma scheduling off
void fn_80283EFC(int a, int b, int c, int d, int e, void *f) {
    fn_80283E90(e, f);
    fn_80283E90(e, f);
}
extern void fn_80283D04(void *);
#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void fn_80283FB0(int a, void *b) {
    fn_80283D04(0);
    fn_80283D04(b);
}
void fn_80283FE4(u8 *arg0) {
    if (arg0 != 0) {
        fn_80283D04(arg0);
        fn_800B3EF8(arg0 + 8);
        fn_8027B790(arg0);
    }
}

void fn_8028405C(void) {

}

s32 fn_80284060(void) {
    return 0x1C;
}

void fn_80284068(int a, int *p, int c, unsigned int d, int e, int f, int g) {
    unsigned int z = (d >> 3) * f;
    p[2] = e;
    p[1] = 0;
    p[0] = 0;
    p[10] = 32 - __cntlzw((unsigned short)(c + (z - 1)));
    if (g) {
        p[3] = 1 << (e - 1);
    } else {
        p[3] = g;
    }
    p[11] = a;
}

void fn_8028A7A0(void) {

}

void fn_8028A7A4(void) {

}

void fn_8028A7A8(void) {

}

void fn_8028A7AC(void) {

}

void fn_8028A7B0(void) {
}

void fn_8028A7B4(void) {
}

void fn_8028A7B8(void) {
}

void fn_8028A7BC(void) {
}

void fn_8028B428(s32 n, u32 *dst, u32 *src) {
    while (n--) {
        u32 v = *src++;
        dst[0] = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        dst[1] = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
        dst += 2;
    }
}

void fn_8028B480(s32 n, u32 *dst, u32 *src) {
    while (n--) {
        u32 v = *src++;
        u32 t0 = v & 0xFF000000;
        u32 t1 = v & 0xFF0000;
        u32 t2 = v & 0xFF00;
        u32 t3 = v & 0xFF;
        dst[0] = t0 + (t0 >> 16) + 0x800080;
        dst[1] = (t1 << 8) + (t1 >> 8) + 0x800080;
        dst[2] = (t2 << 16) + t2 + 0x800080;
        dst[3] = (t3 << 24) + (t3 << 8) + 0x800080;
        dst += 4;
    }
}

#pragma pop
void fn_8028C0C4(s32 n, s32 *ip, f32 *a);
void fn_8028C71C(f32 *a);
void fn_8028C954(f32 *a);
void fn_8028CA0C(s32 n, f32 *a, f32 *w);
void fn_8028D8C8(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028D990(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028DA54(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028E6FC(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028E868(f32 *a, f32 *w);
void fn_8028F2AC(f32 *a, f32 *w);
void fn_8028F69C(f32 *a);
void fn_8028F7A4(f32 *a);
#pragma scheduling on
#pragma optimize_for_size off
void fn_8028BDF4(n, a, ip, nw, w)
s32 *ip;
s32 n;
f32 *a;
f32 *w;
s32 nw;
{
    s32 m;
    if (n > 32) {
        m = n >> 2;
        fn_8028CA0C(n, a, &w[nw - m]);
        if (n > 512) {
            fn_8028D8C8(m, a, nw, w);
            fn_8028D990(m, &a[m], nw, w);
            fn_8028D8C8(m, &a[2 * m], nw, w);
            fn_8028D8C8(m, &a[3 * m], nw, w);
        } else if (m > 32) {
            fn_8028DA54(n, a, nw, w);
        } else {
            fn_8028E6FC(n, a, nw, w);
        }
        fn_8028C0C4(n, ip, a);
    } else if (n > 8) {
        if (n == 32) {
            fn_8028E868(a, &w[nw - 8]);
            fn_8028C71C(a);
        } else {
            fn_8028F2AC(a, w);
            fn_8028C954(a);
        }
    } else if (n == 8) {
        fn_8028F69C(a);
    } else if (n == 4) {
        fn_8028F7A4(a);
    }
}

void fn_8028C954(f32 *m) {
    f32 a = m[2];
    f32 b = m[3];
    f32 c = m[6];
    f32 d = m[13];
    m[13] = m[7];
    m[2] = m[8];
    m[3] = m[9];
    m[6] = m[12];
    m[7] = d;
    m[8] = a;
    m[9] = b;
    m[12] = c;
}

void fn_8028C998(f32 *a) {
    f32 x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i;
    f32 x5r, x5i, x6r, x6i, x7r, x7i;
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    a[15] = x4i;
    a[2] = x7r;
    a[3] = x7i;
    a[4] = x3r;
    a[5] = x3i;
    a[6] = x5r;
    a[7] = x5i;
    a[8] = x1r;
    a[9] = x1i;
    a[10] = x6r;
    a[11] = x6i;
    a[12] = x2r;
    a[13] = x2i;
    a[14] = x4r;
}

void fn_8028E6FC(s32 n, f32 *a, s32 nw, f32 *w) {
    s32 offset;
    f32 *w1;
    if (n == 128) {
        offset = nw * 4;
        w1 = (f32 *)((char *)w + (offset - 32));
        fn_8028E868(a, w1);
        fn_8028ED28(a + 32, (f32 *)((char *)w + (offset - 128)));
        fn_8028E868(a + 64, w1);
        fn_8028E868(a + 96, w1);
    } else {
        offset = nw * 4;
        w1 = (f32 *)((char *)w + (offset - 64));
        fn_8028F2AC(a, w1);
        fn_8028F484(a + 16, w1);
        fn_8028F2AC(a + 32, w1);
        fn_8028F2AC(a + 48, w1);
    }
}

void fn_8028E7B0(s32 n, f32 *a, s32 nw, f32 *w) {
    s32 offset;
    f32 *w1, *w2;
    if (n == 128) {
        offset = nw * 4;
        w1 = (f32 *)((char *)w + (offset - 32));
        fn_8028E868(a, w1);
        w2 = (f32 *)((char *)w + (offset - 128));
        fn_8028ED28(a + 32, w2);
        fn_8028E868(a + 64, w1);
        fn_8028ED28(a + 96, w2);
    } else {
        offset = nw * 4;
        w1 = (f32 *)((char *)w + (offset - 64));
        fn_8028F2AC(a, w1);
        fn_8028F484(a + 16, w1);
        fn_8028F2AC(a + 32, w1);
        fn_8028F484(a + 48, w1);
    }
}

void fn_8028F69C(f32 *a) {
    f32 t0, t1, t2, t3, t4, t5, t6, t7;
    f32 s0, s1, s2, s3, d0, d1, d2, d3;

    t0 = a[4];
    t1 = a[5];
    t2 = a[6];
    t3 = a[0];
    t4 = a[1];
    t5 = a[2];
    t6 = a[7];
    t7 = a[3];

    d0 = t3 - t0;
    d1 = t4 - t1;
    d2 = t5 - t2;
    d3 = t7 - t6;
    s0 = t4 + t1;
    s1 = t5 + t2;
    s2 = t3 + t0;
    s3 = t7 + t6;

    a[4] = s2 - s1;
    a[5] = s0 - s3;
    a[6] = d0 + d3;
    a[7] = d1 - d2;
    a[0] = s2 + s1;
    a[1] = s0 + s3;
    a[2] = d0 - d3;
    a[3] = d1 + d2;
}

#pragma pop
extern f32 lbl_802AB290;
extern f32 lbl_802AB294;
extern f32 lbl_802AD300[][64];
void fn_8028F9D8(s32 n, f32 *a, s32 nc, f32 *c);
void fn_8028F720(f32 *a) {
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;

    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
}

void fn_8028F7A4(f32 *a) {
    f32 x2, x0, x1, x3;
    f32 sum0, diff0, sum1, diff1;

    x2 = a[2];
    x0 = a[0];
    x1 = a[1];
    x3 = a[3];
    sum0 = x0 + x2;
    diff0 = x0 - x2;
    sum1 = x1 + x3;
    diff1 = x1 - x3;
    a[0] = sum0;
    a[2] = diff0;
    a[1] = sum1;
    a[3] = diff1;
}

#pragma push
#pragma opt_unroll_loops off
void fn_8028F7D8(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, k, kk, ks, m;
    f32 wkr, wki, xr, xi, yr, yi;

    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = lbl_802AB290 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr - wki * xi;
        yi = wkr * xi + wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}
#pragma pop
void fn_8028F890(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, ks, m;
    f32 wkr, wki, xr, xi, yr, yi;
    f32 *p, *q, *c1, *c2;

    m = n >> 1;
    ks = 2 * nc / m;
    p = a + 2;
    q = a + n - 2;
    c1 = c;
    c2 = c + nc;
    for (j = 2; j < m; j += 2) {
        c1 += ks;
        c2 -= ks;
        wkr = lbl_802AB294 - *c2;
        wki = *c1;
        xr = p[0] - q[0];
        xi = p[1] + q[1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        p[0] -= yr;
        p[1] -= yi;
        q[0] += yr;
        q[1] -= yi;
        p += 2;
        q -= 2;
    }
}

#pragma push
#pragma opt_unroll_loops off
void fn_8028F948(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, k, kk, ks, m;
    f32 wkr, wki, xr;

    m = n >> 1;
    ks = nc / n;
    kk = 0;
    for (j = 1; j < m; j++) {
        k = n - j;
        kk += ks;
        wkr = c[kk] - c[nc - kk];
        wki = c[kk] + c[nc - kk];
        xr = wki * a[j] - wkr * a[k];
        a[j] = wkr * a[j] + wki * a[k];
        a[k] = xr;
    }
    a[m] *= c[0];
}
#pragma pop
void fn_8028ED28(f32 *, f32 *);
void fn_8028F484(f32 *, f32 *);
void fn_80290190(s32 n, f32 *a, s32 nc, s32 idx) {
    fn_8028F9D8(n, a, nc, lbl_802AD300[idx]);
}

