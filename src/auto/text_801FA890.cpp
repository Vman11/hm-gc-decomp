// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801FA890 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_800F9638(void *);

void fn_801FA890(u8 *p) {
    fn_800F9638(p + 0xC0);
    ((S_801FA890 *)(p + 0xD8))->m();
    fn_800F9638(p + 0x84);
    ((S_801FA890 *)(p + 0x9C))->m();
    fn_800F9638(p + 0x48);
    ((S_801FA890 *)(p + 0x60))->m();
    fn_800F9638(p + 0xC);
    ((S_801FA890 *)(p + 0x24))->m();
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 0xFC) = 0;
}

} /* extern "C" */
