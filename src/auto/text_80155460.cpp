// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80128EF4[];
extern u8 lbl_802E6900[];
void *__ct__9C801611A4Fv(void *p);
void fn_80134A04(void *p);
struct A80155460 { u8 pad[0x20]; void *vt; A80155460() { fn_80134A04(this); } ~A80155460(); };
struct C80128EF4 : A80155460 { C80128EF4() { vt = __vt__9C80128EF4; } ~C80128EF4(); };
struct C80155460 : C80128EF4 { u8 m[0x1c]; s32 z[4]; C80155460(); };
C80155460::C80155460() {
    vt = lbl_802E6900;
    __ct__9C801611A4Fv(m);
    z[0] = 0; z[1] = 0; z[2] = 0; z[3] = 0;
}

} /* extern "C" */
