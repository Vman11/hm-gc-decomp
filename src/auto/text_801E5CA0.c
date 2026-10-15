/* Functions from 0x801E5CA0 to 0x801E5CC4, found by decomp-toolkit. */
#include "common.h"
extern void lbl_802E2558(void);
extern void lbl_802EDB10(void);

void fn_801E5CA0(volatile unsigned int *arg0) {
    arg0[0] = (unsigned int)lbl_802E2558;
    arg0[0] = (unsigned int)lbl_802EDB10;
    arg0[1] = 0;
}
