// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct FT { u8 pad[408]; void (*f408)(void *, V *, V *); };
extern FT lbl_803286D0;
extern volatile f32 lbl_80364718, lbl_8036471C, lbl_80364720;
extern f32 lbl_80364724;
struct H72 { u8 pad[10884]; void *f10884; u8 pad10888[24]; void **f10912; };
struct T { u8 pad[4]; u32 f4; u8 pad8[24]; f32 f32_; f32 f36; f32 f40; V v44; u8 pad56[16]; H72 *f72; u8 pad76[12]; V v88; V v100; };
void fn_80101820(V *);
static inline f32 dot(V *a, V *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
static inline void proj(V *v, V *n, f32 d) { *(volatile f32 *)&v->x -= d * n->x; v->y -= d * n->y; v->z -= d * n->z; }
static inline void scale(V *v, f32 k) { v->x = v->x * k; v->y = v->y * k; v->z = v->z * k; }
void fn_8016FDE4(T *t, u32 k, u8 *idx) {
    V b;
    V a;
    *(volatile f32 *)&a.x = lbl_8036471C;
    f32 z = lbl_80364718;
    *(volatile f32 *)&a.y = z;
    *(volatile f32 *)&a.z = z;
    *(volatile f32 *)&b.x = z;
    *(volatile f32 *)&b.y = lbl_80364720;
    *(volatile f32 *)&b.z = z;
    void *m;
    if (k) m = t->f72->f10912[*idx];
    else m = t->f72->f10884;
    lbl_803286D0.f408(m, &a, &t->v100);
    if (t->f4 & 0x20) {
        t->v88.x = t->v44.x;
        t->v88.y = t->v44.y;
        t->v88.z = t->v44.z;
        proj(&t->v100, &t->v88, dot(&t->v88, &t->v100));
    } else {
        lbl_803286D0.f408(m, &b, &t->v88);
    }
    fn_80101820(&t->v88);
    fn_80101820(&t->v100);
    u32 fl = t->f4;
    if (fl & 8) {
        scale(&t->v100, t->f32_);
        scale(&t->v88, t->f32_);
    } else if (fl & 0x10) {
        scale(&t->v100, t->f36);
        scale(&t->v88, t->f40);
    } else {
        t->v100.x = t->v100.x * lbl_80364724;
        t->v100.y = t->v100.y * lbl_80364724;
        t->v100.z = t->v100.z * lbl_80364724;
        t->v88.x = t->v88.x * lbl_80364724;
        t->v88.y = t->v88.y * lbl_80364724;
        t->v88.z = t->v88.z * lbl_80364724;
    }
}

} /* extern "C" */
