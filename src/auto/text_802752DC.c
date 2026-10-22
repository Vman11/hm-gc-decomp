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

void fn_8028C7F0(f32 *a);
void fn_8028C998(f32 *a);
void fn_8028F720(f32 *a);
s32 fn_8027AA78(u8 *b, s32 on);
void fn_80278F54(u8 *b);
void *memcpy_np() asm("memcpy");
static inline u32 cntlzw_inline(u32 x) {
    u32 r;
    asm("cntlzw %0,%1" : "=r"(r) : "r"(x));
    return r;
}

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
        s = cntlzw_inline(d);
        return (lo >> (31 - s)) | (hi << (s + 1));
    }
    inv = 0xFFFFFFFF / d;
    d16 = (d + 0xFFFF) >> 16;
    q = 0;
    if (d16 != 0) {
        s = cntlzw_inline(hi);
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


u32 fn_80275578(u32 hi, u32 lo, u32 d) {
    u64 n;
    u32 inv;
    u32 d16;
    u32 q;
    s32 s;
    s32 sh;
    s32 mask;

    if ((d & (d - 1)) == 0) {
        s = cntlzw_inline(d);
        return (lo >> (31 - s)) | (hi << (s + 1));
    }
    inv = 0xFFFFFFFF / d;
    d16 = (d + 0xFFFF) >> 16;
    q = 0;
    n = ((u64)hi << 32) | lo;
    if (d16 != 0) {
        s = cntlzw_inline(hi);
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

void fn_802756B8(void *arg0, int arg1, int arg2, int arg3) {
    u8 *p = arg0;
    s16 cmd[8];
    u32 start;
    u32 end;
    u32 pos;
    s32 dev;

    cmd[0] = 1;
    cmd[1] = (arg1 == 0x10) ? 10 : 25;
    start = *(u32 *)(p + 0x58) >> *(u32 *)(p + 0x60);
    end = ((*(u32 *)(p + 0x58) + *(u32 *)(p + 0x64)) >> *(u32 *)(p + 0x60)) - 1;
    if (arg2 == 0) {
        pos = *(u32 *)(*(u8 **)(p + 0x50) + 0x1B2);
    } else {
        pos = start;
    }
    cmd[2] = start >> 16;
    cmd[3] = start;
    cmd[4] = end >> 16;
    cmd[5] = end;
    cmd[6] = pos >> 16;
    cmd[7] = pos;
    fn_800C9B74(*(void **)(p + 0x50), cmd);
    dev = *(s32 *)(p + 0x54);
    if (dev != 0) {
        start = *(u32 *)(p + 0x5C) >> *(u32 *)(p + 0x60);
        end = ((*(u32 *)(p + 0x5C) + *(u32 *)(p + 0x64)) >> *(u32 *)(p + 0x60)) - 1;
        pos = start;
        if (arg2 == 0) {
            pos = *(u32 *)((u8 *)dev + 0x1B2);
        }
        cmd[2] = start >> 16;
        cmd[3] = start;
        cmd[4] = end >> 16;
        cmd[5] = end;
        cmd[6] = pos >> 16;
        cmd[7] = pos;
        fn_800C9B74((void *)dev, cmd);
    }
}

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

s32 fn_80275DD8(void *arg0, u32 size, void *cb) {
    StreamBuf *s = arg0;
    u32 len;

    len = (size / s->unkE0) * s->unkE0;
    if (s->unkF4 + len > s->unkDC) {
        len = s->unkDC - s->unkF4;
    }
    if (s->unkCC != 0) {
        DCFlushRangeNoSync((void *)(s->unkE8 + s->unkF4), len);
    }
    DCFlushRangeNoSync((void *)(s->unkE4 + s->unkF4), len);
    fn_800B2EA8();
    if (s->unkCC != 0) {
        fn_800C6D6C(&s->req2, 0, 0, 1, s->unkE8 + s->unkF4, s->unkD4 + s->unkF4, len, 0);
    }
    s->req.owner = s;
    fn_800C6D6C(&s->req, (u32)s, 0, 1, s->unkE4 + s->unkF4, s->unkD0 + s->unkF4, len, cb);
    s->unkF4 += len;
    if (s->unkF4 >= s->unkDC) {
        s->unkF4 -= s->unkDC;
    }
    return len;
}

void fn_80275F08(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 4);
    *(s32 *)(p + 0xC4) = 0;
}

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

s32 fn_802762D8(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = *(s32 *)(arg0 + 0xEC);
    *arg2 = *(s32 *)(arg0 + 0xE0) * *(s32 *)(arg0 + 0x74);
    return 1;
}

s32 fn_802762FC(u8 *arg0, u32 arg1) {
    u32 pos = *(u32 *)(arg0 + 0xF0);
    u32 end = pos + arg1;
    if (end >= *(u32 *)(arg0 + 0xDC)) {
        memcpy_np(*(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xEC), *(u32 *)(arg0 + 0xDC) - pos);
        memcpy_np(*(u8 **)(arg0 + 0xE4), *(u8 **)(arg0 + 0xEC) + *(u32 *)(arg0 + 0xDC) - *(u32 *)(arg0 + 0xF0), end - *(u32 *)(arg0 + 0xDC));
        *(u32 *)(arg0 + 0xF0) = end - *(u32 *)(arg0 + 0xDC);
    } else {
        memcpy_np(*(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xEC), arg1);
        *(u32 *)(arg0 + 0xF0) = end;
    }
    *(s32 *)(arg0 + 0x100) += arg1;
    fn_80275FC0(arg0);
    return 1;
}

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

void fn_802767C0(void) { fn_80275C64(); }

s32 fn_802767E0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    void *f;
    s32 a, b, c;

    *(s32 *)(arg0 + 0x6C) = arg1;
    *(s32 *)(arg0 + 0x78) = 0x7FFF;
    *(s32 *)(arg0 + 0x80) = 0x67F8;
    *(s32 *)(arg0 + 0xFC) = 0;
    *(s32 *)(arg0 + 0x60) = 1;
    *(void **)(arg0 + 0x0) = fn_802760B4;
    *(void **)(arg0 + 0x4) = fn_802762D8;
    *(s32 *)(arg0 + 0x5C) = 0;
    *(s32 *)(arg0 + 0x70) = arg2;
    *(s32 *)(arg0 + 0x74) = arg3;
    *(s32 *)(arg0 + 0x7C) = 0x67F8;
    if (arg3 == 1) {
        f = fn_802762FC;
    } else if (arg2 == 8) {
        f = fn_80276488;
    } else {
        f = fn_802763BC;
    }
    *(void **)(arg0 + 0x8) = f;
    *(void **)(arg0 + 0xC) = fn_80276554;
    *(void **)(arg0 + 0x10) = fn_802765E8;
    *(void **)(arg0 + 0x14) = fn_80276758;
    *(void **)(arg0 + 0x18) = fn_802766C8;
    *(void **)(arg0 + 0x1C) = fn_802767C0;
    if (arg5 != NULL) {
        c = *(s32 *)(arg5 + 0x18);
        a = *(s32 *)(arg5 + 0x8);
        b = *(s32 *)(arg5 + 0x14);
    } else {
        a = 0;
        b = 0;
        c = 0;
    }
    if (fn_802758B4(arg0, a, b, c) == 0) {
        return 0;
    }
    *(s32 *)(arg0 + 0x64) = 0;
    return 1;
}


void fn_802769B8(s32 arg0) {
    fn_800EB764(lbl_80357FC0, arg0);
}

u8 *fn_802769E4(void) {
    return lbl_80357FC0;
}

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

void fn_80276E80(u8 *arg0, s32 arg1) {
    u32 *offsets;
    if (arg1 != 0) {
        arg1--;
    }
    *(s32 *)(arg0 + 0x308) = 0;
    if (*(s32 *)(arg0 + 0x2F8) != 0) {
        fn_80276B84(arg0);
    }
    *(s32 *)(arg0 + 0x10) = *(s32 *)(arg0 + 0xC);
    if (arg1 == 0) {
        s32 now = fn_802753F0();
        if (*(s32 *)(arg0 + 0x2F0) == 0) {
            *(s32 *)(arg0 + 0x2F0) = now;
        }
        if ((u32)(now - *(s32 *)(arg0 + 0x2F0)) > 300000) {
            *(s32 *)(arg0 + 0x2F0) = now;
            *(s32 *)(arg0 + 0x2F4) = 1;
        }
    }
    if (*(s32 *)(arg0 + 0x108) != 0) {
        offsets = *(u32 **)(arg0 + 0x10C);
        *(s32 *)(arg0 + 0x104) = *(s32 *)(arg0 + 0x108) + ((*(u32 *)((arg1 << 2) + (u8 *)offsets) & ~1) - (offsets[0] & ~1));
    } else {
        offsets = *(u32 **)(arg0 + 0x10C);
        (*(void (**)(u8 *, s32, u32, s32, u32))(arg0 + 0x114))(arg0 + 0x110, arg1, offsets[arg1] & ~1, *(s32 *)(arg0 + 0x104), (offsets[arg1 + 1] & ~1) - (offsets[arg1] & ~1));
    }
    if (*(s32 *)(arg0 + 0x2F8) != 0) {
        fn_80276B84(arg0);
    }
    *(s32 *)(arg0 + 0xC) = arg1 + 1;
}

void fn_80276FA0(s32 arg0, s32 arg1) {
    lbl_802F3864[0] = arg0;
    lbl_803580C0[0] = arg1;
}

void fn_80276FB4(s32 arg0) {
    lbl_802F3868[0] = arg0;
}


void fn_80277020(s32 n, u32 *arr, s32 k, s32 *outIdx, s32 *outFlag) {
    s32 i;
    u32 max = 0;
    s32 idx = 0;
    s32 flag = 1;

    for (i = 0; i < n - k; i++) {
        u32 d = arr[i + k] - arr[i];
        if (d > max) {
            max = d;
            idx = i;
        }
    }
    if (max == 0) {
        fn_802752DC(arr[n] - arr[0], k, n);
    }
    for (i = 0; i < n; i++) {
        if (!(arr[i] & 1)) {
            flag = 0;
            break;
        }
    }
    *outFlag = flag;
    *outIdx = idx;
}


void fn_80277198(void) { fn_8028405C(); }


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


u32 fn_80279100(u8 *p, u32 pos, u32 flags) {
    s32 i;
    u32 j;

    if (p == NULL) {
        return 0;
    }
    if (!(flags & 0x80) && ((*(u32 **)(p + 0x10C))[pos - 1] & 1)) {
        return pos;
    }
    switch (flags & 0x7F) {
    case 0:
        for (i = pos - 2; i > 0; i--) {
            if ((*(u32 **)(p + 0x10C))[i] & 1) {
                break;
            }
        }
        return i + 1;
    case 1:
        for (j = pos; j < *(u32 *)(p + 8);) {
            if ((*(u32 **)(p + 0x10C))[j++] & 1) {
                return j;
            }
        }
        break;
    case 2:
        j = pos;
        for (i = pos - 2;; i--) {
            if (i >= 0) {
                if ((*(u32 **)(p + 0x10C))[i] & 1) {
                    return i + 1;
                }
                if (j < *(u32 *)(p + 8) && ((*(u32 **)(p + 0x10C))[j++] & 1)) {
                    return j;
                }
            } else {
                if (j >= *(u32 *)(p + 8)) {
                    return 0;
                }
                if ((*(u32 **)(p + 0x10C))[j++] & 1) {
                    return j;
                }
            }
        }
    }
    return 0;
}


void fn_80279948(u8 *arg0, s32 *arg1) {
    s32 now;
    u32 len;

    if (arg0 != NULL && arg1 != NULL) {
        now = fn_802753F0();
        fn_80278F28(arg0, now);
        fn_8027964C(arg0, now);
        arg1[5] = *(s32 *)(arg0 + 0x14);
        arg1[6] = *(s32 *)(arg0 + 0x18);
        arg1[11] = *(s32 *)(arg0 + 0x30C);
        arg1[12] = *(s32 *)(arg0 + 0x2FC);
        arg1[3] = *(s32 *)(arg0 + 0x2BC);
        arg1[4] = *(s32 *)(arg0 + 0x2C0);
        arg1[8] = *(s32 *)(arg0 + 0x8);
        arg1[9] = *(s32 *)(arg0 + 0x270);
        arg1[2] = fn_802753F0() - *(s32 *)(arg0 + 0x274);
        arg1[7] = *(s32 *)(arg0 + 0x2B8);
        arg1[16] = *(s32 *)(arg0 + 0x2B0);
        arg1[15] = *(s32 *)(arg0 + 0x2AC);
        arg1[13] = *(s32 *)(arg0 + 0x2B4);
        arg1[26] += *(s32 *)(arg0 + 0x2A8);
        arg1[27] = *(s32 *)(arg0 + 0x250);
        arg1[19] = fn_802752DC(*(u32 *)(arg0 + 0x134), 1000, *(u32 *)(arg0 + 0x13C) + 1);
        arg1[14] = *(s32 *)(arg0 + 0x140);
        arg1[17] = *(s32 *)(arg0 + 0x144);
        arg1[18] = *(s32 *)(arg0 + 0x148);
        len = *(u32 *)(arg0 + 0x28) - (**(u32 **)(arg0 + 0x10C) & ~1);
        arg1[24] = fn_802752DC(len, *(u32 *)(arg0 + 0x2BC), *(u32 *)(arg0 + 0x2C0) * *(u32 *)(arg0 + 0x8));
        arg1[25] = len / *(u32 *)(arg0 + 0x8);
        arg1[29] = *(s32 *)(arg0 + 0xF4);
        arg1[30] = *(s32 *)(arg0 + 0xF8) + 1;
        arg1[0] = *(s32 *)(arg0 + 0x0);
        arg1[1] = *(s32 *)(arg0 + 0x4);
        arg1[20] = *(s32 *)(arg0 + 0x290);
        arg1[21] = *(s32 *)(arg0 + 0x298);
        arg1[22] = *(s32 *)(arg0 + 0x294);
        arg1[23] = *(s32 *)(arg0 + 0x29C);
        arg1[27] = *(s32 *)(arg0 + 0x14C);
        arg1[28] = *(s32 *)(arg0 + 0x150);
    }
}


s32 fn_8027A4E8(u8 *arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < *(s32 *)(arg0 + 0x2F8); i++) {
        if ((*(s32 **)(arg0 + 0x268))[(*(s32 **)(arg0 + 0x25C))[i]] == arg1) {
            return i;
        }
    }
    return -1;
}

u8 *fn_8027A710(void) {
    return lbl_802F3898;
}



s32 fn_8027A908(void *arg0, s8 *arg1) {
    s32 *sp10;
    s32 spC;
    s16 *sp8;
    s32 i;
    s32 size;
    s32 remaining;
    s32 total;
    u32 j;
    s16 *src;
    s8 *dst;

    if (arg0 != NULL) {
        sp10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 **, 0x104);
        for (i = 0; i < M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xF0); i++) {
            size = *sp10++;
            if (i == M2C_FIELD(arg0, s32 *, 0x18) && size != 0) {
                remaining = *sp10++;
                total = 0;
                while (remaining != 0) {
                    fn_80283750(M2C_FIELD(arg0, Fn80283750Struct **, 0x14), &sp8, &spC, (s32)sp10, (s32 *)&sp10);
                    if ((u32)spC > (u32)remaining) {
                        spC = remaining;
                    }
                    remaining -= spC;
                    if (M2C_FIELD(arg0, s32 *, 4) == 0x10) {
                        memcpy_np(arg1, sp8, spC);
                    } else {
                        spC = (u32)spC >> 1;
                        dst = arg1;
                        src = sp8;
                        for (j = 0; j < (u32)spC; j++) {
                            *dst++ = (*src++ >> 8) + 0x80;
                        }
                    }
                    total += spC;
                    arg1 += spC;
                }
                return total;
            }
            sp10 = (s32 *)((u8 *)sp10 + size);
        }
    }
    return 0;
}




void fn_8027AE40(s32 arg0, void *arg1) {
    M2C_UNK fn_8027ADB0(void *, s32, s32);
    M2C_UNK memmove(u32, s32, s32);
    s32 temp_r10;
    s32 temp_r11;
    s32 temp_r3_2;
    s32 temp_r9;
    s32 var_r30;
    u32 temp_r3;
    u32 temp_r9_2;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg1, void **, 0x7C);
    var_r30 = arg0;
    temp_r10 = M2C_FIELD(temp_r31, s32 *, 0xBC);
    if (temp_r10 == 0) {
        temp_r11 = M2C_FIELD(temp_r31, s32 *, 0x8C);
        if ((var_r30 != 0x1000) && ((s32) ((M2C_FIELD(temp_r31, s32 *, 0xB0) - M2C_FIELD(temp_r31, s32 *, 0x88)) + temp_r11) != var_r30)) {
            M2C_FIELD(temp_r31, s32 *, 0x20) = temp_r10;
            M2C_FIELD(temp_r31, s32 *, 0x1C) = 1;
            return;
        }
        if (temp_r11 != 0) {
            temp_r3 = M2C_FIELD(temp_r31, u32 *, 0xA4);
            memmove(temp_r3, temp_r3 + temp_r11, M2C_FIELD(temp_r31, s32 *, 0xB0) - M2C_FIELD(temp_r31, s32 *, 0x88));
            temp_r9 = M2C_FIELD(temp_r31, s32 *, 0x8C);
            M2C_FIELD(temp_r31, s32 *, 0x8C) = 0;
            var_r30 -= temp_r9;
        }
        M2C_FIELD(temp_r31, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x24) + var_r30);
        temp_r9_2 = M2C_FIELD(temp_r31, u32 *, 0xA4) + var_r30;
        M2C_FIELD(temp_r31, u32 *, 0xA4) = temp_r9_2;
        M2C_FIELD(temp_r31, s32 *, 0x88) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x88) + var_r30);
        if (temp_r9_2 >= (u32) M2C_FIELD(temp_r31, u32 *, 0xA0)) {
            M2C_FIELD(temp_r31, u32 *, 0xA4) = (u32) M2C_FIELD(temp_r31, u32 *, 0x9C);
        }
        M2C_FIELD(temp_r31, s32 *, 0x98) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x98) - var_r30);
        M2C_FIELD(temp_r31, u32 *, 0x48) = (u32) (M2C_FIELD(temp_r31, u32 *, 0x48) + var_r30);
        if ((u32) M2C_FIELD(temp_r31, u32 *, 0x48) > (u32) M2C_FIELD(temp_r31, u32 *, 0x40)) {
            M2C_FIELD(temp_r31, u32 *, 0x40) = (u32) M2C_FIELD(temp_r31, u32 *, 0x48);
        }
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0xB4) != 0) {
            fn_8027ADB0(temp_r31, var_r30, M2C_FIELD(temp_r31, s32 *, 0xC4));
        }
        temp_r3_2 = fn_802753F0() - M2C_FIELD(temp_r31, s32 *, 0xC4);
        M2C_FIELD(temp_r31, s32 *, 0xC4) = temp_r3_2;
        M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x2C) + temp_r3_2);
        if (((s32) M2C_FIELD(temp_r31, s32 *, 0xC0) != 0) || ((s32) M2C_FIELD(temp_r31, s32 *, 0x28) != 0)) {
            M2C_FIELD(temp_r31, s32 *, 0x38) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x38) + temp_r3_2);
        } else {
            M2C_FIELD(temp_r31, s32 *, 0x34) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x34) + temp_r3_2);
        }
        M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
        fn_8027AFC0(temp_r31);
    }
}

void fn_8027AFC0(void *arg0) {
    u8 *p = arg0;
    s32 status = DVDGetDriveStatus();
    s32 len = *(s32 *)(p + 0xB0) - *(s32 *)(p + 0x88);
    switch (status) {
    case -1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
        *(s32 *)(p + 0x1C) = 1;
        return;
    }
    if (*(s32 *)(p + 0xBC) == 0 && (status == 0 || status == 10)) {
        if (*(u32 *)(p + 0x98) > 0xFFF && len != 0) {
            *(s32 *)(p + 0xC0) = *(s32 *)(p + 0x28);
            *(s32 *)(p + 0xC4) = fn_802753F0();
            *(s32 *)(p + 0x20) = 1;
            if ((u32)len > 0x1000) {
                len = 0x1000;
            } else if (len & 0x1F) {
                s32 pad = -len & 0x1F;
                *(s32 *)(p + 0x8C) = pad;
                len += pad;
            }
            fn_800BD810(p + 0x4C, *(s32 *)(p + 0xA4), len,
                        *(s32 *)(p + 0x88) - *(s32 *)(p + 0x8C) + *(s32 *)(p + 0xAC),
                        (s32)fn_8027AE40, 0);
        } else {
            *(s32 *)(p + 0x44) = *(s32 *)(p + 0x48);
        }
    }
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

void fn_8027B168(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0xBC) = 1;
    fn_800BFE7C((u8 *)arg0 + 0x4C);
    while ((u32)(DVDGetDriveStatus() - 1) <= 1U) {
    }
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0xBC) = 0;
}

u32 fn_8027B4CC(void *arg0, void *arg1) {
    return ((u32)arg1 + 0xFFF) & ~0xFFF;
}

void fn_8027B54C(void *arg0) {
 fn_8027B168(arg0);
 if (*(s32 *)((u8 *)arg0+0xA8)==0) fn_800BD474((u8 *)arg0+0x4C);
}

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
        lbl_803018FC[0] = 0;
        lbl_803018F8[0] = 0;
    }
}



s32 fn_8027D7BC(s32 count,s32 offset) {
extern u32 lbl_80300460[];
u32 *tbl = lbl_80300460;
u32 n=count;
do {
u8 index=*lbl_80300860[2];
u32 v;
lbl_80300860[2]++;
v=tbl[index];
((u32 *)lbl_80300860[0])[0]=v;
((u32 *)lbl_80300860[0])[1]=v;
index=*lbl_80300860[3];
lbl_80300860[3]++;
v=tbl[index];
((u32 *)lbl_80300860[1])[0]=v;
((u32 *)lbl_80300860[1])[1]=v;
lbl_80300860[0]+=8;
lbl_80300860[1]+=8;
} while(--n != 0);
return offset+count;
}


s32 fn_8027D8A8(s32 count,s32 offset) {
extern u32 lbl_80300460[];
u32 *tbl = lbl_80300460;
u32 n=count;
do {
u8 index=*lbl_80300860[2];
u32 v;
lbl_80300860[2]++;
v=tbl[index];
*(u32 *)lbl_80300860[0]=v;
*(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
index=*lbl_80300860[3];
lbl_80300860[3]++;
v=tbl[index];
*(u32 *)lbl_80300860[1]=v;
*(u32 *)(lbl_80300860[1]+(s32)lbl_80300860[17])=v;
lbl_80300860[0]+=4;
lbl_80300860[1]+=4;
} while(--n != 0);
return offset+count;
}


s32 fn_8027D9B4(s32 count,s32 offset) {
extern u32 lbl_80300460[];
u32 *tbl = lbl_80300460;
u32 n=count;
do {
u8 index=*lbl_80300860[2];
u32 v;
lbl_80300860[2]++;
v=tbl[index];
((u32 *)lbl_80300860[0])[0]=v;
((u32 *)lbl_80300860[0])[1]=v;
*(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
((u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
index=*lbl_80300860[3];
lbl_80300860[3]++;
v=tbl[index];
((u32 *)lbl_80300860[1])[0]=v;
((u32 *)lbl_80300860[1])[1]=v;
*(u32 *)(lbl_80300860[1]+(s32)lbl_80300860[17])=v;
((u32 *)(lbl_80300860[1]+(s32)lbl_80300860[17]))[1]=v;
lbl_80300860[0]+=8;
lbl_80300860[1]+=8;
} while(--n != 0);
return offset+count;
}


s32 fn_8027DB94(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u32 *dst;
        u8 *v;
        u8 *y;
        u32 *tbl;
        u32 c;
        s32 r, g, b;
        u = lbl_80300860[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        tbl = lbl_802F7AE0[*y++];
        lbl_80300860[2] = y;
        c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
        dst[0] = c;
        ((u32 *)lbl_80300860[0])[1] = c;
        tbl = lbl_802F7AE0[*lbl_80300860[3]++];
        c = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16);
        ((u32 *)lbl_80300860[1])[0] = c;
        ((u32 *)lbl_80300860[1])[1] = c;
        lbl_80300860[0] += 8;
        lbl_80300860[1] += 8;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}


s32 fn_8027DE34(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u32 *dst;
        u8 *v;
        u8 *y;
        u32 *tbl;
        u32 c;
        s32 r, g, b;
        u = lbl_80300860[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        tbl = lbl_802F7AE0[*y++];
        lbl_80300860[2] = y;
        c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
        *dst = c;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        tbl = lbl_802F7AE0[*lbl_80300860[3]++];
        c = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16);
        *(u32 *)lbl_80300860[1] = c;
        *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_8027E0F4(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u32 *dst;
        u8 *v;
        u8 *y;
        u32 *tbl;
        u32 c;
        s32 r, g, b;
        u = lbl_80300860[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        tbl = lbl_802F7AE0[*y++];
        lbl_80300860[2] = y;
        c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
        dst[0] = c;
        ((u32 *)lbl_80300860[0])[1] = c;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
        tbl = lbl_802F7AE0[*lbl_80300860[3]++];
        c = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16);
        ((u32 *)lbl_80300860[1])[0] = c;
        ((u32 *)lbl_80300860[1])[1] = c;
        *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
        ((u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = c;
        lbl_80300860[0] += 8;
        lbl_80300860[1] += 8;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}




void fn_8027E5FC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11) {
extern u8 lbl_80301920[];
extern void fn_8027BFB8(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *);
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,0,lbl_80301920);
}


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






void fn_8027F738(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12) {
extern u8 lbl_803019A0[];
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a12,a11,lbl_803019A0);
}









void fn_80280860(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11) {
extern u8 lbl_80301A20[];
extern void fn_8027BFB8(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *);
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,0,lbl_80301A20);
}







void fn_80281DAC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12) {
extern u8 lbl_80301AA0[];
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a12,a11,lbl_80301AA0);
}


void fn_80281F90(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u8 *p;
        u32 *d;
        u32 a, b, ha, hb, v, w;
        count -= 2;
        p = lbl_80300860[2];
        d = (u32 *)lbl_80300860[0];
        a = p[0];
        ha = (a << 16) | 0x80008000u;
        v = a | ha;
        *d = v;
        { u8 *q = lbl_80300860[2];
        b = q[1];
        lbl_80300860[2] = q + 2; }
        hb = (b << 16) | 0x80008000u;
        v = b | hb;
        ((u32 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 8;
    } while (count >= 0);
}

s32 fn_80282000(s32 count, s32 base) {
    register s32 n = count;
    register u8 **state = lbl_80300860;
    do {
        register u32 v;
        register u32 *dst;
        register u8 *p;
        n -= 2;
        p = state[2];
        dst = (u32 *)state[0];
        v = p[0];
        v = v | ((v << 16) | 0x80000000 | 0x8000);
        dst[0] = v;
        p = state[2];
        dst = (u32 *)state[0];
        v = p[1];
        state[2] = p + 2;
        v = v | ((v << 16) | 0x80000000 | 0x8000);
        dst[1] = v;
        p = state[3];
        dst = (u32 *)state[1];
        v = p[0];
        v = v | ((v << 16) | 0x80000000 | 0x8000);
        dst[0] = v;
        p = state[3];
        dst = (u32 *)state[1];
        v = p[1];
        state[3] = p + 2;
        v = v | ((v << 16) | 0x80000000 | 0x8000);
        dst[1] = v;
        state[0] += 8;
        state[1] += 8;
    } while (n > 0);
    return base + count;
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

s32 fn_80282284(s32 count, s32 arg1) {
    s32 n = count;
    u32 a, b;
    u32 c0, c1;
    do {
        n -= 2;
        c0 = lbl_80300860[2][0];
        a = c0 | (*lbl_80300860[4] << 8);
        b = *lbl_80300860[5];
        lbl_80300860[4]++;
        lbl_80300860[5]++;
        a = a | (c0 << 16) | (b << 24);
        ((u32 *)lbl_80300860[0])[0] = a;
        c1 = lbl_80300860[2][1];
        b = (a & 0xFF00FF00) | c1 | (c1 << 16);
        ((u32 *)lbl_80300860[0])[1] = b;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = a;
        ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = b;
        c0 = lbl_80300860[3][0];
        c1 = lbl_80300860[3][1];
        a = (a & 0xFF00FF00) | c0 | (c0 << 16);
        ((u32 *)lbl_80300860[1])[0] = a;
        b = (b & 0xFF00FF00) | c1 | (c1 << 16);
        ((u32 *)lbl_80300860[1])[1] = b;
        *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = a;
        ((u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = b;
        lbl_80300860[2] += 2;
        lbl_80300860[3] += 2;
        lbl_80300860[0] += 8;
        lbl_80300860[1] += 8;
    } while (n > 0);
    return arg1 + count;
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

s32 fn_80282464(register s32 count, s32 base) {
    register u32 mask = 0xFF00FF00;
    register s32 n = count;
    do {
        u8 *u = lbl_80300860[4];
        u8 *y = lbl_80300860[2];
        u32 b = *u;
        u32 a = *y;
        u8 *d;
        u32 v;
        u++;
        d = lbl_80300860[5];
        b <<= 8;
        v = a | b;
        a <<= 16;
        v |= a;
        b = *d;
        d++;
        b <<= 24;
        lbl_80300860[5] = d;
        lbl_80300860[4] = u;
        v |= b;
        *(u32 *)lbl_80300860[0] = v;
        v &= mask;
        y = lbl_80300860[2];
        a = y[1];
        lbl_80300860[2] = y + 2;
        v |= a;
        a <<= 16;
        v |= a;
        ((u32 *)lbl_80300860[0])[1] = v;
        v &= mask;
        a = lbl_80300860[3][0];
        v |= a;
        a <<= 16;
        v |= a;
        *(u32 *)lbl_80300860[1] = v;
        v &= mask;
        y = lbl_80300860[3];
        a = y[1];
        lbl_80300860[3] = y + 2;
        v |= a;
        a <<= 16;
        v |= a;
        ((u32 *)lbl_80300860[1])[1] = v;
        lbl_80300860[0] += 8;
        lbl_80300860[1] += 8;
        n -= 2;
    } while (n > 0);
    return base + count;
}


s32 fn_802825F4(s32 count, s32 base) {
    s32 n = count;
    u32 v;
    u8 *p;
    do {
        n -= 2;
        p = lbl_80300860[2];
        v = p[0] | (*lbl_80300860[4] << 8) | (p[1] << 16) | (*lbl_80300860[5] << 24);
        lbl_80300860[4]++;
        lbl_80300860[5]++;
        lbl_80300860[2] = p + 2;
        *(u32 *)lbl_80300860[0] = v;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        p = lbl_80300860[3];
        v = (v & 0xFF00FF00) | p[0] | (p[1] << 16);
        lbl_80300860[3] = p + 2;
        *(u32 *)lbl_80300860[1] = v;
        *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (n > 0);
    return base + count;
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


s32 fn_80282838(s32 count, s32 base) {
    u32 mask = 0xFF00FF00;
    s32 n = count;
    do {
        u8 *u = lbl_80300860[4];
        u8 *y = lbl_80300860[2];
        u32 b = *u << 8;
        u8 *a = lbl_80300860[5];
        u8 *y2 = y + 2;
        u32 v = y[0];
        u32 c = y[1];
        u32 d;
        u8 *dst;
        u++;
        d = *a;
        v |= b;
        c <<= 16;
        dst = lbl_80300860[0];
        v |= c;
        d <<= 24;
        a++;
        lbl_80300860[4] = u;
        lbl_80300860[5] = a;
        v |= d;
        lbl_80300860[2] = y2;
        *(u32 *)dst = v;
        y = lbl_80300860[3];
        dst = lbl_80300860[1];
        v = (v & mask) | y[0] | (y[1] << 16);
        lbl_80300860[3] = y + 2;
        *(u32 *)dst = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        n -= 2;
    } while (n > 0);
    return base + count;
}

void fn_802829C4(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13) {
    extern void fn_8027C408(void);
    extern u8 lbl_80301920[];
    ((void (*)(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *))fn_8027C408)(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,0,lbl_80301920);
}

void fn_80282A30(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g,s32 h,s32 i,s32 j,s32 k,s32 l,s32 m,s32 n,s32 o) {
 extern void fn_8027C408(void);
 extern u8 lbl_803019A0[];
 ((void (*)(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *))fn_8027C408)(a,b,c,d,e,f,g,h,i,j,k,l,m,o,n,lbl_803019A0);
}

void fn_80282A9C(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13) {
    extern void fn_8027C408(void);
    extern u8 lbl_80301A20[];
    ((void (*)(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *))fn_8027C408)(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,0,lbl_80301A20);
}

void fn_80282B08(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g,s32 h,s32 i,s32 j,s32 k,s32 l,s32 m,s32 n,s32 o) {
 extern void fn_8027C408(void);
 extern u8 lbl_80301AA0[];
 ((void (*)(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *))fn_8027C408)(a,b,c,d,e,f,g,h,i,j,k,l,m,o,n,lbl_80301AA0);
}

void fn_80282B74(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13) {
    extern void fn_8027C408(void);
    extern u8 lbl_80301B20[];
    ((void (*)(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *))fn_8027C408)(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,0,lbl_80301B20);
}



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

void fn_80283750(Fn80283750Struct *arg0, s16 **arg1, s32 *arg2, s32 arg3, s32 *arg4) {
    s32 ret;
    u32 i;
    u32 half;
    u32 j;

    ret = fn_802830B4(arg0->unk0, arg0->unk4, arg0->unk10, arg0->unk30, arg0->unk24, arg0->unk28, arg0->unk14, arg3, arg0->unk1C, arg0->unk20);
    if (arg0->unk18 != 0) {
        arg0->unk18 = 0;
    } else {
        half = arg0->unkC >> 1;
        for (i = 0, j = half; i < half; i++, j--) {
            arg0->unk14[i] = (arg0->unk14[i] * i + arg0->unk2C[i] * j) / half;
        }
    }
    memcpy_np(arg0->unk2C, (u8 *)arg0->unk14 + (arg0->unk8 - arg0->unkC), arg0->unkC);
    if (arg2 != NULL) {
        *arg2 = arg0->unk8 - arg0->unkC;
    }
    if (arg1 != NULL) {
        *arg1 = arg0->unk14;
    }
    if (arg4 != NULL) {
        *arg4 = arg3 + ret;
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

void fn_80283984(void *arg0) {
    M2C_UNK fn_8028391C(void **, void *);
    void *sp8;
    s32 temp_r3;
    void *var_r31;
    void *var_r31_2;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 1) {
        var_r31 = M2C_FIELD(arg0, void **, 0x30);
        sp8 = NULL;
        if (var_r31 != NULL) {
loop_2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0) == 1) {
                if ((s32) M2C_FIELD(var_r31, s32 *, 0xC) == 1) {
                    temp_r3 = M2C_FIELD(var_r31, s32 (**)(void *, s32), 0x14)(var_r31, M2C_FIELD(arg0, s32 *, 0x34));
                    M2C_FIELD(var_r31, s32 *, 8) = temp_r3;
                    if (temp_r3 != 0) {
                        fn_8028391C(&sp8, var_r31);
                    }
                }
                var_r31 = M2C_FIELD(var_r31, void **, 0);
                if (var_r31 == NULL) {
                    goto block_7;
                }
                goto loop_2;
            }
        } else {
block_7:
            var_r31_2 = sp8;
            if (var_r31_2 != NULL) {
                do {
                    M2C_FIELD(var_r31_2, M2C_UNK (**)(void *, s32), 0x18)(var_r31_2, M2C_FIELD(arg0, s32 *, 0x34));
                    var_r31_2 = M2C_FIELD(var_r31_2, void **, 4);
                } while (var_r31_2 != NULL);
            }
        }
    }
}


void fn_80283B20(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    OSDisableInterrupts();
    arg1[3] = 1;
    arg1[5] = arg2;
    arg1[6] = arg3;
    arg1[4] = 0;
    arg1[0] = arg0[12];
    arg0[12] = (s32)arg1;
    arg0[14]++;
    OSRestoreInterrupts();
}



s32 fn_80283C8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_80283D04(void *arg0) {
    for (; fn_80283C94(arg0) == 0;) {
        fn_800B9CD8();
    }
}

void fn_80283E90(s32 a, void *b) {
    if (a && b && ((s32 *)b)[6] && ((s32 *)b)[5]) {
        for (; fn_80283DFC(a, b) == 0;) {
            fn_800B9CD8();
        }
    }
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


void fn_802840C0(BitStream *bs, u8 *dst, u8 *a, u8 *b, s32 n) {
    s32 nb = n;
    s32 na = n;
    u32 bit;
    u32 v;

    while (nb != 0) {
        if (bs->count != 0) {
            v = bs->bits;
            bs->count--;
            bs->bits = v >> 1;
        } else {
            v = *bs->ptr;
            bs->ptr++;
            bs->count = 31;
            bs->bits = v >> 1;
        }
        if (v & 1) {
            *dst = *b;
            nb--;
            b++;
        } else {
            *dst = *a;
            na--;
            a++;
        }
        dst++;
        if (na == 0) {
            break;
        }
    }

    if (na != 0) {
        do {
            *dst++ = *a++;
        } while (--na != 0);
        return;
    }
    while (nb != 0) {
        *dst++ = *b++;
        nb--;
    }
}

void fn_802846B0(s32 arg0, s32 arg1) {
    extern void fn_80284194(s32, s32, s32, s32);
    fn_80284194(arg1, arg0 + 0x24, arg0 + 0x20, arg0 + 0x10);
}

u32 fn_80285CE0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if (arg2 <= 8) {
        arg2 = 8;
    } else if (arg2 <= 15) {
        arg2 = 16;
    }
    return ((arg0 * arg2 >> 3) + ((arg1 >> 3) * arg3 * arg2 >> 3) + 3) & ~3;
}

void fn_80285D24(u32 *arg0, u32 arg1) {
    arg0[0] = fn_80285CE0(0x200, arg1, 4, 1);
    arg0[1] = fn_80285CE0(0x200, arg1 >> 1, 4, 1);
    arg0[2] = fn_80285CE0(0x200, arg1, 8, 0x40);
    arg0[3] = fn_80285CE0(0x200, arg1, 8, 8);
    arg0[4] = fn_80285CE0(0x200, arg1, 5, 1);
    arg0[5] = fn_80285CE0(0x200, arg1, 5, 1);
    arg0[6] = fn_80285CE0(0x200, arg1, 0xB, 1);
    arg0[7] = fn_80285CE0(0x200, arg1, 0xB, 1);
    arg0[8] = fn_80285CE0(0x200, arg1, 4, 0x30);
}


void fn_802876F8(u8 *arg0, u32 size) {
    void *memcpy();
    if (lbl_80301D30 == lbl_80301D24) {
        u8 **newPtrs = (u8 **)fn_8027B6D4(lbl_80301D30 * 16);
        u32 *newSizes = (u32 *)(newPtrs + lbl_80301D30 * 2);
        memcpy(newPtrs, lbl_80301D28, lbl_80301D30 * 4);
        memcpy(newSizes, lbl_80301D2C, lbl_80301D30 * 4);
        lbl_80301D30 += lbl_80301D30;
        if (lbl_80301D30 != 64) {
            fn_8027B790(lbl_80301D28);
        }
        lbl_80301D28 = newPtrs;
        lbl_80301D2C = newSizes;
    }
    size = (size + 31) & ~31;
    size += ((((lbl_80301D20 >> 5) & 31) - ((size >> 5) & 31) + 33) & 31) << 5;
    lbl_80301D20 += size;
    lbl_80301D2C[lbl_80301D24] = size;
    lbl_80301D28[lbl_80301D24] = arg0;
    lbl_80301D24++;
}

void fn_80287EC0(s32 count) {
    extern u32 lbl_80300460[];
    u8 *p0;
    u8 *base;
    u8 *p1;
    s32 w;
    u32 y0;
    u32 y1;
    u32 stride;
    u32 *d0;
    u32 *d1;
    u32 *s0;
    u32 *s1;
    u32 *tbl;
    p0 = lbl_80300860[0];
    base = lbl_80300860[18];
    p1 = lbl_80300860[1];
    w = (s32)lbl_80300860[17];
    y0 = (s32)(p0 - base) / w;
    y1 = (s32)(p1 - base) / w;
    lbl_80300860[0] = p0 + count * 16;
    lbl_80300860[1] = p1 + count * 16;
    stride = (w * 4 + 63) & ~63;
    s1 = (u32 *)lbl_80300860[3];
    s0 = (u32 *)lbl_80300860[2];
    tbl = lbl_80300460;
    d0 = (u32 *)(base + stride * (y0 >> 2) + (y0 & 3) * 8 + (p0 - (base + y0 * w)) * 4);
    d1 = (u32 *)(base + stride * (y1 >> 2) + (y1 & 3) * 8 + (p1 - (base + y1 * w)) * 4);
    do {
        u32 a = *s0++;
        u32 b = *s1++;
        u32 c0 = tbl[a >> 24];
        u32 c1 = tbl[(a >> 16) & 0xFF];
        u32 c2 = tbl[(a >> 8) & 0xFF];
        u32 c3 = tbl[a & 0xFF];
        d0[0] = (c0 & 0xFFFF0000) | (c1 >> 16);
        d0[8] = (c0 << 16) | (c1 & 0xFFFF);
        d0[9] = (c2 << 16) | (c3 & 0xFFFF);
        d0[1] = (c2 & 0xFFFF0000) | (c3 >> 16);
        d0 += 16;
        c0 = tbl[b >> 24];
        c1 = tbl[(b >> 16) & 0xFF];
        c2 = tbl[(b >> 8) & 0xFF];
        c3 = tbl[b & 0xFF];
        d1[0] = (c0 & 0xFFFF0000) | (c1 >> 16);
        d1[1] = (c2 & 0xFFFF0000) | (c3 >> 16);
        d1[8] = (c0 << 16) | (c1 & 0xFFFF);
        d1[9] = (c2 << 16) | (c3 & 0xFFFF);
        d1 += 16;
    } while (--count);
    lbl_80300860[3] = (u8 *)s1;
    lbl_80300860[2] = (u8 *)s0;
}

void fn_80288990(s32 count) {
    u8 *s0 = lbl_80300860[0];
    u8 *base = lbl_80300860[18];
    u8 *s1 = lbl_80300860[1];
    s32 width = (s32)lbl_80300860[17];
    u32 n = count;
    s32 row0, row1;
    u8 *d0, *d1;
    u32 *src0, *src1;
    u32 a, b;
    s32 stride;

    row0 = (s0 - base) / width;
    row1 = (s1 - base) / width;
    lbl_80300860[0] = s0 + count * 8;
    lbl_80300860[1] = s1 + count * 8;
    src0 = (u32 *)lbl_80300860[2];
    src1 = (u32 *)lbl_80300860[3];
    stride = (width * 4 + 31) & ~31;
    d0 = base + stride * ((u32)row0 >> 2);
    d0 += (row0 & 3) * 8;
    d0 += (s0 - (base + row0 * width)) * 4;
    d1 = base + stride * ((u32)row1 >> 2);
    d1 += (row1 & 3) * 8;
    d1 += (s1 - (base + row1 * width)) * 4;
    do {
        a = *src0++;
        b = *src1++;
        ((u32 *)d0)[0] = ((u16)((u32 *)lbl_802FFC60)[(a >> 16) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[(a >> 16) & 0xFF];
        ((u32 *)d1)[0] = ((u16)((u32 *)lbl_802FFC60)[(b >> 16) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[(b >> 16) & 0xFF];
        ((u32 *)d0)[1] = ((u16)((u32 *)lbl_802FFC60)[(a & 0xFFFF) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[a & 0xFF];
        d0 += 32;
        ((u32 *)d1)[1] = ((u16)((u32 *)lbl_802FFC60)[(b & 0xFFFF) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[b & 0xFF];
        d1 += 32;
    } while (--n != 0);
    lbl_80300860[3] = (u8 *)src1;
    lbl_80300860[2] = (u8 *)src0;
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



void fn_8028B134(s32 count, u32 *dst, u32 *src, u32 *p3, u32 *p4) {
    s32 n = (count >> 1) - 1;
    if (count >> 1) do {
        u32 a = *src;
        u32 b = *p3;
        u32 c = *p4;
        *dst = (a & 0xFF000000) + ((b >> 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + (c >> 24);
        *++dst = ((a << 16) & 0xFF000000) + (b & 0xFF0000) + ((a << 8) & 0xFF00) + ((c >> 16) & 0xFF);
        a = *++src;
        p3++;
        p4++;
        *++dst = (a & 0xFF000000) + ((b << 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + ((c >> 8) & 0xFF);
        *++dst = ((a << 16) & 0xFF000000) + ((b << 16) & 0xFF0000) + ((a << 8) & 0xFF00) + (c & 0xFF);
        src++;
        dst++;
    } while (n-- != 0);
    if (count & 1) {
        u32 a = *src;
        u16 b = *(u16 *)p3;
        u16 c = *(u16 *)p4;
        dst[1] = ((a << 16) & 0xFF000000) + ((b & 0xFF) << 16) + ((a << 8) & 0xFF00) + (c & 0xFF);
        dst[0] = (a & 0xFF000000) + ((b << 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + (c >> 8);
    }
}

void fn_8028B264(s32 n, u32* dst, u32* y, u32* u, u32* v) {
    s32 i;
    u32 uu, vv, yy, c;

    i = n >> 1;
    while (i--) {
        uu = *u++;
        vv = *v++;
        yy = *y++;
        c = ((uu >> 8) & 0xFF0000) + (vv >> 24);
        *dst++ = (yy & 0xFF000000) + ((yy & 0xFF000000) >> 16) + c;
        *dst++ = ((yy & 0xFF0000) << 8) + ((yy & 0xFF0000) >> 8) + c;
        c = (uu & 0xFF0000) + ((vv >> 16) & 0xFF);
        *dst++ = ((yy & 0xFF00) << 16) + (yy & 0xFF00) + c;
        *dst++ = ((yy & 0xFF) << 24) + ((yy & 0xFF) << 8) + c;
        yy = *y++;
        c = ((uu << 8) & 0xFF0000) + ((vv >> 8) & 0xFF);
        *dst++ = (yy & 0xFF000000) + ((yy & 0xFF000000) >> 16) + c;
        *dst++ = ((yy & 0xFF0000) << 8) + ((yy & 0xFF0000) >> 8) + c;
        c = ((uu & 0xFF) << 16) + (vv & 0xFF);
        *dst++ = ((yy & 0xFF00) << 16) + (yy & 0xFF00) + c;
        *dst++ = ((yy & 0xFF) << 24) + ((yy & 0xFF) << 8) + c;
    }
    if (n & 1) {
        u16 uh = *(u16*)u;
        u16 vh = *(u16*)v;
        yy = *y;
        c = ((uh << 8) & 0xFF0000) + (vh >> 8);
        *dst++ = (yy & 0xFF000000) + ((yy & 0xFF000000) >> 16) + c;
        *dst++ = ((yy & 0xFF0000) << 8) + ((yy & 0xFF0000) >> 8) + c;
        c = ((uh & 0xFF) << 16) + (vh & 0xFF);
        *dst++ = ((yy & 0xFF00) << 16) + (yy & 0xFF00) + c;
        *dst = ((yy & 0xFF) << 24) + ((yy & 0xFF) << 8) + c;
    }
}



void fn_8028B510(BitBuf *dst, BitBuf *src, u32 n) {
    for (; n > 7; n -= 8) {
        BitBuf_Write(dst, BitBuf_Read(src, 8), 8);
    }
    if (n == 0) {
        return;
    }
    BitBuf_Write(dst, BitBuf_Read(src, n), n);
}



void fn_8028BDF4(s32 n, f32 *a, s32 *ip, s32 nw, f32 *w) {
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

void fn_8028C390(int n, int *ip, float *a) {
    int j, j1, k, k1, l, m, m2;
    float xr, xi, yr, yi;

    ip[0] = 0;
    l = n;
    m = 1;
    while ((m << 3) < l) {
        l >>= 1;
        for (j = 0; j < m; j++) {
            ip[m + j] = ip[j] + l;
        }
        m <<= 1;
    }
    m2 = 2 * m;
    if ((m << 3) == l) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 2 * j + ip[k];
                k1 = 2 * k + ip[j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 += 2 * m2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 -= m2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 += 2 * m2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 2 * k + ip[k];
            a[k1 + 1] = -a[k1 + 1];
            j1 = k1 + m2;
            k1 = j1 + m2;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            k1 += m2;
            a[k1 + 1] = -a[k1 + 1];
        }
    } else {
        a[1] = -a[1];
        a[m2 + 1] = -a[m2 + 1];
        for (k = 1; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 2 * j + ip[k];
                k1 = 2 * k + ip[j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 += m2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 2 * k + ip[k];
            a[k1 + 1] = -a[k1 + 1];
            a[k1 + m2 + 1] = -a[k1 + m2 + 1];
        }
    }
}

void fn_8028C71C(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i,
        x5r, x5i, x7r, x7i, x8r, x8i, x10r, x10i,
        x11r, x11i, x12r, x12i, x13r, x13i, x14r, x14i;

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
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    a[2] = x8r;
    a[3] = x8i;
    a[4] = x4r;
    a[5] = x4i;
    a[6] = x12r;
    a[7] = x12i;
    a[8] = x2r;
    a[9] = x2i;
    a[10] = x10r;
    a[11] = x10i;
    a[14] = x14r;
    a[15] = x14i;
    a[16] = x1r;
    a[17] = x1i;
    a[20] = x5r;
    a[21] = x5i;
    a[22] = x13r;
    a[23] = x13i;
    a[24] = x3r;
    a[25] = x3i;
    a[26] = x11r;
    a[27] = x11i;
    a[28] = x7r;
    a[29] = x7i;
}


void fn_8028C954(f32 *m) {
    f32 a = m[2];
    f32 b = m[3];
    f32 c = m[6];
    f32 d = m[7];
    f32 e = m[8];
    f32 f = m[9];
    f32 g = m[12];
    f32 h = m[13];
    m[13] = d;
    m[2] = e;
    m[3] = f;
    m[6] = g;
    m[7] = h;
    m[8] = a;
    m[9] = b;
    m[12] = c;
}


void fn_8028D164(s32 n, f32 *a, f32 *w) {
    s32 j, j0, j1, j2, j3, k, m, mh;
    f32 wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, wd1r, wd1i, wd3r, wd3i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;

    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = -a[1] - a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = -a[1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    a[j2] = x1r + x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r - x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i - w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = -w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = -a[j + 1] - a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = -a[j + 1] + a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = -a[j + 3] - a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = -a[j + 3] + a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i - x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = -a[j0 + 1] - a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = -a[j0 + 1] + a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = -a[j0 - 1] - a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = -a[j0 - 1] + a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i - x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = -a[j0 - 1] - a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = -a[j0 - 1] + a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i - x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = -a[j0 + 1] - a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = -a[j0 + 1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = -a[j0 + 3] - a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = -a[j0 + 3] + a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i - x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

void fn_8028D8C8(s32 n, f32 *a, s32 nw, f32 *w) {
    s32 m;

    m = n >> 2;
    fn_8028DEFC(n, a, &w[nw - 2 * m]);
    if (n > 512) {
        fn_8028D8C8(m, a, nw, w);
        fn_8028D990(m, &a[m], nw, w);
        fn_8028D8C8(m, &a[2 * m], nw, w);
        fn_8028D8C8(m, &a[3 * m], nw, w);
    } else {
        fn_8028DA54(n, a, nw, w);
    }
}

void fn_8028D990(s32 n, f32 *a, s32 nw, f32 *w) {
    s32 m;

    m = n >> 2;
    fn_8028E290(n, a, &w[nw - n]);
    if (n > 512) {
        fn_8028D8C8(m, a, nw, w);
        fn_8028D990(m, &a[m], nw, w);
        fn_8028D8C8(m, &a[2 * m], nw, w);
        fn_8028D990(m, &a[3 * m], nw, w);
    } else {
        fn_8028DC94(n, a, nw, w);
    }
}

void fn_8028DEFC(s32 n, f32 *a, f32 *w) {
    s32 j, j0, j1, j2, j3, k, m, mh;
    f32 wn4r, wk1r, wk1i, wk3r, wk3i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;

    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    k = 0;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = -w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
    }
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
}






void fn_8028F7A4(f32 *a) {
    f32 x0r, x0i;

    x0r = a[0] - a[2];
    x0i = a[1] - a[3];
    a[0] += a[2];
    a[1] += a[3];
    a[2] = x0r;
    a[3] = x0i;
}



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

void fn_80290190(s32 n, f32 *a, s32 nc, s32 idx) {
    fn_8028F9D8(n, a, nc, lbl_802AD300[idx]);
}

void fn_8029086C(s32* data, s8* in) {
    s32 tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
    s32 tmp10, tmp11, tmp12, tmp13;
    s32 z1, z2, z3, z4, z5, z11, z13;
    s32* p;
    int i;

    p = data;
    for (i = 8; i > 0; i--) {
        tmp0 = in[0] + in[7];
        tmp7 = in[0] - in[7];
        tmp1 = in[1] + in[6];
        tmp6 = in[1] - in[6];
        tmp2 = in[2] + in[5];
        tmp5 = in[2] - in[5];
        tmp3 = in[3] + in[4];
        tmp4 = in[3] - in[4];
        tmp0 <<= 8;
        tmp1 <<= 8;
        tmp2 <<= 8;
        tmp3 <<= 8;
        tmp4 <<= 8;
        tmp5 <<= 8;
        tmp6 <<= 8;
        tmp7 <<= 8;

        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;

        p[0] = tmp10 + tmp11;
        p[4] = tmp10 - tmp11;

        z1 = ((tmp12 + tmp13) * 0x5A8) >> 11;
        p[2] = tmp13 + z1;
        p[6] = tmp13 - z1;

        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;

        z5 = ((tmp10 - tmp12) * 0x310) >> 11;
        z2 = ((tmp10 * 0x454) >> 11) + z5;
        z4 = ((tmp12 * 0xA74) >> 11) + z5;
        z3 = (tmp11 * 0x5A8) >> 11;

        z11 = tmp7 + z3;
        z13 = tmp7 - z3;

        p[5] = z13 + z2;
        p[3] = z13 - z2;
        p[1] = z11 + z4;
        p[7] = z11 - z4;

        p += 8;
        in += 8;
    }

    p = data;
    for (i = 8; i > 0; i--) {
        tmp0 = p[8 * 0] + p[8 * 7];
        tmp7 = p[8 * 0] - p[8 * 7];
        tmp1 = p[8 * 1] + p[8 * 6];
        tmp6 = p[8 * 1] - p[8 * 6];
        tmp2 = p[8 * 2] + p[8 * 5];
        tmp5 = p[8 * 2] - p[8 * 5];
        tmp3 = p[8 * 3] + p[8 * 4];
        tmp4 = p[8 * 3] - p[8 * 4];

        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;

        p[8 * 0] = tmp10 + tmp11;
        p[8 * 4] = tmp10 - tmp11;

        z1 = ((tmp12 + tmp13) * 0x5A8) >> 11;
        p[8 * 2] = tmp13 + z1;
        p[8 * 6] = tmp13 - z1;

        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;

        z5 = ((tmp10 - tmp12) * 0x310) >> 11;
        z2 = ((tmp10 * 0x454) >> 11) + z5;
        z4 = ((tmp12 * 0xA74) >> 11) + z5;
        z3 = (tmp11 * 0x5A8) >> 11;

        z11 = tmp7 + z3;
        z13 = tmp7 - z3;

        p[8 * 5] = z13 + z2;
        p[8 * 3] = z13 - z2;
        p[8 * 1] = z11 + z4;
        p[8 * 7] = z11 - z4;

        p++;
    }
}

void fn_80293964(u16 *dst) {
    u16 t[32];
    u16 *d;
    u16 a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    d = dst;
    a0 = t[0]; a1 = t[2]; a2 = t[4]; a3 = t[6];
    a4 = t[1]; a5 = t[3]; a6 = t[5]; a7 = t[7];
    a8 = t[12]; a9 = t[22]; a10 = t[8]; a11 = t[10];
    a12 = t[13]; a13 = t[23]; a14 = t[9]; a15 = t[11];
    a16 = t[14];
    d[0] = a0; d[1] = a1; d[2] = a2; d[3] = a3;
    d[4] = a4; d[5] = a5; d[6] = a6; d[7] = a7;
    d[8] = a8; d[9] = a9; d[10] = a10; d[11] = a11;
    d[12] = a12; d[13] = a13; d[14] = a14; d[15] = a15;
    d[16] = a16;
    a0 = t[16]; a1 = t[24]; a2 = t[26]; a3 = t[15];
    a4 = t[17]; a5 = t[25]; a6 = t[27]; a7 = t[18];
    a8 = t[20]; a9 = t[28]; a10 = t[30]; a11 = t[19];
    a12 = t[21]; a13 = t[29]; a14 = t[31];
    d[17] = a0; d[18] = a1; d[19] = a2; d[20] = a3;
    d[21] = a4; d[22] = a5; d[23] = a6; d[24] = a7;
    d[25] = a8; d[26] = a9; d[27] = a10; d[28] = a11;
    d[29] = a12; d[30] = a13; d[31] = a14;
}

typedef struct wCN { s32 a; struct wCN *next; u32 key; } wCN;
void fn_8028391C(wCN **head, wCN *n) {
    wCN *c = *head;
    wCN *prev;
    if (c == 0) {
        n->next = c;
        *head = n;
    } else if (n->key >= c->key) {
        n->next = c;
        *head = n;
    } else {
        for (prev = c; prev->next != 0; prev = prev->next) {
            if (n->key >= prev->next->key) {
                n->next = prev->next;
                prev->next = n;
                return;
            }
        }
        n->next = 0;
        prev->next = n;
    }
}

s32 OSEnableInterrupts(void);
s32 wC_OSRestoreInterrupts(s32) asm("OSRestoreInterrupts");

void fn_80283A54(u8 *a) {
    u8 *p = a - 8;
    if (p != 0 && *(s32 *)(p + 48) != 0) {
        s32 e = OSEnableInterrupts();
        fn_80283984(p);
        wC_OSRestoreInterrupts(e);
    }
}

s32 fn_8027AA64(u8 *p, s32 v) {
    if (p != 0) {
        *(s32 *)(p + 676) = v;
    }
    return v;
}


void fn_80283EFC(void *a, void *b, void *c, void *d) {
    fn_80283E90(a, b);
    fn_80283E90(c, d);
}


void fn_80283FB0(void *a, void *b) {
    fn_80283D04(a);
    fn_80283D04(b);
}


void fn_80284028(void *a, void *b) {
    fn_80283FE4(a);
    fn_80283FE4(b);
}

extern s32 wCa_802F3894[] asm("lbl_802F3894");

void fn_80276FC0(s32 v) {
    wCa_802F3894[0] = v;
}

extern s32 wCa_802F386C[] asm("lbl_802F386C");

void fn_80276FCC(s32 v) {
    wCa_802F386C[0] = v;
}

extern void *wCa_802F385C[];

void fn_80277140(u8 *p) {
    fn_80283DFC(wCa_802F385C[0], p + 252);
}


void fn_8027716C(u8 *p) {
    fn_80283F38(wCa_802F385C[0], p + 252);
}


void fn_8027A4BC(u8 *p) {
    if (*(s32 *)(p + 760) != 0) {
        fn_80276B84(p);
    }
}

u32 fn_8027A75C(u8 *p, s32 i) {
    if (p != 0) {
        return (*(u32 **)(p + 616))[i];
    }
    return 0;
}

extern s32 wCa_802F7298[] asm("lbl_802F7298");
extern s32 wCa_802F729C[] asm("lbl_802F729C");

void fn_8027B6C0(s32 a, s32 b) {
    wCa_802F7298[0] = a;
    wCa_802F729C[0] = b;
}


void fn_8028389C(void *p) {
    fn_8027B790(p);
}

extern s32 wCa_80301D20[] asm("lbl_80301D20");

s32 fn_80287804(void) {
    return wCa_80301D20[0];
}

extern u8 lbl_802AB2C0[];

void fn_802901C0(void *a, void *b, void *c, s32 d) {
    fn_8028F9D8(a, b, c, lbl_802AB2C0 + d * 256);
}

void fn_8028FDB4(void *, void *, void *, void *);

void fn_802901F0(void *a, void *b, void *c, s32 d) {
    fn_8028FDB4(a, b, c, lbl_802AB2C0 + d * 256);
}

void fn_80275498(u32 *out) {
    u32 t[2];
    register u32 *p asm("r9") = t;
    asm volatile("1:\n\tmftbu 8\n\tmftb 10\n\tmftbu 11\n\tcmpw 8,11\n\tbne 1b\n\tstw 8,0(%0)\n\tstw 10,4(%0)"
                 : : "b"(p) : "r8", "r10", "r11", "memory");
    *out = p[1];
}

u32 fn_802754CC(u32 *out) {
    u32 t[2];
    register u32 *o asm("r11") = out;
    register u32 *p asm("r9") = t;
    asm volatile("1:\n\tmftbu 8\n\tmftb 10\n\tmftbu 0\n\tcmpw 8,0\n\tbne 1b\n\tstw 8,0(%0)\n\tstw 10,4(%0)"
                 : : "b"(p), "r"(o) : "r0", "r8", "r10", "memory");
    return *o = p[1] - *o;
}

void fn_8027550C(u32 *dst) {
    asm volatile("1:\n\tmftbu 11\n\tmftb 9\n\tmftbu 0\n\tcmpw 11,0\n\tbne 1b\n\tstw 11,0(%0)\n\tstw 9,4(%0)"
                 : : "b"(dst) : "r0", "r9", "r11", "memory");
}

void fn_8027562C(u32 *dst) {
    asm volatile("1:\n\tmftbu 11\n\tmftb 9\n\tmftbu 0\n\tcmpw 11,0\n\tbne 1b\n\tstw 11,0(%0)\n\tstw 9,4(%0)"
                 : : "b"(dst) : "r0", "r9", "r11", "memory");
}

extern void *wCa_802F385C[] asm("lbl_802F385C");

void fn_80277114(u8 *p) {
    fn_80283E90(wCa_802F385C[0], p + 252);
}

s32 fn_802771B8(s32 *p, s32 b) {
    s32 v = p[-1];
    if (v != b) {
        return ~v;
    }
    return 0;
}

s32 fn_8027A71C(u8 *p, s32 i) {
    if (p != 0) {
        return (*(s32 **)(p + 612))[i];
    }
    return 0;
}

s32 fn_8027A73C(u8 *p, s32 i) {
    if (p != 0) {
        return (*(s32 **)(p + 608))[i];
    }
    return 0;
}

void fn_8027552C(u64 *p) {
    u64 t;
    register u32 *q asm("r9") = (u32 *)&t;
    asm volatile("1:\n\tmftbu 10\n\tmftb 11\n\tmftbu 0\n\tcmpw 10,0\n\tbne 1b\n\tstw 10,0(%0)\n\tstw 11,4(%0)"
                 : : "b"(q) : "r0", "r10", "r11", "memory");
    *p = t - *p;
}


void fn_8027A8BC(u8 *p) {
    if (p != 0) {
        if (*(void **)(p + 20) != 0) {
            fn_8028389C(*(void **)(p + 20));
            *(void **)(p + 20) = 0;
        }
        fn_8027B790(p);
    }
}

void fn_8027964C(u8 *arg0, u32 arg1) {
    s32 start = *(s32 *)(arg0 + 0x28C);
    u32 max;
    u32 prev;
    if (start != 0) {
        arg1 -= start;
        max = *(u32 *)(arg0 + 0x290);
        *(u32 *)(arg0 + 0x28C) = 0;
        if (arg1 > max) {
            *(u32 *)(arg0 + 0x298) = max;
            *(u32 *)(arg0 + 0x29C) = *(u32 *)(arg0 + 0x294);
            *(u32 *)(arg0 + 0x290) = arg1;
            *(u32 *)(arg0 + 0x294) = *(u32 *)(arg0 + 0xC);
        } else if (arg1 > *(u32 *)(arg0 + 0x298)) {
            *(u32 *)(arg0 + 0x298) = arg1;
            *(u32 *)(arg0 + 0x29C) = *(u32 *)(arg0 + 0xC);
        }
    }
}

s32 wC_OSRestoreInterrupts_80283B8C(s32) asm("OSRestoreInterrupts");

s32 fn_80283B8C(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    s32 level;

    ret = 0;
    if (arg0 != 0 && arg1 != 0 && *(s32 *)(arg1 + 0x18) != 0 && *(s32 *)(arg1 + 0x14) != 0) {
        level = OSDisableInterrupts();
        if (fn_802838BC(arg0, arg1) != 0) {
            *(s32 *)(arg0 + 0x38) -= 1;
            if ((arg2 & 1) && *(s32 *)(arg0 + 0x30) == 0) {
                ret = 1;
                fn_80283FE4((u8 *)arg0);
            }
        }
        wC_OSRestoreInterrupts_80283B8C(level);
    }
    return ret;
}

void fn_80282C34(s16 *dst, f32 *src, s32 count, f32 scale) {
    s32 i;
    for (i = count; i != 0; i--) {
        s32 n = (s32)(*src * scale);
        s16 *out = dst++;
        s32 v;
        if (n <= 0x7FFE) {
            if (n > -0x8000) v = n;
            else v = -0x8000;
        } else v = 0x7FFF;
        *out = v;
        src++;
    }
}

void *wC_memcpy_8027AC20() asm("memcpy");

s32 fn_8027AC20(void *arg0, u32 arg1, u8 *arg2, u32 arg3) {
    u8 buf[0x420];
    u8 *aligned;
    u32 bufSize;
    u32 len;
    s32 total;

    aligned = (u8 *)(((u32)buf + 0x1F) & ~0x1F);
    total = 0;
    bufSize = ((u32)buf + 0x41F - (u32)aligned) & ~0x1F;
    if (arg3 != 0) {
        do {
            if (arg3 >= bufSize) {
                len = bufSize;
            } else {
                len = (arg3 + 0x1F) & ~0x1F;
            }
            fn_800BD810(arg0, (s32)aligned, len, arg1, 0, 0);
            for (;;) {
                switch (DVDGetDriveStatus()) {
                case 0:
                    goto done;
                case -1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                    return 0;
                }
            }
        done:
            if (len > arg3) {
                len = arg3;
            }
            wC_memcpy_8027AC20(arg2, aligned, len);
            arg2 += len;
            total += len;
            arg1 += len;
            arg3 -= len;
        } while (arg3 != 0);
    }
    return total;
}

void fn_802753B4(u32 *dst, u16 val, u32 count) {
    u32 v = (val << 16) | val;
    s32 n = count >> 1;
    while (--n != -1) {
        *dst++ = v;
    }
    if (count & 1) {
        *(u16 *)dst = val;
    }
}

void fn_8028B428(s32 n, u32 *dst, u32 *src) {
    while (--n != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    }
}

void fn_8028B480(s32 n, u32 *dst, u32 *src) {
    while (--n != -1) {
        u32 v = *src++;
        u32 t0 = v & 0xFF000000;
        u32 t1 = v & 0xFF0000;
        u32 t2 = v & 0xFF00;
        u32 t3 = v & 0xFF;
        *dst++ = t0 + (t0 >> 16) + 0x800080;
        *dst++ = (t1 << 8) + (t1 >> 8) + 0x800080;
        *dst++ = (t2 << 16) + t2 + 0x800080;
        *dst++ = (t3 << 24) + (t3 << 8) + 0x800080;
    }
}

void fn_8027E788(s32 arg0, s32 n) {
    u32 v;
    while (--n != -1) {
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        *(u32 *)lbl_80300860[0] = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
    }
}

void fn_8027D75C(s32 unused, s32 n) {
    extern u32 lbl_80300460[];
    u32 v;
    while (--n != -1) {
        v = lbl_80300460[*lbl_80300860[2]++];
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 8;
    }
}

void fn_8027D844(s32 unused,s32 count) {
    extern u32 lbl_80300460[];
    while (--count != -1) {
    u32 v;
    v=lbl_80300460[*lbl_80300860[2]++];
    *(u32 *)lbl_80300860[0]=v;
    *(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
    lbl_80300860[0]+=4;
    }
}

void fn_8027D938(s32 unused,s32 count) {
    extern u32 lbl_80300460[];
    while (--count != -1) {
    u32 v;
    v=lbl_80300460[*lbl_80300860[2]++];
    ((u32 *)lbl_80300860[0])[0]=v;
    ((u32 *)lbl_80300860[0])[1]=v;
    *(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
    ((u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
    lbl_80300860[0]+=8;
    }
}

void fn_8027E2A8(s32 unused,s32 count) {
while (--count != -1) {
u8 *src=lbl_80300860[2];
*(u32 *)lbl_80300860[0]=lbl_80300460[*src++];
lbl_80300860[2]=src;
lbl_80300860[0]+=4;
}
}

void fn_8027F354(s32 unused, s32 count) {
    while (--count != -1) {
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
    }
}

void fn_8027E658(s32 arg0, s32 n) {
    u32 v;
    while (--n != -1) {
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 8;
    }
}

typedef struct { u16 a; u16 b; } wCPair_8027F794;
void fn_8027F794(s32 arg0, s32 n) {
    u16 v;
    while (--n != -1) {
        wCPair_8027F794 *t = (wCPair_8027F794 *)lbl_802FFC60;
        u32 index = *lbl_80300860[2]++;
        v = t[index].b;
        *(u16 *)lbl_80300860[0] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 2;
    }
}

typedef struct { u16 a; u16 b; } wCPair_8027F894;
void fn_8027F894(s32 arg0, s32 n) {
    u16 v;
    while (--n != -1) {
        wCPair_8027F894 *t = (wCPair_8027F894 *)lbl_802FFC60;
        u32 index = *lbl_80300860[2]++;
        v = t[index].b;
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 4;
    }
}

typedef struct { u16 a; u16 b; } wCPair_80280484;
void fn_80280484(s32 unused, s32 count) {
    while (--count != -1) {
        wCPair_80280484 *t = (wCPair_80280484 *)lbl_802FFC60;
        u32 index = *lbl_80300860[2];
        lbl_80300860[2]++;
        *(u16 *)lbl_80300860[0] = t[index].b;
        lbl_80300860[0] += 2;
    }
}

typedef struct { u16 a; u16 b; } wCPair_802808BC;
void fn_802808BC(s32 unused, s32 count) {
    extern u8 lbl_802F8B20[];
    while (--count != -1) {
        wCPair_802808BC *t = (wCPair_802808BC *)lbl_802FFC60;
        u8 *src = lbl_80300860[2], *alpha = lbl_80300860[6];
        u32 index = *src;
        u32 high = *alpha;
        u16 v;
        wCPair_802808BC *t2 = (wCPair_802808BC *)lbl_802F8B20;
        src++; alpha++;
        v = t[index].b | t2[high].b;
        lbl_80300860[6] = alpha;
        lbl_80300860[2] = src;
        *(u16 *)lbl_80300860[0] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 2;
    }
}

typedef struct { u16 a; u16 b; } wCPair_80280A50;
void fn_80280A50(s32 unused, s32 count) {
    extern u8 lbl_802F8B20[];
    while (--count != -1) {
        wCPair_80280A50 *t = (wCPair_80280A50 *)lbl_802FFC60;
        u8 *src = lbl_80300860[2], *alpha = lbl_80300860[6];
        u32 index = *src;
        u32 high = *alpha;
        u16 v;
        wCPair_80280A50 *t2 = (wCPair_80280A50 *)lbl_802F8B20;
        src++; alpha++;
        v = t[index].b | t2[high].b;
        lbl_80300860[6] = alpha;
        lbl_80300860[2] = src;
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 4;
    }
}

typedef struct { u16 a; u16 b; } wCPair_80280BD8;
void fn_80280BD8(s32 unused, s32 count) {
    extern u8 lbl_802F8B20[];
    while (--count != -1) {
        wCPair_80280BD8 *t = (wCPair_80280BD8 *)lbl_802FFC60;
        u8 *src = lbl_80300860[2], *alpha = lbl_80300860[6];
        u32 index = *src;
        u32 high = *alpha;
        u16 v;
        wCPair_80280BD8 *t2 = (wCPair_80280BD8 *)lbl_802F8B20;
        src++; alpha++;
        v = t[index].b | t2[high].b;
        lbl_80300860[6] = alpha;
        lbl_80300860[2] = src;
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = v;
        lbl_80300860[0] += 4;
    }
}

void fn_8027ABEC(s32 *p, s32 n) {
    n = (u32)(n + 3) >> 2;
    while (--n != -1) {
        u32 v;
        asm("lwbrx %0,%1,%2" : "=r"(v) : "r"(0), "r"(p));
        *p++ = (s32)v;
    }
}

void fn_8027DA74(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            lbl_80300860[0] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

void fn_8027DD10(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
            *dst = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            lbl_80300860[0] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

void fn_8027E378(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
            *dst = c;
            lbl_80300860[0] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

void fn_8028AEAC(s32 n) {
    u32 *dst = (u32 *)lbl_80300860[0];
    u32 *src = (u32 *)lbl_80300860[2];
    s32 i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    }
    dst = (u32 *)lbl_80300860[1];
    src = (u32 *)lbl_80300860[3];
    i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    }
    lbl_80300860[0] += n * 8;
    lbl_80300860[1] += n * 8;
    lbl_80300860[2] += n * 4;
    lbl_80300860[3] += n * 4;
}


void fn_8027A538(u8 *b, s32 id, s32 a0) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32) = *(void (**)(u8 *, s32))(e + 12);
            if (f != 0) {
                f(e, a0);
            }
        }
    }
}


void fn_8027A5A8(u8 *b, s32 id, s32 a0, s32 a1) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32, s32) = *(void (**)(u8 *, s32, s32))(e + 32);
            if (f != 0) {
                f(e, a0, a1);
            }
        }
    }
}


void fn_8027A620(u8 *b, s32 id, s32 a0, s32 a1, s32 a2) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32, s32, s32) = *(void (**)(u8 *, s32, s32, s32))(e + 36);
            if (f != 0) {
                f(e, a0, a1, a2);
            }
        }
    }
}


void fn_8027A6A0(u8 *b, s32 id, s32 a0) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32) = *(void (**)(u8 *, s32))(e + 16);
            if (f != 0) {
                f(e, a0);
            }
        }
    }
}


u8 *fn_8028A7C0(u8 *addr, s32 pitch) {
    u8 *base = lbl_80300860[18];
    s32 row = (addr - base) / (s32)lbl_80300860[17];
    return base + pitch * ((u32)row >> 2) + ((row & 3) << 3) + ((addr - (base + row * (s32)lbl_80300860[17])) << 2);
}

typedef struct { u16 a; u16 b; } wCPair_8027F988;

void fn_8027F988(s32 arg0, s32 n) {
    u16 v;
    while (--n != -1) {
        wCPair_8027F988 *t = (wCPair_8027F988 *)lbl_802FFC60;
        u32 index = *lbl_80300860[2]++;
        v = t[index].b;
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = v;
        lbl_80300860[0] += 4;
    }
}

s32 wC_OSRestoreInterrupts_80283F38(s32) asm("OSRestoreInterrupts");

void fn_80283F38(s32 a, void *q) {
    volatile s32 *p = q;
    if (a != 0 && p != 0 && p[6] != 0 && p[5] != 0) {
        s32 e = OSDisableInterrupts();
        p[4]--;
        if (p[4] == 0) {
            p[3] = 1;
        }
        wC_OSRestoreInterrupts_80283F38(e);
    }
}

s32 wC_OSRestoreInterrupts_80283C94(s32) asm("OSRestoreInterrupts");

s32 fn_80283C94(void *q) {
    volatile s32 *p = q;
    s32 r;
    if (p != 0) {
        s32 e = OSDisableInterrupts();
        if (p[0] == 1) {
            p[0] = 2;
        }
        p[1]++;
        wC_OSRestoreInterrupts_80283C94(e);
        r = 1;
        if (p[0] == 1) {
            r = 0;
        }
    } else {
        r = 1;
    }
    return r;
}

f32 fn_800F051C(f32, f32);

void fn_80276554(u8 *p, s32 v) {
    if (v < 0) {
        v = 0;
    }
    if (v > 32767) {
        v = 32767;
    }
    *(s32 *)(p + 120) = fn_800F051C((f32)v, 1.6666666f) * 0.000976582368720213;
    fn_80275844(p);
}

typedef struct { u16 a; u16 b; } wCPair_8027F8F8;

s32 fn_8027F8F8(s32 n, s32 m) {
    s32 i = n;
    do {
        wCPair_8027F8F8 *t = (wCPair_8027F8F8 *)lbl_802FFC60;
        u16 v = t[*lbl_80300860[2]++].b;
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        v = t[*lbl_80300860[3]++].b;
        ((u16 *)lbl_80300860[1])[0] = v;
        ((u16 *)lbl_80300860[1])[1] = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--i != 0);
    return m + n;
}


void fn_8027ADB0(u8 *p, s32 a, s32 b) {
    s32 t = fn_802752DC(a, 1000, *(s32 *)(p + 180));
    s32 last = fn_802753F0();
    s32 el;
    *(s32 *)(p + 184) += t - (last - b);
    if (*(s32 *)(p + 184) > 0) {
        do {
            do {
                t = fn_802753F0();
                el = t - last;
            } while (el < *(s32 *)(p + 184));
            *(s32 *)(p + 184) -= el;
            last = t;
        } while (*(s32 *)(p + 184) > 0);
    }
}

void wC_80284194_846E4(void *, void *, void *, void *) asm("fn_80284194");

void fn_802846E4(u8 *a, void *b, u8 *c) {
    u8 *p = c;
    u8 *q = c + 256;
    u8 *r = c + 320;
    do {
        wC_80284194_846E4(b, r, q, p);
        p += 16;
        q += 4;
        r += 4;
    } while (p <= c + 240);
    wC_80284194_846E4(b, a + 36, a + 32, a + 16);
    *(s32 *)(c + 384) = 0;
}

typedef struct { u16 a; u16 b; } wCPair_802818C4;
void fn_802818C4(s32 unused, s32 count) {
    extern u8 lbl_802F8B20[];
    while (--count != -1) {
        wCPair_802818C4 *t = (wCPair_802818C4 *)lbl_802FFC60;
        u8 *src = lbl_80300860[2], *alpha = lbl_80300860[6];
        u32 index = *src;
        u32 high = *alpha;
        u16 v;
        wCPair_802818C4 *t2 = (wCPair_802818C4 *)lbl_802F8B20;
        src++; alpha++;
        v = t[index].b | t2[high].b;
        lbl_80300860[6] = alpha;
        lbl_80300860[2] = src;
        *(u16 *)lbl_80300860[0] = v;
        lbl_80300860[0] += 2;
    }
}

s32 wC_OSRestoreInterrupts_80283DFC(s32) asm("OSRestoreInterrupts");

s32 fn_80283DFC(s32 a, void *q) {
    volatile s32 *p = q;
    s32 r;
    if (a != 0 && p != 0 && p[6] != 0 && p[5] != 0) {
        s32 e = OSDisableInterrupts();
        if (p[3] == 1) {
            p[3] = 2;
        }
        p[4]++;
        wC_OSRestoreInterrupts_80283DFC(e);
        r = 1;
        if (p[3] == 1) {
            r = 0;
        }
    } else {
        r = 1;
    }
    return r;
}

extern void *wCa_802F384C_75C64[] asm("lbl_802F384C");
void fn_800C7240(void *);
void *wC_memset_75C64() asm("memset");

void wC_fn_80275C64(u8 *p) asm("fn_80275C64");

void wC_fn_80275C64(u8 *p) {
    u8 *s = p + 120;
    *(s32 *)(p + 252) = 1;
    fn_8027564C(s, 0);
    if (*(void **)(p + 200) != 0) {
        fn_800C7240(*(void **)(p + 200));
    }
    if (*(void **)(p + 204) != 0) {
        fn_800C7240(*(void **)(p + 204));
    }
    {
        void *x = *(void **)(p + 228);
        while (*(volatile s32 *)(p + 196) != 0) {
        }
        fn_8027B790(x);
    }
    ((void (*)(void *))wCa_802F384C_75C64[0])(*(void **)(p + 208));
    wC_memset_75C64(s, 0, 164);
}


s32 fn_8027F3C4(s32 n, s32 m) {
    s32 i = n;
    do {
        *(u32 *)lbl_80300860[0] = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        *(u32 *)lbl_80300860[1] = lbl_80300460[*lbl_80300860[3]++] | (*lbl_80300860[7]++ << 24);
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--i != 0);
    return m + n;
}

typedef struct { u8 pad[0xF8]; u32 bus; } wCOSG;
s32 wC_OSRestoreInterrupts_80283D44(s32) asm("OSRestoreInterrupts");
void fn_800B3E7C(void *, s64, s64, void *);

void fn_80283D44(void *q) {
    volatile s32 *p = q;
    if (p != 0) {
        s32 e = OSDisableInterrupts();
        p[1]--;
        if (p[1] == 0) {
            if (p[0] == 0) {
                fn_800B3E7C((void *)(p + 2), OSGetTime(), (1000 / (u32)p[15]) * ((((wCOSG *)0x80000000)->bus / 4) / 1000), fn_80283A54);
            }
            p[0] = 1;
        }
        wC_OSRestoreInterrupts_80283D44(e);
    }
}

extern u32 wCa_80301D20_87810[] asm("lbl_80301D20");
extern u32 wCa_80301D24_87810[] asm("lbl_80301D24");
extern u8 ***wCa_80301D28_87810[] asm("lbl_80301D28");
extern u32 *wCa_80301D2C_87810[] asm("lbl_80301D2C");

u8 *wC_fn_80287810(u32 size) asm("fn_80287810");

u8 *wC_fn_80287810(u32 size) {
    u32 sz = (size + 31) & ~31;
    u8 *mem = fn_8027B6D4(wCa_80301D20_87810[0] + sz);
    wCa_80301D20_87810[0] = 0;
    if (mem != 0) {
        u8 *p = mem + sz;
        u32 i;
        for (i = 0; i < wCa_80301D24_87810[0]; i++) {
            *wCa_80301D28_87810[0][i] = p;
            p += wCa_80301D2C_87810[0][i];
        }
    }
    wCa_80301D24_87810[0] = 0;
    return mem;
}

extern void *wCa_803590CC_8027B8B4[] asm("lbl_803590CC");
void fn_8027B8B4(void *arg0) {
 u8 *s1=lbl_80300860[1], *s0=lbl_80300860[0];
 u8 *s2=lbl_80300860[2], *s3=lbl_80300860[3];
 u8 *s6=lbl_80300860[6], *s7=lbl_80300860[7];
 u8 *s4=lbl_80300860[4], *s5=lbl_80300860[5];
 s32 d;
 ((void (*)(void *))wCa_803590CC_8027B8B4[0])(arg0);
 lbl_80300860[2]=s2; lbl_80300860[3]=s3;
 lbl_80300860[6]=s6; lbl_80300860[7]=s7;
 lbl_80300860[4]=s4; lbl_80300860[5]=s5;
 lbl_80300860[0]=s0+(s32)lbl_80300860[17];
 d=lbl_80300860[1]-s1;
 lbl_80300860[1]=s1+(s32)lbl_80300860[17];
 ((void (*)(void *))wCa_803590CC_8027B8B4[0])(arg0);
 lbl_80300860[0]=s0+d; lbl_80300860[1]=s1+d;
}

extern void *wCa_803590D0_8027B968[] asm("lbl_803590D0");
void fn_8027B968(void *arg0) {
 u8 *s1=lbl_80300860[1], *s0=lbl_80300860[0];
 u8 *s2=lbl_80300860[2], *s3=lbl_80300860[3];
 u8 *s6=lbl_80300860[6], *s7=lbl_80300860[7];
 u8 *s4=lbl_80300860[4], *s5=lbl_80300860[5];
 s32 d;
 ((void (*)(void *))wCa_803590D0_8027B968[0])(arg0);
 lbl_80300860[2]=s2; lbl_80300860[3]=s3;
 lbl_80300860[6]=s6; lbl_80300860[7]=s7;
 lbl_80300860[4]=s4; lbl_80300860[5]=s5;
 lbl_80300860[0]=s0+(s32)lbl_80300860[17];
 d=lbl_80300860[1]-s1;
 lbl_80300860[1]=s1+(s32)lbl_80300860[17];
 ((void (*)(void *))wCa_803590D0_8027B968[0])(arg0);
 lbl_80300860[0]=s0+d; lbl_80300860[1]=s1+d;
}

extern void *wCa_802F3850_769F0[] asm("lbl_802F3850");
extern s32 wCa_802F3854_769F0[] asm("lbl_802F3854");
extern s32 wCa_802F3858_769F0[] asm("lbl_802F3858");

s32 fn_802769F0(void *fn, void *arg) {
    s32 r;
    if (fn == 0) {
        return 0;
    }
    if (wCa_802F3850_769F0[0] == 0) {
        wCa_802F3850_769F0[0] = fn;
    }
    if (wCa_802F3850_769F0[0] != fn) {
        if (wCa_802F3858_769F0[0] != 0) {
            return 0;
        }
        wCa_802F3850_769F0[0] = fn;
    }
    r = ((s32 (*)(void *))wCa_802F3850_769F0[0])(arg);
    if (r != 0) {
        wCa_802F3854_769F0[0] = r;
    }
    return wCa_802F3854_769F0[0] != 0;
}

extern void *wCa_802F7298_B6D4[] asm("lbl_802F7298");
extern u32 wCa_802F729C_B6D4[] asm("lbl_802F729C");
extern s32 wCa_80359530_B6D4[] asm("lbl_80359530");
u8 *fn_800B4340(s32, u32);

u8 *fn_8027B6D4(u32 size) {
    u8 *m;
    s32 t;
    u32 off;
    u32 sz;
    if (size == 0 || size == (u32)-1) {
        return 0;
    }
    sz = size + 64;
    if (wCa_802F7298_B6D4[0] != 0) {
        m = ((u8 *(*)(u32))wCa_802F7298_B6D4[0])(sz);
        if (m != 0) {
            if (m == (u8 *)-1) {
                return 0;
            }
            t = 3;
            goto done;
        }
    }
    m = fn_800B4340(wCa_80359530_B6D4[0], sz);
    if (m == 0) {
        return 0;
    }
    t = 0;
done:
    off = (u8)(64 - ((u32)m & 31));
    m += off;
    m[-1] = off;
    m[-2] = t;
    if (t == 3) {
        *(u32 *)(m - 8) = wCa_802F729C_B6D4[0];
    }
    return m;
}


s32 wC_fn_80276488(u8 *p, u32 n) asm("fn_80276488");

s32 wC_fn_80276488(u8 *p, u32 n) {
    u32 half = n >> 1;
    u32 pos = *(u32 *)(p + 240);
    u32 end = pos + half;
    if (end >= *(u32 *)(p + 220)) {
        fn_80275D00(*(u8 **)(p + 236), *(u8 **)(p + 228) + pos, *(u8 **)(p + 232) + pos, *(u32 *)(p + 220) - pos);
        fn_80275D00(*(u8 **)(p + 236) + (*(u32 *)(p + 220) - *(u32 *)(p + 240)) * 2, *(u8 **)(p + 228), *(u8 **)(p + 232), end - *(u32 *)(p + 220));
        *(u32 *)(p + 240) = end - *(u32 *)(p + 220);
    } else {
        fn_80275D00(*(u8 **)(p + 236), *(u8 **)(p + 228) + pos, *(u8 **)(p + 232) + pos, half);
        *(u32 *)(p + 240) = end;
    }
    *(u32 *)(p + 256) += half;
    fn_80275FC0(p);
    return 1;
}


void fn_802765E8(u8 *p, s32 pan) {
    f32 r;
    if (pan < 0) {
        pan = 0;
    }
    if (pan > 0x10000) {
        pan = 0x10000;
    }
    r = (f32)pan * 1.52587890625e-05f;
    *(s32 *)(p + 124) = fn_800F051C(1.0f - r, 0.3f) * 32768.0f;
    *(s32 *)(p + 128) = fn_800F051C(r, 0.3f) * 32768.0f;
    fn_80275844(p);
}


s32 fn_80279868(u8 *p, s32 v) {
    s32 t;
    u32 i;
    if (p == 0) {
        return 0;
    }
    t = fn_802753F0();
    fn_80278F28(p, t);
    fn_8027964C(p, t);
    if (v == 0 && *(s32 *)(p + 252) != 0) {
        *(s32 *)(p + 640) = v;
        *(s32 *)(p + 824) = v;
    }
    *(s32 *)(p + 252) = v;
    for (i = 0; i < *(u32 *)(p + 760); i++) {
        u8 *e = (u8 *)(i * 376 + *(s32 *)(p + 768));
        (*(void (**)(u8 *, s32))(e + 20))(e, v);
    }
    if (*(s32 *)(p + 624) != 0 && *(s32 *)(p + 760) != 0) {
        fn_80276B84(p);
    }
    return *(s32 *)(p + 252);
}


s32 fn_8027E958(s32 n, s32 m) {
    s32 i = n;
    do {
        u32 v;
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = v;
        v = lbl_80300460[*lbl_80300860[3]++] | (*lbl_80300860[7]++ << 24);
        ((u32 *)lbl_80300860[1])[0] = v;
        ((u32 *)lbl_80300860[1])[1] = v;
        *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        ((u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = v;
        lbl_80300860[0] += 8;
        lbl_80300860[1] += 8;
    } while (--i != 0);
    return m + n;
}

typedef struct { u16 a; u16 b; } wCPair_8095C;

s32 fn_8028095C(s32 n, s32 m) {
    extern u8 lbl_802F8B20[];
    s32 i = n;
    do {
        wCPair_8095C *t = (wCPair_8095C *)lbl_802FFC60;
        wCPair_8095C *t2;
        u16 v;
        u8 *src = lbl_80300860[2];
        t2 = (wCPair_8095C *)lbl_802F8B20;
        v = t[*src++].b | t2[*lbl_80300860[6]++].b;
        lbl_80300860[2] = src;
        *(u16 *)lbl_80300860[0] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        v = t[*lbl_80300860[3]++].b | t2[*lbl_80300860[7]++].b;
        *(u16 *)lbl_80300860[1] = v;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
    } while (--i != 0);
    return m + n;
}

typedef struct { u16 a; u16 b; } wCPair_81958;

s32 fn_80281958(s32 n, s32 m) {
    extern u8 lbl_802F8B20[];
    s32 i = n;
    do {
        wCPair_81958 *t = (wCPair_81958 *)lbl_802FFC60;
        wCPair_81958 *t2;
        u16 v;
        u8 *src = lbl_80300860[2];
        t2 = (wCPair_81958 *)lbl_802F8B20;
        v = t[*src++].b | t2[*lbl_80300860[6]++].b;
        lbl_80300860[2] = src;
        *(u16 *)lbl_80300860[0] = v;
        v = t[*lbl_80300860[3]++].b | t2[*lbl_80300860[7]++].b;
        *(u16 *)lbl_80300860[1] = v;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
    } while (--i != 0);
    return m + n;
}

void fn_8027EA48(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            lbl_80300860[6] = a;
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            lbl_80300860[0] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

void fn_8027F46C(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            *dst = c;
            lbl_80300860[6] = a;
            lbl_80300860[0] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

void fn_8027DFB8(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
            lbl_80300860[0] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

void fn_8027ED2C(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            lbl_80300860[6] = a;
            dst[0] = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            lbl_80300860[0] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

s32 fn_8027EB80(s32 n, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    s32 i = n;
    do {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            lbl_80300860[6] = a;
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            tbl = lbl_802F7AE0[*lbl_80300860[3]++];
            c = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16) | (*lbl_80300860[7]++ << 24);
            ((u32 *)lbl_80300860[1])[0] = c;
            ((u32 *)lbl_80300860[1])[1] = c;
            lbl_80300860[0] += 8;
            lbl_80300860[1] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    } while (--i != 0);
    return x;
}

s32 fn_8027EE68(s32 n, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    s32 i = n;
    do {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            lbl_80300860[6] = a;
            dst[0] = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            tbl = lbl_802F7AE0[*lbl_80300860[3]++];
            c = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16) | (*lbl_80300860[7]++ << 24);
            ((u32 *)lbl_80300860[1])[0] = c;
            *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
            lbl_80300860[0] += 4;
            lbl_80300860[1] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    } while (--i != 0);
    return x;
}

void fn_8027F01C(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    while (--count != -1) {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            lbl_80300860[6] = a;
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
            lbl_80300860[0] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    }
}

s32 fn_8027F170(s32 n, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    s32 i = n;
    do {
        {
            s32 *t0 = lbl_803008C0;
            s32 *t2 = t0 + 512;
            s32 *t1 = t0 + 256;
            s32 *t3 = t0 + 768;
            u8 *u;
            u32 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u32 *tbl;
            u32 c;
            s32 r, g, b;
            u = lbl_80300860[4];
            x++;
            dst = (u32 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = lbl_802F7AE0[*y++];
            lbl_80300860[2] = y;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
            lbl_80300860[6] = a;
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
            tbl = lbl_802F7AE0[*lbl_80300860[3]++];
            c = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16) | (*lbl_80300860[7]++ << 24);
            ((u32 *)lbl_80300860[1])[0] = c;
            ((u32 *)lbl_80300860[1])[1] = c;
            *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
            ((u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = c;
            lbl_80300860[0] += 8;
            lbl_80300860[1] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        }
    } while (--i != 0);
    return x;
}

extern void *wCa_802F3848_758B4[] asm("lbl_802F3848");
extern void *wCa_802F384C_758B4[] asm("lbl_802F384C");
void *wC_memset_758B4() asm("memset");
void *fn_800C72C0(s32, void *, void *);
void wC_802756B8_758B4(void *, int, int) asm("fn_802756B8");
void fn_800C9948(void *, s32);
void fn_800C9D28(void *, void *);
void fn_800C9DC0(void *, f32);
void fn_800C9C84(void *, void *);

s32 fn_802758B4(void *arg0, s32 a, s32 b, s32 c) {
    u8 *p = arg0;
    u32 bytes;
    u32 blk;
    u32 big;
    u8 *m;
    u32 i;
    u8 buf[40];
    u16 mix[7];

    if (wCa_802F3848_758B4[0] == 0) {
        return 0;
    }
    bytes = (*(u32 *)(p + 108) * *(u32 *)(p + 112)) >> 3;
    *(u32 *)(p + 280) = 720;
    *(u32 *)(p + 248) = 0;
    blk = ((bytes / 20) + 63) & ~63;
    big = blk * 16;
    *(u32 *)(p + 224) = blk;
    *(u32 *)(p + 220) = big;
    *(u32 *)(p + 260) = blk * 12;
    *(u32 *)(p + 264) = blk * 12;
    *(u32 *)(p + 272) = (big * 90) / 100;
    if (b != 0 && c != 0) {
        u32 v = (f64)(u32)a * (f64)(u32)c * (f64)bytes / (f64)(u32)b;
        if (v < *(u32 *)(p + 260)) {
            *(u32 *)(p + 260) = v;
        }
    }
    *(u32 *)(p + 84) = *(u32 *)(p + 224) * *(u32 *)(p + 116);
    if (*(u32 *)(p + 112) != 16) {
        *(u32 *)(p + 84) += *(u32 *)(p + 84);
    }
    *(s32 *)(p + 88) = -(*(s32 *)(p + 116) << 5);
    m = fn_8027B6D4((*(u32 *)(p + 220) + *(u32 *)(p + 224)) * *(u32 *)(p + 116));
    *(u8 **)(p + 228) = m;
    if (m == 0) {
        return 0;
    }
    *(u8 **)(p + 236) = m + *(u32 *)(p + 220);
    *(u8 **)(p + 208) = ((u8 *(*)(u32))wCa_802F3848_758B4[0])(*(u32 *)(p + 220) * *(u32 *)(p + 116));
    if (*(u8 **)(p + 208) == 0) {
        fn_8027B790(*(u8 **)(p + 228));
        return 0;
    }
    if (0) {
fail:
        fn_8027B790(*(u8 **)(p + 228));
        ((void (*)(void *))wCa_802F384C_758B4[0])(*(u8 **)(p + 208));
        return 0;
    }
    {
        s32 n = *(s32 *)(p + 116);
        if (n > 1) {
            *(u8 **)(p + 232) = *(u8 **)(p + 236) + *(u32 *)(p + 224) * n;
            *(u8 **)(p + 212) = *(u8 **)(p + 208) + *(u32 *)(p + 220);
        }
    }
    *(u32 *)(p + 256) = 0;
    *(u32 *)(p + 216) = *(u32 *)(p + 112) == 16;
    *(u32 *)(p + 240) = 0;
    *(u32 *)(p + 244) = 0;
    wC_memset_758B4(buf, 0, 40);
    *(u16 *)(buf + 32) = *(u32 *)(p + 112) == 16 ? 2048 : 256;
    for (i = 0; i < *(u32 *)(p + 116); i++) {
        void *v = fn_800C72C0(31, 0, 0);
        ((void **)(p + 200))[i] = v;
        if (v == 0) {
            goto fail;
        }
    }
    wC_802756B8_758B4(p + 120, *(u32 *)(p + 112), 1);
    for (i = 0; i < *(u32 *)(p + 116); i++) {
        u8 *q = p + 200;
        void **vp = (void **)(q + i * 4);
            mix[0] = 1;
            mix[1] = 0;
            mix[2] = 0;
            mix[3] = 0;
            mix[4] = 0;
            mix[5] = 0;
            mix[6] = 0;
            fn_800C9948(*vp, 1);
            fn_800C9D28(*vp, mix);
            fn_800C9DC0(*vp, *(u32 *)(p + 108) / 32028.666666666668);
            fn_800C9C84(*vp, buf);
    }
    fn_80275844(p);
    return 1;
}


void fn_8028BF5C(s32 n, f32 *a, s32 *ip, s32 nw, f32 *w) {
    if (n > 32) {
        s32 m = n >> 2;
        fn_8028D164(n, a, &w[nw - m]);
        if (n > 512) {
            fn_8028D8C8(m, a, nw, w);
            fn_8028D990(m, &a[m], nw, w);
            fn_8028D8C8(m, &a[m * 2], nw, w);
            fn_8028D8C8(m, &a[m * 3], nw, w);
        } else if (m > 32) {
            fn_8028DA54(n, a, nw, w);
        } else {
            fn_8028E6FC(n, a, nw, w);
        }
        fn_8028C390(n, ip, a);
    } else if (n > 8) {
        if (n == 32) {
            fn_8028E868(a, &w[nw - 8]);
            fn_8028C7F0(a);
        } else {
            fn_8028F2AC(a, w);
            fn_8028C998(a);
        }
    } else if (n == 8) {
        fn_8028F720(a);
    } else if (n == 4) {
        fn_8028F7A4(a);
    }
}


void fn_8028E6FC(s32 n, f32 *a, s32 nw, f32 *w) {
    if (n == 128) {
        fn_8028E868(a, &w[nw - 8]);
        fn_8028ED28(&a[32], &w[nw - 32]);
        fn_8028E868(&a[64], &w[nw - 8]);
        fn_8028E868(&a[96], &w[nw - 8]);
    } else {
        fn_8028F2AC(a, &w[nw - 16]);
        fn_8028F484(&a[16], &w[nw - 16]);
        fn_8028F2AC(&a[32], &w[nw - 16]);
        fn_8028F2AC(&a[48], &w[nw - 16]);
    }
}


void fn_8028E7B0(s32 n, f32 *a, s32 nw, f32 *w) {
    if (n == 128) {
        fn_8028E868(a, &w[nw - 8]);
        fn_8028ED28(&a[32], &w[nw - 32]);
        fn_8028E868(&a[64], &w[nw - 8]);
        fn_8028ED28(&a[96], &w[nw - 32]);
    } else {
        fn_8028F2AC(a, &w[nw - 16]);
        fn_8028F484(&a[16], &w[nw - 16]);
        fn_8028F2AC(&a[32], &w[nw - 16]);
        fn_8028F484(&a[48], &w[nw - 16]);
    }
}


void fn_8028DA54(s32 n, f32 *a, s32 nw, f32 *w) {
    s32 j, k, l;

    for (l = n >> 2; l > 128; l >>= 2) {
        for (k = l; k < n; k <<= 2) {
            for (j = k - l; j < n; j += 4 * k) {
                fn_8028DEFC(l, &a[j], &w[nw - (l >> 1)]);
                fn_8028E290(l, &a[k + j], &w[nw - l]);
                fn_8028DEFC(l, &a[2 * k + j], &w[nw - (l >> 1)]);
            }
        }
        fn_8028DEFC(l, &a[n - l], &w[nw - (l >> 1)]);
    }
    for (k = l; k < n; k <<= 2) {
        for (j = k - l; j < n; j += 4 * k) {
            fn_8028DEFC(l, &a[j], &w[nw - (l >> 1)]);
            fn_8028E6FC(l, &a[j], nw, w);
            fn_8028E290(l, &a[k + j], &w[nw - l]);
            fn_8028E7B0(l, &a[k + j], nw, w);
            fn_8028DEFC(l, &a[2 * k + j], &w[nw - (l >> 1)]);
            fn_8028E6FC(l, &a[2 * k + j], nw, w);
        }
    }
    fn_8028DEFC(l, &a[n - l], &w[nw - (l >> 1)]);
    fn_8028E6FC(l, &a[n - l], nw, w);
}


void fn_8028DC94(s32 n, f32 *a, s32 nw, f32 *w) {
    s32 j, k, l, m;

    m = n >> 1;
    for (l = n >> 2; l > 128; l >>= 2) {
        for (k = l; k < m; k <<= 2) {
            for (j = k - l; j < m; j += 2 * k) {
                fn_8028DEFC(l, &a[j], &w[nw - (l >> 1)]);
                fn_8028DEFC(l, &a[m + j], &w[nw - (l >> 1)]);
            }
            for (j = 2 * k - l; j < m; j += 4 * k) {
                fn_8028E290(l, &a[j], &w[nw - l]);
                fn_8028E290(l, &a[m + j], &w[nw - l]);
            }
        }
    }
    for (k = l; k < m; k <<= 2) {
        for (j = k - l; j < m; j += 2 * k) {
            fn_8028DEFC(l, &a[j], &w[nw - (l >> 1)]);
            fn_8028E6FC(l, &a[j], nw, w);
            fn_8028DEFC(l, &a[m + j], &w[nw - (l >> 1)]);
            fn_8028E6FC(l, &a[m + j], nw, w);
        }
        for (j = 2 * k - l; j < m; j += 4 * k) {
            fn_8028E290(l, &a[j], &w[nw - l]);
            fn_8028E7B0(l, &a[j], nw, w);
            fn_8028E290(l, &a[m + j], &w[nw - l]);
            fn_8028E7B0(l, &a[m + j], nw, w);
        }
    }
}

void fn_8028F69C(f32 *a) {
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;

    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r - x3i;
    a[3] = x1i + x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

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
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
}

void fn_8028F7D8(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, k, kk, ks, m;
    f32 wkr, wki, xr, xi, yr, yi;

    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5f - c[nc - kk];
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

void fn_8028F890(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, k, kk, ks, m;
    f32 wkr, wki, xr, xi, yr, yi;

    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5f - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

void fn_8028BA78(s32 nw, s32 *ip, f32 *w);

void fn_8028B6F4(s32 n, s32 isgn, f32 *a, s32 *ip, f32 *w) {
    s32 nw, nc;
    f32 xi;

    nw = ip[0];
    if (n > (nw << 2)) {
        nw = n >> 2;
        fn_8028BA78(nw, ip, w);
    }
    nc = ip[1];
    if (n > (nc << 2)) {
        nc = n >> 2;
        fn_8028BCC0(nc, ip, w + nw);
    }
    if (isgn >= 0) {
        if (n > 4) {
            fn_8028BDF4(n, a, ip + 2, nw, w);
            fn_8028F7D8(n, a, nc, w + nw);
        } else if (n == 4) {
            fn_8028BDF4(n, a, ip + 2, nw, w);
        }
        xi = a[0] - a[1];
        a[0] += a[1];
        a[1] = xi;
    } else {
        a[1] = 0.5f * (a[0] - a[1]);
        a[0] -= a[1];
        if (n > 4) {
            fn_8028F890(n, a, nc, w + nw);
            fn_8028BF5C(n, a, ip + 2, nw, w);
        } else if (n == 4) {
            fn_8028BF5C(n, a, ip + 2, nw, w);
        }
    }
}

f32 wC_atanf_BA78(f32) asm("fn_800F05AC");
f32 wC_cosf_BA78(f32) asm("fn_800F0588");
f32 wC_sinf_BA78(f32) asm("fn_800F0564");

void fn_8028BA78(s32 nw, s32 *ip, f32 *w) {
    s32 j, nwh, nw0, nw1;
    f32 delta, wn4r, wk1r, wk1i, wk3r, wk3i;

    ip[0] = nw;
    ip[1] = 1;
    if (nw > 2) {
        nwh = nw >> 1;
        delta = wC_atanf_BA78(1.0f) / nwh;
        wn4r = wC_cosf_BA78(delta * nwh);
        w[0] = 1.0f;
        w[1] = wn4r;
        if (nwh >= 4) {
            w[2] = 0.5 / wC_cosf_BA78(delta * 2);
            w[3] = 0.5 / wC_cosf_BA78(delta * 6);
        }
        for (j = 4; j < nwh; j += 4) {
            w[j] = wC_cosf_BA78(delta * j);
            w[j + 1] = wC_sinf_BA78(delta * j);
            w[j + 2] = wC_cosf_BA78(3 * delta * j);
            w[j + 3] = wC_sinf_BA78(3 * delta * j);
        }
        nw0 = 0;
        while (nwh > 2) {
            nw1 = nw0 + nwh;
            nwh >>= 1;
            w[nw1] = 1.0f;
            w[nw1 + 1] = wn4r;
            if (nwh >= 4) {
                wk1r = w[nw0 + 4];
                wk3r = w[nw0 + 6];
                w[nw1 + 2] = 0.5f / wk1r;
                w[nw1 + 3] = 0.5f / wk3r;
            }
            for (j = 4; j < nwh; j += 4) {
                wk1r = w[nw0 + 2 * j];
                wk1i = w[nw0 + 2 * j + 1];
                wk3r = w[nw0 + 2 * j + 2];
                wk3i = w[nw0 + 2 * j + 3];
                w[nw1 + j] = wk1r;
                w[nw1 + j + 1] = wk1i;
                w[nw1 + j + 2] = wk3r;
                w[nw1 + j + 3] = wk3i;
            }
            nw0 = nw1;
        }
    }
}

f32 wC_atanf_BCC0(f32) asm("fn_800F05AC");
f32 wC_cosf_BCC0(f32) asm("fn_800F0588");
f32 wC_sinf_BCC0(f32) asm("fn_800F0564");

void fn_8028BCC0(s32 nc, void *ip_, f32 *c) {
    s32 *ip = ip_;
    s32 j, nch;
    f32 delta;

    ip[1] = nc;
    if (nc > 1) {
        nch = nc >> 1;
        delta = wC_atanf_BCC0(1.0f) / nch;
        c[0] = wC_cosf_BCC0(delta * nch);
        c[nch] = 0.5f * c[0];
        for (j = 1; j < nch; j++) {
            c[j] = 0.5 * wC_cosf_BCC0(delta * j);
            c[nc - j] = 0.5 * wC_sinf_BCC0(delta * j);
        }
    }
}

void fn_8028E290(s32 n, f32 *a, f32 *w) {
    s32 j, j0, j1, j2, j3, k, kr, m, mh;
    f32 wn4r, wk1r, wk1i, wk3r, wk3i, wd1r, wd1i, wd3r, wd3i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, y0r, y0i, y2r, y2i;

    mh = n >> 3;
    m = 2 * mh;
    wn4r = w[1];
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] - a[j2 + 1];
    x0i = a[1] + a[j2];
    x1r = a[0] + a[j2 + 1];
    x1i = a[1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wn4r * (x2r - x2i);
    y0i = wn4r * (x2i + x2r);
    a[0] = x0r + y0r;
    a[1] = x0i + y0i;
    a[j1] = x0r - y0r;
    a[j1 + 1] = x0i - y0i;
    y0r = wn4r * (x3r - x3i);
    y0i = wn4r * (x3i + x3r);
    a[j2] = x1r - y0i;
    a[j2 + 1] = x1i + y0r;
    a[j3] = x1r + y0i;
    a[j3 + 1] = x1i - y0r;
    k = 0;
    kr = 2 * m;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = -w[k + 3];
        kr -= 4;
        wd1i = w[kr];
        wd1r = w[kr + 1];
        wd3i = w[kr + 2];
        wd3r = -w[kr + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] - a[j2 + 1];
        x0i = a[j + 1] + a[j2];
        x1r = a[j] + a[j2 + 1];
        x1i = a[j + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wk1r * x0r - wk1i * x0i;
        y0i = wk1r * x0i + wk1i * x0r;
        y2r = wd1r * x2r - wd1i * x2i;
        y2i = wd1r * x2i + wd1i * x2r;
        a[j] = y0r + y2r;
        a[j + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wk3r * x1r + wk3i * x1i;
        y0i = wk3r * x1i - wk3i * x1r;
        y2r = wd3r * x3r + wd3i * x3i;
        y2i = wd3r * x3i - wd3i * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] - a[j2 + 1];
        x0i = a[j0 + 1] + a[j2];
        x1r = a[j0] + a[j2 + 1];
        x1i = a[j0 + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wd1i * x0r - wd1r * x0i;
        y0i = wd1i * x0i + wd1r * x0r;
        y2r = wk1i * x2r - wk1r * x2i;
        y2i = wk1i * x2i + wk1r * x2r;
        a[j0] = y0r + y2r;
        a[j0 + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wd3i * x1r + wd3r * x1i;
        y0i = wd3i * x1i - wd3r * x1r;
        y2r = wk3i * x3r + wk3r * x3i;
        y2i = wk3i * x3i - wk3r * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
    }
    wk1r = w[m];
    wk1i = w[m + 1];
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] - a[j2 + 1];
    x0i = a[j0 + 1] + a[j2];
    x1r = a[j0] + a[j2 + 1];
    x1i = a[j0 + 1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wk1r * x0r - wk1i * x0i;
    y0i = wk1r * x0i + wk1i * x0r;
    y2r = wk1i * x2r - wk1r * x2i;
    y2i = wk1i * x2i + wk1r * x2r;
    a[j0] = y0r + y2r;
    a[j0 + 1] = y0i + y2i;
    a[j1] = y0r - y2r;
    a[j1 + 1] = y0i - y2i;
    y0r = wk1i * x1r - wk1r * x1i;
    y0i = wk1i * x1i + wk1r * x1r;
    y2r = wk1r * x3r - wk1i * x3i;
    y2i = wk1r * x3i + wk1i * x3r;
    a[j2] = y0r - y2r;
    a[j2 + 1] = y0i - y2i;
    a[j3] = y0r + y2r;
    a[j3 + 1] = y0i + y2i;
}

void fn_8028F2AC(f32 *a, f32 *w) {
    f32 wn4r, x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i,
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i,
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;

    wn4r = w[1];
    x0r = a[0] + a[8];
    x0i = a[1] + a[9];
    x1r = a[0] - a[8];
    x1i = a[1] - a[9];
    x2r = a[4] + a[12];
    x2i = a[5] + a[13];
    x3r = a[4] - a[12];
    x3i = a[5] - a[13];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y2r = x0r - x2r;
    y2i = x0i - x2i;
    y1r = x1r - x3i;
    y1i = x1i + x3r;
    y3r = x1r + x3i;
    y3i = x1i - x3r;
    x0r = a[2] + a[10];
    x0i = a[3] + a[11];
    x1r = a[2] - a[10];
    x1i = a[3] - a[11];
    x2r = a[6] + a[14];
    x2i = a[7] + a[15];
    x3r = a[6] - a[14];
    x3i = a[7] - a[15];
    y4r = x0r + x2r;
    y4i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    x2r = x1r + x3i;
    x2i = x1i - x3r;
    y5r = wn4r * (x0r - x0i);
    y5i = wn4r * (x0r + x0i);
    y7r = wn4r * (x2r - x2i);
    y7i = wn4r * (x2r + x2i);
    a[8] = y1r + y5r;
    a[9] = y1i + y5i;
    a[10] = y1r - y5r;
    a[11] = y1i - y5i;
    a[12] = y3r - y7i;
    a[13] = y3i + y7r;
    a[14] = y3r + y7i;
    a[15] = y3i - y7r;
    a[0] = y0r + y4r;
    a[1] = y0i + y4i;
    a[2] = y0r - y4r;
    a[3] = y0i - y4i;
    a[4] = y2r - y6i;
    a[5] = y2i + y6r;
    a[6] = y2r + y6i;
    a[7] = y2i - y6r;
}

void fn_8028F484(f32 *a, f32 *w) {
    f32 wn4r, wk1r, wk1i, x0r, x0i, x1r, x1i,
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i,
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;

    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    y0r = a[0] - a[9];
    y0i = a[1] + a[8];
    y1r = a[0] + a[9];
    y1i = a[1] - a[8];
    x0r = a[4] - a[13];
    x0i = a[5] + a[12];
    y2r = wn4r * (x0r - x0i);
    y2i = wn4r * (x0i + x0r);
    x0r = a[4] + a[13];
    x0i = a[5] - a[12];
    y3r = wn4r * (x0r - x0i);
    y3i = wn4r * (x0i + x0r);
    x0r = a[2] - a[11];
    x0i = a[3] + a[10];
    y4r = wk1r * x0r - wk1i * x0i;
    y4i = wk1r * x0i + wk1i * x0r;
    x0r = a[2] + a[11];
    x0i = a[3] - a[10];
    y5r = wk1i * x0r - wk1r * x0i;
    y5i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] - a[15];
    x0i = a[7] + a[14];
    y6r = wk1i * x0r - wk1r * x0i;
    y6i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] + a[15];
    x0i = a[7] - a[14];
    y7r = wk1r * x0r - wk1i * x0i;
    y7i = wk1r * x0i + wk1i * x0r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y4r + y6r;
    x1i = y4i + y6i;
    a[0] = x0r + x1r;
    a[1] = x0i + x1i;
    a[2] = x0r - x1r;
    a[3] = x0i - x1i;
    x0r = y0r - y2r;
    x0i = y0i - y2i;
    x1r = y4r - y6r;
    x1i = y4i - y6i;
    a[4] = x0r - x1i;
    a[5] = x0i + x1r;
    a[6] = x0r + x1i;
    a[7] = x0i - x1r;
    x0r = y1r - y3i;
    x0i = y1i + y3r;
    x1r = y5r - y7r;
    x1i = y5i - y7i;
    a[8] = x0r + x1r;
    a[9] = x0i + x1i;
    a[10] = x0r - x1r;
    a[11] = x0i - x1i;
    x0r = y1r + y3i;
    x0i = y1i - y3r;
    x1r = y5r + y7r;
    x1i = y5i + y7i;
    a[12] = x0r - x1i;
    a[13] = x0i + x1r;
    a[14] = x0r + x1i;
    a[15] = x0i - x1r;
}

void fn_8028E868(f32 *a, f32 *w) {
    f32 wn4r, wk1r, wk1i,
        x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i,
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i,
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i,
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i,
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;

    wn4r = w[1];
    wk1i = wn4r * w[2];
    wk1r = wk1i + w[2];
    x0r = a[0] + a[16];
    x0i = a[1] + a[17];
    x1r = a[0] - a[16];
    x1i = a[1] - a[17];
    x2r = a[8] + a[24];
    x2i = a[9] + a[25];
    x3r = a[8] - a[24];
    x3i = a[9] - a[25];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y4r = x0r - x2r;
    y4i = x0i - x2i;
    y8r = x1r - x3i;
    y8i = x1i + x3r;
    y12r = x1r + x3i;
    y12i = x1i - x3r;
    x0r = a[2] + a[18];
    x0i = a[3] + a[19];
    x1r = a[2] - a[18];
    x1i = a[3] - a[19];
    x2r = a[10] + a[26];
    x2i = a[11] + a[27];
    x3r = a[10] - a[26];
    x3i = a[11] - a[27];
    y1r = x0r + x2r;
    y1i = x0i + x2i;
    y5r = x0r - x2r;
    y5i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y9r = wk1r * x0r - wk1i * x0i;
    y9i = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y13r = wk1i * x0r - wk1r * x0i;
    y13i = wk1i * x0i + wk1r * x0r;
    x0r = a[4] + a[20];
    x0i = a[5] + a[21];
    x1r = a[4] - a[20];
    x1i = a[5] - a[21];
    x2r = a[12] + a[28];
    x2i = a[13] + a[29];
    x3r = a[12] - a[28];
    x3i = a[13] - a[29];
    y2r = x0r + x2r;
    y2i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y10r = wn4r * (x0r - x0i);
    y10i = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y14r = wn4r * (x0r + x0i);
    y14i = wn4r * (x0i - x0r);
    x0r = a[6] + a[22];
    x0i = a[7] + a[23];
    x1r = a[6] - a[22];
    x1i = a[7] - a[23];
    x2r = a[14] + a[30];
    x2i = a[15] + a[31];
    x3r = a[14] - a[30];
    x3i = a[15] - a[31];
    y3r = x0r + x2r;
    y3i = x0i + x2i;
    y7r = x0r - x2r;
    y7i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y11r = wk1i * x0r - wk1r * x0i;
    y11i = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y15r = wk1r * x0r - wk1i * x0i;
    y15i = wk1r * x0i + wk1i * x0r;
    x0r = y12r - y14r;
    x0i = y12i - y14i;
    x1r = y12r + y14r;
    x1i = y12i + y14i;
    x2r = y13r - y15r;
    x2i = y13i - y15i;
    x3r = y13r + y15r;
    x3i = y13i + y15i;
    a[24] = x0r + x2r;
    a[25] = x0i + x2i;
    a[26] = x0r - x2r;
    a[27] = x0i - x2i;
    a[28] = x1r - x3i;
    a[29] = x1i + x3r;
    a[30] = x1r + x3i;
    a[31] = x1i - x3r;
    x0r = y8r + y10r;
    x0i = y8i + y10i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    x3r = y9r - y11r;
    x3i = y9i - y11i;
    a[16] = x0r + x2r;
    a[17] = x0i + x2i;
    a[18] = x0r - x2r;
    a[19] = x0i - x2i;
    a[20] = x1r - x3i;
    a[21] = x1i + x3r;
    a[22] = x1r + x3i;
    a[23] = x1i - x3r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x3r = wn4r * (x0r - x0i);
    x3i = wn4r * (x0i + x0r);
    x0r = y4r - y6i;
    x0i = y4i + y6r;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    a[8] = x0r + x2r;
    a[9] = x0i + x2i;
    a[10] = x0r - x2r;
    a[11] = x0i - x2i;
    a[12] = x1r - x3i;
    a[13] = x1i + x3r;
    a[14] = x1r + x3i;
    a[15] = x1i - x3r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    x3r = y1r - y3r;
    x3i = y1i - y3i;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x0r - x2r;
    a[3] = x0i - x2i;
    a[4] = x1r - x3i;
    a[5] = x1i + x3r;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

void fn_8028C7F0(f32 *a) {
    f32 x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, x5r, x5i, x6r, x6i, x7r, x7i, x8r, x8i, x9r, x9i, x10r, x10i, x11r, x11i, x12r, x12i, x13r, x13i, x14r, x14i, x15r, x15i;

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
    x8r = a[16];
    x8i = a[17];
    x9r = a[18];
    x9i = a[19];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    x15r = a[30];
    x15i = a[31];
    a[2] = x15r;
    a[3] = x15i;
    a[4] = x7r;
    a[5] = x7i;
    a[6] = x11r;
    a[7] = x11i;
    a[8] = x3r;
    a[9] = x3i;
    a[10] = x13r;
    a[11] = x13i;
    a[12] = x5r;
    a[13] = x5i;
    a[14] = x9r;
    a[15] = x9i;
    a[16] = x1r;
    a[17] = x1i;
    a[18] = x14r;
    a[19] = x14i;
    a[20] = x6r;
    a[21] = x6i;
    a[22] = x10r;
    a[23] = x10i;
    a[24] = x2r;
    a[25] = x2i;
    a[26] = x12r;
    a[27] = x12i;
    a[28] = x4r;
    a[29] = x4i;
    a[30] = x8r;
    a[31] = x8i;
}

void fn_8028C998(f32 *a) {
    f32 x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, x5r, x5i, x6r, x6i, x7r, x7i;

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
    a[15] = x4i;
}

void fn_8028ED28(f32 *a, f32 *w) {
    f32 wn4r, wk1r, wk1i, wk2r, wk2i, wk3r, wk3i,
        x0r, x0i, x1r, x1i, x2r, x2i,
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i,
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i,
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i,
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;

    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    wk3r = w[6];
    wk3i = w[7];
    wk2r = w[8];
    wk2i = w[9];
    x1r = a[0] - a[17];
    x1i = a[1] + a[16];
    x0r = a[8] - a[25];
    x0i = a[9] + a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y0r = x1r + x2r;
    y0i = x1i + x2i;
    y4r = x1r - x2r;
    y4i = x1i - x2i;
    x1r = a[0] + a[17];
    x1i = a[1] - a[16];
    x0r = a[8] + a[25];
    x0i = a[9] - a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y8r = x1r - x2i;
    y8i = x1i + x2r;
    y12r = x1r + x2i;
    y12i = x1i - x2r;
    x0r = a[2] - a[19];
    x0i = a[3] + a[18];
    x1r = wk1r * x0r - wk1i * x0i;
    x1i = wk1r * x0i + wk1i * x0r;
    x0r = a[10] - a[27];
    x0i = a[11] + a[26];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y1r = x1r + x2r;
    y1i = x1i + x2i;
    y5r = x1r - x2r;
    y5i = x1i - x2i;
    x0r = a[2] + a[19];
    x0i = a[3] - a[18];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[10] + a[27];
    x0i = a[11] - a[26];
    x2r = wk1r * x0r + wk1i * x0i;
    x2i = wk1r * x0i - wk1i * x0r;
    y9r = x1r - x2r;
    y9i = x1i - x2i;
    y13r = x1r + x2r;
    y13i = x1i + x2i;
    x0r = a[4] - a[21];
    x0i = a[5] + a[20];
    x1r = wk2r * x0r - wk2i * x0i;
    x1i = wk2r * x0i + wk2i * x0r;
    x0r = a[12] - a[29];
    x0i = a[13] + a[28];
    x2r = wk2i * x0r - wk2r * x0i;
    x2i = wk2i * x0i + wk2r * x0r;
    y2r = x1r + x2r;
    y2i = x1i + x2i;
    y6r = x1r - x2r;
    y6i = x1i - x2i;
    x0r = a[4] + a[21];
    x0i = a[5] - a[20];
    x1r = wk2i * x0r - wk2r * x0i;
    x1i = wk2i * x0i + wk2r * x0r;
    x0r = a[12] + a[29];
    x0i = a[13] - a[28];
    x2r = wk2r * x0r - wk2i * x0i;
    x2i = wk2r * x0i + wk2i * x0r;
    y10r = x1r - x2r;
    y10i = x1i - x2i;
    y14r = x1r + x2r;
    y14i = x1i + x2i;
    x0r = a[6] - a[23];
    x0i = a[7] + a[22];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[14] - a[31];
    x0i = a[15] + a[30];
    x2r = wk1i * x0r - wk1r * x0i;
    x2i = wk1i * x0i + wk1r * x0r;
    y3r = x1r + x2r;
    y3i = x1i + x2i;
    y7r = x1r - x2r;
    y7i = x1i - x2i;
    x0r = a[6] + a[23];
    x0i = a[7] - a[22];
    x1r = wk1i * x0r + wk1r * x0i;
    x1i = wk1i * x0i - wk1r * x0r;
    x0r = a[14] + a[31];
    x0i = a[15] - a[30];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y11r = x1r + x2r;
    y11i = x1i + x2i;
    y15r = x1r - x2r;
    y15i = x1i - x2i;
    x1r = y0r + y2r;
    x1i = y0i + y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    a[0] = x1r + x2r;
    a[1] = x1i + x2i;
    a[2] = x1r - x2r;
    a[3] = x1i - x2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r - y3r;
    x2i = y1i - y3i;
    a[4] = x1r - x2i;
    a[5] = x1i + x2r;
    a[6] = x1r + x2i;
    a[7] = x1i - x2r;
    x1r = y4r - y6i;
    x1i = y4i + y6r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[8] = x1r + x2r;
    a[9] = x1i + x2i;
    a[10] = x1r - x2r;
    a[11] = x1i - x2i;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[12] = x1r - x2i;
    a[13] = x1i + x2r;
    a[14] = x1r + x2i;
    a[15] = x1i - x2r;
    x1r = y8r + y10r;
    x1i = y8i + y10i;
    x2r = y9r - y11r;
    x2i = y9i - y11i;
    a[16] = x1r + x2r;
    a[17] = x1i + x2i;
    a[18] = x1r - x2r;
    a[19] = x1i - x2i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    a[20] = x1r - x2i;
    a[21] = x1i + x2r;
    a[22] = x1r + x2i;
    a[23] = x1i - x2r;
    x1r = y12r - y14i;
    x1i = y12i + y14r;
    x0r = y13r + y15i;
    x0i = y13i - y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[24] = x1r + x2r;
    a[25] = x1i + x2i;
    a[26] = x1r - x2r;
    a[27] = x1i - x2i;
    x1r = y12r + y14i;
    x1i = y12i - y14r;
    x0r = y13r - y15i;
    x0i = y13i + y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[28] = x1r - x2i;
    a[29] = x1i + x2r;
    a[30] = x1r + x2i;
    a[31] = x1i - x2r;
}

void fn_8028C0C4(s32 n, s32 *ip, f32 *a) {
    int j, j1, k, k1, l, m, m2;
    float xr, xi, yr, yi;

    ip[0] = 0;
    l = n;
    m = 1;
    while ((m << 3) < l) {
        l >>= 1;
        for (j = 0; j < m; j++) {
            ip[m + j] = ip[j] + l;
        }
        m <<= 1;
    }
    m2 = 2 * m;
    if ((m << 3) == l) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 2 * j + ip[k];
                k1 = 2 * k + ip[j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 += 2 * m2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 -= m2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 += 2 * m2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            j1 = 2 * k + m2 + ip[k];
            k1 = j1 + m2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    } else {
        for (k = 1; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 2 * j + ip[k];
                k1 = 2 * k + ip[j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += m2;
                k1 += m2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
        }
    }
}

void fn_8028CA0C(s32 n, f32 *a, f32 *w) {
    s32 j, j0, j1, j2, j3, k, m, mh;
    f32 wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, wd1r, wd1i, wd3r, wd3i;
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;

    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i - w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = -w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = a[j + 3] + a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = a[j + 3] - a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = a[j0 - 1] + a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = a[j0 - 1] - a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = a[j0 - 1] + a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = a[j0 - 1] - a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i + x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = a[j0 + 3] + a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = a[j0 + 3] - a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i + x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

extern s32 wCa_802F3860_7925C[] asm("lbl_802F3860");
s32 wC_fn_80278920_7925C(u8 *) asm("fn_80278920");

void fn_8027925C(u8 *b, u32 frame, u32 flags) {
    u32 start;
    u32 key;
    s32 saved;

    if (b == 0) {
        return;
    }
    if (frame == 0) {
        frame = 1;
    }
    *(s32 *)(b + 312) = 1;
    if (frame > *(u32 *)(b + 8)) {
        frame = *(u32 *)(b + 8);
    }
    if ((flags & 2) || *(s32 *)(b + 760) == 0) {
        start = frame;
    } else {
        start = (*(u32 *)(b + 20) + (*(u32 *)(b + 24) - 1)) / *(u32 *)(b + 24);
        if (start >= frame) {
            start = 1;
        } else {
            start = frame - start;
        }
    }
    if (*(u32 *)(b + 12) != frame) {
        if ((flags & 3) != 3) {
            if (!(flags & 1)) {
                key = fn_80279100(b, frame, 0);
            } else {
                key = frame;
            }
            if (key > start) {
                saved = *(s32 *)(b + 676);
                fn_8027AA64(b, 0);
            } else {
                start = key;
                saved = 0;
            }
            if (frame < *(u32 *)(b + 12) || start > *(u32 *)(b + 12)) {
                fn_80276E80(b, start);
                if (start == frame) {
                    goto done;
                }
            }
            {
                s32 snd;
                fn_80283E90(wCa_802F3860_7925C[0], b + 844);
                snd = *(s32 *)(b + 672);
                if (snd != 0) {
                    fn_8027AA78(b, 0);
                }
                if (*(s32 *)(b + 12) != *(s32 *)(b + 748)) {
                    wC_fn_80278920_7925C(b);
                    *(s32 *)(b + 772) = 1;
                }
                fn_80278F54(b);
                while (*(u32 *)(b + 12) != frame) {
                    if (saved != 0 && *(u32 *)(b + 12) == key) {
                        fn_8027AA64(b, 1);
                        saved = 0;
                    }
                    wC_fn_80278920_7925C(b);
                    *(s32 *)(b + 772) = 1;
                    fn_80278F54(b);
                }
                *(s32 *)(b + 640) = 0;
                if (saved != 0) {
                    fn_8027AA64(b, 1);
                }
                fn_80283F38(wCa_802F3860_7925C[0], b + 844);
                if (snd != 0) {
                    fn_8027AA78(b, 1);
                }
            }
        } else {
            fn_80276E80(b, frame);
        }
    }
done:
    *(s32 *)(b + 312) = 0;
}

extern s32 wCa_802F385C_79498[] asm("lbl_802F385C");
extern s32 wCa_802F3860_79498[] asm("lbl_802F3860");
s32 wC_80283C38_79498(s32, u8 *, s32, u8 *, s32) asm("fn_80283C38");
void *wC_memset_79498() asm("memset");

void fn_80279498(u8 *b) {
    u32 i;
    if (b == 0) {
        return;
    }
    fn_80279868(b, 1);
    {
        s32 l0 = (!(*(u32 *)(b + 32) & 0x8000000) && *(s32 *)(b + 264) == 0) ? wCa_802F385C_79498[0] : 0;
        s32 l1 = *(s32 *)(b + 760) != 0 ? wCa_802F3860_79498[0] : 0;
        switch (wC_80283C38_79498(l0, b + 524, l1, b + 844, 1)) {
    case 1:
        wCa_802F385C_79498[0] = 0;
        break;
    case 2:
        wCa_802F3860_79498[0] = 0;
        break;
    case 3:
        wCa_802F385C_79498[0] = 0;
        wCa_802F3860_79498[0] = 0;
        break;
        }
    }
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
        (*(void (**)(u8 *))(e + 28))(e);
        fn_8028389C(*(void **)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 60));
        if (*(void **)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 44) != 0) {
            fn_8027B790(*(void **)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 44));
        }
    }
    fn_8027B86C();
    if (*(void **)(b + 264) != 0) {
        if (!(*(u32 *)(b + 32) & 0x4000000)) {
            fn_8027B790(*(void **)(b + 264));
        }
    } else {
        (*(void (**)(u8 *))(b + 292))(b + 272);
        fn_8027B790(*(void **)(b + 588));
    }
    if (*(void **)(b + 188) != 0) {
        fn_8027B790(*(void **)(b + 188));
    }
    wC_memset_79498(b, 0, 908);
    fn_8027B790(b);
}

extern s32 wCa_802F385C_796A8[] asm("lbl_802F385C");

s32 fn_802796A8(u8 *b) {
    s32 adj, t, d, r;
    if (b == 0) {
        return 0;
    }
    if (*(s32 *)(b + 624) == 0 && *(s32 *)(b + 252) == 0) {
        return 0;
    }
    if (*(s32 *)(b + 28) != 0) {
        return 0;
    }
    adj = *(s32 *)(b + 640);
    if (adj == 0) {
        fn_80276E38(b);
        adj = *(s32 *)(b + 640);
    }
    if (*(s32 *)(b + 760) != 0) {
        fn_80276B84(b);
    }
    t = fn_802753F0();
    fn_80278F28(b, t);
    fn_8027964C(b, t);
    if (*(s32 *)(b + 252) != 0) {
        goto skip;
    }
    if (*(s32 *)(b + 760) != 0 && *(s32 *)(b + 672) == 0) {
        goto skip;
    }
    if (*(u32 *)(b + 20) == 0) {
        return 0;
    }
    r = fn_802752DC((*(s32 *)(b + 624) - *(s32 *)(b + 644)) * 1000, *(u32 *)(b + 24), *(u32 *)(b + 20));
    r = fn_80275394(r, *(u32 *)(*(u8 **)(b + 768) + 104), 16);
    d = t - (adj + *(s32 *)(b + 824));
    if (d < r) {
        goto skip;
    }
    d -= r;
    if (d > *(s32 *)(b + 648)) {
        if (*(s32 *)(b + 760) == 0) {
            *(s32 *)(b + 640) = t;
            *(s32 *)(b + 644) = *(s32 *)(b + 624) - 1;
        } else {
            *(s32 *)(b + 824) = d;
            *(u32 *)(b + 828) = fn_802752DC(d, *(u32 *)(b + 24), *(u32 *)(b + 20));
        }
    }
    if (*(u32 *)(b + 824) < *(u32 *)(b + 828)) {
        *(u32 *)(b + 824) = 0;
    } else {
        *(u32 *)(b + 824) -= *(u32 *)(b + 828);
    }
    return 0;
skip:
    if (*(s32 *)(b + 264) == 0) {
        if (fn_80283DFC(wCa_802F385C_796A8[0], b + 524) != 0) {
            (*(void (**)(u8 *))(b + 288))(b + 272);
            fn_80283F38(wCa_802F385C_796A8[0], b + 524);
        }
    }
    return 1;
}

typedef struct { u8 b[60]; } wCDVD_B58C;
extern char wCf_8027AD10_B58C[] asm("fn_8027AD10");
extern char wCf_8027B1BC_B58C[] asm("fn_8027B1BC");
extern char wCf_8027B4CC_B58C[] asm("fn_8027B4CC");
extern char wCf_8027B4D8_B58C[] asm("fn_8027B4D8");
extern char wCf_8027B0D4_B58C[] asm("fn_8027B0D4");
extern char wCf_8027B54C_B58C[] asm("fn_8027B54C");
void *wC_memset_B58C() asm("memset");
s32 fn_800BD044(void *);
s32 fn_800BD338(s32, void *);

s32 fn_8027B58C(u8 *io, void *src, u32 flags) {
    wC_memset_B58C(io, 0, 316);
    if (flags & 0x800000) {
        *(wCDVD_B58C *)(io + 76) = *(wCDVD_B58C *)src;
        *(s32 *)(io + 168) = 1;
        *(s32 *)(io + 172) = *(s32 *)(io + 120);
    } else {
        s32 e = fn_800BD044(src);
        if (e == -1 || fn_800BD338(e, io + 76) == 0) {
            return 0;
        }
    }
    *(void **)(io + 0) = wCf_8027AD10_B58C;
    *(void **)(io + 4) = wCf_8027B1BC_B58C;
    *(void **)(io + 8) = wCf_8027B4CC_B58C;
    *(void **)(io + 12) = wCf_8027B4D8_B58C;
    *(void **)(io + 16) = wCf_8027B0D4_B58C;
    *(void **)(io + 20) = wCf_8027B54C_B58C;
    return 1;
}

extern s32 wCa_802F385C_78F54[] asm("lbl_802F385C");
extern s32 wCa_802F3860_78F54[] asm("lbl_802F3860");
s32 wC_8027AA78_78F54(u8 *, s32) asm("fn_8027AA78");
void wC_80283EFC_78F54(s32, void *, s32, void *) asm("fn_80283EFC");

void fn_80278F54(u8 *b) {
    s32 found = 0;
    u32 i;
    if (b == 0) {
        return;
    }
    *(volatile s32 *)(b + 312) = 1;
    *(volatile s32 *)(b + 312) = found;
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
        if (*(s32 *)(e + 92) != 0) {
            u32 cnt;
            *(s32 *)(e + 92) = 0;
            cnt = *(u32 *)(b + 12);
            if (cnt > 1 && (s32)cnt <= *(s32 *)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 72)) {
                found = 1;
            }
        }
    }
    if (found != 0) {
        {
            s32 l1 = wCa_802F3860_78F54[0];
            s32 l2 = wCa_802F385C_78F54[0];
            (*(s32 *)(b + 764))++;
            wC_80283EFC_78F54(l1, b + 844, l2, b + 524);
        }
        wC_8027AA78_78F54(b, 0);
        while ((*(u32 *)(b + 344) + 1) * 100 / (*(u32 *)(b + 340) + 1) <= 89 &&
               (*(s32 (**)(void *))(b + 288))(b + 272) != 0) {
        }
        *(s32 *)(b + 640) = 0;
        *(s32 *)(b + 824) = 0;
        wC_8027AA78_78F54(b, 1);
        fn_80283F38(wCa_802F3860_78F54[0], b + 844);
        fn_80283F38(wCa_802F385C_78F54[0], b + 524);
    }
    *(s32 *)(b + 312) = 1;
    if (*(s32 *)(b + 760) != 0) {
        fn_80276B84(b);
    }
    fn_80278F28(b, fn_802753F0());
    {
        u32 cnt = *(u32 *)(b + 12);
        s32 next = 1;
        if (cnt < *(u32 *)(b + 8)) {
            next = cnt + 1;
        }
        fn_80276E80(b, next);
    }
    *(s32 *)(b + 312) = 0;
}

void *wC_memset_83AA4() asm("memset");

void *fn_80283AA4(s32 n) {
    s32 *p = (s32 *)fn_8027B6D4(64);
    if (p != 0) {
        wC_memset_83AA4(p, 0, 64);
        p[14] = 0;
        p[1] = 1;
        p[12] = 0;
        p[0] = 0;
        p[13] = 1;
        if (n < 0) {
            n = -n;
        }
        p[15] = n;
    }
    return p;
}


u32 fn_80276AB8(u8 *p) {
    u32 start = *(u32 *)(p + 64);
    u32 end = *(u32 *)(p + 76);
    if (start < end) {
        u32 len = end - start;
        u32 ms = (len * 1000) / ((*(u32 *)(p + 108) * *(u32 *)(p + 112) * *(u32 *)(p + 116)) >> 3);
        u32 pos = *(u32 *)(p + 56) - len;
        u32 base;
        *(u32 *)(p + 56) = pos;
        base = *(u32 *)(p + 44);
        if (pos < base) {
            u32 wrap = base - pos;
            *(u32 *)(p + 56) = pos + *(u32 *)(p + 40);
            memset((void *)base, 0, len - wrap);
            memset(*(void **)(p + 56), 0, wrap);
        } else {
            memset((void *)pos, 0, len);
        }
        *(u32 *)(p + 64) += len;
        return ms;
    }
    return 0;
}

void wC_8027964C_79AFC(u8 *, u32) asm("fn_8027964C");

#define D(o, k) (*(u32 **)(b + (o)))[0] - (*(u32 **)(b + (o)))[k]
void fn_80279AFC(u8 *b, u32 *o, u32 frames) {
    s32 t = fn_802753F0();
    fn_80278F28(b, t);
    wC_8027964C_79AFC(b, t);
    if (frames == 0 || frames >= *(u32 *)(b + 708)) {
        frames = *(u32 *)(b + 708) - 1;
    }
    if (frames > *(u32 *)(b + 12)) {
        frames = *(u32 *)(b + 12) - 1;
        if (frames == 0) {
            frames = 1;
        }
    }
    o[0] = *(u32 *)(b + 16);
    o[1] = *(u32 *)(b + 20);
    o[2] = *(u32 *)(b + 20);
    o[11] = *(u32 *)(b + 340);
    o[12] = *(u32 *)(b + 344);
    o[13] = fn_802752DC((*(u32 **)(b + 268))[*(u32 *)(b + 12)] - (*(u32 **)(b + 268))[*(u32 *)(b + 12) - frames],
                        *(u32 *)(b + 700), frames * *(u32 *)(b + 704));
    o[3] = frames;
    o[4] = D(716, frames);
    if (o[4] == 0) {
        o[4] = 1;
    }
    o[5] = D(724, frames);
    o[6] = D(720, frames);
    o[10] = D(728, frames);
    o[7] = D(732, frames);
    o[8] = D(736, frames);
    o[9] = D(740, frames);
}
#undef D


#define F(o) (*(u32 *)(p + (o)))
#define P(o) (*(u8 **)(p + (o)))
s32 wC_fn_802760B4(u8 *p) asm("fn_802760B4");

s32 wC_fn_802760B4(u8 *p) {
    u32 pos, t, d, end;
    if (F(252) != 0 || F(96) == 0 || F(200) == 0 || *(volatile u32 *)(p + 248) == 1) {
        goto ret0;
    }
    if (*(volatile u32 *)(p + 248) == 0) {
        return F(256) < F(260);
    }
    fn_80275FC0(p);
    pos = fn_8027569C(p + 120);
    F(268) = pos;
    t = fn_802753F0();
    if (t - F(276) >= F(280)) {
        F(276) = t;
    } else {
        u32 cur = F(240);
        F(276) = t;
        if (pos < cur) {
            d = pos + F(220) - cur;
        } else {
            d = pos - cur;
        }
        if (d <= 1023) {
            d = 0;
        } else {
            d = (d - 1024) & ~3;
        }
        if (d < F(272)) {
            goto late;
        }
    }
    F(92) = 1;
    F(240) = (pos / F(224) + 1) * F(224);
    if (F(240) >= F(220)) {
        F(240) -= F(220);
    }
    end = F(240) + F(224);
    F(244) = F(240);
    F(256) = F(224);
    if (end >= F(220)) {
        memset(P(228) + F(240), 0, F(220) - F(240));
        memset(P(228), 0, end - F(220));
        if (F(204) != 0) {
            {
                u32 o = F(240);
                u32 n = F(220) - o;
                memset(P(232) + o, 0, n);
            }
            memset(P(232), 0, end - F(220));
        }
        F(240) = end - F(220);
    } else {
        memset(P(228) + F(240), 0, F(224));
        if (F(204) != 0) {
            memset(P(232) + F(240), 0, F(224));
        }
        F(240) = end;
    }
    return 1;
late:
    if (d < F(224)) {
        goto ret0;
    }
    if (F(256) < F(260)) {
        return 1;
    }
ret0:
    return 0;
}
#undef F
#undef P

typedef struct { u8 pad[184]; u32 x184; u32 a188[2]; u32 a196[2]; } wCB_78234;
extern s32 wCa_802F385C_78234[] asm("lbl_802F385C");
u32 wC_802752DC_78234(u32, u32, u32) asm("fn_802752DC");
void wC_8027D050_78234(u32) asm("fn_8027D050");
void wC_80276E38_78234(u8 *) asm("fn_80276E38");
s32 wC_802753F0_78234(void) asm("fn_802753F0");
u32 wC_80275394_78234(u32, u32, u32) asm("fn_80275394");
s32 wC_80283DFC_78234(s32, void *) asm("fn_80283DFC");
void wC_80283F38_78234(s32, void *) asm("fn_80283F38");
void wC_8028405C_78234(void) asm("fn_8028405C");
u32 wC_strlen_78234(const char *) asm("strlen");
void wC_8027F738_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_8027F738");
void wC_8027E5FC_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_8027E5FC");
void wC_80281DAC_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80281DAC");
void wC_80280860_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80280860");
void wC_8028290C_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_8028290C");
void wC_80282A30_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282A30");
void wC_802829C4_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_802829C4");
void wC_80282B08_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282B08");
void wC_80282A9C_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282A9C");
void wC_80282B74_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282B74");

#define F(o) (*(u32 *)(b + (o)))
s32 fn_80278234(u8 *b, u8 *dest, s32 pitch, u32 height, u32 a7, u32 a8, u32 sx, u32 sy, u32 w, u32 h, u32 flags) {
    s32 skipped = 0;
    if (b == 0 || dest == 0) {
        return 0;
    }
    sx = wC_802752DC_78234(sx, F(596), F(0));
    w = wC_802752DC_78234(w, F(596), F(0));
    sy = wC_802752DC_78234(sy, F(600), F(4));
    h = wC_802752DC_78234(h, F(600), F(4));
    if (sx >= F(596)) {
        sx = F(596);
    }
    if (sy >= F(600)) {
        sy = F(600);
    }
    if (sx + w > F(596)) {
        w = F(596) - sx;
    }
    if (sy + h > F(600)) {
        h = F(600) - sy;
    }
    if (w == 0 || h == 0 || F(776) != 0) {
        return F(776);
    }
    F(312) = 1;
    flags |= F(32) & 0x70030000;
    wC_8027D050_78234(flags & 15);
    if (pitch < 0) {
        dest += -pitch * (height - a8 - 1);
        a8 = 0;
    }
    if (F(760) != 0 && F(20) != 0 && F(252) == 0) {
        u32 t, r;
        wC_80276E38_78234(b);
        t = wC_802753F0_78234();
        r = wC_802752DC_78234((F(624) - F(644)) * 1000, F(24), F(20));
        r = wC_80275394_78234(r, *(u32 *)(*(u8 **)(b + 768) + 104), 16);
        t -= F(640) + F(824);
        if (t >= r) {
            t -= r;
            if (t > F(648)) {
                if (++F(820) > 3) {
                    F(820) = skipped;
                    goto draw;
                }
                if ((flags & 0x80000) || (F(32) & 0x80000)) {
                    skipped = 1;
                    goto draw;
                }
                F(312) = 0;
                F(772) = 1;
                F(780)++;
                return 1;
            }
            F(820) = skipped;
        }
        F(772) = 0;
    }
draw:
    if (F(264) == 0 && F(304) == 0 && ((F(344) + 1) * 100) / (F(340) + 1) <= 74) {
        if (wC_80283DFC_78234(wCa_802F385C_78234[0], b + 524) != 0) {
            (*(void (**)(u8 *))(b + 288))(b + 272);
            wC_80283F38_78234(wCa_802F385C_78234[0], b + 524);
        } else if (!(F(32) & 0x8000000)) {
            wC_8028405C_78234();
        }
    }
    F(744) = flags;
    if ((s32)flags < 0) {
    sw1:
        switch (flags & 15) {
        case 5:
            if (F(196) != 0) {
                wC_8027F738_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 3:
            wC_8027E5FC_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 7:
            if (F(196) != 0) {
                wC_80281DAC_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 9:
        case 10:
        case 11:
        case 12:
            wC_80280860_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 13:
            wC_8028290C_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        }
    } else {
        if (wC_strlen_78234(*(char **)(b + 220)) >= F(228)) {
            goto sw1;
        }
        switch (flags & 15) {
        case 5:
            if (F(196) != 0) {
                wC_80282A30_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 3:
            wC_802829C4_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 7:
            if (F(196) != 0) {
                wC_80282B08_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 9:
        case 10:
        case 11:
        case 12:
            wC_80282A9C_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 13:
            wC_80282B74_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        }
    }
    F(312) = 0;
    return skipped;
}
#undef F

extern u8 wCa_80301B20_8290C[] asm("lbl_80301B20");
void wC_8027BFB8_8290C(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, void *) asm("fn_8027BFB8");

void fn_8028290C(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7, u32 a8, u32 a9, u32 a10, u32 a11) {
    if ((a0 & 3) == 2) {
        a1++;
        a0 &= ~3;
    }
    if (a1 & 1) {
        if (a5 & 1) {
            a5++;
        }
        a1++;
        a7--;
    } else if (a5 & 1) {
        a5++;
        a7--;
    }
    if (a7 & 1) {
        a7--;
    }
    wC_8027BFB8_8290C(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0, wCa_80301B20_8290C);
}

u8 *wC_80285E24_87540(u8 *, u8 *, u32, u32, u32, u8 *, u32, u32, u32, u32, u32) asm("fn_80285E24");

void fn_80287540(u8 *y0, u8 *y1, u8 *a0, u8 *a1, u32 p7, u32 w, u32 h, u32 pitch, u32 ph, u8 *data, u32 a11, u32 a12, u32 flags, u32 flags0) {
    u8 *r;
    u32 skip;
    if (flags0 & 0x100000) {
        if (flags & 0x100000) {
            wC_80285E24_87540(a0, a1, (w + 7) & ~7, (h + 7) & ~7, pitch, data + 4, a11, p7, 1, a12, flags);
        }
        data += *(s32 *)data;
    }
    skip = flags & 0x8000;
    if (!skip) {
        data += 4;
    }
    r = wC_80285E24_87540(y0, y1, (w + 7) & ~7, (h + 7) & ~7, pitch, data, a11, p7, 1, a12, flags);
    if (!skip) {
        r = data + *(s32 *)(data - 4) - 4;
    }
    if (!(flags & 0x20000)) {
        y0 += pitch * ph;
        y1 += pitch * ph;
        w = (((w + 1) >> 1) + 7) & ~7;
        h = (((h + 1) >> 1) + 7) & ~7;
        pitch >>= 1;
        ph >>= 1;
        r = wC_80285E24_87540(y0, y1, w, h, pitch, r, a11, p7, 2, a12, flags);
        wC_80285E24_87540(y0 + pitch * ph, y1 + pitch * ph, w, h, pitch, r, a11, p7, 2, a12, flags);
    }
}

extern s32 wCa_802F3860_7AA78[] asm("lbl_802F3860");
void wC_80283E90_7AA78(s32, void *) asm("fn_80283E90");
void wC_80283F38_7AA78(s32, void *) asm("fn_80283F38");
u32 wC_80276AB8_7AA78(u8 *) asm("fn_80276AB8");

#define TB ((u8 *)(off + *(s32 *)(b + 768)))
s32 fn_8027AA78(u8 *b, s32 on) {
    s32 r = 0;
    s32 locked;
    u32 i;
    if (b == 0) {
        goto end;
    }
    locked = 0;
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        s32 off = i * 376;
        if (*(s32 *)(TB + 24) == 0) {
            continue;
        }
        if (locked == 0) {
            locked = 1;
            wC_80283E90_7AA78(wCa_802F3860_7AA78[0], b + 844);
        }
        if ((*(s32 (**)(u8 *, s32))(TB + 24))(TB, on != 0 ? 1 : 0) != 0) {
            r = 1;
            goto chk;
        }
        if (*(s32 *)(b + 672) != 0) {
            *(u32 *)(TB + 52) = *(u32 *)(TB + 44);
            *(u32 *)(TB + 56) = *(u32 *)(TB + 44);
            *(u32 *)(TB + 64) = 0;
            if (*(s32 *)(b + 12) != 1 || *(s32 *)(b + 748) == 1) {
                wC_80276AB8_7AA78((u8 *)(*(s32 *)(b + 768) + off));
            }
            *(s32 *)(b + 672) = 0;
        }
        continue;
    chk:
        if (*(s32 *)(b + 672) == 0) {
            *(s32 *)(b + 672) = 1;
            *(s32 *)(b + 640) = 0;
            *(s32 *)(b + 824) = 0;
        }
    }
    if (locked != 0) {
        wC_80283F38_7AA78(wCa_802F3860_7AA78[0], b + 844);
    }
end:
    return r;
}
#undef TB

u8 *fn_80276970(u8 *s, u32 size) {
    *(s32 *)(s + 0x2a8) += fn_80287804() + size;
    return wC_fn_80287810(size);
}

s32 fn_802781F4(u8 *b, u8 *dest, s32 pitch, u32 height, u32 a7, u32 a8, u32 flags) {
    return fn_80278234(b, dest, pitch, height, a7, a8, 0, 0, ((u32 *)b)[0], ((u32 *)b)[1], flags);
}

typedef struct { u32 a, b; } P8_80276930;
extern P8_80276930 lbl_802F3848_p[] asm("lbl_802F3848");
void *fn_80276930(u32 *arg0)
{
    if (arg0 == 0) {
        lbl_802F3848_p[0].a = 0;
        lbl_802F3848_p[0].b = 0;
    } else {
        lbl_802F3848_p[0] = *(P8_80276930 *)arg0;
    }
    return (void *)fn_802767E0;
}

extern f64 lbl_80301C18[];
f32 fn_80282BE0(s32 arg0) {
    f32 result = (f32)((((u32)arg0 & 0xEFFFFFFF) >> 5) * lbl_80301C18[arg0 & 31]);
    if (arg0 & 0x10000000) result = -result;
    return result;
}

void fn_80284068(int a, int *p, int c, unsigned int d, int e, int f, int g) {
    unsigned int z = (d >> 3) * f - 1;
    unsigned int n;
    p[2] = e;
    p[0] = 0;
    p[1] = 0;
    {
        unsigned short h = c + z;
        asm("cntlzw %0,%1" : "=r"(n) : "r"((unsigned int)h));
    }
    p[10] = 32 - n;
    if (g) {
        p[3] = 1 << (e - 1);
    } else {
        p[3] = g;
    }
    p[11] = a;
}

void fn_802826DC(s32 arg0, s32 n) {
 n -= 2;
 if(n >= 0) do {
 u8 *p = lbl_80300860[2];
 u32 hi = ((u32)p[1] << 16) | 0x80008000u;
 u32 v = p[0] | hi;
 lbl_80300860[2] = p + 2;
 *(u32 *)lbl_80300860[0] = v;
 lbl_80300860[0] += 4;
 n -= 2;
 } while(n >= 0);
}

s32 fn_80283B8C_wD(s32 a, s32 b, s32 c) asm("fn_80283B8C");
s32 fn_80283C38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    a = fn_80283B8C_wD(arg0, arg1, arg4);
    return a | (fn_80283B8C_wD(arg2, arg3, arg4) << 1);
}

extern u32 lbl_802F3870_a[] asm("lbl_802F3870");
extern u32 lbl_802F3874[];
void fn_80276FD8(u32 count, u32 *src) {
    u32 i;
    if (count > 8) {
        count = 8;
    }
    lbl_802F3870_a[0] = count;
    for (i = 0; i < count; i++) {
        lbl_802F3874[i] = src[i];
    }
}

void fn_80281A34(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        dst[0] = c;
        lbl_80300860[6] = a;
        lbl_80300860[0] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_8027FDF8(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        lbl_80300860[0] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_80280114(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
        lbl_80300860[0] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_80281150(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        lbl_80300860[6] = a;
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        lbl_80300860[0] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_8027FAD0(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        lbl_80300860[0] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_80280DB4(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        lbl_80300860[6] = a;
        dst[0] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        lbl_80300860[0] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_802814E0(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        lbl_80300860[6] = a;
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
        lbl_80300860[0] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

void fn_80280560(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    while (--count != -1) {
        s32 *t0 = lbl_803008C0;
        s32 *t2 = t0 + 512;
        s32 *t1 = t0 + 256;
        s32 *t3 = t0 + 768;
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        lbl_80300860[0] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

s32 fn_8027FF4C(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256];
        ((u16 *)lbl_80300860[1])[0] = c;
        ((u16 *)lbl_80300860[1])[1] = c;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_8027FC28(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256];
        ((u16 *)lbl_80300860[1])[0] = c;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_80280284(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256];
        ((u16 *)lbl_80300860[1])[0] = c;
        ((u16 *)lbl_80300860[1])[1] = c;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
        ((u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = c;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_80281BA8(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        u8 *a2;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        dst[0] = c;
        lbl_80300860[6] = a;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        a2 = lbl_80300860[7];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256] | lbl_802F8B20[*a2++];
        ((u16 *)lbl_80300860[1])[0] = c;
        lbl_80300860[0] += 2;
        lbl_80300860[7] = a2;
        lbl_80300860[1] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_802812CC(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        u8 *a2;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        lbl_80300860[6] = a;
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        a2 = lbl_80300860[7];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256] | lbl_802F8B20[*a2++];
        lbl_80300860[7] = a2;
        ((u16 *)lbl_80300860[1])[0] = c;
        ((u16 *)lbl_80300860[1])[1] = c;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_80280F34(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        u8 *a2;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        lbl_80300860[6] = a;
        dst[0] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        a2 = lbl_80300860[7];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256] | lbl_802F8B20[*a2++];
        lbl_80300860[7] = a2;
        ((u16 *)lbl_80300860[1])[0] = c;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_80281678(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    extern u32 lbl_802F8B20[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        u8 *a;
        u8 *a2;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        a = lbl_80300860[6];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256] | lbl_802F8B20[*a++];
        lbl_80300860[6] = a;
        dst[0] = c;
        ((u16 *)lbl_80300860[0])[1] = c;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        a2 = lbl_80300860[7];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256] | lbl_802F8B20[*a2++];
        lbl_80300860[7] = a2;
        ((u16 *)lbl_80300860[1])[0] = c;
        ((u16 *)lbl_80300860[1])[1] = c;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = c;
        ((u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = c;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_802806A8(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u16 *dst;
        u8 *v;
        u8 *y;
        s32 r, g, b, l;
        u16 c;
        u = lbl_80300860[4];
        x++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        l = lbl_802F72A0[*y++];
        lbl_80300860[2] = y;
        c = lbl_802F8F40[l + r + 256] | lbl_802F9B60[l + g + 256] | lbl_802FA780[l + b + 256];
        dst[0] = c;
        l = lbl_802F72A0[*lbl_80300860[3]++];
        c = lbl_802F8F40[l + (s32)lbl_80300860[9] + 256] | lbl_802F9B60[l + (s32)lbl_80300860[8] + 256] | lbl_802FA780[l + (s32)lbl_80300860[10] + 256];
        ((u16 *)lbl_80300860[1])[0] = c;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_8027E490(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u32 *dst;
        u8 *v;
        u8 *y;
        u32 *tbl;
        u32 c;
        u32 c2;
        s32 r, g, b;
        u = lbl_80300860[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        tbl = lbl_802F7AE0[*y++];
        lbl_80300860[2] = y;
        c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
        dst[0] = c;
        tbl = lbl_802F7AE0[*lbl_80300860[3]++];
        c2 = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16);
        ((u32 *)lbl_80300860[1])[0] = c2;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_8027E300(s32 count, s32 offset) {
    extern u32 lbl_80300460[];
    u32 n = count;
    do {
        u8 *y = lbl_80300860[2];
        u32 *d = (u32 *)lbl_80300860[0];
        u8 *y2;
        u32 *d2;
        *d = lbl_80300460[*y++];
        lbl_80300860[2] = y;
        y2 = lbl_80300860[3];
        d2 = (u32 *)lbl_80300860[1];
        *d2 = lbl_80300460[*y2++];
        lbl_80300860[3] = y2;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--n != 0);
    return offset + count;
}

void fn_802820C4(s32 arg0, s32 n) {
 n -= 2;
 if(n >= 0) do {
 u8 *p = lbl_80300860[2];
 u32 hi = ((u32)p[1] << 16) | 0x80008000u;
 u32 v = p[0] | hi;
 lbl_80300860[2] = p + 2;
 *(u32 *)lbl_80300860[0] = v;
 *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
 lbl_80300860[0] += 4;
 n -= 2;
 } while(n >= 0);
}

void fn_8027E8C4(s32 arg0, s32 n) {
    u32 v;
    while (--n != -1) {
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        *(u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]) = v;
        ((u32 *)(lbl_80300860[0] + (u32)lbl_80300860[17]))[1] = v;
        lbl_80300860[0] += 8;
    }
}

s32 fn_8027F59C(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u32 n = count;
    s32 *t0 = lbl_803008C0;
    s32 *t2 = t0 + 512;
    s32 *t1 = t0 + 256;
    s32 *t3 = t0 + 768;
    do {
        u8 *u;
        u32 *dst;
        u8 *v;
        u8 *y;
        u32 *tbl;
        u8 *a;
        u8 *a2;
        u32 c;
        u32 c2;
        s32 r, g, b;
        u = lbl_80300860[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        a = lbl_80300860[6];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = *(s32 *)((u8 *)t2 + (*u << 2)) + *(s32 *)((u8 *)t1 + (*v << 2));
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        tbl = lbl_802F7AE0[*y++];
        lbl_80300860[2] = y;
        c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*a++ << 24);
        dst[0] = c;
        lbl_80300860[6] = a;
        tbl = lbl_802F7AE0[*lbl_80300860[3]++];
        a2 = lbl_80300860[7];
        c2 = tbl[(s32)lbl_80300860[9]] | (tbl[(s32)lbl_80300860[8]] << 8) | (tbl[(s32)lbl_80300860[10]] << 16) | (*a2++ << 24);
        ((u32 *)lbl_80300860[1])[0] = c2;
        lbl_80300860[7] = a2;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--n != 0);
    return x;
}

s32 fn_8027E804(s32 n, s32 arg1) {
    u32 v;
    s32 i = n;
    do {
        v = lbl_80300460[*lbl_80300860[2]++] | (*lbl_80300860[6]++ << 24);
        ((u32 *)lbl_80300860[0])[0] = v;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        v = lbl_80300460[*lbl_80300860[3]++] | (*lbl_80300860[7]++ << 24);
        ((u32 *)lbl_80300860[1])[0] = v;
        *(u32 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--i);
    return arg1 + n;
}

void fn_8028AFB8(s32 n) {
    u32 *dst = (u32 *)lbl_80300860[0];
    u32 *src = (u32 *)lbl_80300860[2];
    s32 i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v & 0xFF000000) >> 16) + 0x800080;
        *dst++ = ((v & 0xFF0000) << 8) + ((v & 0xFF0000) >> 8) + 0x800080;
        *dst++ = ((v & 0xFF00) << 16) + (v & 0xFF00) + 0x800080;
        *dst++ = ((v & 0xFF) << 24) + ((v & 0xFF) << 8) + 0x800080;
    }
    dst = (u32 *)lbl_80300860[1];
    src = (u32 *)lbl_80300860[3];
    i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v & 0xFF000000) >> 16) + 0x800080;
        *dst++ = ((v & 0xFF0000) << 8) + ((v & 0xFF0000) >> 8) + 0x800080;
        *dst++ = ((v & 0xFF00) << 16) + (v & 0xFF00) + 0x800080;
        *dst++ = ((v & 0xFF) << 24) + ((v & 0xFF) << 8) + 0x800080;
    }
    lbl_80300860[0] += n * 16;
    lbl_80300860[1] += n * 16;
    lbl_80300860[2] += n * 4;
    lbl_80300860[3] += n * 4;
}

void fn_80281E08(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u8 *p;
        u32 a, b, ha, hb, v, w;
        count -= 2;
        p = lbl_80300860[2];
        a = p[0];
        b = p[1];
        ha = (a << 16) | 0x80008000u;
        hb = (b << 16) | 0x80008000u;
        v = a | ha;
        w = b | hb;
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = w;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        ((u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = w;
        lbl_80300860[2] += 2;
        lbl_80300860[0] += 8;
    } while (count >= 0);
}

void fn_8028256C(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u8 *u, *p, *w;
        u32 v;
        count -= 2;
        u = lbl_80300860[4];
        p = lbl_80300860[2];
        w = lbl_80300860[5];
        v = p[0] | (*u++ << 8) | (p[1] << 16) | (*w++ << 24);
        lbl_80300860[4] = u;
        lbl_80300860[5] = w;
        lbl_80300860[2] = p + 2;
        *(u32 *)lbl_80300860[0] = v;
        *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 4;
    } while (count >= 0);
}

void fn_802827BC(s32 arg0, s32 count) {
    count -= 2;
    if (count >= 0) do {
        u8 *u, *p, *w;
        u32 v;
        count -= 2;
        u = lbl_80300860[4];
        p = lbl_80300860[2];
        w = lbl_80300860[5];
        v = p[0] | (*u++ << 8) | (p[1] << 16) | (*w++ << 24);
        lbl_80300860[4] = u;
        lbl_80300860[5] = w;
        lbl_80300860[2] = p + 2;
        *(u32 *)lbl_80300860[0] = v;
        lbl_80300860[0] += 4;
    } while (count >= 0);
}

typedef struct { u16 a; u16 b; } wDPair_f7fc;

s32 fn_8027F7FC(s32 n, s32 m) {
    s32 i = n;
    do {
        wDPair_f7fc *t = (wDPair_f7fc *)lbl_802FFC60;
        u16 v = t[*lbl_80300860[2]++].b;
        ((u16 *)lbl_80300860[0])[0] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        v = t[*lbl_80300860[3]++].b;
        ((u16 *)lbl_80300860[1])[0] = v;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
    } while (--i != 0);
    return m + n;
}

typedef struct { u16 a; u16 b; } wDPair_c90;

s32 fn_80280C90(s32 n, s32 m) {
    extern u8 lbl_802F8B20[];
    s32 i = n;
    do {
        wDPair_c90 *t = (wDPair_c90 *)lbl_802FFC60;
        wDPair_c90 *t2;
        u16 v;
        u8 *src = lbl_80300860[2];
        t2 = (wDPair_c90 *)lbl_802F8B20;
        v = t[*src++].b | t2[*lbl_80300860[6]++].b;
        lbl_80300860[2] = src;
        *(u16 *)lbl_80300860[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = v;
        v = t[*lbl_80300860[3]++].b | t2[*lbl_80300860[7]++].b;
        *(u16 *)lbl_80300860[1] = v;
        ((u16 *)lbl_80300860[1])[1] = v;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        ((u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--i != 0);
    return m + n;
}

typedef struct { u16 a; u16 b; } wDPair_fa08;

s32 fn_8027FA08(s32 n, s32 m) {
    s32 i = n;
    do {
        wDPair_fa08 *t = (wDPair_fa08 *)lbl_802FFC60;
        u16 v = t[*lbl_80300860[2]++].b;
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = v;
        ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = v;
        v = t[*lbl_80300860[3]++].b;
        ((u16 *)lbl_80300860[1])[0] = v;
        ((u16 *)lbl_80300860[1])[1] = v;
        *(u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]) = v;
        ((u16 *)(lbl_80300860[1] + (s32)lbl_80300860[17]))[1] = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--i != 0);
    return m + n;
}

typedef struct { u16 a; u16 b; } wDPair_e4e0;

s32 fn_802804E0(s32 n, s32 m) {
    s32 i = n;
    do {
        wDPair_e4e0 *t = (wDPair_e4e0 *)lbl_802FFC60;
        u16 v = t[*lbl_80300860[2]++].b;
        ((u16 *)lbl_80300860[0])[0] = v;
        v = t[*lbl_80300860[3]++].b;
        ((u16 *)lbl_80300860[1])[0] = v;
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
    } while (--i != 0);
    return m + n;
}

typedef struct { u16 a; u16 b; } wDPair_aec;

s32 fn_80280AEC(s32 n, s32 m) {
    extern u8 lbl_802F8B20[];
    s32 i = n;
    do {
        wDPair_aec *t = (wDPair_aec *)lbl_802FFC60;
        wDPair_aec *t2;
        u16 v;
        u8 *src = lbl_80300860[2];
        t2 = (wDPair_aec *)lbl_802F8B20;
        v = t[*src++].b | t2[*lbl_80300860[6]++].b;
        lbl_80300860[2] = src;
        *(u16 *)lbl_80300860[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        v = t[*lbl_80300860[3]++].b | t2[*lbl_80300860[7]++].b;
        *(u16 *)lbl_80300860[1] = v;
        ((u16 *)lbl_80300860[1])[1] = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--i != 0);
    return m + n;
}

typedef struct { u32 w[0x38c / 4]; } wDBink_77218;
typedef struct { u32 w[11]; } wDBinkHdr_77218;
typedef s32 (*wDIOFn_77218)();
typedef s32 (*wDOpen_77218)(u8 *, void *, u32);
typedef s32 (*wDRead_77218)(u8 *, s32, void *, u32);
typedef u32 (*wDSize_77218)(u8 *, u32);
typedef s32 (*wDSetBuf_77218)(u8 *, void *, u32, u32, s32);
typedef s32 (*wDReadAt_77218)(u8 *, u32, u32, void *, u32);
typedef s32 (*wDOne_77218)(u8 *);
typedef s32 (*wDSnd_77218)(u8 *, u32, u32, u32, u32, u8 *);

extern s32 wD7218_tracknum[] asm("lbl_802F3870");
extern s32 wD7218_tracks[] asm("lbl_802F3874");
extern wDOpen_77218 wD7218_openover[] asm("lbl_802F3894");
extern char wD7218_err[] asm("lbl_80357FC0");
extern s32 wD7218_fpsnum[] asm("lbl_802F3864");
extern s32 wD7218_fpsden[] asm("lbl_803580C0");
extern s32 wD7218_iosize[] asm("lbl_802F3868");
extern s32 wD7218_simulate[] asm("lbl_802F386C");
extern wDSnd_77218 wD7218_sndopen[] asm("lbl_802F3854");
extern s32 wD7218_sndcount[] asm("lbl_802F3858");
extern s32 wD7218_timer[] asm("lbl_802F3860");
extern char wD7218_s0[] asm("lbl_802AAAE0");
extern char wD7218_s1[] asm("lbl_802AAAF4");
extern char wD7218_s2[] asm("lbl_802AAB08");
extern char wD7218_s3[] asm("lbl_802AAB3C");

void *wD7218_memset() asm("memset");
void *wD7218_memcpy() asm("memcpy");
s32 wD7218_now(void) asm("fn_802753F0");
void wD7218_seterr(char *) asm("fn_802769B8");
void wD7218_plan(void *slot, u32 size) asm("fn_802876F8");
u8 *wD7218_alloc(u8 *b, u32 size) asm("fn_80276970");
void wD7218_free(void *p) asm("fn_8027B790");
void wD7218_plan2(void *slot, u32 n) asm("fn_80285D24");
s32 wD7218_frames(u32 n, u32 idx, u32 x, u8 *a, s32 *b) asm("fn_80277020");
u32 wD7218_muldiv(u32 a, u32 b, u32 c) asm("fn_802752DC");
void wD7218_goto(u8 *b, s32 f) asm("fn_80276E80");
s32 wD7218_sndfmt(u32 rate, u32 chans, u32 flag) asm("fn_802833CC");
s32 wD7218_timeropen(s32 n) asm("fn_80283AA4");
void wD7218_timerinit(void) asm("fn_80283D44");
void wD7218_timeradd(s32 t, void *p, void *a, void *c) asm("fn_80283B20");
s32 wD7218_defopen(u8 *io, void *src, u32 flags) asm("fn_8027B58C");
void wD7218_802771B8(void) asm("fn_802771B8");
void wD7218_802771D4(void) asm("fn_802771D4");
void wD7218_8027716C(void) asm("fn_8027716C");
void wD7218_80277114(void) asm("fn_80277114");
void wD7218_80277140(void) asm("fn_80277140");
void wD7218_80277198(void) asm("fn_80277198");

#define L(o) (*(u32 *)((u8 *)&bk + (o)))
#define B(o) (*(u32 *)(b + (o)))
#define H(o) (hdr.w[((o) - 0x398 + 8) / 4])

u8 *fn_80277218(void *name, u32 flags) {
    wDBink_77218 bk;
    wDBinkHdr_77218 hdr;
    wDBink_77218 *pbk;
    s32 notfirst;
    wDOpen_77218 openfn = wD7218_defopen;
    u8 *b;
    u32 i;
    s32 simulate;

    if (!(flags & 0x4000)) {
        wD7218_tracknum[0] = 1;
        wD7218_tracks[0] = 0;
    }
    wD7218_memset(pbk = &bk, 0, 0x38c);
    L(0x2b8) = wD7218_now();
    wD7218_err[0] = 0;
    if (flags & 0x4000000) {
        hdr = *(wDBinkHdr_77218 *)name;
    } else {
        if ((flags & 0x2000000) && wD7218_openover[0] != 0) openfn = wD7218_openover[0];
        wD7218_openover[0] = 0;
        if (!openfn((u8 *)&bk + 0x110, name, flags)) {
            if (!wD7218_err[0]) wD7218_seterr(wD7218_s0);
            return 0;
        }
        ((wDRead_77218)L(0x110))((u8 *)&bk + 0x110, 0, &hdr, 0x2c);
    }
    if (hdr.w[0] != 0x664b4942 && hdr.w[0] != 0x674b4942 && hdr.w[0] != 0x684b4942 && hdr.w[0] != 0x694b4942) {
        wD7218_seterr(wD7218_s1);
    fail:
        if (!(flags & 0x4000000)) ((wDOne_77218)L(0x124))((u8 *)&bk + 0x110);
        return 0;
    }
    if (hdr.w[2] == 0) {
        wD7218_seterr(wD7218_s2);
        goto fail;
    }
    {
        u32 w = hdr.w[5];
        u32 h = hdr.w[6];
        u32 hf = hdr.w[9];
        u32 cw = (((w + 1) >> 1) + 7) & ~7;
        u32 ch = (((h + 1) >> 1) + 7) & ~7;
        u32 f = (flags & 0x8FFFFFFF) | (hf & 0x20000);
        L(0xd0) = ch + ch;
        L(0xe0) = (cw + cw) >> 4;
        L(0x0) = w;
        L(0x4) = h;
        L(0x254) = w;
        L(0x258) = h;
        L(0x24) = hf;
        L(0xd4) = cw;
        L(0xd8) = ch;
        L(0xcc) = cw + cw;
        L(0x20) = f;
        if (!(hf & 0x100000)) L(0x20) = f & ~0x100000;
    }
    {
        u32 s = flags & 0x70000000;
        if (s != 0x70000000) {
            if (s != 0) L(0x20) |= s;
            else L(0x20) |= hdr.w[9] & 0x70000000;
            switch (L(0x20) & 0x70000000) {
            case 0x10000000:
            case 0x20000000:
                L(0x4) += L(0x4);
                break;
            case 0x30000000:
                L(0x0) += L(0x0);
                break;
            case 0x40000000:
            case 0x50000000:
                L(0x0) += L(0x0);
                L(0x4) += L(0x4);
                break;
            }
        }
    }
    if (hdr.w[0] == 0x664b4942 || hdr.w[0] == 0x674b4942) {
        L(0x20) |= 0x18000;
    } else if (hdr.w[0] == 0x684b4942) {
        L(0x20) |= 0x8000;
    }
    L(0x8) = hdr.w[2];
    L(0xec) = hdr.w[4];
    if ((flags & 0x1000) && wD7218_fpsnum[0] != -1) {
        s32 n = wD7218_fpsnum[0];
        wD7218_fpsnum[0] = -1;
        L(0x14) = n;
        L(0x18) = wD7218_fpsden[0];
    } else {
        L(0x14) = hdr.w[7];
        L(0x18) = hdr.w[8];
    }
    {
        u32 den = hdr.w[8];
        u32 num = hdr.w[7];
        L(0x28) = hdr.w[1];
        L(0xf0) = hdr.w[10];
        L(0xe8) = hdr.w[3];
        L(0x2bc) = num;
        L(0x2c0) = den;
        L(0x2c4) = (num + (den >> 1)) / den;
        L(0xe4) = ((L(0xcc) >> 4) * L(0xd0)) >> 4;
        if (L(0x2c4) == 0) L(0x2c4) = 1;
    }
    L(0x2c8) = (L(0x2c4) - 1) * 4;
    wD7218_plan((u8 *)&bk + 0xdc, L(0xe4) + 16);
    wD7218_plan((u8 *)&bk + 0x2cc, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2d0, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2d4, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2d8, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2dc, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2e0, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2e4, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x300, wD7218_tracknum[0] ? wD7218_tracknum[0] * 0x178 : 0x178);
    wD7218_plan((u8 *)&bk + 0x25c, wD7218_tracknum[0] * 4);
    wD7218_plan2((u8 *)&bk + 0x310, L(0xcc));
    wD7218_plan((u8 *)&bk + 0x310, L(0x310));
    wD7218_plan((u8 *)&bk + 0x314, L(0x314));
    wD7218_plan((u8 *)&bk + 0x318, L(0x318));
    wD7218_plan((u8 *)&bk + 0x31c, L(0x31c));
    wD7218_plan((u8 *)&bk + 0x320, L(0x320));
    wD7218_plan((u8 *)&bk + 0x324, L(0x324));
    wD7218_plan((u8 *)&bk + 0x328, L(0x328));
    wD7218_plan((u8 *)&bk + 0x32c, L(0x32c));
    wD7218_plan((u8 *)&bk + 0x330, L(0x330));
    if (!(flags & 0x4000000)) {
        wD7218_plan((u8 *)&bk + 0x10c, (L(0xec) + 1) * 4);
        wD7218_plan((u8 *)&bk + 0x260, L(0xf0) * 4);
        wD7218_plan((u8 *)&bk + 0x264, L(0xf0) * 4);
        wD7218_plan((u8 *)&bk + 0x268, L(0xf0) * 4);
    }
    b = wD7218_alloc((u8 *)&bk, 0x38c);
    if (b == 0) {
    nomem:
        wD7218_seterr(wD7218_s3);
        goto fail;
    }
    *(wDBink_77218 *)b = *pbk;
    B(0x128) = (u32)b;
    *(s32 *)B(0x2d0) = 0;
    *(s32 *)B(0x2d4) = 0;
    *(s32 *)B(0x2d8) = 0;
    *(s32 *)B(0x2dc) = 0;
    *(s32 *)B(0x2e0) = 0;
    *(s32 *)B(0x2e4) = 0;
    if (flags & 0x4000000) {
        u32 n = B(0xf0);
        B(0x260) = (u32)((u8 *)name + 0x2c);
        B(0x264) = (u32)((u8 *)name + (n * 4 + 0x2c));
        B(0x268) = (u32)((u8 *)name + (n * 8 + 0x2c));
        B(0x10c) = (u32)((u8 *)name + (n * 12 + 0x2c));
    } else {
        u8 *io = b + 0x110;
        ((wDRead_77218)B(0x110))(io, -1, B(0x260), B(0xf0) * 4);
        ((wDRead_77218)B(0x110))(io, -1, B(0x264), B(0xf0) * 4);
        ((wDRead_77218)B(0x110))(io, -1, B(0x268), B(0xf0) * 4);
        ((wDRead_77218)B(0x110))(io, -1, B(0x10c), (B(0xec) + 1) * 4);
    }
    B(0xf4) = wD7218_frames(B(0x8), B(0x10c), B(0x2c4), b + 0xf8, &notfirst);
    if (B(0x20) & 0x100000) {
        wD7218_plan(b + 0xc4, B(0xcc) * B(0xd0));
        if (!notfirst) wD7218_plan(b + 0xc8, B(0xcc) * B(0xd0));
    }
    if (!notfirst) wD7218_plan(b + 0xc0, B(0xcc) * B(0xd0) + B(0xd4) * B(0xd8) * 2);
    B(0xbc) = (u32)wD7218_alloc(b, B(0xcc) * B(0xd0) + B(0xd4) * B(0xd8) * 2);
    if (B(0xbc) == 0) {
    freefail:
        wD7218_free(b);
        goto nomem;
    }
    if (notfirst) {
        B(0xc0) = B(0xbc);
        B(0xc8) = B(0xc4);
    }
    if ((flags & 0x1000000) && wD7218_iosize[0] != -1) {
        B(0x250) = wD7218_iosize[0];
        wD7218_iosize[0] = -1;
    } else {
        B(0x250) = B(0xf4);
    }
    if ((flags & 0x400000) && wD7218_simulate[0] != -1) {
        simulate = wD7218_simulate[0];
        wD7218_simulate[0] = -1;
    } else {
        simulate = 0;
    }
    if (flags & 0x4000000) {
        B(0x108) = (u32)((u8 *)name + (*(u32 *)B(0x10c) & ~1));
    } else {
        u8 *io = b + 0x110;
        B(0x250) = ((wDSize_77218)B(0x118))(io, B(0x250));
        if (B(0x250) >= (B(0x28) * 9) / 10) {
            flags |= 0x2000;
            B(0x20) |= 0x2000;
        }
        if (flags & 0x2000) {
            u32 off = (*(u32 *)B(0x10c) & ~1) - 8;
            u32 sz = B(0x28) - off;
            B(0x108) = (u32)wD7218_alloc(b, sz);
            if (B(0x108) == 0) {
                wD7218_free((void *)L(0xbc));
                goto freefail;
            }
            ((wDSetBuf_77218)B(0x11c))(io, 0, 0, B(0x28) + 8, simulate);
            ((wDReadAt_77218)B(0x114))(io, 0, *(u32 *)B(0x10c) & ~1, B(0x108), sz);
            ((wDOne_77218)B(0x124))(io);
            B(0x140) = 0;
        } else {
            wD7218_plan(b + 0x104, B(0xe8));
            B(0x24c) = (u32)wD7218_alloc(b, B(0x250));
            if (B(0x24c) == 0) B(0x250) = 0;
            ((wDSetBuf_77218)B(0x11c))(io, B(0x24c), B(0x250), B(0x28) + 8, simulate);
        }
    }
    ((u8 *)B(0xdc))[B(0xe4)] = 0;
    B(0xc) = -1;
    if (B(0x14) != 0) B(0x288) = wD7218_muldiv(2000, B(0x18), B(0x14));
    else B(0x288) = 2000;
    B(0x2a4) = 1;
    wD7218_goto(b, 1);
    B(0x2b8) = wD7218_now() - B(0x2b8);
    *(s32 *)(B(0x300) + 0x68) = 0x10000;
    B(0x2f8) = 0;
    {
        u32 n;
        if (B(0xf0) != 0 && (n = wD7218_tracknum[0]) != 0)
        for (i = 0; i < n; i++) {
            s32 j;
            for (j = 0; j < (s32)B(0xf0); j++) {
                if (((s32 *)B(0x268))[j] == wD7218_tracks[i]) {
                    u32 k = B(0x2f8);
                    ((s32 *)B(0x25c))[k] = j;
                    B(0x2f8) = k + 1;
                    break;
                }
            }
        }
    }
    wD7218_tracks[0] = 0;
    wD7218_tracknum[0] = 1;
#define TRK ((u8 *)(i * 0x178 + B(0x300)))
#define FL (((u32 *)B(0x264))[((s32 *)B(0x25c))[i]])
#define T(o) (*(u32 *)(TRK + (o)))
    for (i = 0; i < B(0x2f8);) {
        u32 rate;
        T(0x2c) = 0;
        if (((s32)FL < 0 || (FL & 0x10000000)) && wD7218_sndopen[0] != 0) {
            rate = FL & 0xffff;
            if (L(0x14) != 0 && L(0x18) != 0) {
                rate = (u32)(((double)rate * (double)L(0x14) * (double)L(0x2c0)) / ((double)L(0x18) * (double)L(0x2bc)));
            }
            if (wD7218_sndopen[0]((u8 *)(B(0x300) + i * 0x178), rate, ((FL >> 27) & 8) + 8, ((FL >> 29) & 1) + 1, B(0x20), b)) {
                if (*(s32 *)(TRK + 0x58) == 0) *(s32 *)(TRK + 0x58) = -1;
                T(0x28) = (((u32 *)B(0x260))[((s32 *)B(0x25c))[i]] + 0xff) & ~0xff;
                T(0x2c) = (u32)wD7218_alloc(b, T(0x28));
                {
                u8 *p = TRK;
                if (*(u32 *)(p + 0x2c) == 0) {
                    ((wDOne_77218) * (u32 *)(p + 0x1c))(p);
                } else {
                    wD7218_sndcount[0]++;
                    *(u32 *)(p + 0x44) = (((FL >> 27) & 8) + 8) == 8;
                    T(0x30) = T(0x2c) + T(0x28);
                    T(0x34) = T(0x2c);
                    T(0x38) = T(0x2c);
                    T(0x4c) = wD7218_muldiv((rate << ((FL >> 29) & 1)) * 2, 750 - *(s32 *)(TRK + 0x64), 1000) & ~3;
                    if (T(0x4c) > T(0x28)) T(0x4c) = T(0x28);
                    T(0x3c) = wD7218_sndfmt(FL & 0xffff, ((FL >> 29) & 1) + 1, ((s32)FL >= 0 && (FL & 0x10000000)) ? 1 : 0);
                    T(0x48) = B(0x8) - (B(0x2bc) * 3) / (B(0x2c0) * 4);
                    T(0x40) = 0;
                }
                }
            }
        }
        if (*(s32 *)(TRK + 0x68) == 0) *(s32 *)(TRK + 0x68) = 0x10000;
        if (T(0x2c) == 0) {
            B(0x2f8)--;
            wD7218_memcpy((s32 *)(i * 4 + B(0x25c)), (s32 *)(i * 4 + B(0x25c)) + 1, (B(0x2f8) - i) * 4);
        } else {
            i++;
        }
    }
    if (B(0x2f8) != 0) {
        s32 tm = wD7218_timer[0];
        B(0x2a0) = 1;
        if (tm == 0) {
            wD7218_timer[0] = wD7218_timeropen(-13);
            wD7218_timerinit();
        }
        wD7218_timeradd(wD7218_timer[0], b + 0x34c, (void *)wD7218_802771B8, (void *)wD7218_802771D4);
    }
    B(0x204) = (u32)wD7218_8027716C;
    B(0x1fc) = (u32)wD7218_80277114;
    B(0x200) = (u32)wD7218_80277140;
    B(0x208) = (u32)wD7218_80277198;
    if (B(0x108) == 0 && !(flags & 0x200000)) {
        while (((wDOne_77218)B(0x120))(b + 0x110) != 0) {
        }
    }
    return b;
}
