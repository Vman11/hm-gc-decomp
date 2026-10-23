// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Node80199E30 { s32 a; s32 b; Node80199E30 *next; };
struct V80199E30 { u8 pad[88]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m(s32, s32, s32); };
struct O80199E30 { volatile u32 flags; u8 pad[104]; V80199E30 *obj; };
extern Node80199E30 * volatile lbl_8035AE80;
extern volatile u32 lbl_80364C90;
void fn_80192210(O80199E30 *);
void __dl__FPv(void *);

void fn_80199E30(O80199E30 *p) {
    Node80199E30 *n;
    Node80199E30 *next;
    fn_80192210(p);
    for (n = lbl_8035AE80; n != 0; n = next) {
        next = n->next;
        if (p->obj != 0) {
            p->obj->m(n->a, n->b, 0);
        }
        __dl__FPv(n);
    }
    lbl_8035AE80 = 0;
    p->flags = p->flags | lbl_80364C90;
}

} /* extern "C" */
