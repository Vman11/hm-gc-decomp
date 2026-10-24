// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
void fn_8019B178(void *s, void *n);
struct E108 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[28]; };
struct E160 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[20]; };
struct E164 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[24]; };
struct E168 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[28]; };
struct E172 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[32]; };
struct E204 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[64]; };
struct E228 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[88]; };
struct E272 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[132]; };
struct E308 { u32 flags; u8 pad[72]; u32 f76; u8 pad2[56]; u32 f136; u8 pad3[168]; };
struct Obj { u8 p0[104]; u32 n104; u8 p108[8]; u32 n116; u32 n120; u8 p124[16]; u32 n140; u32 n144; u32 n148; u32 n152; u32 n156; u32 n160; u32 n164; u8 p168[4]; E108 *a172; u8 p176[8]; E168 *a184; E204 *a188; u8 p192[16]; E228 *a208; E272 *a212; E308 *a216; E160 *a220; E164 *a224; E168 *a228; E172 *a232; };
void fn_80192B70(Obj *o, void *s) {
    u32 i;
    for (i = 0; i < o->n104; i++) {
        if ((o->a172[i].flags & 0x200) && o->a172[i].f76 == 0) fn_8019B178(s, &o->a172[i]);
    }
    for (i = 0; i < o->n116; i++) {
        if ((o->a184[i].flags & 0x200) && o->a184[i].f76 == 0 && o->a184[i].f136 == 0) fn_8019B178(s, &o->a184[i]);
    }
    for (i = 0; i < o->n120; i++) {
        if ((o->a188[i].flags & 0x200) && o->a188[i].f76 == 0 && o->a188[i].f136 == 0) fn_8019B178(s, &o->a188[i]);
    }
    for (i = 0; i < o->n140; i++) {
        if ((o->a208[i].flags & 0x200) && o->a208[i].f76 == 0 && o->a208[i].f136 == 0) fn_8019B178(s, &o->a208[i]);
    }
    for (i = 0; i < o->n144; i++) {
        if ((o->a212[i].flags & 0x200) && o->a212[i].f76 == 0 && o->a212[i].f136 == 0) fn_8019B178(s, &o->a212[i]);
    }
    for (i = 0; i < o->n148; i++) {
        if ((o->a216[i].flags & 0x200) && o->a216[i].f76 == 0 && o->a216[i].f136 == 0) fn_8019B178(s, &o->a216[i]);
    }
    for (i = 0; i < o->n152; i++) {
        if ((o->a220[i].flags & 0x200) && o->a220[i].f76 == 0 && o->a220[i].f136 == 0) fn_8019B178(s, &o->a220[i]);
    }
    for (i = 0; i < o->n160; i++) {
        if ((o->a228[i].flags & 0x200) && o->a228[i].f76 == 0 && o->a228[i].f136 == 0) fn_8019B178(s, &o->a228[i]);
    }
    for (i = 0; i < o->n156; i++) {
        if ((o->a224[i].flags & 0x200) && o->a224[i].f76 == 0 && o->a224[i].f136 == 0) fn_8019B178(s, &o->a224[i]);
    }
    for (i = 0; i < o->n164; i++) {
        if ((o->a232[i].flags & 0x200) && o->a232[i].f76 == 0) fn_8019B178(s, &o->a232[i]);
    }
}
}

} /* extern "C" */
