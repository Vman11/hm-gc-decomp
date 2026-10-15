/* Functions from 0x8023BC68 to 0x8023BC90, found by decomp-toolkit. */
#include "common.h"
extern void* lbl_8035B3F8;
extern void* lbl_8035B3FC;

void fn_8023BC68(void* arg0) {
    if (lbl_8035B3F8 == NULL) {
        lbl_8035B3F8 = arg0;
    }
    if (lbl_8035B3FC != NULL) {
        *(void**)((u8*)lbl_8035B3FC + 0x14) = arg0;
    }
    lbl_8035B3FC = arg0;
}
