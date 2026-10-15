/* Functions from 0x801F2F54 to 0x801F2F78, found by decomp-toolkit. */
#include "common.h"

extern unsigned char lbl_802EE900[];
extern unsigned char lbl_802EE90C[];

void fn_801F2F54(void *arg0) {
    *(volatile void **)arg0 = lbl_802EE900;
    *(volatile void **)((char *)arg0 + 0x8014) = lbl_802EE90C;
    *(volatile void **)((char *)arg0 + 0x8998) = lbl_802EE90C;
}
