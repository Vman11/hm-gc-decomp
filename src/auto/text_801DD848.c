/* Functions from 0x801DD848 to 0x801DD8B4, found by decomp-toolkit. */
#include "common.h"

void fn_801DD848(void *arg0, void *arg1) {
    void *head;
    void *node;

    *(void **)((char *)arg1 + 0x11C) = 0;
    head = *(void **)((char *)arg0 + 0x138);
    if (head == 0) {
        *(void **)((char *)arg1 + 0x134) = 0;
        return;
    }
    if (head == arg1) {
        *(void **)((char *)arg0 + 0x138) = *(void **)((char *)head + 0x134);
        *(void **)((char *)arg1 + 0x134) = 0;
        return;
    }
    node = head;
    while (*(void **)((char *)node + 0x134) != 0) {
        if (*(void **)((char *)node + 0x134) == arg1) {
            *(void **)((char *)node + 0x134) = *(void **)((char *)arg1 + 0x134);
            break;
        }
        node = *(void **)((char *)node + 0x134);
    }
    *(void **)((char *)arg1 + 0x134) = 0;
}
