#include "common.h"

extern "C" {

struct S222 { u8 pad[0xb]; u8 fb; u8 pad2[0x20]; u32 f2c; };
struct O222 { u8 pad[0x2f0]; S222 *f2f0; f32 f2f4; u32 f2f8; f32 f2fc; };
struct C222 { u8 *f0; };
struct B222 { u8 pad[8]; C222 *f8; };
struct A222 { u8 pad[8]; B222 *f8; };
extern A222 *lbl_8035B460;
extern u32 lbl_80365A74;
extern f32 lbl_80365A78;
extern f32 lbl_80365A7C;
extern char lbl_80357740[];
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_800F6FBC(char *, char *);
void fn_800F7044(char *);
static inline void *find(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 0x78, n); return fn_800F9788(m + 0x90, g, n); }

void fn_80222DAC(O222 *o, char *name, f32 t) {
    S222 *p = o->f2f0;
    if (p) {
        p->fb = 0xff;
        p->f2c |= lbl_80365A74;
        o->f2f0 = 0;
    }
    o->f2f0 = (S222 *)fn_800F9398(lbl_8035B460->f8->f8->f0 + 0x78, name);
    if (!o->f2f0) {
        char k[8];
        fn_800F6FBC(lbl_80357740, k);
        fn_800F7044(k);
        o->f2f0 = (S222 *)find(lbl_8035B460->f8->f8->f0, k, name);
    }
    o->f2f4 = lbl_80365A78;
    o->f2f8 = 0;
    o->f2fc = lbl_80365A78 / (lbl_80365A7C * t);
}

} /* extern "C" */
