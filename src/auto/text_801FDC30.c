/* Functions from 0x801FDC30 to 0x801FDD1C, found by decomp-toolkit. */
#include "common.h"

void fn_801FDC30(void *arg0, void *arg1) {
    void *prev = *(void **)((char *)arg0 + 0x108);
    void *node;
    if (prev != NULL) {
        if (prev == arg1) {
            *(void **)((char *)arg0 + 0x108) = *(void **)((char *)arg1 + 0x60);
        } else {
            node = *(void **)((char *)prev + 0x60);
            while (node != NULL) {
                if (node == arg1) {
                    *(void **)((char *)prev + 0x60) = *(void **)((char *)arg1 + 0x60);
                    break;
                }
                prev = node;
                node = *(void **)((char *)node + 0x60);
            }
        }
        *(void **)((char *)arg1 + 0x60) = NULL;
    }
}

void fn_801FDD0C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x9C) = (void *) M2C_FIELD(arg0, void **, 0x104);
    M2C_FIELD(arg0, void **, 0x104) = arg1;
}
