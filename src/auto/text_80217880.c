/* Functions from 0x80217880 to 0x802178B8, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} Struct80217880;

void fn_80217880(Struct80217880 *dst, const Struct80217880 *src) {
    dst->unk0 = src->unk0 & 0xFE;
    dst->unk1 = src->unk1;
    dst->unk2 = src->unk2;
    dst->unk4 = src->unk4;
    dst->unk8 = src->unk8;
    dst->unkC = src->unkC;
}
