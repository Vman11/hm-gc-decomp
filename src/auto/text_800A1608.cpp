// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Vec800A1608 { f32 x, y, z; };
struct Node800A1608 { u8 pad[40]; f32 x, y, z; };
struct L2_800A1608 { u8 pad[120]; Node800A1608 *node; };
struct L1_800A1608 { u8 pad[156]; L2_800A1608 *l2; };
struct St800A1608;
struct Cb800A1608 {
    u32 pad;
    virtual void f0();
    virtual void f1(St800A1608 *);
};
struct St800A1608 { u32 flags; u8 pad4[8]; Cb800A1608 *cb; u8 pad10[32]; u32 f30; };
struct Ref800A1608 { u8 pad[12]; Vec800A1608 *scale; };
struct Obj800A1608 {
    u8 pad0[224];
    L1_800A1608 *l1;
    u8 padE4[416 - 228];
    Ref800A1608 *ref;
    u8 pad1A4[528 - 420];
    u32 f210;
};

extern const u32 lbl_80361BF0;
extern f32 lbl_80361BF4;
void fn_80107F3C(Node800A1608 *, Vec800A1608 *);
St800A1608 *fn_8022D694(L1_800A1608 *);

void fn_800A1608(Obj800A1608 *o) {
    Vec800A1608 v;
    Node800A1608 *n;
    Vec800A1608 sc;
    St800A1608 *st;
    o->f210 = 0;
    n = o->l1->l2->node;
    if (n != 0) {
        v.x = n->x;
        v.y = n->y;
        v.z = n->z;
    } else {
        v.x = lbl_80361BF4;
        v.y = lbl_80361BF4;
        v.z = lbl_80361BF4;
    }
    sc = *o->ref->scale;
    v.x = v.x / sc.x;
    v.y = v.y / sc.y;
    v.z = v.z / sc.z;
    n = o->l1->l2->node;
    if (n != 0) {
        fn_80107F3C(n, &v);
    }
    st = fn_8022D694(o->l1);
    if (st->f30 & 1) {
        st->flags |= lbl_80361BF0;
        if (st->cb != 0) {
            st->cb->f1(st);
        }
    }
}

} /* extern "C" */
