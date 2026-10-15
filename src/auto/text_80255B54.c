/* Functions from 0x80255B54 to 0x80255B64, found by decomp-toolkit. */
#include "common.h"

extern struct {
    s32 unk0;
    s32 unk4;
} lbl_8035B690;

void fn_80255B54(s32 arg0) {
    lbl_8035B690.unk0 = arg0;
    lbl_8035B690.unk4 = 0;
}
