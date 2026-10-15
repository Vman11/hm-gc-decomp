/* Functions from 0x8009F130 to 0x8009F160, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 unk0[0x7C];
    s32 unk7C;
    u8 unk80[0xC4];
    u32 unk144;
    u32 unk148;
} Unk8009F130;


void fn_8009F130(void) {

}

void fn_8009F150(Unk8009F130 *arg0, s32 arg1) {
    arg0->unk7C = arg1;
}

