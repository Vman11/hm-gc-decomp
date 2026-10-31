/* RAD Bink: 0x802752DC-0x8027564C */
#include "bink_common.h"

u32 fn_802752DC(u32 a, u32 b, u32 d) {
    u32 hi, lo, inv, d16, q, tl, th; s32 s, mask;
    BINK_MUL(hi, lo, a, b);
    if ((d & (d - 1)) == 0) {
        s32 z = cntlzw_inline(d);
        q = (lo >> (31 - z)) | (hi << (z + 1));
    } else {
        inv = 0xFFFFFFFF / d;
        d16 = (d + 0xFFFF) >> 16;
        q = 0;
        if (d16 != 0) {
            s = cntlzw_inline(hi);
            q = (hi << s) / d16;
            s = 16 - s;
            mask = s >> 31;
            q >>= (-s & mask);
            q <<= (s & ~mask);
            BINK_MUL(th, tl, q, d);
            BINK_SUB(hi, lo, th, tl);
        }
        while (hi != 0) {
            u32 t = inv * hi;
            BINK_MUL(th, tl, t, d);
            BINK_SUB(hi, lo, th, tl);
            q += t;
        }
        q += lo / d;
    }
    return q;
}

u32 fn_80275394(u32 a, u32 b, u32 s) {
    u32 hi, lo;
    BINK_MUL(hi, lo, a, b);
    return (lo >> s) | (hi << (32 - s));
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

void fn_8027552C(u64 *p) {
    u64 t;
    register u32 *q asm("r9") = (u32 *)&t;
    asm volatile("1:\n\tmftbu 10\n\tmftb 11\n\tmftbu 0\n\tcmpw 10,0\n\tbne 1b\n\tstw 10,0(%0)\n\tstw 11,4(%0)"
                 : : "b"(q) : "r0", "r10", "r11", "memory");
    *p = t - *p;
}

u32 fn_80275578(u32 hi, u32 lo, u32 d) {
    u32 inv, d16, q, tl, th; s32 s, mask;
    if ((d & (d - 1)) == 0) {
        s32 z = cntlzw_inline(d);
        return (lo >> (31 - z)) | (hi << (z + 1));
    } else {
        inv = 0xFFFFFFFF / d;
        d16 = (d + 0xFFFF) >> 16;
        q = 0;
        if (d16 != 0) {
            s = cntlzw_inline(hi);
            q = (hi << s) / d16;
            s = 16 - s;
            mask = s >> 31;
            q >>= (-s & mask);
            q <<= (s & ~mask);
            BINK_MUL(th, tl, q, d);
            BINK_SUB(hi, lo, th, tl);
        }
        while (hi != 0) {
            u32 t = inv * hi;
            BINK_MUL(th, tl, t, d);
            BINK_SUB(hi, lo, th, tl);
            q += t;
        }
        return q + lo / d;
    }
}

void fn_8027562C(u32 *dst) {
    asm volatile("1:\n\tmftbu 11\n\tmftb 9\n\tmftbu 0\n\tcmpw 11,0\n\tbne 1b\n\tstw 11,0(%0)\n\tstw 9,4(%0)"
                 : : "b"(dst) : "r0", "r9", "r11", "memory");
}
