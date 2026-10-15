/* Functions from 0x801E47B8 to 0x801E47DC, found by decomp-toolkit. */
#include "common.h"

extern void lbl_802AFC68(void);
extern void lbl_802ED9B8(void);

void fn_801E47B8(volatile unsigned int *arg0) {
    arg0[0] = (unsigned int)&lbl_802AFC68;
    arg0[0] = (unsigned int)&lbl_802ED9B8;
    arg0[1] = 0;
}
