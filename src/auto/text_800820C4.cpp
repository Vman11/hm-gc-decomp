// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); };
u8 wA_820C4_pad[0xC0] = {1};
extern u8 *lbl_8035B530;
extern u8 lbl_8035FB58[8];
extern u32 lbl_8035A0A4;
extern const u32 lbl_8035FC40;
extern u8 lbl_803286D0[];
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void *fn_800F8000(u32 size);
void fn_800F7E98(void);
s32 fn_8003C778(u32 a, void *b, void *c);
void *fn_8023F4A0(void *p, void *a, void *b, const char *name, s32 c);
void fn_8022A7A8(void *a);
void fn_802494A4(void *p, s32 s);
void fn_80081C1C(void *p);
void fn_80190C98(void *p);

inline void wA_set(u8 *p, s32 on, u32 m) {
    if (on) {
        **(u32 **)(p + 0x1B8) |= m;
    } else {
        **(u32 **)(p + 0x1B8) &= ~m;
    }
}

void fn_800820C4(u8 *p) {
    s32 r = 0;
    BOOL b;
    u8 vC[12];
    u8 vB[12];
    u8 vA[12];

    if (*(void **)(p + 0x1B8) != 0 && *(void **)(p + 0x118) != 0 && **(s32 **)(p + 0x118) != 0 && *(s32 *)(p + 0x1B0) != 0) {
        *(u32 *)(p + 0x1B8) = 0;
    }
    if (*(void **)(p + 0x118) != 0 && **(s32 **)(p + 0x118) != 0 && *(s32 *)(*(u8 **)(p + 0xE0) + 0x114) == 0) {
        *(u32 *)(p + 0x1B0) = 1;
        r = fn_8003C778(lbl_8035A0A4, *(void **)(p + 0xE0), p + 0x1B8);
    } else {
        if (*(void **)(p + 0x1B8) == 0) {
            if (lbl_8035B530 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035B530);
            *(void **)(p + 0x1B8) = fn_800F8000(4);
            fn_800F7E98();
            if (*(void **)(p + 0x1B8) == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
        }
    }
    b = FALSE;
    if (r == 0) {
        **(u32 **)(p + 0x1B8) = 0;
        wA_set(p, **(s32 **)(p + 0x11C), *(u32 *)(p + 0x1BC));
        **(u32 **)(p + 0x1B8) &= ~*(u32 *)(p + 0x1C0);
        wA_set(p, **(s32 **)(p + 0x120), *(u32 *)(p + 0x1C4));
    }
    *(u32 *)(*(u8 **)(p + 0xE0) + 0xB4) |= 4;
    *(void **)(p + 0x168) = fn_8023F4A0(p, lbl_8035FB58, lbl_8035FB58, "aaSounds", 1);
    *(void **)(p + 0x16C) = fn_8023F4A0(p, lbl_8035FB58, lbl_8035FB58, "abSoundLooped", 1);
    *(void **)(p + 0x170) = fn_8023F4A0(p, lbl_8035FB58, lbl_8035FB58, "aaEffects", 1);
    *(u32 *)(p + 0x174) = *(u32 *)(**(u8 ***)(p + 0x170) + 0x10);
    if ((**(u32 **)(p + 0x1B8) & *(u32 *)(p + 0x1BC)) == 0) {
        **(u32 **)(p + 0x1B8) &= ~*(u32 *)(p + 0x1BC);
        ((VC *)*(void **)(p + 0xE0))->p24();
        fn_8022A7A8(*(void **)(p + 0xE0));
    }
    *(u32 *)(p + 0x17C) = 0;
    *(u32 *)(p + 0x180) = 0;
    *(u32 *)(p + 0x184) = 0;
    *(u32 *)(p + 0x188) = 0;
    *(u32 *)(p + 0x18C) = 0;
    *(u32 *)(p + 0x194) = 1;
    *(u32 *)(p + 0x1A0) = 0;
    *(u32 *)(p + 0x1A4) = 0;
    *(u32 *)(p + 0x1A8) = 0;
    *(u32 *)(p + 0x1AC) = 0;
    if (*(s32 *)(p + 0x194) != 0) {
        if (*(s32 *)(p + 0x1B0) != 0) {
            if (**(f32 **)(p + 0x164) > 0.0f) {
                fn_802494A4(p, 2);
                b = TRUE;
            } else {
                fn_802494A4(p, ((s32)(**(u32 **)(p + 0x1B8) & *(u32 *)(p + 0x1C8)) >> 27) + 1);
            }
        } else if (**(f32 **)(p + 0x164) > 0.0f) {
            fn_802494A4(p, 2);
            b = TRUE;
        } else if ((**(u32 **)(p + 0x1B8) & *(u32 *)(p + 0x1C4)) != 0) {
            fn_802494A4(p, 1);
        } else {
            fn_802494A4(p, 3);
        }
    }
    if (b) {
        fn_80081C1C(p);
    }
    if (*(void **)(*(u8 **)(p + 0xE0) + 0x9C) != 0) {
        u8 *n = *(u8 **)(*(u8 **)(*(u8 **)(p + 0xE0) + 0x9C) + 0x30);
        if (n != 0) {
            (*(void (**)(u32, void *, void *, void *))(lbl_803286D0 + 0x134))(*(u32 *)(n + 0x10), vC, vB, vA);
        }
        {
            u8 *m = *(u8 **)(*(u8 **)(p + 0xE0) + 0x9C);
            u8 *n2 = *(u8 **)(m + 0x30);
            if (n2 != 0) {
                (*(void (**)(u32, void *, void *, void *))(lbl_803286D0 + 0x1C))(*(u32 *)(n2 + 0x10), vC, vB, vA);
                *(u32 *)(n2 + 0x20) |= lbl_8035FC40;
                fn_80190C98(m);
            }
        }
    }
}

} /* extern "C" */
