// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c; } T12_801E5A80;
extern T12_801E5A80 lbl_802EDAD8;
void fn_801EB5F4(void *);
void fn_80108B94(void *, void *, void *, void *);

void fn_801E5A80(u8 *p) {
    T12_801E5A80 t;
    fn_801EB5F4(p);
    *(u8 **)(p + 0x24) = p;
    t = lbl_802EDAD8;
    fn_80108B94(*(void **)(p + 0x18), p + 0x20, &t, *(void **)(p + 0x1C));
}

} /* extern "C" */
