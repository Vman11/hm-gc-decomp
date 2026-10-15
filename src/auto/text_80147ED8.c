/* Functions from 0x80147ED8 to 0x80148330, found by decomp-toolkit. */
#include "common.h"

typedef struct UnkStruct80148118 {
    u16 unk0;
    u16 unk2;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
} UnkStruct80148118;

extern u16 lbl_803643A0;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} MaskInfo;

s32 fn_80147F38(MaskInfo* m) {
    u32 v = m->unk8;
    s32 n;
    if (v == 0) {
        return 32;
    }
    for (n = 0; !(v & 1); n++) {
        v >>= 1;
    }
    return n;
}

s32 fn_80147F68(MaskInfo* m) {
    u32 v = m->unk4;
    s32 n;
    if (v == 0) {
        return 32;
    }
    for (n = 0; !(v & 1); n++) {
        v >>= 1;
    }
    return n;
}

s32 fn_80147F98(MaskInfo* m) {
    u32 v = m->unk8;
    s32 n;
    if (v == 0) {
        return 0;
    }
    while (!(v & 1)) {
        v >>= 1;
    }
    for (n = 0; v & 1; n++) {
        v >>= 1;
    }
    return n;
}

s32 fn_80147FD8(MaskInfo* m) {
    u32 v = m->unk4;
    s32 n;
    if (v == 0) {
        return 0;
    }
    while (!(v & 1)) {
        v >>= 1;
    }
    for (n = 0; v & 1; n++) {
        v >>= 1;
    }
    return n;
}

void fn_80148118(UnkStruct80148118* arg0) {
    arg0->unk0 = 0;
    arg0->unk2 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}

void fn_80148138(UnkStruct80148118* arg0, u16 arg1, u32 arg2, u32 arg3, u32 arg4) {
    arg0->unk0 = 0x1000;
    arg0->unk2 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
    arg0->unkC = arg4;
}

void fn_80148154(UnkStruct80148118* arg0, s32 arg1) {
    arg0->unk0 = 0x80;
    arg0->unk2 = 8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    if (arg1 != 0) {
        arg0->unk0 |= lbl_803643A0;
    }
}

