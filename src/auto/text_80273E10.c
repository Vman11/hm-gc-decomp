/* Functions from 0x80273E10 to 0x80293ED8, found by decomp-toolkit. */
#include "common.h"

s32 DVDGetDriveStatus(void);
void fn_800BFE7C(void *);
void fn_8027AFC0(void *);

typedef struct StreamState {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[4];
    s32 unk34;
    s32 unk38;
    u8 pad3C[4];
    u32 unk40;
    u8 pad44[4];
    u32 unk48;
    u8 pad4C[0x88 - 0x4C];
    s32 unk88;
    s32 unk8C;
    u8 pad90[8];
    s32 unk98;
    u32 unk9C;
    u32 unkA0;
    u32 unkA4;
    u8 padA8[8];
    s32 unkB0;
    s32 unkB4;
    u8 padB8[4];
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
} StreamState;

void fn_8028ED28(f32 *, f32 *);
void fn_8028F484(f32 *, f32 *);

void fn_80275C64(void);
u32 fn_80274D04(u32 arg0);

typedef struct BitStream {
    u32 *ptr;
    u32 unk4;
    u32 bits;
    s32 count;
} BitStream;

typedef struct BitBuf {
    u32 *ptr;
    u32 unk4;
    u32 buf;
    u32 bits;
} BitBuf;

extern u32 lbl_802AB0C0[];

static inline u32 BitBuf_Read(BitBuf *bs, u32 n) {
    u32 bits = bs->bits;
    u32 v;
    if (bits >= n) {
        u32 buf = bs->buf;
        bs->bits = bits - n;
        v = buf & (0xFFFFFFFF >> (32 - n));
        bs->buf = buf >> n;
    } else {
        u32 *p = bs->ptr;
        u32 buf = bs->buf;
        u32 w = *p;
        bs->bits = bits - (n - 32);
        bs->ptr = p + 1;
        bs->buf = w >> (n - bits);
        v = (buf | (w << bits)) & (0xFFFFFFFF >> (32 - n));
    }
    return v;
}

static inline void BitBuf_Write(BitBuf *bs, u32 v, u32 n) {
    u32 bits = bs->bits;
    u32 buf;
    v &= lbl_802AB0C0[n];
    buf = bs->buf | (v << bits);
    bits += n;
    bs->buf = buf;
    bs->bits = bits;
    if (bits > 31) {
        *bs->ptr = buf;
        bs->ptr++;
        bs->bits -= 32;
        if (bs->bits != 0) {
            bs->buf = v >> (n - bs->bits);
        } else {
            bs->buf = 0;
        }
    }
}

typedef struct {
    s32 unk0;
    f32 unk4;
    u32 unk8;
    u32 unkC;
    s32 unk10;
    s16 *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s16 *unk2C;
    s32 unk30;
} Fn80283750Struct;

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

static inline void convert_ia8_pairs(s32 n, u32 *dst, u32 *src) {
    s32 i = n - 1;
    if (n) do {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    } while (i-- != 0);
}

extern s32 lbl_8035B85C;
extern s32 lbl_8035B848;
extern s32 lbl_8035B854;
extern s32 lbl_8035B850;
extern s32 lbl_80359F08;
void fn_80273EF4(u32);
void fn_80274704();
void fn_802745BC(void);
void fn_80274664(void);
void fn_80273EC4(void);
int OSDisableInterrupts();
int OSRestoreInterrupts();

typedef struct OSContext {
    u8 data[0x2C8];
} OSContext;

typedef struct StreamARQReq {
    void *next;
    void *owner;
    u8 pad[0x18];
} StreamARQReq;

typedef struct StreamBuf {
    u8 pad0[0x84];
    StreamARQReq req;
    StreamARQReq req2;
    u8 pad1[0xCC - 0xC4];
    s32 unkCC;
    u32 unkD0;
    u32 unkD4;
    u32 unkD8;
    u32 unkDC;
    u32 unkE0;
    u32 unkE4;
    u32 unkE8;
    u32 unkEC;
    u32 unkF0;
    u32 unkF4;
} StreamBuf;

void DCFlushRangeNoSync(void *, u32);
void fn_800B2EA8(void);
void fn_800C6D6C(void *req, u32 owner, u32 type, u32 prio, u32 src, u32 dst, u32 len, void *cb);

#include "musyx_priv.h"
extern s32 lbl_8035B854;
void fn_80273E10(u32 arg0, s32 arg1, s32 arg2) {
    int level;

    if (lbl_8035B85C == 0) {
        level = OSDisableInterrupts();
        lbl_8035B85C = 1;
        lbl_80359F08 = arg1;
        lbl_8035B850 = arg2;
        lbl_8035B848 = arg0;
        lbl_8035B854 = arg0 >> 12;
        fn_80274704(fn_80273EF4);
        fn_802745BC();
        fn_80274664();
        fn_80273EC4();
        OSRestoreInterrupts(level);
    }
}

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

void fn_80273EC4(void) {
    extern s32 lbl_8035B848;
    extern u8* lbl_8035B84C;
    u8* lo = OSGetArenaLo();
    lbl_8035B84C = lo;
    OSSetArenaLo(lo + lbl_8035B848);
}

u32 fn_800C4EBC(void);
u16 fn_800C51D4(void);
void fn_800C51B4(void);
void fn_800C4EF8(u32, u32, u32, u32);
u64 __div2i(u32, u32, u32, u32);
void DCFlushRange(void *, u32);
void DCInvalidateRange(void *, u32);
u32 fn_802740E4(void);
u32 fn_80274980(s32 arg0);
u32 fn_802748F8(u32 arg0);
void fn_80274590(u32 arg0);
u32 fn_802744F8(u32 addr);
void fn_8027483C(s32 arg0, s32 arg1);
u32 fn_802745A8(u32 arg0);
BOOL fn_80274538(u32 addr);
void fn_80274558(u32 addr);
void fn_802747D0(u32 arg0, u32 arg1, s32 arg2);
extern void (*lbl_8035B858)(u32, u32, u32, u32, s32);
void fn_80273EF4(u32 arg0) {
    extern u8 *lbl_8035B84C;
    u32 start;
    u8 *buf;
    s32 flushed;
    u32 idx;
    u32 page;
    s32 status;
    int level;
    u32 entry;
    u64 t;

    t = OSGetTime() * 8;
    start = __div2i(t >> 32, t, 0, *(u32 *)0x800000F8 / 4 / 125000);
    page = arg0 & ~0xFFF;
    flushed = 0;
    idx = fn_802740E4();
    buf = lbl_8035B84C + (idx << 12);
    entry = fn_80274980(idx);
    level = OSDisableInterrupts();
    while (fn_800C4EBC() != 0) {
    }
    status = fn_800C51D4();
    if (entry != 0) {
        if ((s32)fn_802748F8(entry) != 0) {
            fn_80274590(entry);
            flushed = 1;
            DCFlushRange(buf, 0x1000);
            fn_800C4EF8(0, (u32)buf, fn_802744F8(entry), 0x1000);
            while (fn_800C4EBC() != 0) {
            }
        }
        fn_8027483C(entry, idx);
    }
    DCInvalidateRange(buf, 0x1000);
    if ((s32)fn_802745A8(page) != 0) {
        fn_800C4EF8(1, (u32)buf, fn_802744F8(page), 0x1000);
        while (fn_800C4EBC() != 0) {
        }
    } else if (fn_80274538(page) == 0) {
        fn_80274558(page);
    }
    if (status == 0) {
        fn_800C51B4();
    }
    fn_802747D0(page, (u32)buf, idx);
    OSRestoreInterrupts(level);
    if (lbl_8035B858 != NULL) {
        t = OSGetTime() * 8;
        lbl_8035B858(arg0, (u32)buf, idx, (u32)__div2i(t >> 32, t, 0, *(u32 *)0x800000F8 / 4 / 125000) - start, flushed);
    }
}

u32 fn_80274128(void);
u32 fn_802742F8(void);
u32 fn_8027438C(void);

u32 fn_802740E4(void) {
    extern s32 lbl_80359F14;
    if ((s32) lbl_80359F14 == 0) {
        return fn_80274128();
    }
    if ((s32) lbl_80359F14 == 1) {
        return fn_802742F8();
    }
    return fn_8027438C();
}

#pragma push
#pragma dont_inline on
u32 fn_80274128(void) {
    extern s32 lbl_80359F10;
    extern u32 lbl_8035B860;
    s32 fn_80274980(u32);
    s32 fn_802748A8(s32);
    s32 fn_802748D0(s32);
    s32 fn_802748F8(s32);
    void fn_80274920(s32, s32);
    s32 fn_802749A0(u32);
    u32 start;
    u32 result;
    s32 flagA;
    s32 flagB;
    s32 any;
    s32 entry;
    s32 a;
    s32 b;

    result = 0;
    start = lbl_8035B860;
    flagA = -1;
    flagB = -1;
    any = -1;
    if (lbl_80359F10 == 0) {
        while (1) {
            entry = fn_80274980(lbl_8035B860);
            if (entry != 0 && fn_802748A8(entry) != 0) {
                a = fn_802748D0(entry);
                b = fn_802748F8(entry);
                if (a == 0 && b == 0 && fn_802749A0(lbl_8035B860) == 0) {
                    result = lbl_8035B860;
                    break;
                }
                if (a == 0 && b != 0) {
                    if (flagA < 0 && fn_802749A0(lbl_8035B860) == 0) {
                        flagA = lbl_8035B860;
                    }
                } else if (a != 0 && b == 0) {
                    if (flagB < 0 && fn_802749A0(lbl_8035B860) == 0) {
                        flagB = lbl_8035B860;
                    }
                } else if (any < 0 && fn_802749A0(lbl_8035B860) == 0) {
                    any = lbl_8035B860;
                }
                if (a != 0) {
                    fn_80274920(entry, 0);
                }
                if (start == lbl_8035B860) {
                    if (flagA >= 0) {
                        result = flagA;
                    } else if (flagB >= 0) {
                        result = flagB;
                    } else if (any >= 0) {
                        result = any;
                    }
                    break;
                }
                lbl_8035B860++;
                if (lbl_8035B860 >= (u32)fn_80273EAC()) {
                    lbl_8035B860 = 0;
                }
            } else {
                result = lbl_8035B860;
                break;
            }
        }
    } else {
        result = start;
    }
    lbl_8035B860++;
    if (lbl_8035B860 >= (u32)fn_80273EAC()) {
        lbl_80359F10 = 0;
        lbl_8035B860 = 0;
    }
    return result;
}
#pragma pop

#pragma push
#pragma dont_inline on
u32 fn_802742F8(void) {
    extern s32 lbl_80359F10;
    extern u32 lbl_8035B860;
    s32 fn_802749A0(u32);
    u32 OSGetTick(void);
    u32 val;
    u32 n;

    do {
        if (lbl_80359F10 != 0) {
            val = lbl_8035B860++;
            if (lbl_8035B860 >= (u32)fn_80273EAC()) {
                lbl_80359F10 = 0;
                lbl_8035B860 = 0;
            }
        } else {
            n = fn_80273EAC();
            val = OSGetTick() % n;
        }
    } while (fn_802749A0(val) != 0);
    return val;
}
#pragma push
#pragma dont_inline on
u32 fn_8027438C(void) {
    extern s32 lbl_80359F10;
    extern u32 lbl_8035B860;
    s32 fn_802749A0(u32);
    u32 val;

    do {
        val = lbl_8035B860++;
        if (lbl_8035B860 >= (u32)fn_80273EAC()) {
            lbl_80359F10 = 0;
            lbl_8035B860 = 0;
        }
    } while (fn_802749A0(val) != 0);
    return val;
}

s32 fn_802743F8(u32 base, u32 size) {
    extern u32* lbl_8035B868;
    extern u32* lbl_8035B86C;
    extern u32 lbl_8035B870;
    extern u32 lbl_8035B874;
    u32 start;
    u32 end;
    u32 i;
    u32 addr;

    start = (u32)fn_80273EBC() >> 12;
    end = start + ((u32)fn_80273EB4() >> 12);
    if (lbl_8035B874 < start) {
        lbl_8035B874 = start;
    }
    if (lbl_8035B870 + size > (u32)fn_80273EB4()) {
        return 0;
    }
    for (i = 0; i < size; i += 0x1000) {
        addr = base + i;
        do {
            if (++lbl_8035B874 >= end) {
                lbl_8035B874 = start;
            }
        } while (lbl_8035B868[lbl_8035B874] != 0);
        lbl_8035B868[lbl_8035B874] = addr;
        lbl_8035B86C[(addr >> 12) & 0x1FFF] = lbl_8035B874 << 12;
        lbl_8035B870 += 0x1000;
    }
    return 1;
}

#pragma pop
u32 fn_802744F8(u32 addr) {
    extern u32* lbl_8035B86C;
    void fn_80274558(u32);
    u32 phys = lbl_8035B86C[(addr >> 12) & 0x1FFF] & 0x7FFFFFFF;
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


void fn_80274664(void) {
    extern u32* lbl_8035B868;
    u32 i;
    lbl_8035B868 = OSGetArenaLo();
    OSSetArenaLo((u8*)lbl_8035B868 + 0x4000);
    for (i = 0; i < 0x4000; i += 4) {
        *(u32*)((u8*)lbl_8035B868 + i) = 0;
    }
}

void fn_802749D4(s32 arg0);
void fn_802749DC(void);
void fn_80274A18(void);
void fn_80274A48(void);
void fn_80274D1C(void);
void fn_80274D74(void);
void fn_80274E10(void);
extern s32 lbl_8035B888;
void fn_80274704(s32 arg0) {
    int level;
    u32 size;

    if (lbl_8035B888 == 0) {
        level = OSDisableInterrupts();
        lbl_8035B888 = 1;
        fn_802749D4(arg0);
        size = 0x10000 - ((u32)OSGetArenaLo() & 0xFFFF);
        if (size >= 0x5000) {
            fn_80274A18();
            fn_80274A48();
            fn_802749DC();
        } else if (size >= 0x4000) {
            fn_80274A48();
            fn_802749DC();
            fn_80274A18();
        } else if (size >= 0x1000) {
            fn_80274A18();
            fn_802749DC();
            fn_80274A48();
        } else {
            fn_802749DC();
            fn_80274A18();
            fn_80274A48();
        }
        fn_80274E10();
        fn_80274D74();
        fn_80274D1C();
        OSRestoreInterrupts(level);
    }
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

void fn_80274A78(void) {
    extern u32 lbl_8035B878;
    u32 i;

    for (i = 0; i < 0x10000; i += 8) {
        *(u32 *)(lbl_8035B878 + i) = 0;
        *(u32 *)(lbl_8035B878 + i + 4) = 0;
    }
    fn_800B48F4((void *)lbl_8035B878, 0x10000);
}

void fn_80274BB4(void) {
    u32 i;
    for (i = 0; i < 0x1000; i++) {
        *(u8*)((u32)lbl_8035B880 + i) = 0;
    }
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


extern void fn_80274DE0(void);
extern u32 lbl_8035B878, lbl_8035B88C, lbl_8035B890;

void fn_80274E0C(void) {

}

void fn_80274F8C(void);
void fn_80275134(void);
void fn_80274E10(void) {
    u32 saved;
    u32 *p;

    saved = *(u32 *)0x80000300;
    *(u32 *)0x80000300 = ((u32)fn_80274F8C - 0x80000300) | 0x48000000;
    DCFlushRangeNoSync((void *)0x80000300, 4);
    __sync();
    __isync();
    __icbi((void *)0x80000300, 0);
    p = (u32 *)((u8 *)fn_80274F8C + 0xEC);
    *p = saved;
    DCFlushRangeNoSync(p, 4);
    __sync();
    __isync();
    __icbi(p, 0);
    p = (u32 *)((u8 *)fn_80274F8C + 0xF0);
    *p = ((0x80000304 - (u32)p) & 0x3FFFFFF) | 0x48000000;
    DCFlushRangeNoSync(p, 4);
    __sync();
    __isync();
    __icbi(p, 0);

    saved = *(u32 *)0x80000400;
    *(u32 *)0x80000400 = ((u32)fn_80275134 - 0x80000400) | 0x48000000;
    DCFlushRangeNoSync((void *)0x80000400, 4);
    __sync();
    __isync();
    __icbi((void *)0x80000400, 0);
    p = (u32 *)((u8 *)fn_80275134 + 0xEC);
    *p = saved;
    DCFlushRangeNoSync(p, 4);
    __sync();
    __isync();
    __icbi(p, 0);
    p = (u32 *)((u8 *)fn_80275134 + 0xF0);
    *p = ((0x80000404 - (u32)p) & 0x3FFFFFF) | 0x48000000;
    DCFlushRangeNoSync(p, 4);
    __sync();
    __isync();
    __icbi(p, 0);
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

#pragma push
#pragma use_lmw_stmw on

s64 OSGetTime(void);
extern s64 lbl_802F3840;
void fn_800C9A0C(s32, int);

void fn_800C9B74(void *, s16 *);
#pragma push
#pragma dont_inline off

#pragma pop
#pragma push
#pragma use_lmw_stmw on

void fn_802757D0(void *, s32, s32, s32);
#pragma push
#pragma auto_inline off
#pragma inline off

#pragma pop
#pragma push
#pragma dont_inline on

#pragma push
#pragma optimization_level 1
#pragma use_lmw_stmw on

#pragma pop

s32 fn_8027569C(void *);
#pragma push
#pragma auto_inline off
#pragma inline off
#pragma optimize_for_size on
#pragma use_lmw_stmw on

s32 fn_80275DD8(void *, u32, void *);
void fn_80275F18(void *);
void fn_80275F08(void *);

#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on

#pragma pop

#pragma pop
s32 fn_80287804();
void fn_80287810(s32);
f32 powf(f32, f32);
void fn_80275844(void *);
void *memcpy();
void fn_80275FC0(void *);

void fn_80275D6C(s16 *, u8 *, u8 *, u32);
#pragma push
#pragma use_lmw_stmw on

#pragma pop

void fn_80275C64(void);
s32 fn_802753F0(void);
void fn_80276B84(void* arg0);
void fn_80275F98();
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);
extern unsigned int lbl_802F3848[2];
s32 fn_802767E0();
extern void fn_80275C64(void);
extern s32 fn_8027569C(void *);
extern s32 fn_802753F0(void);
extern s32 fn_80275DD8(void *, u32, void *);

extern void fn_80275F18(void *);
#pragma push
#pragma optimize_for_size on

extern void fn_802760B4();
extern void fn_80276488();
extern void fn_80276554();
extern void fn_802765E8();
extern s32 fn_802758B4(void *, s32, s32, s32);
#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on

#pragma pop

#pragma pop

extern u8 lbl_80357FC0[];
void strcpy(void *, s32);

#pragma push
#pragma opt_unroll_loops off

#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma push
#pragma use_lmw_stmw on

#pragma pop
extern s32 lbl_802F3864[];
extern s32 lbl_803580C0[];
extern s32 lbl_802F3868[];
extern u32 lbl_802F3870;
extern u32 lbl_802F3874[];
extern s32 lbl_802F385C;
void fn_80283E90(s32, void *);

#pragma optimize_for_size on
#pragma opt_unroll_loops off

#pragma push
#pragma optimize_for_size on

#pragma pop

#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma push
#pragma use_lmw_stmw on

#pragma pop

void fn_80283D04(void *);
void fn_800B9CD8(void);
s32 fn_80283C94(void *);
void fn_800B3EF8(void *);
void fn_8027B790(void *);
extern u8 lbl_802F3898[];

void fn_80283750(Fn80283750Struct *arg0, s16 **arg1, s32 *arg2, s32 arg3, s32 *arg4);

u32 fn_80276AB8(u8 *);
void fn_80283F38(s32, void *);
extern s32 lbl_802F3860;

s32 fn_800BD810(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void *memcpy(void *, const void *, u32);

void* memmove(void*, const void*, u32);
void fn_8027ADB0(StreamState*, s32, s32);

void fn_8027AE40(s32 arg0, void *arg1);
#pragma push
#pragma peephole off

#pragma pop

#pragma push
#pragma scheduling off

#pragma pop

void fn_8027B168(void *);
void fn_800BD474(void *);
int OSDisableInterrupts();
int OSRestoreInterrupts();
#pragma push
#pragma use_lmw_stmw on

extern void (*lbl_803590CC)(void *);
extern u32 lbl_803018F8[];
extern u8 *lbl_803018FC[];
u8 *fn_8027B6D4(u32);
extern u8 *lbl_80301900[];
void fn_800B443C(void *, void *);
extern void *lbl_80359530[];

#pragma push
#pragma opt_unroll_loops off

#pragma pop

#pragma push
#pragma opt_unroll_loops off

extern u8 lbl_80301920[];
void fn_8027BFB8(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *);
extern u32 lbl_80300460[];
#pragma push
#pragma opt_unroll_loops off

#pragma pop

#pragma push
#pragma opt_unroll_loops off

#pragma push
#pragma peephole off

#pragma pop

#pragma pop

#pragma push
#pragma optimize_for_size off

#pragma push
#pragma peephole off

#pragma pop

#pragma pop
extern u8 *lbl_80300860[6];

#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma push
#pragma optimization_level 1

#pragma pop
extern void fn_8027C408();
#pragma push
#pragma use_lmw_stmw on

extern void fn_8027C408(void);
extern f64 lbl_802AAB60;
extern f64 lbl_80301C18[];

#pragma pop
extern u8 lbl_803019A0[];

s32 fn_802830B4(s32, f32, s32, s32, s32, s32, s16 *, s32, s32, s32);

void fn_8028391C(s32 **list, s32 *item);
#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma push
#pragma use_lmw_stmw on

#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma pop

void fn_80283FE4(u8 *arg0);

#pragma push
#pragma optimize_for_size on

#pragma pop
void fn_800B9CD8(void);
s32 fn_80283DFC(s32, void *);

#pragma push
#pragma inline off
#pragma optimize_for_size on
#pragma use_lmw_stmw on
#pragma scheduling off

extern void fn_80283D04(void *);
#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on

u8 *fn_80285E24(u8 *dst0, u8 *dst1, u32 w, u32 h, u32 stride, u8 *src, s32 arg6, s32 arg7, s32 mode, s32 arg9, u32 flags);

__declspec(section ".data") extern s32 lbl_80301D30;
__declspec(section ".data") extern u32 lbl_80301D20;
__declspec(section ".data") extern s32 lbl_80301D24;
__declspec(section ".data") extern u8 **lbl_80301D28;
__declspec(section ".data") extern u32 *lbl_80301D2C;

#pragma push
#pragma use_lmw_stmw on

#pragma pop

#pragma push
#pragma dont_inline off
#pragma optimize_for_size off
#pragma scheduling on

#pragma optimize_for_size on

#pragma optimize_for_size off

#pragma optimize_for_size off
#pragma scheduling on

void fn_8028BA78(s32 nw, s32 *ip, f32 *w);
void fn_8028BCC0(s32 arg0, void *arg1, f32 *arg2);
void fn_8028BDF4(s32 n, f32 *a, s32 *ip, s32 nw, f32 *w);
void fn_8028BF5C(s32 n, f32 *a, s32 *ip, s32 nw, f32 *w);
void fn_8028F7D8(s32 n, f32 *a, s32 nc, f32 *c);
void fn_8028F890(s32 n, f32 *a, s32 nc, f32 *c);
extern f32 lbl_802AB240;

extern float atanf(float);
extern float cosf(float);
extern float sinf(float);
extern float lbl_802AB264;
extern float lbl_802AB270;
extern double lbl_802AB278;

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

#pragma push
#pragma opt_unroll_loops off
#pragma use_lmw_stmw on

#pragma pop

void fn_8028DEFC(s32 n, f32 *a, f32 *w);
#pragma push
#pragma optimize_for_size on
#pragma scheduling on

#pragma pop
void fn_8028E290(s32 n, f32 *a, f32 *w);
void fn_8028DC94(s32 n, f32 *a, s32 nw, f32 *w);
#pragma push
#pragma scheduling off

#pragma push
#pragma scheduling on
#pragma optimization_level 3
#pragma use_lmw_stmw on

#pragma pop

#pragma pop
extern f32 lbl_802AB290;
extern f32 lbl_802AB294;
extern f32 lbl_802AD300[][64];
void fn_8028F9D8(s32 n, f32 *a, s32 nc, f32 *c);

#pragma push
#pragma opt_unroll_loops off

#pragma pop

#pragma push
#pragma opt_unroll_loops off

#pragma pop
void fn_8028ED28(f32 *, f32 *);
void fn_8028F484(f32 *, f32 *);

#pragma push
#pragma use_lmw_stmw on

#pragma pop

asm void fn_80274970(s32 arg0) {
    nofralloc
    rlwinm r0, r3, 0, 14, 19
    tlbsync
    tlbie r0
    blr
}

asm void fn_80274D1C(void) {
    nofralloc
    li r3, 0
    tlbsync
    li r0, 8
    mtctr r0
loop:
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    tlbie r3
    addi r3, r3, 0x1000
    bdnz loop
    blr
}

asm int fn_80274DC8() {
    nofralloc
    mtsrr1 r3
    lis r5, fn_80274DE0@ha
    addi r5, r5, fn_80274DE0@l
    clrlwi r5, r5, 1
    mtsrr0 r5
    rfi
}

void fn_80274DE0(void);
asm void fn_80274DE0(void) {
    nofralloc
    sync
    mtsdr1 r4
    sync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    lis r5, fn_80274DE0+40@ha
    addi r5, r5, fn_80274DE0+40@l
    mtsrr0 r5
    rfi

    nop
}

extern u32 lbl_8035B878, lbl_8035B88C, lbl_8035B890;
asm void fn_80274D74(void) {
    nofralloc
    stwu r1, -16(r1)
    mflr r0
    li r3, 0
    stw r0, 20(r1)
    mfsr r0, 7
    mtsr 7, r3
    stw r0, lbl_8035B88C
    mfmsr r3
    mfsdr1 r4
    lwz r0, lbl_8035B878
    clrlwi r5, r4, 16
    stw r4, lbl_8035B890
    rlwinm r0, r0, 0, 1, 15
    rlwinm r3, r3, 0, 28, 25
    add r4, r5, r0
    li r5, 0
    bl fn_80274DC8
    lwz r0, 20(r1)
    mtlr r0
    addi r1, r1, 16
    blr
}

asm void fn_80274F8C(void) {
    nofralloc
    mtspr 272,r4
    mtspr 273,r5
    mtspr 274,r6
    mfcr r4
    mtspr 275,r4
    mfdar r5
    li r6,126
    slwi r6,r6,24
    cmplw r5,r6
    blt L_1254
    mfdar r5
    li r6,128
    slwi r6,r6,24
    cmplw r5,r6
    bge L_1254
    mfdsisr r5
    rlwinm r6,r5,0,1,1
    cmplwi r6,0
    beq L_1254
    mfspr r4,275
    mtcr r4
    mfspr r4,272
    mfspr r5,273
    mfspr r6,274
    mtspr 272,r4
    lwz r4,192(r0)
    stw r3,12(r4)
    mfspr r3,272
    stw r3,16(r4)
    stw r5,20(r4)
    lhz r3,418(r4)
    ori r3,r3,2
    sth r3,418(r4)
    mfcr r3
    stw r3,128(r4)
    mflr r3
    stw r3,132(r4)
    mfctr r3
    stw r3,136(r4)
    mfxer r3
    stw r3,140(r4)
    mfsrr0 r3
    stw r3,408(r4)
    mfsrr1 r3
    stw r3,412(r4)
    mr r5,r3
    mfmsr r3
    ori r3,r3,48
    mtsrr1 r3
    lwz r3,212(r0)
    lis r5,fn_80274F8C+244@ha
    addi r5,r5,fn_80274F8C+244@l
    mtsrr0 r5
    rfi
L_1254:
    mfspr r4,275
    mtcr r4
    mfspr r4,272
    mfspr r5,273
    mfspr r6,274
    nop
    nop
    stw r0,0(r3)
    stw r1,4(r3)
    stw r2,8(r3)
    stmw r6,24(r3)
    mfspr r0,913
    stw r0,424(r3)
    mfspr r0,914
    stw r0,428(r3)
    mfspr r0,915
    stw r0,432(r3)
    mfspr r0,916
    stw r0,436(r3)
    mfspr r0,917
    stw r0,440(r3)
    mfspr r0,918
    stw r0,444(r3)
    mfspr r0,919
    stw r0,448(r3)
    mfdar r4
    b fn_802750D0
}

asm void fn_80275134(void) {
    nofralloc
    mtspr 272,r4
    mtspr 273,r5
    mtspr 274,r6
    mfcr r4
    mtspr 275,r4
    mfdar r5
    li r6,126
    slwi r6,r6,24
    cmplw r5,r6
    blt L_13FC
    mfdar r5
    li r6,128
    slwi r6,r6,24
    cmplw r5,r6
    bge L_13FC
    mfsrr1 r5
    rlwinm r6,r5,0,1,1
    cmplwi r6,0
    beq L_13FC
    mfspr r4,275
    mtcr r4
    mfspr r4,272
    mfspr r5,273
    mfspr r6,274
    mtspr 272,r4
    lwz r4,192(r0)
    stw r3,12(r4)
    mfspr r3,272
    stw r3,16(r4)
    stw r5,20(r4)
    lhz r3,418(r4)
    ori r3,r3,2
    sth r3,418(r4)
    mfcr r3
    stw r3,128(r4)
    mflr r3
    stw r3,132(r4)
    mfctr r3
    stw r3,136(r4)
    mfxer r3
    stw r3,140(r4)
    mfsrr0 r3
    stw r3,408(r4)
    mfsrr1 r3
    stw r3,412(r4)
    mr r5,r3
    mfmsr r3
    ori r3,r3,48
    mtsrr1 r3
    lwz r3,212(r0)
    lis r5,fn_80275134+244@ha
    addi r5,r5,fn_80275134+244@l
    mtsrr0 r5
    rfi
L_13FC:
    mfspr r4,275
    mtcr r4
    mfspr r4,272
    mfspr r5,273
    mfspr r6,274
    nop
    nop
    stw r0,0(r3)
    stw r1,4(r3)
    stw r2,8(r3)
    stmw r6,24(r3)
    mfspr r0,913
    stw r0,424(r3)
    mfspr r0,914
    stw r0,428(r3)
    mfspr r0,915
    stw r0,432(r3)
    mfspr r0,916
    stw r0,436(r3)
    mfspr r0,917
    stw r0,440(r3)
    mfspr r0,918
    stw r0,444(r3)
    mfspr r0,919
    stw r0,448(r3)
    mfdar r4
    b fn_80275278
}


void fn_802747D0(u32 arg0, u32 arg1, s32 arg2) {
    u32 *p = (u32 *)fn_80274D04(arg0);
    p[0] = ((arg0 & 0x0FC00000) >> 22) | 0x80000000;
    p[1] = arg1 & 0x0FFFF000;
    fn_800B48F4(p, 8);
    fn_80274990(arg2, arg0);
}


void fn_802745BC(void) {
    extern u32 *lbl_8035B86C;
    u8 *lo;
    u32 i;
    lo = OSGetArenaLo();
    lbl_8035B86C = (u32 *)lo;
    OSSetArenaLo((u8 *)lbl_8035B86C + 0x8000);
    for (i = 0; i < 0x8000; i += 4) {
        *(u32 *)((u8 *)lbl_8035B86C + i) = 0;
    }
}
