// fn_80095770 NonMatching draft (wMY): DIFF 48 / SDIFF 4. Volatile copy/neg stores + volatile K reads pin the sda loads (recipe from TIPS wDJ). Left: start.z store slot, one fneg slot, cross-product FP regs.
#include "common.h"
extern "C" {
typedef struct { float x, y, z; } V3;
extern float lbl_80361000, lbl_80361008, lbl_8036100C, lbl_80361010, lbl_80361030;
extern double lbl_80361018, lbl_80361020;
extern u32 lbl_80361004;
extern char lbl_80361028[8], lbl_80361034[6];
extern char lbl_80299C34[];
extern V3 lbl_80357B1C;
void *fn_80242144(void *, int);
void fn_80242BC0(void *, void *, void *, int, int, int);
int fn_80264E0C(V3 *, V3 *, V3 *, V3 *, int *, int *, void **, int, void *, int, int, int, int, int, int);
void fn_80101820(V3 *);
void fn_80107F3C(void *, V3 *);
void fn_801078CC(void *, V3 *, V3 *, V3 *, V3 *, int);
void fn_80190C98(void *);
int fn_800F6CD0(void *, const char *);
void fn_8023C128(V3 *, V3);
struct VS { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
 virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
 virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29();
 virtual void p30(); virtual void p31(); virtual void p32(); virtual void m(const char *, int, int, float *, int); };
static inline void Cp(V3 *d, const V3 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }
static inline void CpV(V3 *d, const V3 *s) { *(volatile float *)&d->x = s->x; *(volatile float *)&d->y = s->y; *(volatile float *)&d->z = s->z; }
static inline void Madd(V3 *d, const V3 *s, float k) { d->x = k * s->x + d->x; d->y = k * s->y + d->y; d->z = k * s->z + d->z; }
static inline void Cross(V3 *o, const V3 *a, const V3 *b) { float x = a->y * b->z - a->z * b->y; float y = a->z * b->x - a->x * b->z; float z = a->x * b->y - a->y * b->x; o->x = x; o->y = y; o->z = z; }
static inline float Sq(float x) {
    if (x > lbl_80361010) {
        const double _half = lbl_80361018;
        const double _three = lbl_80361020;
        volatile float y;
        double g = __frsqrte((double)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = (float)(x * g);
        return y;
    }
    return x;
}
struct E { u32 flags; u8 pad[0x2c]; void *f30; u8 pad2[0x44]; void *f78; u8 pad3[0x2c]; };
void fn_80095770(char *self, V3 a, V3 b, int n, char *obj) {
    V3 p, start, end, hit, nrm, c, u, e;
    float pz, py, px;
    px = a.x; py = a.y; pz = a.z;
    *(volatile float *)&start.x = px; *(volatile float *)&start.y = py; *(volatile float *)&start.z = pz;
    *(volatile float *)&end.x = px; *(volatile float *)&end.y = py; *(volatile float *)&end.z = pz;
    Madd(&end, &b, *(volatile float *)&lbl_80361008);
    u8 name[8];
    int o38, o34;
    void *o30;
    int r = fn_80264E0C(&start, &end, &hit, &nrm, &o38, &o34, &o30, 0, name, 0, 0, 0, 0, 0, 1);
    V3 d; float bx = b.x, by = b.y, bz = b.z;
    d.x = start.x - lbl_80357B1C.x;
    d.y = start.y - lbl_80357B1C.y;
    d.z = start.z - lbl_80357B1C.z;
    u.x = bx; u.y = by; u.z = bz;
    Cross(&c, &u, &d);
    Cross(&e, &c, &u);
    fn_80101820(&e);
    fn_80101820(&c);
    *(volatile float *)&u.x = -u.x; *(volatile float *)&u.y = -u.y; *(volatile float *)&u.z = -u.z;
    *(volatile float *)&c.x = -c.x; *(volatile float *)&c.y = -c.y; *(volatile float *)&c.z = -c.z;
    V3 s;
    s.x = s.y = s.z = *(volatile float *)&lbl_8036100C;
    float x, y, z;
    if (r) { x = hit.x - start.x; y = hit.y - start.y; z = hit.z - start.z; }
    else { x = end.x - start.x; y = end.y - start.y; z = end.z - start.z; }
    float l = Sq(x * x + y * y + z * z);
    s.y = l;
    int i = n - 1;
    if ((*(E **)(self + 0x130))[i].f78) fn_80107F3C((*(E **)(self + 0x130))[i].f78, &s);
    E *el = &(*(E **)(self + 0x130))[i];
    if (el->f30) {
        fn_801078CC(el->f30, &c, &u, &e, &start, 0);
        fn_80190C98(el);
    }
    (*(E **)(self + 0x130))[i].flags |= lbl_80361004;
    if (r) {
        if (fn_800F6CD0(name, lbl_80361028)) {
            float t = lbl_80361030;
            if (obj && *(char **)(obj + 0x50) && *(VS **)(*(char **)(obj + 0x50) + 0x3c))
                (*(VS **)(*(char **)(obj + 0x50) + 0x3c))->m(lbl_80299C34, 0, 0, &t, 0);
            fn_8023C128(&b, nrm);
            if (--n > 0) fn_80095770(self, hit, b, n, (char *)o30);
        } else if (fn_800F6CD0(name, lbl_80361034)) {
            if (*(int *)(self + 0x124))
                fn_80242BC0(fn_80242144(self, 0), *(void **)(self + 0x118), *(void **)(self + 0xe0), 0, 0, 0);
        }
    }
}
}
