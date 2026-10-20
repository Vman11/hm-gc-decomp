// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80154530 { u8 pad[0x28]; virtual void m(); };
void fn_80154530(u8 *p) {
    ((S_80154530 *)(p + 4))->m();
}

} /* extern "C" */
