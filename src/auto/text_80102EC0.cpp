// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C8010330C { f32 v; u8 pad[16]; C8010330C(); };
struct C80103308 { f32 v; u8 pad[12]; C80103308(); };
struct C80103304 { f32 v; u8 pad[12]; C80103304(); };
extern "C" {
extern u32 lbl_8035AA30;
extern f32 lbl_80363864;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
struct Src { u8 pad[28]; u32 n0; u32 n1; };
struct Obj {
    C8010330C *a; C80103308 *b; C80103304 *c; u32 na; u32 nc; u32 x20;
    bool has() { return na != 0 || nc != 0; }
    void clear() {
        if (has()) {
            if (a) delete[] a;
            if (b) delete[] b;
            if (c) delete[] c;
            a = 0; b = 0; c = 0; na = 0; nc = 0; x20 = 0;
        }
    }
};
static inline void initA(C8010330C *p, C8010330C *e) { for (; p < e; p++) p->v = lbl_80363864; }
static inline void initB(C80103308 *p, C80103308 *e) { for (; p < e; p++) p->v = lbl_80363864; }
static inline void initC(C80103304 *p, C80103304 *e) { for (; p < e; p++) p->v = lbl_80363864; }
void fn_80102EC0(Obj *o, Src *s) {
    o->clear();
    o->na = s->n0;
    o->nc = s->n1;
    if (o->na) {
        if (!lbl_8035AA30) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AA30);
        o->a = new C8010330C[o->na];
        fn_800F7E98();
        if (!o->a) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035AA30) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AA30);
        o->b = new C80103308[o->na];
        fn_800F7E98();
        if (!o->b) fn_800604C4(-4, 0, 0, 0);
    }
    if (o->nc) {
        if (!lbl_8035AA30) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AA30);
        o->c = new C80103304[o->nc];
        fn_800F7E98();
        if (!o->c) fn_800604C4(-4, 0, 0, 0);
    }
    initA(o->a, o->a + o->na);
    initB(o->b, o->b + o->na);
    initC(o->c, o->c + o->nc);
}

} /* extern "C" */
