// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
void fn_8019B4B0(void *s, void *n);
struct E0 { u32 flags; u8 p4[64]; u32 f68; u8 pe[36]; };
struct E1 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[28]; };
struct E2 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[64]; };
struct E3 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[88]; };
struct E4 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[132]; };
struct E5 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[168]; };
struct E6 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[20]; };
struct E7 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[28]; };
struct E8 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[24]; };
struct E9 { u32 flags; u8 p4[64]; u32 f68; u8 p72[64]; u32 f136; u8 pe[32]; };
struct Obj { u8 p0[104]; u32 n104; u8 p108[8]; u32 n116; u32 n120; u8 p124[16]; u32 n140; u32 n144; u32 n148; u32 n152; u32 n156; u32 n160; u32 n164; u8 p168[4]; E0 *a172; u8 p176[8]; E1 *a184; E2 *a188; u8 p192[16]; E3 *a208; E4 *a212; E5 *a216; E6 *a220; E8 *a224; E7 *a228; E9 *a232; };
void fn_80193180(Obj *o, void *s) {
    u32 i;
    for (i = 0; i < o->n104; i++) {
        if ((o->a172[i].flags & 0x2) && o->a172[i].f68 == 0) fn_8019B4B0(s, &o->a172[i]);
    }
    for (i = 0; i < o->n116; i++) {
        if ((o->a184[i].flags & 0x2) && o->a184[i].f68 == 0 && o->a184[i].f136 == 0) fn_8019B4B0(s, &o->a184[i]);
    }
    for (i = 0; i < o->n120; i++) {
        if ((o->a188[i].flags & 0x2) && o->a188[i].f68 == 0 && o->a188[i].f136 == 0) fn_8019B4B0(s, &o->a188[i]);
    }
    for (i = 0; i < o->n140; i++) {
        if ((o->a208[i].flags & 0x2) && o->a208[i].f68 == 0 && o->a208[i].f136 == 0) fn_8019B4B0(s, &o->a208[i]);
    }
    for (i = 0; i < o->n144; i++) {
        if ((o->a212[i].flags & 0x2) && o->a212[i].f68 == 0 && o->a212[i].f136 == 0) fn_8019B4B0(s, &o->a212[i]);
    }
    for (i = 0; i < o->n148; i++) {
        if ((o->a216[i].flags & 0x2) && o->a216[i].f68 == 0 && o->a216[i].f136 == 0) fn_8019B4B0(s, &o->a216[i]);
    }
    for (i = 0; i < o->n152; i++) {
        if ((o->a220[i].flags & 0x2) && o->a220[i].f68 == 0 && o->a220[i].f136 == 0) fn_8019B4B0(s, &o->a220[i]);
    }
    for (i = 0; i < o->n160; i++) {
        if ((o->a228[i].flags & 0x2) && o->a228[i].f68 == 0 && o->a228[i].f136 == 0) fn_8019B4B0(s, &o->a228[i]);
    }
    for (i = 0; i < o->n156; i++) {
        if ((o->a224[i].flags & 0x2) && o->a224[i].f68 == 0 && o->a224[i].f136 == 0) fn_8019B4B0(s, &o->a224[i]);
    }
    for (i = 0; i < o->n164; i++) {
        if ((o->a232[i].flags & 0x2) && o->a232[i].f68 == 0 && o->a232[i].f136 == 0) fn_8019B4B0(s, &o->a232[i]);
    }
}
}

} /* extern "C" */
