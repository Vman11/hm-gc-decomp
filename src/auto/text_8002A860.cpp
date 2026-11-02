// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P44;
struct A44 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39(); virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); virtual void a44(); virtual void a45(); virtual void a46(); virtual void a47(); virtual void a48(); virtual void a49(); virtual void a50(P44 *p, s32 m); };
struct N44 { A44 *o; s32 f4; N44 *next; };
struct P44 { u8 pad[0x6c]; u32 f6c; u8 p70[0x88 - 0x70]; N44 *list; u8 p8c[0x144 - 0x8c]; u32 f144; u32 f148; };
struct G44 { u8 pad[0x33b0]; void *f33b0; };
extern G44 *lbl_8035A1DC;
extern char lbl_8029440C[];
extern char lbl_8035B8A0[4];
P44 *fn_801AA960(void *a, char *s, char *t);
static inline void Set(P44 *p, s32 m) {
    N44 *n;
    for (n = p->list; n != 0; n = n->next) n->o->a50(p, m);
    p->f148 = p->f144;
    p->f144 = (p->f144 & 0xffff0000) | m;
}
void fn_8002A860(void *a, s32 on) {
    P44 *p = fn_801AA960(lbl_8035A1DC->f33b0, lbl_8029440C, lbl_8035B8A0);
    if (p != 0) {
        if (on != 0) Set(p, 2);
        else Set(p, 1);
        if (on != 0) p->f6c |= 2;
        else p->f6c &= ~2;
    }
}

} /* extern "C" */
