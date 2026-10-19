/* Functions from 0x8009F130 to 0x8009F160, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0[0x7C];
    s32 unk7C;
    u8 unk80[0xC4];
    u32 unk144;
    u32 unk148;
} Unk8009F130;


void fn_8009F130(void) {

}

void fn_8009F134(Unk8009F130 *arg0, u32 arg1) {
    arg0->unk148 = arg0->unk144;
    arg0->unk144 = (arg0->unk144 & 0xFFFF) | (arg1 << 16);
}

void fn_8009F150(Unk8009F130 *arg0, s32 arg1) {
    arg0->unk7C = arg1;
}

s32 fn_8009F158(void) {
    return 0xE7;
}

} /* extern "C" */
