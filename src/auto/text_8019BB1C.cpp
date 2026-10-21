// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801951C4(void *, s32);
void fn_800E1E88(void *, void *);
void __dla__FPv(void *);
void *memset(void *, s32, u32);
void __dt__9C801897A8Fv(void);
void __dt__9C801A07A0Fv(void);
void __dt__9C801A002CFv(void);
void __dt__9C8019F8B8Fv(void);
void __dt__9C80198880Fv(void);

static inline void unlall_8019BB1C(u8 *p, u32 *q) {
    u8 **pp2;
    u8 *m;
    u8 *k;
    u8 *nx;
    for (*(u32 *)(p + 76) = 0; *(u32 *)(p + 76) < 4; (*(u32 *)(p + 76))++) {
        pp2 = (u8 **)(q + *(u32 *)(p + 76) + 16);
        m = *pp2;
        while (m != 0) {
            if (*(u8 **)m == p) {
                break;
            }
            pp2 = (u8 **)(m + 20);
            m = *(u8 **)(m + 20);
        }
        if (m != 0) {
            *pp2 = *(u8 **)(m + 20);
            k = *(u8 **)(m + 24);
            while (k != 0) {
                nx = *(u8 **)(k + 16);
                fn_801951C4(k, *(u32 *)(p + 76));
                *(u8 **)(k + 16) = *(u8 **)(p + 20);
                *(u8 **)(p + 20) = k;
                k = nx;
            }
            *(u8 **)m = 0;
            *(u8 **)(m + 20) = *(u8 **)(p + 8);
            *(u8 **)(p + 8) = m;
        }
    }
}

void fn_8019BB1C(u8 *p) {
    u8 *e = *(u8 **)(p + 4);
    u8 *end = e + *(u32 *)p * 32;
    for (; e != end; e += 32) {
        if (*(void **)e != 0 && *(void **)(e + 24) != 0) {
            unlall_8019BB1C(p, *(u32 **)(*(u8 **)(e + 24) + 12));
        }
    }
    if (*(void **)(p + 60) != 0) {
        fn_800E1E88(*(void **)(p + 60), (void *)__dt__9C801897A8Fv);
    }
    if (*(void **)(p + 52) != 0) {
        fn_800E1E88(*(void **)(p + 52), (void *)__dt__9C801A07A0Fv);
    }
    if (*(void **)(p + 44) != 0) {
        fn_800E1E88(*(void **)(p + 44), (void *)__dt__9C801A002CFv);
    }
    if (*(void **)(p + 36) != 0) {
        fn_800E1E88(*(void **)(p + 36), (void *)__dt__9C8019F8B8Fv);
    }
    if (*(void **)(p + 28) != 0) {
        fn_800E1E88(*(void **)(p + 28), (void *)__dt__9C80198880Fv);
    }
    if (*(u8 **)(p + 16) != 0) {
        if (*(u8 **)(p + 16) != 0) {
            __dla__FPv(*(u8 **)(p + 16) - 16);
        }
    }
    if (*(u8 **)(p + 4) != 0) {
        if (*(u8 **)(p + 4) != 0) {
            __dla__FPv(*(u8 **)(p + 4) - 16);
        }
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 64) = 0;
    *(s32 *)(p + 68) = 0;
    *(s32 *)(p + 72) = 0;
    memset(p + 80, 0, 16);
}

} /* extern "C" */
