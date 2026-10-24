// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct O { u8 pad[48]; O *f48; u8 pad2[116]; void *f168; };
struct S { u8 pad[200]; int f200; };
struct T { u8 pad[8]; S *f8; int f12; u8 pad16[20]; u32 f36; s8 f40; u8 pad41[7]; O *f48; O *f52; V f56; void *f68; V f72; };
extern f32 lbl_803652A0, lbl_803652A4, lbl_803652A8;
void fn_80107244(void *, V *);
void fn_80107370(void *, V *);
void fn_80107694(void *, V *, V *, V *, int);
O *fn_8019556C(O *);
void *fn_8010511C(void *, s8 *);
static inline O *gO(T *t) { return t->f52 ? t->f52 : t->f48; }
static inline bool inR(V *v) {
    return v->x >= lbl_803652A0 && v->x <= lbl_803652A4 && v->y >= lbl_803652A0 && v->y <= lbl_803652A4 && v->z >= lbl_803652A0 && v->z <= lbl_803652A4;
}
void fn_801E11D8(T *t) {
    V cur;
    V pos;
    V d;
    if (t->f12 != 23 && t->f8->f200 != 0 && (t->f36 & 2)) {
    fn_80107244(t->f68, &cur);
    if (inR(&t->f72)) fn_80107370(t->f68, &t->f72);
    if (gO(t)) {
        if (t->f40 == 0) {
            O *p = gO(t)->f48;
            if (p) fn_80107244(p, &pos);
            else pos.z = pos.y = pos.x = lbl_803652A8;
            pos.x = pos.x + t->f56.x;
            pos.y = pos.y + t->f56.y;
            pos.z = pos.z + t->f56.z;
        } else {
            fn_80107244(fn_8010511C(fn_8019556C(gO(t))->f168, &t->f40), &pos);
        }
    } else {
        pos = t->f56;
    }
    d.x = pos.x - cur.x;
    d.y = pos.y - cur.y;
    d.z = pos.z - cur.z;
    fn_80107694(t->f68, &d, &t->f72, &cur, 0);
    }
}

} /* extern "C" */
