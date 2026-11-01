/* Functions from 0x801F2F54 to 0x801F2F78, found by decomp-toolkit. */
#include "common.h"

extern unsigned char lbl_802EE900[];
extern unsigned char lbl_802EE90C[];

static inline void fn_801F2F54_init(void **p) {
    p[0] = lbl_802EE90C;
}

void *fn_801F2F54(void *o) {
    char *p = (char*)o;
    *(void**)p = lbl_802EE900;
    *(void**)(p + 0x8014) = lbl_802EE90C;
    *(void**)(p + 0x8998) = lbl_802EE90C;
    return o;
}
