/* RAD Bink: 0x8027ABEC-0x8027B6C0 */
#include "bink_common.h"

void fn_8027ABEC(s32 *p, s32 n) {
    n = (u32)(n + 3) >> 2;
    while (--n != -1) {
        u32 v;
        asm("lwbrx %0,%1,%2" : "=r"(v) : "r"(0), "r"(p));
        *p++ = (s32)v;
    }
}

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

u32 fn_8027AD10(u8 *p, s32 pos, void *dst) {
    u32 n, left;
    if (pos != -1 && *(volatile s32 *)(p + 0x88) != pos) {
        *(volatile s32 *)(p + 0x88) = pos;
    }
    n = ((u32 (*)(void *, u32, void *))fn_8027AC20)(p + 0x4C, *(volatile s32 *)(p + 0x88) + *(s32 *)(p + 0xAC), dst);
    *(volatile s32 *)(p + 0x88) += n;
    *(s32 *)(p + 0x90) = *(volatile s32 *)(p + 0x88);
    left = *(u32 *)(p + 0xB0) - *(u32 *)(p + 0x90);
    *(u32 *)(p + 0x44) = left < *(volatile u32 *)(p + 0x3C) ? left : *(volatile u32 *)(p + 0x3C);
    fn_8027ABEC(dst, n);
    return n;
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

void fn_8027AE40(s32 n, void *arg1) {
    M2C_UNK memmove(u32, s32, s32);
    u8 *p = M2C_FIELD(arg1, u8 **, 0x7C);
    s32 t;
    s32 pend;
    s32 z;
    u32 q;
    s32 t2;

#define F(o) (*(s32 *)(p + (o)))
#define U(o) (*(u32 *)(p + (o)))
#define VF(o) (*(volatile s32 *)(p + (o)))
#define VU(o) (*(volatile u32 *)(p + (o)))
    z = F(0xBC);
    if (z == 0) {
        if (n != 0x1000 && (F(0xB0) - VF(0x88)) + F(0x8C) != n) {
            VF(0x20) = z;
            VF(0x1C) = 1;
            return;
        }
        if (F(0x8C) != 0) {
            memmove(U(0xA4), U(0xA4) + F(0x8C), F(0xB0) - VF(0x88));
            t2 = F(0x8C);
            F(0x8C) = 0;
            n -= t2;
        }
        VF(0x24) += n;
        q = U(0xA4) + n;
        U(0xA4) = q;
        VF(0x88) += n;
        if (q >= U(0xA0)) {
            U(0xA4) = U(0x9C);
        }
        VF(0x98) -= n;
        VU(0x48) += n;
        if (VU(0x48) > VU(0x40)) {
            VU(0x40) = VU(0x48);
        }
        if (F(0xB4) != 0) {
            fn_8027ADB0(p, n, F(0xC4));
        }
        t = fn_802753F0() - F(0xC4);
        F(0xC4) = t;
        F(0x2C) += t;
        if (F(0xC0) != 0 || F(0x28) != 0) {
            F(0x38) += t;
        } else {
            F(0x34) += t;
        }
        F(0x20) = 0;
        fn_8027AFC0(p);
    }
#undef F
#undef U
#undef VF
#undef VU
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

u32 fn_8027B1BC(u8 *p, s32 unused, u32 pos, u8 *dst, u32 size) {
    u8 *start = dst;
    u32 total = 0;
    u32 t0, t1, t2, n, avail, seg, d, q, left;
    s32 e;

#define F(o) (*(s32 *)(p + (o)))
#define U(o) (*(u32 *)(p + (o)))
#define VF(o) (*(volatile s32 *)(p + (o)))
#define VU(o) (*(volatile u32 *)(p + (o)))
#define RESTORE(x) ((void (*)(s32))OSRestoreInterrupts)(x)
#define MEMCPY ((void *(*)())memcpy)
    if (VF(0x1C) != 0) {
        return 0;
    }
    t0 = fn_802753F0();
    if (pos != (u32)-1 && U(0x90) != pos) {
        if (pos > U(0x90) && pos <= VU(0x88)) {
            e = OSDisableInterrupts();
            n = pos - U(0x90);
            VU(0x98) += n;
            q = U(0x94) + n;
            U(0x90) = pos;
            U(0x94) = q;
            VU(0x48) -= n;
            if (q > U(0xA0)) {
                U(0x94) = q - VU(0x3C);
            }
            RESTORE(e);
        } else {
            fn_8027B168(p);
            e = OSDisableInterrupts();
            VU(0x88) = pos;
            U(0x90) = pos;
            VU(0x98) = VU(0x3C);
            VU(0x48) = 0;
            U(0xA4) = U(0x94) = U(0x9C);
            RESTORE(e);
        }
    }
    if (U(0x9C) == 0) {
        t1 = fn_802753F0();
        n = fn_8027AC20(p + 0x4C, VU(0x88), dst, size);
        if (n < size) {
            VF(0x1C) = 1;
        }
        VU(0x88) += n;
        U(0x90) += n;
        VU(0x24) += n;
        total = n;
        if (F(0xB4) != 0) {
            fn_8027ADB0(p, total, t1);
        }
        t2 = fn_802753F0();
        d = t2 - t1;
        q = t2 - t0;
        VU(0x2C) += d;
        VU(0x30) += q;
    } else {
        while (size != 0 && VF(0x1C) == 0) {
            fn_8027AFC0(p);
            avail = VU(0x48);
            if (avail == 0) {
                continue;
            }
            if (avail > size) {
                avail = size;
            }
            size -= avail;
            total += avail;
            U(0x90) += avail;
            seg = U(0xA0) - U(0x94);
            if (seg <= avail) {
                MEMCPY(dst, U(0x94), seg);
                dst += seg;
                avail -= seg;
                U(0x94) = U(0x9C);
                e = OSDisableInterrupts();
                VU(0x48) -= seg;
                VU(0x98) += seg;
                RESTORE(e);
            }
            if (avail != 0) {
                MEMCPY(dst, U(0x94), avail);
                dst += avail;
                U(0x94) += avail;
                e = OSDisableInterrupts();
                VU(0x48) -= avail;
                VU(0x98) += avail;
                RESTORE(e);
            }
        }
        VU(0x30) += fn_802753F0() - t0;
    }
    n = U(0xB0) - U(0x90);
    VU(0x44) = n < VU(0x3C) ? n : VU(0x3C);
    if (VU(0x48) + 0x1000 > VU(0x44)) {
        VU(0x44) = VU(0x48);
    }
    fn_8027ABEC((s32 *)start, total);
    return total;
#undef F
#undef U
#undef VF
#undef VU
#undef RESTORE
#undef MEMCPY
}

u32 fn_8027B4CC(void *arg0, void *arg1) {
    return ((u32)arg1 + 0xFFF) & ~0xFFF;
}

void fn_8027B4D8(u8 *p, u8 *buf, u32 size, s32 a, s32 b) {
    s32 e = OSDisableInterrupts();
    u32 s = size & ~0xFFF;
    *(volatile u32 *)(p + 0x98) = s;
    *(volatile u32 *)(p + 0x3C) = s;
    *(s32 *)(p + 0xB0) = a;
    *(s32 *)(p + 0xB4) = b;
    *(u8 **)(p + 0xC8) = p;
    *(volatile s32 *)(p + 0x48) = 0;
    *(u8 **)(p + 0x9C) = buf;
    *(u8 **)(p + 0x94) = buf;
    *(u8 **)(p + 0xA4) = buf;
    *(u8 **)(p + 0xA0) = buf + s;
    ((void (*)(s32))OSRestoreInterrupts)(e);
}

void fn_8027B54C(void *arg0) {
 fn_8027B168(arg0);
 if (*(s32 *)((u8 *)arg0+0xA8)==0) fn_800BD474((u8 *)arg0+0x4C);
}

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
