// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80108800 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_800F9638(void *);

void fn_80108800(u8 *p) {
    fn_800F9638(p + 4);
    fn_800F9638(p + 0x40);
    ((S_80108800 *)(p + 0x1C))->m();
    ((S_80108800 *)(p + 0x58))->m();
}

} /* extern "C" */
