/* Functions from 0x801DDE58 to 0x801DDE84, found by decomp-toolkit. */
#include "common.h"
extern volatile s32 lbl_8035B054;
extern volatile s32 lbl_8035B058;
extern u8* lbl_8035B05C;

void fn_801DDE58(u8* arg0) {
    *(u8**)(arg0 + 0xC) = lbl_8035B05C;
    lbl_8035B05C = arg0;
    lbl_8035B054++;
    lbl_8035B058 += *(s32*)(arg0 + 0x14);
}
