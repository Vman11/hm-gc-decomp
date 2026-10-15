/* Functions from 0x801E9660 to 0x801E96A0, found by decomp-toolkit. */
#include "common.h"

void fn_801E9660(void *arg0) {
    void *ptr48 = *(void **)((char *)arg0 + 0x48);
    void *ptr;
    if (ptr48 != 0) {
        ptr = ptr48;
    } else {
        ptr = *(void **)((char *)arg0 + 0x44);
    }
    if (ptr == 0) {
        return;
    }
    if (ptr48 != 0) {
    } else {
        ptr48 = *(void **)((char *)arg0 + 0x44);
    }
    *(unsigned int *)ptr48 &= 0xFFFFFBFF;
}
