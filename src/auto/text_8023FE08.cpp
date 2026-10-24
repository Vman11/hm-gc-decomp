// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Vec { f32 x, y, z; };
struct Ent { u32 a; int b; char name[12]; };
struct Ob { u32 f0; u8 pad[148]; u32 f152; };
struct V14 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void set(f32); };
struct G { u8 pad[768]; int on; f32 sc; };
struct H { u8 pad[72]; struct { u8 pad[600]; G *g; } *f72; };
struct T { u8 pad[148]; int n; u8 pad152[192 - 152]; V14 **f192; u8 pad196[216 - 196]; u32 f216; u8 pad220[4]; u8 *f224; u8 pad228[264 - 228]; u8 *f264; Ent *f268; Ob **f272; };
extern H *lbl_8035B308;
extern f32 lbl_8036613C;
extern char lbl_80366138[4];
void fn_80107244(void *, Vec *);
void fn_80248370(u8 *, int, Vec *);
void *fn_8019556C(void *);
int fn_800F6CD0(char *, char *);
void fn_80190604(Ob *, void *, char *);
void fn_801907D8(Ob *);
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
void fn_8023FE08(T *t, f32 x) {
    G *g = lbl_8035B308->f72->g;
    int i;
    if (g->on) x *= g->sc;
    if (t->f192 && t->f192[t->f216]) t->f192[t->f216]->set(x);
    if (t->f264 && F(t->f264,48,int)) {
        Vec v;
        if (F(F(t->f224,156,u8*),48,void*)) fn_80107244(F(F(t->f224,156,u8*),48,void*), &v);
        else { v.x = lbl_8036613C; v.y = lbl_8036613C; v.z = lbl_8036613C; }
        fn_80248370(t->f264, 0, &v);
    }
    for (i = 0; i < t->n; i++) {
        Ob **arr = t->f272;
        if (arr[i] && (arr[i]->f152 & 4)) {
            Ent e = t->f268[i];
            if (arr[i]) {
                if (e.b == 0) {
                    void *y = 0;
                    void *q = F(t->f224,160,void*);
                    if (q) y = fn_8019556C(q);
                    if (!q || y) {
                        if (!fn_800F6CD0(e.name, lbl_80366138)) fn_80190604(arr[i], y, e.name);
                        else fn_801907D8(arr[i]);
                    }
                }
                if (*(volatile u32 *)&arr[i]->f152 & 8) arr[i]->f152 &= ~8;
                arr[i]->f0 &= ~0x800;
                arr[i]->f152 &= ~1;
                arr[i] = 0;
            }
        }
    }
}

} /* extern "C" */
