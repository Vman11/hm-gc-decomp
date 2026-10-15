/* Functions from 0x801637BC to 0x801638D4, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x1C];
    u32 flags;
    u8 pad20[0x10];
} Unk801637C8Entry;

typedef struct {
    Unk801637C8Entry *entries;
    u8 pad4[0xA];
    u16 count;
    u8 pad10[0xC];
} Unk801637C8Sub;

typedef struct {
    u8 pad0[0x4C];
    Unk801637C8Sub subs[1];
} Unk801637C8Obj;

extern u32 lbl_80364670;
extern s32 lbl_802A0C04[];

static inline BOOL fn_801637C8_subHasFlag(Unk801637C8Sub *sub) {
    u32 i;
    if (sub->count == 0) {
        return FALSE;
    }
    for (i = 0; i < sub->count; i++) {
        if (sub->entries[i].flags & 0x70) {
            return TRUE;
        }
    }
    return FALSE;
}

static inline BOOL fn_801637C8_hasFlag(Unk801637C8Obj *obj) {
    u32 i;
    if (M2C_FIELD(obj, u32 *, 0x128) == 0) {
        return FALSE;
    }
    for (i = 0; i < M2C_FIELD(obj, u32 *, 0x128); i++) {
        if (fn_801637C8_subHasFlag(&obj->subs[i])) {
            return TRUE;
        }
    }
    return FALSE;
}

void fn_801637BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1ACC) = 0;
}

void fn_801637C8(void *arg0, Unk801637C8Obj *arg1) {
    M2C_FIELD(arg0, Unk801637C8Obj **, 0x1AB8) = arg1;
    if (fn_801637C8_hasFlag(arg1)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), u32 *, 0x2C) |= lbl_80364670;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), u32 *, 0x2C) &= ~0x4000;
    }
}

void fn_80163888(void) {

}

void fn_8016388C(void *arg0, f32 farg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), f32 *, 0x279E8) = farg0;
}

void fn_8016389C(void *arg0, f32 farg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), f32 *, 0x279E4) = farg0;
}

void fn_801638AC(void) {

}

void fn_801638B0(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), s32 *, 0x279E0) = lbl_802A0C04[arg1];
}

void fn_801638D0(void) {

}

