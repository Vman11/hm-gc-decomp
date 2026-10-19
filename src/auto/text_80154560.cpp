// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80154560 { u8 pad[0x28];  virtual void m(); };
void fn_80154354(void *);

void fn_80154560(u8 *p) {
    if (*(u32 *)(p + 0x30) != 0) {
        ((S_80154560 *)(p + 4))->m();
    }
    fn_80154354(p + 4);
}

} /* extern "C" */
