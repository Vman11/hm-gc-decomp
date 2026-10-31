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

void fn_8027AE40(s32 arg0, void *arg1) {
    void fn_8027ADB0(u8 *, s32, s32);
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
