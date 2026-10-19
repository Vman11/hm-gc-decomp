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

u32 fn_80276AB8(u8 *arg0) {
    u32 ms;
    u32 len;
    u32 wrap;
    u32 base;
    u32 pos;
    u32 start = *(u32 *)(arg0 + 0x40);
    u32 end = *(u32 *)(arg0 + 0x4C);

    if (start < end) {
        len = end - start;
        ms = (len * 1000) / ((u32)(*(s32 *)(arg0 + 0x6C) * *(s32 *)(arg0 + 0x70) * *(s32 *)(arg0 + 0x74)) >> 3);
        pos = *(u32 *)(arg0 + 0x38) - len;
        *(u32 *)(arg0 + 0x38) = pos;
        base = *(u32 *)(arg0 + 0x2C);
        if (pos < base) {
            wrap = base - pos;
            *(u32 *)(arg0 + 0x38) = pos + *(u32 *)(arg0 + 0x28);
        } else {
        }
        *(u32 *)(arg0 + 0x40) += len;
        return ms;
    }
    return 0;
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
        *(s32 *)(arg0 + 0x104) = *(s32 *)(arg0 + 0x108) + ((offsets[arg1] & ~1) - (offsets[0] & ~1));
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

void fn_80277114(u8 *arg0) {
    fn_80283E90(lbl_802F385C, arg0 + 0xFC);
}

void fn_80277198(void) { fn_8028405C(); }

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

void fn_80278F54(u8 *arg0) {
    extern s32 lbl_802F3860;
    extern s32 lbl_802F385C;
    void fn_80276E80(u8 *arg0, s32 arg1);
    s32 fn_8027AA78(u8 *arg0, s32 arg1);
    void fn_80283F38(s32, void *);
    void fn_80283EFC();
    s32 found;
    u32 i;
    s32 off;
    u8 *e;
    u32 cnt;
    void *lock1;
    void *lock2;
    s32 next;

    found = 0;
    if (arg0 != NULL) {
        *(s32 *)(arg0 + 0x138) = 1;
        *(s32 *)(arg0 + 0x138) = 0;
        for (i = 0, off = 0; i < *(u32 *)(arg0 + 0x2F8); i++, off += 0x178) {
            e = *(u8 **)(arg0 + 0x300) + off;
            if (*(s32 *)(e + 0x5C) != 0) {
                *(s32 *)(e + 0x5C) = 0;
                cnt = *(u32 *)(arg0 + 0xC);
                if (cnt > 1 && (s32)cnt <= *(s32 *)(*(u8 **)(arg0 + 0x300) + off + 0x48)) {
                    found = 1;
                }
            }
        }
        if (found != 0) {
            lock1 = arg0 + 0x34C;
            lock2 = arg0 + 0x20C;
            (*(s32 *)(arg0 + 0x2FC))++;
            fn_80283EFC(lbl_802F3860, lock1, lbl_802F385C, lock2);
            fn_8027AA78(arg0, 0);
            while ((*(u32 *)(arg0 + 0x158) + 1) * 100 / (*(u32 *)(arg0 + 0x154) + 1) <= 89 &&
                   (*(s32 (**)(void *))(arg0 + 0x120))(arg0 + 0x110) != 0) {
            }
            *(s32 *)(arg0 + 0x338) = 0;
            *(s32 *)(arg0 + 0x280) = 0;
            fn_8027AA78(arg0, 1);
            fn_80283F38(lbl_802F3860, lock1);
            fn_80283F38(lbl_802F385C, lock2);
        }
        *(s32 *)(arg0 + 0x138) = 1;
        if (*(s32 *)(arg0 + 0x2F8) != 0) {
            fn_80276B84(arg0);
        }
        fn_80278F28(arg0, fn_802753F0());
        cnt = *(u32 *)(arg0 + 0xC);
        next = 1;
        if (cnt < *(u32 *)(arg0 + 0x8)) {
            next = cnt + 1;
        }
        fn_80276E80(arg0, next);
        *(s32 *)(arg0 + 0x138) = 0;
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

void fn_80279AFC(u8 *arg0, s32 *arg1, u32 n) {
    s32 now;
    u32 cnt;
    u32 *t;

    now = fn_802753F0();
    fn_80278F28(arg0, now);
    fn_8027964C(arg0, now);
    if (n == 0 || n >= *(u32 *)(arg0 + 0x2C4)) {
        n = *(u32 *)(arg0 + 0x2C4) - 1;
    }
    cnt = *(u32 *)(arg0 + 0xC);
    if (n > cnt) {
        n = cnt - 1;
        if (n == 0) {
            n = 1;
        }
    }
    arg1[0] = *(s32 *)(arg0 + 0x10);
    arg1[1] = *(s32 *)(arg0 + 0x14);
    arg1[2] = *(s32 *)(arg0 + 0x14);
    arg1[11] = *(s32 *)(arg0 + 0x154);
    arg1[12] = *(s32 *)(arg0 + 0x158);
    t = *(u32 **)(arg0 + 0x10C);
    cnt = *(u32 *)(arg0 + 0xC);
    arg1[13] = fn_802752DC(t[cnt] - t[cnt - n], *(u32 *)(arg0 + 0x2BC), n * *(u32 *)(arg0 + 0x2C0));
    arg1[3] = n;
    t = *(u32 **)(arg0 + 0x2CC);
    arg1[4] = t[0] - t[n];
    if (arg1[4] == 0) {
        arg1[4] = 1;
    }
    t = *(u32 **)(arg0 + 0x2D4);
    arg1[5] = t[0] - t[n];
    t = *(u32 **)(arg0 + 0x2D0);
    arg1[6] = t[0] - t[n];
    t = *(u32 **)(arg0 + 0x2D8);
    arg1[10] = t[0] - t[n];
    t = *(u32 **)(arg0 + 0x2DC);
    arg1[7] = t[0] - t[n];
    t = *(u32 **)(arg0 + 0x2E0);
    arg1[8] = t[0] - t[n];
    t = *(u32 **)(arg0 + 0x2E4);
    arg1[9] = t[0] - t[n];
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

s32 fn_8027A71C(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 **, 0x264)[arg1];
}

s32 fn_8027A73C(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 **, 0x260)[arg1];
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
                        memcpy(arg1, sp8, spC);
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

s32 fn_8027AA78(u8 *arg0, s32 arg1) {
    s32 ret;
    s32 locked;
    u32 i;
    s32 off;
    u8 *e;
    s32 r;

    ret = 0;
    if (arg0 != NULL) {
        locked = 0;
        for (i = 0, off = 0; i < *(u32 *)(arg0 + 0x2F8); i++, off += 0x178) {
            e = *(u8 **)(arg0 + 0x300) + off;
            if (*(void **)(e + 0x18) != NULL) {
                if (locked == 0) {
                    locked = 1;
                    fn_80283E90(lbl_802F3860, arg0 + 0x34C);
                }
                e = *(u8 **)(arg0 + 0x300) + off;
                r = (*(s32 (**)(void *, s32))(e + 0x18))(e, arg1 != 0 ? 1 : 0);
                if (r != 0) {
                    ret = 1;
                    if (*(s32 *)(arg0 + 0x2A0) == 0) {
                        *(s32 *)(arg0 + 0x338) = 0;
                        *(s32 *)(arg0 + 0x2A0) = 1;
                        *(s32 *)(arg0 + 0x280) = 0;
                    }
                } else if (*(s32 *)(arg0 + 0x2A0) != 0) {
                    (*(u8 **)(arg0 + 0x300) + off)[0] , 0;
                    *(s32 *)(*(u8 **)(arg0 + 0x300) + off + 0x34) = *(s32 *)(*(u8 **)(arg0 + 0x300) + off + 0x2C);
                    *(s32 *)(*(u8 **)(arg0 + 0x300) + off + 0x38) = *(s32 *)(*(u8 **)(arg0 + 0x300) + off + 0x2C);
                    *(s32 *)(*(u8 **)(arg0 + 0x300) + off + 0x40) = r;
                    if (*(s32 *)(arg0 + 0xC) != 1 || *(s32 *)(arg0 + 0x2EC) == 1) {
                        fn_80276AB8(*(u8 **)(arg0 + 0x300) + off);
                    }
                    *(s32 *)(arg0 + 0x2A0) = 0;
                }
            }
        }
        if (locked != 0) {
            fn_80283F38(lbl_802F3860, arg0 + 0x34C);
        }
    }
    return ret;
}

void fn_8027ABEC(s32 *arg0, s32 arg1) {
    s32 *var_r3;
    s32 temp_cr0_eq;
    s32 var_r4;
    u32 temp_r4;

    var_r3 = arg0;
    temp_r4 = (u32) (arg1 + 3) >> 2U;
    var_r4 = temp_r4 - 1;
    if ((s32) temp_r4 != 0) {
        do {
            temp_cr0_eq = var_r4 == 0;
            *var_r3 = M2C_ERROR(/* unknown instruction: lwbrx $r0, $r9, $r3 */);
            var_r4 -= 1;
            var_r3 += 4;
        } while (temp_cr0_eq == 0);
    }
}

s32 fn_8027AC20(void *arg0, u32 arg1, u8 *arg2, u32 arg3) {
    u8 buf[0x400 + 0x18];
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
            memcpy(arg2, aligned, len);
            arg2 += len;
            total += len;
            arg1 += len;
            arg3 -= len;
        } while (arg3 != 0);
    }
    return total;
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

void fn_8027D75C(s32 unused, s32 n) {
    extern u32 lbl_80300460[];
    u32 v;
    s32 i = n - 1;
    if (n) do {
        u8 index = *lbl_80300860[2];
        lbl_80300860[2]++;
        v = lbl_80300460[index];
        ((u32 *)lbl_80300860[0])[0] = v;
        ((u32 *)lbl_80300860[0])[1] = v;
        lbl_80300860[0] += 8;
    } while (i-- != 0);
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

void fn_8027D844(s32 unused,s32 count) {
extern u32 lbl_80300460[];
s32 n=count-1;
if(count != 0) do {
u8 index=*lbl_80300860[2];
u32 v;
lbl_80300860[2]++;
v=lbl_80300460[index];
*(u32 *)lbl_80300860[0]=v;
*(u32 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
lbl_80300860[0]+=4;
} while(n-- != 0);
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

void fn_8027DA74(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    s32 n;
    s32 *t2;
    s32 *t1;
    s32 *t3;
    u32 **ytab;
    s32 *t0;
    n = count - 1;
    if (count != 0) {
        t2 = lbl_803008C0 + 512;
        t1 = lbl_803008C0 + 256;
        t3 = lbl_803008C0 + 768;
        ytab = lbl_802F7AE0;
        t0 = lbl_803008C0;
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
            g = t2[*u] + t1[*v];
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = ytab[*y];
            lbl_80300860[2] = y + 1;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
            dst[0] = c;
            ((u32 *)lbl_80300860[0])[1] = c;
            lbl_80300860[0] += 8;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        } while (n-- != 0);
    }
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

void fn_8027DD10(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    s32 n;
    s32 *t2;
    s32 *t1;
    s32 *t3;
    u32 **ytab;
    s32 *t0;
    n = count - 1;
    if (count != 0) {
        t2 = lbl_803008C0 + 512;
        t1 = lbl_803008C0 + 256;
        t3 = lbl_803008C0 + 768;
        ytab = lbl_802F7AE0;
        t0 = lbl_803008C0;
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
            g = t2[*u] + t1[*v];
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            tbl = ytab[*y];
            lbl_80300860[2] = y + 1;
            c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
            *dst = c;
            *(u32 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            lbl_80300860[0] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        } while (n-- != 0);
    }
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

void fn_8027E378(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u8 *u;
    u32 *dst;
    u8 *v;
    u8 *y;
    u32 *tbl;
    s32 r, g, b;
    s32 n;
    s32 *t2 = lbl_803008C0 + 512;
    s32 *t1 = lbl_803008C0 + 256;
    s32 *t3 = lbl_803008C0 + 768;
    u32 **ytab = lbl_802F7AE0;
    s32 *t0 = lbl_803008C0;
    n = count - 1;
    if (count != 0) do {
        u = lbl_80300860[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        r = t0[*u];
        lbl_80300860[9] = (u8 *)r;
        g = t2[*u] + t1[*v];
        lbl_80300860[8] = (u8 *)g;
        b = t3[*v];
        lbl_80300860[10] = (u8 *)b;
        tbl = ytab[*y];
        lbl_80300860[2] = y + 1;
        *dst = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16);
        lbl_80300860[0] += 4;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (n-- != 0);
}

void fn_8027E5FC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11) {
extern u8 lbl_80301920[];
extern void fn_8027BFB8(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *);
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,0,lbl_80301920);
}

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

s32 fn_8027F59C(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern u32 *lbl_802F7AE0[];
    u32 n = count;
    s32 *t2;
    s32 *t1;
    s32 *t3;
    u32 **ytab;
    s32 *t0;
    u8 **s;
    t2 = lbl_803008C0 + 512;
    t1 = lbl_803008C0 + 256;
    t3 = lbl_803008C0 + 768;
    ytab = lbl_802F7AE0;
    t0 = lbl_803008C0;
    s = lbl_80300860;
    do {
        u8 *u;
        u32 *dst;
        u8 *v;
        u8 *y;
        u32 *tbl;
        u32 c;
        s32 r, g, b;
        u = s[4];
        x++;
        dst = (u32 *)lbl_80300860[0];
        v = s[5];
        y = s[2];
        r = t0[*u];
        s[9] = (u8 *)r;
        g = t2[*u] + t1[*v];
        s[8] = (u8 *)g;
        b = t3[*v];
        s[10] = (u8 *)b;
        tbl = ytab[*y];
        s[2] = y + 1;
        c = tbl[r] | (tbl[g] << 8) | (tbl[b] << 16) | (*s[6]++ << 24);
        *dst = c;
        tbl = ytab[*s[3]++];
        c = tbl[(s32)s[9]] | (tbl[(s32)s[8]] << 8) | (tbl[(s32)s[10]] << 16) | (*s[7]++ << 24);
        *(u32 *)s[1] = c;
        lbl_80300860[0] += 4;
        s[1] += 4;
        if ((x ^ 1) & 1) {
            s[4]++;
            s[5]++;
        }
    } while (--n != 0);
    return x;
}

void fn_8027F738(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12) {
extern u8 lbl_803019A0[];
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a12,a11,lbl_803019A0);
}

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

s32 fn_8027FA08(s32 count, s32 base) {
u32 n=count;
u16 v;
do {
u32 index=*lbl_80300860[2];
lbl_80300860[2]++;
v=*(u16 *)(lbl_802FFC60+index*4+2);
((u16 *)lbl_80300860[0])[0]=v;
((u16 *)lbl_80300860[0])[1]=v;
*(u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
((u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
index=*lbl_80300860[3];
lbl_80300860[3]++;
v=*(u16 *)(lbl_802FFC60+index*4+2);
((u16 *)lbl_80300860[1])[0]=v;
((u16 *)lbl_80300860[1])[1]=v;
*(u16 *)(lbl_80300860[1]+(s32)lbl_80300860[17])=v;
((u16 *)(lbl_80300860[1]+(s32)lbl_80300860[17]))[1]=v;
lbl_80300860[0]+=4;
lbl_80300860[1]+=4;
} while(--n);
return base+count;
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

void fn_80280560(s32 arg0, s32 arg1) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u16 lbl_802F8F40[][2];
    extern u16 lbl_802F9B60[][2];
    extern u16 lbl_802FA780[][2];
    s32 r, g, b, yv;
    u8 *u, *v, *y;
    u16 *dst;
    while (arg1-- != 0) {
        u = lbl_80300860[4];
        arg0++;
        dst = (u16 *)lbl_80300860[0];
        v = lbl_80300860[5];
        y = lbl_80300860[2];
        lbl_80300860[9] = (u8 *)(r = lbl_803008C0[*u]);
        lbl_80300860[8] = (u8 *)(g = lbl_803008C0[512 + *u] + lbl_803008C0[256 + *v]);
        lbl_80300860[10] = (u8 *)(b = lbl_803008C0[768 + *v]);
        yv = *y;
        lbl_80300860[2] = y + 1;
        yv = lbl_802F72A0[yv];
        *dst = lbl_802F8F40[yv + r + 0x100][1] | lbl_802F9B60[yv + g + 0x100][1] | lbl_802FA780[yv + b + 0x100][1];
        lbl_80300860[0] += 2;
        if ((arg0 ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    }
}

s32 fn_802806A8(s32 count, s32 x) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u32 lbl_802F8F40[];
    extern u32 lbl_802F9B60[];
    extern u32 lbl_802FA780[];
    s32 *t0 = lbl_803008C0;
    s32 *t2 = lbl_803008C0 + 512;
    s32 *t1 = lbl_803008C0 + 256;
    s32 *t3 = lbl_803008C0 + 768;
    do {
        s32 r, g, b, yv;
        x++;
        r = t0[*lbl_80300860[4]];
        lbl_80300860[9] = (u8 *)r;
        g = t2[*lbl_80300860[4]] + t1[*lbl_80300860[5]];
        lbl_80300860[8] = (u8 *)g;
        b = t3[*lbl_80300860[5]];
        lbl_80300860[10] = (u8 *)b;
        yv = lbl_802F72A0[*lbl_80300860[2]++];
        *(u16 *)lbl_80300860[0] = ((u16 *)&lbl_802F8F40[yv + r + 256])[1] | ((u16 *)&lbl_802F9B60[yv + g + 256])[1] | ((u16 *)&lbl_802FA780[yv + b + 256])[1];
        yv = lbl_802F72A0[*lbl_80300860[3]++];
        *(u16 *)lbl_80300860[1] = ((u16 *)&lbl_802F8F40[yv + (s32)lbl_80300860[9] + 256])[1] | ((u16 *)&lbl_802F9B60[yv + (s32)lbl_80300860[8] + 256])[1] | ((u16 *)&lbl_802FA780[yv + (s32)lbl_80300860[10] + 256])[1];
        lbl_80300860[0] += 2;
        lbl_80300860[1] += 2;
        if ((x ^ 1) & 1) {
            lbl_80300860[4]++;
            lbl_80300860[5]++;
        }
    } while (--count != 0);
    return x;
}

void fn_80280860(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11) {
extern u8 lbl_80301A20[];
extern void fn_8027BFB8(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,void *);
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,0,lbl_80301A20);
}

void fn_802808BC(s32 unused, s32 count) {
extern u8 lbl_802F8B20[];
s32 n=count-1;
if(count) do {
u8 *src=lbl_80300860[2], *alpha=lbl_80300860[6];
u32 index=*src;
u32 high=*alpha;
u16 v;
src++; alpha++;
v=*(u16 *)(lbl_802FFC60+index*4+2) | *(u16 *)(lbl_802F8B20+high*4+2);
lbl_80300860[6]=alpha;
lbl_80300860[2]=src;
*(u16 *)lbl_80300860[0]=v;
*(u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
lbl_80300860[0]+=2;
} while(n-- != 0);
}

void fn_80280A50(s32 unused, s32 count) {
extern u8 lbl_802F8B20[];
s32 n=count-1;
if(count) do {
u8 *src=lbl_80300860[2], *alpha=lbl_80300860[6];
u32 index=*src;
u32 high=*alpha;
u16 v;
src++; alpha++;
v=*(u16 *)(lbl_802FFC60+index*4+2) | *(u16 *)(lbl_802F8B20+high*4+2);
lbl_80300860[6]=alpha;
lbl_80300860[2]=src;
((u16 *)lbl_80300860[0])[0]=v;
((u16 *)lbl_80300860[0])[1]=v;
lbl_80300860[0]+=4;
} while(n-- != 0);
}

s32 fn_80280AEC(s32 count, s32 offset) {
    extern u8 lbl_802F8B20[];
    u32 n = count;
    do {
        u16 v = *(u16 *)(lbl_802FFC60 + *lbl_80300860[2]++ * 4 + 2) | *(u16 *)(lbl_802F8B20 + *lbl_80300860[6]++ * 4 + 2);
        ((u16 *)lbl_80300860[0])[0] = v;
        ((u16 *)lbl_80300860[0])[1] = v;
        v = *(u16 *)(lbl_802FFC60 + *lbl_80300860[3]++ * 4 + 2) | *(u16 *)(lbl_802F8B20 + *lbl_80300860[7]++ * 4 + 2);
        ((u16 *)lbl_80300860[1])[0] = v;
        ((u16 *)lbl_80300860[1])[1] = v;
        lbl_80300860[0] += 4;
        lbl_80300860[1] += 4;
    } while (--n != 0);
    return offset + count;
}

void fn_80280BD8(s32 unused, s32 count) {
extern u8 lbl_802F8B20[];
s32 n=count-1;
if(count) do {
u8 *src=lbl_80300860[2], *alpha=lbl_80300860[6];
u32 index=*src;
u32 high=*alpha;
u16 v;
src++; alpha++;
v=*(u16 *)(lbl_802FFC60+index*4+2) | *(u16 *)(lbl_802F8B20+high*4+2);
lbl_80300860[6]=alpha;
lbl_80300860[2]=src;
((u16 *)lbl_80300860[0])[0]=v;
((u16 *)lbl_80300860[0])[1]=v;
*(u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
((u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
lbl_80300860[0]+=4;
} while(n-- != 0);
}

s32 fn_80280C90(s32 count, s32 base) {
extern u8 lbl_802F8B20[];
u32 n=count;
do {
u8 *src=lbl_80300860[2], *alpha=lbl_80300860[6];
u32 index=*src;
u32 high=*alpha;
u16 v;
src++; alpha++;
v=*(u16 *)(lbl_802FFC60+index*4+2) | *(u16 *)(lbl_802F8B20+high*4+2);
lbl_80300860[2]=src;
lbl_80300860[6]=alpha;
((u16 *)lbl_80300860[0])[0]=v;
((u16 *)lbl_80300860[0])[1]=v;
*(u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17])=v;
((u16 *)(lbl_80300860[0]+(s32)lbl_80300860[17]))[1]=v;
src=lbl_80300860[3]; alpha=lbl_80300860[7];
index=*src;
high=*alpha;
src++; alpha++;
v=*(u16 *)(lbl_802FFC60+index*4+2) | *(u16 *)(lbl_802F8B20+high*4+2);
lbl_80300860[7]=alpha;
lbl_80300860[3]=src;
((u16 *)lbl_80300860[1])[0]=v;
((u16 *)lbl_80300860[1])[1]=v;
*(u16 *)(lbl_80300860[1]+(s32)lbl_80300860[17])=v;
((u16 *)(lbl_80300860[1]+(s32)lbl_80300860[17]))[1]=v;
lbl_80300860[0]+=4;
lbl_80300860[1]+=4;
} while(--n);
return base+count;
}

void fn_802814E0(s32 x, s32 count) {
    extern s32 lbl_803008C0[];
    extern s32 lbl_802F72A0[];
    extern u16 lbl_802F8F40[][2];
    extern u16 lbl_802F9B60[][2];
    extern u16 lbl_802FA780[][2];
    extern u16 lbl_802F8B20[][2];
    s32 n;
    s32 *t2;
    s32 *t1;
    s32 *t3;
    s32 *t0;
    n = count - 1;
    if (count != 0) {
        t0 = lbl_803008C0;
        t2 = lbl_803008C0 + 512;
        t1 = lbl_803008C0 + 256;
        t3 = lbl_803008C0 + 768;
        do {
            u8 *u;
            u16 *dst;
            u8 *v;
            u8 *y;
            u8 *a;
            u16 c;
            s32 r, g, b, yv;
            u = lbl_80300860[4];
            x++;
            dst = (u16 *)lbl_80300860[0];
            v = lbl_80300860[5];
            y = lbl_80300860[2];
            a = lbl_80300860[6];
            r = t0[*u];
            lbl_80300860[9] = (u8 *)r;
            g = t2[*u] + t1[*v];
            lbl_80300860[8] = (u8 *)g;
            b = t3[*v];
            lbl_80300860[10] = (u8 *)b;
            yv = *y;
            lbl_80300860[2] = y + 1;
            yv = lbl_802F72A0[yv];
            c = lbl_802F8F40[yv + r + 0x100][1] | lbl_802F9B60[yv + g + 0x100][1] | lbl_802FA780[yv + b + 0x100][1] | lbl_802F8B20[*a][1];
            lbl_80300860[6] = a + 1;
            dst[0] = c;
            ((u16 *)lbl_80300860[0])[1] = c;
            *(u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]) = c;
            ((u16 *)(lbl_80300860[0] + (s32)lbl_80300860[17]))[1] = c;
            lbl_80300860[0] += 4;
            if ((x ^ 1) & 1) {
                lbl_80300860[4]++;
                lbl_80300860[5]++;
            }
        } while (n-- != 0);
    }
}

void fn_80281DAC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12) {
extern u8 lbl_80301AA0[];
fn_8027BFB8(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a12,a11,lbl_80301AA0);
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

void fn_802827BC(s32 arg0, s32 n) {
    while ((n -= 2) >= 0) {
        *(u32 *)lbl_80300860[0] = lbl_80300860[2][0] | (*lbl_80300860[4]++ << 8) | (lbl_80300860[2][1] << 16) | (*lbl_80300860[5]++ << 24);
        lbl_80300860[2] += 2;
        lbl_80300860[0] += 4;
    }
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
    extern void fn_8027C408();
    extern u8 lbl_80301920[];
    fn_8027C408(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,0,lbl_80301920);
}

void fn_80282A30(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g,s32 h,s32 i,s32 j,s32 k,s32 l,s32 m,s32 n,s32 o) {
 extern void fn_8027C408();
 extern u8 lbl_803019A0[];
 fn_8027C408(a,b,c,d,e,f,g,h,i,j,k,l,m,o,n,lbl_803019A0);
}

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
    memcpy(arg0->unk2C, (u8 *)arg0->unk14 + (arg0->unk8 - arg0->unkC), arg0->unkC);
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

void *fn_80283AA4(s32 arg0) {
    s32 var_r30;
    void *temp_r3;

    var_r30 = arg0;
    temp_r3 = fn_8027B6D4(0x40);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x34) = 1;
        M2C_FIELD(temp_r3, s32 *, 0x38) = 0;
        M2C_FIELD(temp_r3, s32 *, 4) = 1;
        M2C_FIELD(temp_r3, s32 *, 0x30) = 0;
        if (var_r30 < 0) {
            var_r30 = -var_r30;
        }
        M2C_FIELD(temp_r3, s32 *, 0x3C) = var_r30;
    }
    return temp_r3;
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
        OSRestoreInterrupts(level);
    }
    return ret;
}

s32 fn_80283C38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    a = fn_80283B8C(arg0, arg1, arg4);
    return a | (fn_80283B8C(arg2, arg3, arg4) << 1);
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

void fn_80283EFC(int a, int b, int c, int d, int e, void *f) {
    fn_80283E90(e, f);
    fn_80283E90(e, f);
}

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

void fn_80287540(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7, u32 arg_sp8, s32 *arg_spC, s32 arg_sp10, s32 arg_sp14, s32 arg_sp18, s32 arg_sp1C) {
    s32 *fn_80285E24(s32, s32, s32, s32, u32, s32 *, s32, s32);
    s32 sp18;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 *temp_r8;
    s32 *var_r30;
    s32 *var_r8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r24;
    s32 temp_r26;
    s32 temp_r28;
    s32 temp_r29;
    u32 temp_r31;

    sp18 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r30 = arg_spC;
    if (arg_sp1C & 0x100000) {
        if (arg_sp18 & 0x100000) {
            spC = arg_sp14;
            sp8 = 1;
            sp10 = arg_sp18;
            fn_80285E24(arg2, arg3, (arg5 + 7) & 0xFFFFFFF8, (arg6 + 7) & 0xFFFFFFF8, arg7, var_r30 + 4, arg_sp10, arg4);
        }
        var_r30 += *var_r30;
    }
    M2C_ERROR(/* unknown instruction: mcrf $cr4, $cr0 */);
    if (!(arg_sp18 & 0x8000)) {
        var_r30 += 4;
    }
    spC = arg_sp14;
    sp8 = 1;
    sp10 = arg_sp18;
    var_r8 = fn_80285E24(arg0, arg1, (arg5 + 7) & 0xFFFFFFF8, (arg6 + 7) & 0xFFFFFFF8, arg7, var_r30, arg_sp10, arg4);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        var_r8 = (var_r30 + M2C_FIELD(var_r30, s32 *, -4)) - 4;
    }
    if (!(arg_sp18 & 0x20000)) {
        temp_r0 = arg7 * arg_sp8;
        spC = arg_sp14;
        temp_r26 = arg1 + temp_r0;
        temp_r24 = arg0 + temp_r0;
        temp_r29 = (((u32) (arg5 + 1) >> 1U) + 7) & 0xFFFFFFF8;
        temp_r28 = (((u32) (arg6 + 1) >> 1U) + 7) & 0xFFFFFFF8;
        temp_r31 = arg7 >> 1U;
        sp8 = 2;
        sp10 = arg_sp18;
        temp_r0_2 = temp_r31 * (arg_sp8 >> 1U);
        temp_r8 = fn_80285E24(temp_r24, temp_r26, temp_r29, temp_r28, temp_r31, var_r8, arg_sp10, arg4);
        sp8 = 2;
        spC = arg_sp14;
        sp10 = arg_sp18;
        fn_80285E24(temp_r24 + temp_r0_2, temp_r26 + temp_r0_2, temp_r29, temp_r28, temp_r31, temp_r8, arg_sp10, arg4);
    }
    M2C_ERROR(/* unknown instruction: mtcrf 0x8, $r12 */);
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

void fn_8028AEAC(s32 n) {
    u32 *dst = (u32 *)lbl_80300860[0];
    u32 *src = (u32 *)lbl_80300860[2];
    s32 i = n - 1;
    if (n) do {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    } while (i-- != 0);
    dst = (u32 *)lbl_80300860[1];
    src = (u32 *)lbl_80300860[3];
    i = n - 1;
    if (n) do {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    } while (i-- != 0);
    lbl_80300860[0] += n * 8;
    lbl_80300860[1] += n * 8;
    lbl_80300860[3] += n * 4;
    lbl_80300860[2] += n * 4;
}

void fn_8028AFB8(s32 n)
{
    u32 *dst;
    u32 *src;
    u32 c;
    s32 i;

    dst = (u32 *)lbl_80300860[0];
    src = (u32 *)lbl_80300860[2];
    for (i = n; i != 0; i--) {
        c = *src++;
        dst[0] = (c & 0xFF000000) + ((c & 0xFF000000) >> 16) + 0x800080;
        dst[1] = ((c & 0xFF0000) << 8) + ((c & 0xFF0000) >> 8) + 0x800080;
        dst[2] = ((c & 0xFF00) << 16) + (c & 0xFF00) + 0x800080;
        dst[3] = ((c & 0xFF) << 24) + ((c & 0xFF) << 8) + 0x800080;
        dst += 4;
    }
    dst = (u32 *)lbl_80300860[1];
    src = (u32 *)lbl_80300860[3];
    for (i = n; i != 0; i--) {
        c = *src++;
        dst[0] = (c & 0xFF000000) + ((c & 0xFF000000) >> 16) + 0x800080;
        dst[1] = ((c & 0xFF0000) << 8) + ((c & 0xFF0000) >> 8) + 0x800080;
        dst[2] = ((c & 0xFF00) << 16) + (c & 0xFF00) + 0x800080;
        dst[3] = ((c & 0xFF) << 24) + ((c & 0xFF) << 8) + 0x800080;
        dst += 4;
    }
    lbl_80300860[0] += n * 16;
    lbl_80300860[1] += n * 16;
    lbl_80300860[3] += n * 4;
    lbl_80300860[2] += n * 4;
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

void fn_8028B428(s32 n, u32 *dst, u32 *src) {
    s32 i = n - 1;
    if (n) do {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    } while (i-- != 0);
}

void fn_8028B480(s32 n, u32 *dst, u32 *src) {
    s32 i = n - 1;
    if (n) do {
        u32 v = *src++;
        u32 t0 = v & 0xFF000000;
        u32 t1 = v & 0xFF0000;
        u32 t2 = v & 0xFF00;
        u32 t3 = v & 0xFF;
        *dst++ = t0 + (t0 >> 16) + 0x800080;
        *dst++ = (t1 << 8) + (t1 >> 8) + 0x800080;
        *dst++ = (t2 << 16) + t2 + 0x800080;
        *dst++ = (t3 << 24) + (t3 << 8) + 0x800080;
    } while (i-- != 0);
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
        a[1] = lbl_802AB240 * (a[0] - a[1]);
        a[0] -= a[1];
        if (n > 4) {
            fn_8028F890(n, a, nc, w + nw);
            fn_8028BF5C(n, a, ip + 2, nw, w);
        } else if (n == 4) {
            fn_8028BF5C(n, a, ip + 2, nw, w);
        }
    }
}

void fn_8028BCC0(s32 arg0, void *arg1, f32 *arg2) {
    f64 fn_800F0564(f32);
    f32 fn_800F0588(f32);
    f32 fn_800F05AC(f32 *, f32);
    extern f32 lbl_802AB264;
    extern f64 lbl_802AB268;
    extern f32 lbl_802AB270;
    extern f64 lbl_802AB278;
    s32 sp14;
    s32 sp10;
    f32 *var_r30;
    f32 *var_r31;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f31_2;
    f64 temp_f30;
    f64 temp_f31;
    s32 temp_r27;
    s32 var_r28;

    M2C_FIELD(arg1, s32 *, 4) = arg0;
    if (arg0 > 1) {
        temp_r27 = arg0 >> 1;
        var_r28 = 1;
        temp_f31 = lbl_802AB268;
        temp_f0 = (f32) (f64) temp_r27;
        temp_f29 = fn_800F05AC(&lbl_802AB264, lbl_802AB264) / temp_f0;
        temp_f1 = fn_800F0588(temp_f29 * temp_f0);
        *arg2 = temp_f1;
        *(arg2 + (temp_r27 * 4)) = temp_f1 * lbl_802AB270;
        if (temp_r27 > 1) {
            var_r31 = arg2 + 4;
            temp_f30 = lbl_802AB278;
            var_r30 = ((arg0 * 4) + arg2) - 4;
            do {
                sp14 = var_r28 ^ 0x80000000;
                var_r28 += 1;
                sp10 = 0x43300000;
                temp_f31_2 = temp_f29 * (f32) (M2C_BITWISE(f64, sp10) - temp_f31);
                *var_r31 = (f32) (fn_800F0588(temp_f31_2) * temp_f30);
                var_r31 += 4;
                *var_r30 = (f32) (fn_800F0564(temp_f31_2) * temp_f30);
                var_r30 -= 4;
            } while (var_r28 < temp_r27);
        }
    }
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

    x2r = a[4];
    x2i = a[5];
    x4r = a[8];
    x4i = a[9];
    x8r = a[16];
    x8i = a[17];
    x10r = a[20];
    x12r = a[24];
    x12i = a[25];
    x1r = a[2];
    x1i = a[3];
    x3r = a[6];
    x3i = a[7];
    x5r = a[10];
    a[2] = x8r;
    a[3] = x8i;
    a[4] = x4r;
    a[5] = x4i;
    a[6] = x12r;
    a[7] = x12i;
    a[8] = x2r;
    a[9] = x2i;
    a[10] = x10r;
    x10i = a[21];
    x5i = a[11];
    x7r = a[14];
    x7i = a[15];
    x11r = a[22];
    x11i = a[23];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    a[11] = x10i;
    a[29] = x7i;
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
}

void fn_8028C7F0(void *arg0) {
    f32 temp_f19;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f24 = M2C_FIELD(arg0, f32 *, 8);
    temp_f23 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f19 = M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x78);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x7C);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    temp_f22 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f21 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x24);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x28);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x2C);
    temp_f27 = M2C_FIELD(arg0, f32 *, 0x30);
    temp_f26 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f25 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x50);
    temp_f30 = M2C_FIELD(arg0, f32 *, 0x54);
    temp_f29 = M2C_FIELD(arg0, f32 *, 0x60);
    temp_f28 = M2C_FIELD(arg0, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f5;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x34) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x40) = temp_f24;
    M2C_FIELD(arg0, f32 *, 0x44) = temp_f23;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x74);
    M2C_FIELD(arg0, f32 *, 0x50) = temp_f27;
    M2C_FIELD(arg0, f32 *, 0x54) = temp_f26;
    M2C_FIELD(arg0, f32 *, 0x58) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x5C) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x60) = temp_f19;
    M2C_FIELD(arg0, f32 *, 0x64) = temp_f22;
    M2C_FIELD(arg0, f32 *, 0x68) = temp_f29;
    M2C_FIELD(arg0, f32 *, 0x6C) = temp_f28;
    M2C_FIELD(arg0, f32 *, 0x70) = temp_f21;
    M2C_FIELD(arg0, f32 *, 0x74) = temp_f20;
    M2C_FIELD(arg0, f32 *, 0x78) = temp_f25;
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

void fn_8028F2AC(f32 *x, f32 *w) {
    f32 a0r, a0i, a1r, a1i, a2r, a2i, a3r, a3i;
    f32 b0r, b0i, b1r, b1i, b2r, b2i, b3r, b3i;
    f32 c0r, c0i, c1r, c1i, c2r, c2i, c3r, c3i;
    f32 d0r, d0i, d1r, d1i, d2r, d2i, d3r, d3i;
    f32 t0, t1, t2, t3;
    f32 k;

    a0r = x[0] + x[8];
    a0i = x[1] + x[9];
    a2r = x[0] - x[8];
    a2i = x[1] - x[9];
    a1r = x[4] + x[12];
    a1i = x[5] + x[13];
    a3r = x[4] - x[12];
    a3i = x[5] - x[13];
    c0r = a0r + a1r;
    c0i = a0i + a1i;
    c2r = a0r - a1r;
    c2i = a0i - a1i;
    c1r = a2r - a3i;
    c1i = a2i + a3r;
    c3r = a2r + a3i;
    c3i = a2i - a3r;
    k = w[1];
    b0r = x[2] + x[10];
    b0i = x[3] + x[11];
    b2r = x[2] - x[10];
    b2i = x[3] - x[11];
    b1r = x[6] + x[14];
    b1i = x[7] + x[15];
    b3r = x[6] - x[14];
    b3i = x[7] - x[15];
    d0r = b0r + b1r;
    d0i = b0i + b1i;
    d2r = b0r - b1r;
    d2i = b0i - b1i;
    d1r = b2r - b3i;
    d1i = b2i + b3r;
    d3r = b2r + b3i;
    d3i = b2i - b3r;
    t0 = k * (d1r - d1i);
    t1 = k * (d1r + d1i);
    t2 = k * (d3r + d3i);
    t3 = k * (d3r - d3i);
    x[10] = c1r - t0;
    x[11] = c1i - t1;
    x[14] = c3r + t2;
    x[15] = c3i - t3;
    x[2] = c0r - d0r;
    x[3] = c0i - d0i;
    x[6] = c2r + d2i;
    x[7] = c2i - d2r;
    x[8] = c1r + t0;
    x[9] = c1i + t1;
    x[12] = c3r - t2;
    x[13] = c3i + t3;
    x[0] = c0r + d0r;
    x[1] = c0i + d0i;
    x[4] = c2r - d2i;
    x[5] = c2i + d2r;
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
