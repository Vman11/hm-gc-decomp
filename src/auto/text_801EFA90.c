/* Functions from 0x801EFA90 to 0x801EFB30, found by decomp-toolkit. */
#include "common.h"

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

static inline void fn_801EFA90_base(Obj_801EFA90 *arg0) {
    arg0->vtbl = lbl_802E2558;
}
void fn_801EFA90(Obj_801EFA90 *arg0) {
    Vec3i_801EFA90 *src;
    arg0->vtbl = lbl_802E2558;
    arg0->vtbl = lbl_802EE7A8;
    src = &lbl_8029BF10;
    arg0->unkC = 0;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
    arg0->unk10 = *src;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
}

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

