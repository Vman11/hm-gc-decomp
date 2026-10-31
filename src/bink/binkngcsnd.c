/* RAD Bink: 0x8027564C-0x80276970 */
#include "bink_common.h"

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
        fn_802757D0((void *)a, *(s32 *)(p + 0x78), *(s32 *)(p + 0x7C), *(s32 *)(p + 0x74) == 1 ? *(s32 *)(p + 0x80) : 0);
    }
    a = *(s32 *)(p + 0xCC);
    if (a != 0) fn_802757D0((void *)a, *(s32 *)(p + 0x78), 0, *(s32 *)(p + 0x80));
}

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

void fn_80275D00(u32 *src, u16 *left, u16 *right, u32 count) {
    u32 i = 0;
    u32 n = count >> 1;
    if (i < n) do {
        u32 a = *src++;
        u32 b = a >> 8;
        *left++ = ((a >> 16) & 0xFF00) | (b & 0xFF);
        *right++ = (b & 0xFF00) | (a & 0xFF);
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
        *(u32 *)left = (b >> 16) | (a & 0xFFFF0000);
        *(u32 *)right = (b & 0xFFFF) | (a << 16);
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

#define F(o) (*(u32 *)(p + (o)))
#define P(o) (*(u8 **)(p + (o)))
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

void fn_80276554(u8 *p, s32 v) {
    if (v < 0) {
        v = 0;
    }
    if (v > 32767) {
        v = 32767;
    }
    *(s32 *)(p + 120) = powf((f32)v, 1.6666666f) * 0.000976582368720213;
    fn_80275844(p);
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
    *(s32 *)(p + 124) = powf(1.0f - r, 0.3f) * 32768.0f;
    *(s32 *)(p + 128) = powf(r, 0.3f) * 32768.0f;
    fn_80275844(p);
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
        lbl_802F3848_p[0].a = 0;
        lbl_802F3848_p[0].b = 0;
    } else {
        lbl_802F3848_p[0] = *(P8_80276930 *)arg0;
    }
    return (void *)fn_802767E0;
}
