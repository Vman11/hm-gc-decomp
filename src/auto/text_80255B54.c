/* Functions from 0x80255B54 to 0x80255B64, found by decomp-toolkit. */
#include "common.h"

extern volatile s32 lbl_8035B690;
extern volatile s32 lbl_8035B694;

void fn_80255B54(s32 arg0) {
    s32 zero;
    lbl_8035B690 = arg0;
    zero = 0;
    lbl_8035B694 = zero;
}
