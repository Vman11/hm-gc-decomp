/* Functions from 0x8010D328 to 0x8010D344, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E28E8[];

void fn_8010D328(u32* arg0) {
    arg0[4] = (u32)lbl_802E28E8;
    arg0[1] = 0;
    arg0[3] = 0;
}
