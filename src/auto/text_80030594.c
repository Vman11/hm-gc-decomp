// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 r, g, b, a; } C;
typedef struct { u8 p[0x14]; f32 f14; } G1;
typedef struct { u8 p[0x33b0]; void *f; } G3;
typedef struct { u8 p[0x24]; G3 *f24; } G2;
typedef struct { u8 p[0x14]; u8 m[4]; } R;
typedef struct { u8 p[0x14]; void *f14; } O;
extern G1 *lbl_8035B488;
extern G2 *lbl_8035B65C;
extern char lbl_8035BC60[6];
void fn_8023EA4C(G1 *);
R *fn_801AAA08(void *, s32, char *, s32);
void fn_80121DC8(void *, C *);
void fn_80180600(void *, f32);
void fn_80030594(O *o) {
    R *r;
    C c;
    fn_8023EA4C(lbl_8035B488);
    r = fn_801AAA08(lbl_8035B65C->f24->f, 9, lbl_8035BC60, 0);
    c.r = 0; c.g = 0; c.b = 0; c.a = 0;
    fn_80121DC8(r->m, &c);
    fn_80180600(o->f14, lbl_8035B488->f14);
}
