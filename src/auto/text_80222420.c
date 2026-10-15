/* Functions from 0x80222420 to 0x80222514, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x8];
    f32 unk8;
    u8 padC[0x4];
    f32* unk10;
    u8 pad14[0x24 - 0x14];
    f32 unk24;
    f32 unk28;
    u8 pad2C[0x3C - 0x2C];
} UnkEntry_80222420;

typedef struct {
    u8 pad0[0xB0];
    UnkEntry_80222420* unkB0;
} UnkB0Owner_80222420;

typedef struct {
    u8 pad0[0xA0];
    UnkB0Owner_80222420* unkA0;
} UnkA0Owner_80222420;

typedef struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
    UnkA0Owner_80222420* unkC;
} Unk_80222420;

extern f32 lbl_80365A30;
extern f32 lbl_80365A34;
