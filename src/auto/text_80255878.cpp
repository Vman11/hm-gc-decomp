// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80255878 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern s32 lbl_8035B680;
void fn_80108800(void *);

void fn_80255878(u8 *p) {
    ((S_80255878 *)(p + 0x88))->m();
    fn_80108800(p + 8);
    lbl_8035B680 = 0;
    *(s32 *)(p + 0xA8) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 0xAC) = 0;
    *(s32 *)(p + 0xB8) = 0;
    *(s32 *)(p + 0xBC) = 1;
}

} /* extern "C" */
