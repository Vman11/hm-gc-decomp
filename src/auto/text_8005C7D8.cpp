// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct V3 { f32 x, y, z; };
struct NN { u32 fl0; u8 pad4[104]; void *o108; u8 pad112[8]; void *m120; u8 pad124[28]; u32 fl; f32 f156; u8 pad160[12]; f32 f172; };
struct E8 { u8 b[8]; };
struct T660 { u8 pad[12]; char *names; };
struct T668 { u8 pad[12]; V3 *v; };
struct P {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, V3 *, int, int, int);
    virtual void s14(int, V3 *, V3 *, V3 *, int);
    u8 pad4[152];
    void *n156;
    u8 pad160[120];
    V3 dir;
    u8 pad292[368];
    T660 *t660;
    u8 pad664[4];
    T668 *t668;
    f32 *f672;
    u32 u676;
    u8 pad680[40];
    char name[8];
    NN *nodes[10];
    s32 count;
    u8 pad772[4];
    NN *n776;
    f32 f780;
    E8 e784[4];
    s32 n816;
    NN *n820[4];
};
extern u8 **lbl_8035B684;
extern void *lbl_8035B34C;
extern u32 lbl_8035E46C, lbl_8035E470, lbl_8035E480;
extern f32 lbl_8035E438;
void fn_80231AD8(P *, int, int, char *);
void fn_800F6E88(char *, char *);
void *fn_800F9398(u8 *, char *);
void *fn_800F9788(u8 *, char *, char *);
NN *fn_8022ECB4(void *, E8 *);
void fn_80190940(NN *, void *);
void fn_80196688(NN *);
void fn_80101820(V3 *);
void fn_80100F24(V3 *, V3 *);
void fn_80107F3C(void *, V3 *);

static inline void *find(u8 *m, char *s, char *name) {
    if ((u32)s == 0 || !s[0]) return fn_800F9398(m + 360, name);
    return fn_800F9788(m + 384, s, name);
}

#pragma opt_loop_invariants off
static inline void L3(P *p) {
    volatile V3 s;
    s32 k;
    for (k = 0; k < p->count; k++) {
        if (p->nodes[k]) {
            V3 *v = p->t668->v;
            f32 z, f, y, x;
            z = v->z; y = v->y; x = v->x;
            s.x = x; s.y = y; s.z = z;
            if (p->f672 && p->u676) {
                f = *p->f672;
                s.x = x * f;
                s.y = y * f;
                s.z = z * f;
                p->f780 = *(volatile f32 *)&lbl_8035E438;
            }
            if (p->nodes[k]->m120) fn_80107F3C(p->nodes[k]->m120, (V3 *)&s);
        }
    }
}
void fn_8005C7D8(P *p, int a, int b, char *name) {
    V3 v64, v52, v40, v28, s;
    char buf[8];
    s32 i;
    s32 j;
    s32 k;
    fn_80231AD8(p, a, b, name);
    fn_800F6E88(p->name, name);
    for (i = 0, k = 0; i < p->count; i++, k += 8) {
        void *o;
        fn_800F6E88(buf, p->t660->names + k);
        o = find(*(u8 **)(*lbl_8035B684 + 11340), buf, name);
        if (p->nodes[i]) {
            if (o) p->nodes[i]->o108 = o;
            p->nodes[i]->fl0 |= lbl_8035E46C;
        }
    }
    p->s13(&v64, &v52, 0, 0, 0);
    for (j = 0; j < p->n816; j++) {
        NN *n;
        p->n820[j] = fn_8022ECB4(lbl_8035B34C, &p->e784[j]);
        fn_80190940(p->n820[j], p->n156);
        n = p->n820[j];
        n->f156 = lbl_8035E438;
        n->fl &= ~6;
        n->f172 = lbl_8035E438;
        fn_80196688(n);
        p->n820[j]->fl0 |= lbl_8035E46C;
        p->n820[j]->fl |= lbl_8035E470;
    }
    if (p->n776) p->n776->fl0 |= lbl_8035E480;
    { f32 y = p->dir.y, z = p->dir.z, x = p->dir.x; v52.x = x; v52.y = y; v52.z = z; }
    fn_80101820(&v52);
    fn_80100F24(&v40, &v52);
    fn_80101820(&v40);
    v28.x = v52.y * v40.z - v52.z * v40.y;
    v28.y = v52.z * v40.x - v52.x * v40.z;
    v28.z = v52.x * v40.y - v52.y * v40.x;
    p->s14(0, &v52, &v40, &v28, 0);
    L3(p);
}
#pragma opt_loop_invariants reset
}
