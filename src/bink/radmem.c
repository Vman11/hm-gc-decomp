/* RAD Bink: 0x8027B6C0-0x8027B7EC */
#include "bink_common.h"

void fn_8027B6C0(s32 a, s32 b) {
    wCa_802F7298[0] = a;
    wCa_802F729C[0] = b;
}

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
