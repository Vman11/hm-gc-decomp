// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C8014A9A8 { public: u32 pad0; u32 count; u8 d[0x8C]; C8014A9A8(); ~C8014A9A8(); };
struct Sub { u8 pad[8]; u32 flags; u16 padC; u16 id; u8 pad10[0xC]; };
class C8014B0D4 { public: u32 pad0; Sub sub; C8014B0D4(); ~C8014B0D4(); };
struct P { u32 na; C8014A9A8 *a; u32 nb; C8014B0D4 *b; u32 ids[8]; u32 cnt; virtual void p0(); virtual void clr(); };
extern "C" { u32 fn_800FADA8(R *); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_8014A6C8(C8014A9A8 *, void *, R *, void *); void fn_8014ADB4(C8014B0D4 *, void *, R *, u32, void *); extern void *lbl_8035AC40; }

static inline u32 cnt(C8014A9A8 *e) { return e->count; }
static inline void rebuild(P *p) {
    u32 j;
    Sub *s;
    p->cnt = 0;
    for (j = 0; j < p->nb; j++) {
        s = &p->b[j].sub;
        if (s->flags & 0x1C00) {
            p->ids[p->cnt++] = s->id;
        }
    }
}
extern "C" void fn_801367EC(P *p, void *x, u32 unused, R *r, void *y) {
    u32 i;
    u32 j;
    u32 k;
    Sub *s;
    u8 f = 0;
    if (p->a != 0 || p->b != 0) {
        f = 1;
    }
    if (f) {
        p->clr();
    }
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch ((s32)k) {
        case 59:
            if (p->a != 0) {
                r->err(39);
            }
            p->na = fn_800FADA8(r);
            if (!lbl_8035AC40) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC40);
            p->a = new C8014A9A8[p->na];
            fn_800F7E98();
            if (!p->a) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->na; i++) {
                fn_8014A6C8(&p->a[i], x, r, y);
                { u32 n; for (n = 0; n < cnt(&p->a[i]); n++) {} }
            }
            fn_800FAEA0(r);
            break;
        case 97:
            if (p->b != 0) {
                r->err(39);
            }
            p->nb = fn_800FADA8(r);
            if (!lbl_8035AC40) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC40);
            p->b = new C8014B0D4[p->nb];
            fn_800F7E98();
            if (!p->b) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->nb; i++) {
                fn_8014ADB4(&p->b[i], x, r, i, y);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(1);
            break;
        }
    }
    rebuild(p);
}

} /* extern "C" */
