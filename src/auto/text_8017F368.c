/* Functions from 0x8017F368 to 0x8017F378, found by decomp-toolkit. */
#include "common.h"

void fn_8017F368(char* arg0, char* arg1) {
    *(char**)(arg1 + 0xE0) = *(char**)(arg0 + 0x258);
    *(char**)(arg0 + 0x258) = arg1;
}
