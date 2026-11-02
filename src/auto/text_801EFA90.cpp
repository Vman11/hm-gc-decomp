/* Functions from 0x801EFA90 to 0x801EFB30, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    s32 a, b, c;
} Vec3i_801EFA90;

typedef struct {
    void *vtbl;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    Vec3i_801EFA90 unk10;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
} Obj_801EFA90;

extern u8 lbl_802E2558[];
extern u8 lbl_802EE7A8[];
extern Vec3i_801EFA90 lbl_8029BF10;
extern u32 lbl_80365438;

extern s32 lbl_8035B0C0;


struct V3 { s32 v[3]; };
struct A0 { void *vt; A0() { vt = lbl_802E2558; } ~A0(); };
struct C801EFA90 : A0 { C801EFA90(); s32 u4, u8_, uC; V3 u10; s32 u1C, u20, u24; };
C801EFA90::C801EFA90() { vt = lbl_802EE7A8; uC = 0; u8_ = 0; u1C = 0; u10 = *(V3 *)&lbl_8029BF10; u20 = 0; u24 = 0; }


void fn_801EFAE4(s32 arg0) {
    lbl_8035B0C0 = arg0;
}

void fn_801EFAEC(void *arg0) {
    void *temp_r3;
    if (*(u32 *)((char *)arg0 + 0x24) & 2) {
        temp_r3 = *(void **)((char *)arg0 + 0x28);
        *(u32 *)((char *)temp_r3 + 0x24) &= ~2U;
    }
}

void fn_801EFB0C(void *arg0) {
    void *temp_r4;
    if (*(u32 *)((char *)arg0 + 0x24) & 2) {
        temp_r4 = *(void **)((char *)arg0 + 0x28);
        *(u32 *)((char *)temp_r4 + 0x24) |= lbl_80365438;
    }
}

} /* extern "C" */
