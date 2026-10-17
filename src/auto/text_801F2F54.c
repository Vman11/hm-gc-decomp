/* Functions from 0x801F2F54 to 0x801F2F78, found by decomp-toolkit. */
#include "common.h"

extern unsigned char lbl_802EE900[];
extern unsigned char lbl_802EE90C[];

void fn_801F2F54(void **arg0) {
    void **p;
    arg0[0] = lbl_802EE900;
    p = (void **)((char *)arg0 + 0x8014);
    p[0] = lbl_802EE90C;
    p[0x261] = lbl_802EE90C;
}
