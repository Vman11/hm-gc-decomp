#include "common.h"

struct C8002FAE0 { f32 x, y, z; C8002FAE0(); };
extern "C" {
struct V_8022F544 { f32 x, y, z; };
extern volatile f32 lbl_80365D98, lbl_80365D9C, lbl_80365DA0, lbl_80365DA4, lbl_80365DA8, lbl_80365DAC, lbl_80365DB0;
int fn_80264E0C(V_8022F544 *, V_8022F544 *, V_8022F544 *, V_8022F544 *, int, int, int, int, int, int, int, int, int, int, int);
void fn_80107694(void *, V_8022F544 *, V_8022F544 *, V_8022F544 *, int);
void fn_8023ABF4(void *, int, C8002FAE0 *, int, int, int, V_8022F544 *, int);
typedef struct { u8 pad[0x44]; V_8022F544 pos; u8 pad50[0x21c]; u8 f26c[0x28]; u8 f294[0x9c]; void *f330; } T_8022F544;
#define VS(x) (*(volatile f32 *)&(x))

void fn_8022F544(T_8022F544 *t) {
    C8002FAE0 v[10];
    V_8022F544 col[4];
    V_8022F544 a;
    V_8022F544 b;
    V_8022F544 c;
    V_8022F544 d;
    V_8022F544 e;
    f32 pz;
    f32 py;
    f32 o;
    f32 px;
    f32 z;
    f32 k;
    f32 q;
    f32 nk;
    f32 w;
    px = VS(t->pos.x);
    o = lbl_80365D98;
    VS(a.x) = px + o;
    py = VS(t->pos.y);
    VS(a.y) = py + o;
    pz = VS(t->pos.z);
    VS(a.z) = pz + lbl_80365D9C;
    o = lbl_80365DA0;
    VS(b.x) = px + o;
    VS(b.y) = py + o;
    VS(b.z) = pz + lbl_80365DA4;
    if (fn_80264E0C(&a, &b, &c, &d, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1)) {
        k = lbl_80365DA8;
        nk = -k;
        VS(v[0].x) = k; VS(v[0].y) = k; z = lbl_80365DAC; VS(v[0].z) = z;
        VS(v[1].x) = k; VS(v[1].y) = nk; VS(v[1].z) = z;
        VS(v[2].x) = nk; VS(v[2].y) = nk; VS(v[2].z) = z;
        VS(v[3].x) = nk; VS(v[3].y) = nk; VS(v[3].z) = z;
        VS(v[4].x) = nk; VS(v[4].y) = k; VS(v[4].z) = z;
        VS(v[5].x) = k; VS(v[5].y) = k; VS(v[5].z) = z;
        {
        w = lbl_80365DB0;
        VS(col[0].x) = w; VS(col[0].y) = w; VS(col[0].z) = w;
        q = lbl_80365D98;
        VS(col[1].x) = q; VS(col[1].y) = q; VS(col[1].z) = q;
        VS(col[2].x) = q; VS(col[2].y) = q; VS(col[2].z) = q;
        VS(col[3].x) = w; VS(col[3].y) = w; VS(col[3].z) = w;
        VS(e.x) = q; VS(e.y) = w; VS(e.z) = q;
        }
        fn_80107694(t->f26c, &d, &e, &c, 0);
        t->f330 = t->f26c;
        fn_8023ABF4(t->f294, 0, v, 6, 0, 0, col, 0);
    }
}
}
