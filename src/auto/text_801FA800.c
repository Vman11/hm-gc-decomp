/* Functions from 0x801FA800 to 0x801FA890, found by decomp-toolkit. */
#include "common.h"

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
