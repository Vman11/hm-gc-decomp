// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801003A8(void *, void *, void *);

void fn_80105F88(u8 *p) {
    u8 *c;
    fn_801003A8(p + 32, p + 48, *(u8 **)(p + 8) + 32);
    for (c = *(u8 **)(p + 16); c != NULL; c = *(u8 **)(c + 12)) {
        fn_80105F88(c);
    }
}
