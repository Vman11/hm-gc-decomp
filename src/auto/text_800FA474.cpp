// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T {
    u32 f0; u32 f4; u32 f8;
    virtual u8 get(u32 i);
};
void fn_800FA474(T *t, char *buf, u32 n) {
    u32 i;
    u32 avail = t->f8 - t->f4;
    u32 len = avail;
    if (n <= avail) len = n - 1;
    for (i = 0; i < len; i++) buf[i] = t->get(i);
    buf[i] = 0;
}

}
