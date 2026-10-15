/* Functions from 0x801FA800 to 0x801FA890, found by decomp-toolkit. */
#include "common.h"

void fn_801FA800(void *arg0, void *arg1) {
    void *prev = *(void **)((char *)arg0 + 0xFC);
    void *node;
    if (prev != NULL) {
        if (prev == arg1) {
            *(void **)((char *)arg0 + 0xFC) = *(void **)((char *)arg1 + 8);
        } else {
            node = *(void **)((char *)prev + 8);
            while (node != NULL) {
                if (node == arg1) {
                    *(void **)((char *)prev + 8) = *(void **)((char *)arg1 + 8);
                    break;
                }
                prev = node;
                node = *(void **)((char *)node + 8);
            }
        }
        *(void **)((char *)arg1 + 8) = NULL;
    }
}

void fn_801FA858(void *arg0, void *arg1) {
    void *head;
    void *node;
    if (!(*(u32 *)arg1 & 0x18)) {
        head = *(void **)((char *)arg0 + 0xFC);
        node = head;
        while (node != NULL) {
            if (node == arg1) {
                return;
            }
            node = *(void **)((char *)node + 8);
        }
        *(void **)((char *)arg1 + 8) = head;
        *(void **)((char *)arg0 + 0xFC) = arg1;
    }
}
