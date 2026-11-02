// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define VS(x) (*(volatile f32 *)&(x))

struct V3 { f32 x, y, z; V3() {} };
struct M3 { V3 r0, r1, r2; M3() {} };
#define V(n) virtual void n();
class E40 { public: u8 p[20]; void *f20; u8 p24[12]; V(e0) V(e1) V(e2) V(e3) V(e4) V(e5) virtual void upd(); };
struct Lst { u8 p[36]; E40 *f36; };
struct G { u8 p[4]; u16 f4; u8 p6[162]; Lst *f168; };
struct A { u8 p[4]; u32 f4; };
struct FT { u8 p[304]; void (*f304)(void *, V3 *); void (*f308)(void *, V3 *, V3 *, V3 *); u8 p312[80];
    void (*f392)(void *, V3 *, V3 *); u8 p396[8]; void (*f404)(void *, V3 *, V3 *); };
extern "C" {
extern FT lbl_803286D0;
extern E40 *lbl_8035AD90;
extern E40 *lbl_8035AD8C;
extern G *lbl_8035AD84;
extern G *lbl_8035AD80;
extern f32 lbl_80364840;
extern f32 lbl_80364844;
extern V3 lbl_8033024C;
extern M3 lbl_80330228;
extern char lbl_802A10D8[];
extern char lbl_802A1098[];
void fn_80104870(E40 *);
void fn_80060568(char *, int, int, int);
}
inline E40 *Find(G *&gr, A *a) {
    if (gr->f4 != 3) fn_80060568(lbl_802A10D8, 0, 0, 0);
    G *g = gr;
    if (!g->f168) fn_80060568(lbl_802A1098, 0, 0, 0);
    return &g->f168->f36[a->f4 - 1];
}
extern "C" void fn_8017BCCC(A *dst, A *src) {
    V3 p;
    M3 m;
    if (src->f4 == 0) {
        if (!lbl_8035AD90) {
{ f32 o, z; z = *(volatile f32 *)&lbl_80364840; VS(p.x) = z; VS(p.y) = z; VS(p.z) = z;
            o = *(volatile f32 *)&lbl_80364844;
            VS(m.r0.x) = o; VS(m.r0.y) = z; VS(m.r0.z) = z;
            VS(m.r1.x) = z; VS(m.r1.y) = o; VS(m.r1.z) = z;
            VS(m.r2.x) = z; VS(m.r2.y) = z; VS(m.r2.z) = o; }
        } else {
            fn_80104870(lbl_8035AD90);
            lbl_803286D0.f304(lbl_8035AD90->f20, &p);
            lbl_803286D0.f308(lbl_8035AD90->f20, &m.r0, &m.r1, &m.r2);
        }
    } else {
        E40 *e = Find(lbl_8035AD84, src);
        fn_80104870(e);
        lbl_803286D0.f304(e->f20, &p);
        lbl_803286D0.f308(e->f20, &m.r0, &m.r1, &m.r2);
    }
    if (dst->f4 == 0) {
        if (!lbl_8035AD8C) {
            lbl_8033024C.x = p.x; lbl_8033024C.y = p.y; lbl_8033024C.z = p.z;
            lbl_80330228.r0.x = m.r0.x; lbl_80330228.r0.y = m.r0.y; lbl_80330228.r0.z = m.r0.z;
            lbl_80330228.r1.x = m.r1.x; lbl_80330228.r1.y = m.r1.y; lbl_80330228.r1.z = m.r1.z;
            lbl_80330228.r2.x = m.r2.x; lbl_80330228.r2.y = m.r2.y; lbl_80330228.r2.z = m.r2.z;
        } else {
            lbl_8035AD8C->upd();
            lbl_803286D0.f392(lbl_8035AD8C->f20, &p, &lbl_8033024C);
            lbl_803286D0.f404(lbl_8035AD8C->f20, &m.r0, &lbl_80330228.r0);
            lbl_803286D0.f404(lbl_8035AD8C->f20, &m.r1, &lbl_80330228.r1);
            lbl_803286D0.f404(lbl_8035AD8C->f20, &m.r2, &lbl_80330228.r2);
        }
    } else {
        E40 *e = Find(lbl_8035AD80, dst);
        e->upd();
        lbl_803286D0.f392(e->f20, &p, &lbl_8033024C);
        lbl_803286D0.f404(e->f20, &m.r0, &lbl_80330228.r0);
        lbl_803286D0.f404(e->f20, &m.r1, &lbl_80330228.r1);
        lbl_803286D0.f404(e->f20, &m.r2, &lbl_80330228.r2);
    }
}

} /* extern "C" */
