// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80155EF8[];
extern u8 lbl_802E6940[];
void fn_80137F54(void *);
void *memset(void *, int, unsigned long);
struct A80155E80 { u8 pad[0x14]; void *vt; A80155E80() { fn_80137F54(this); } ~A80155E80(); };
struct C80155EF8 : A80155E80 { C80155EF8() { vt = __vt__9C80155EF8; } ~C80155EF8(); };
struct C80155E80 : C80155EF8 { u8 m[0x20]; s32 z[3]; C80155E80(); };
C80155E80::C80155E80() {
    vt = lbl_802E6940;
    memset(m, 0, 0x20);
    z[0] = 0; z[1] = 0; z[2] = 0;
}

} /* extern "C" */
