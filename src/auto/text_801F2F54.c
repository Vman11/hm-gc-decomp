/* Functions from 0x801F2F54 to 0x801F2F78, found by decomp-toolkit. */
#include "common.h"

extern unsigned char lbl_802EE900[];
extern unsigned char lbl_802EE90C[];

static inline void fn_801F2F54_init(void **p) {
    p[0] = lbl_802EE90C;
}

void fn_801F2F54(void *arg0) {
    *(void **)arg0 = lbl_802EE900;
    *(void **)((char *)arg0 + 0x8014) = lbl_802EE90C;
    *(void **)((char *)arg0 + 0x8998) = lbl_802EE90C;
}
