/* Functions from 0x80134094 to 0x801340B0, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u16 unk0;
    u16 unk2;
    u8* unk4;
} unkStruct_80134094;

extern u8 lbl_802E4FF8[];

void __ct__9C80134094Fv(unkStruct_80134094* arg0) {
    arg0->unk4 = lbl_802E4FF8;
    arg0->unk0 = 0;
    arg0->unk2 = 0;
}
