// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct E60 { u8 pad[12]; void *f12; u8 pad2[44]; };
struct Sub { u8 pad[172]; u32 f172; E60 *f176; };
struct Grp { u8 pad[152]; u32 f152; void **f156; };
struct Mdl { u8 pad[136]; Grp *f136; u8 pad2[32]; u32 f172; E60 *f176; };
struct Obj {
    u8 pad[12];
    s32 f12;
    s32 f16;
    u8 pad2[140];
    Mdl *f160;
    u8 pad3[212];
    u8 f376[8];
    Obj *f384;
};
extern "C" {
void fn_8022DB6C(Obj *p, s32 a, s32 b, s32 c, s32 d);
Sub *fn_8019556C(void *p);
static inline void all(Obj *p) { u32 j; u32 i; if (p->f160 != 0) { p->f384 = p; if (p->f160->f136 != 0) { for (i = 0; i < p->f160->f136->f152; i++) { for (j = 0; j < fn_8019556C(p->f160->f136->f156[i])->f172; j++) { fn_8019556C(p->f160->f136->f156[i])->f176[j].f12 = p->f376; } } } else { for (j = 0; j < p->f160->f172; j++) { p->f160->f176[j].f12 = p->f376; } } } }
void fn_8023954C(Obj *p, s32 a, s32 b, s32 c, s32 d) {
    p->f12 = a;
    p->f16 = d;
    fn_8022DB6C(p, a, b, c, d);
    all(p);
}

} /* extern "C" */
