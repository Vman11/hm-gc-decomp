// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Vec80229C5C { f32 x, y, z; } Vec80229C5C;
typedef struct Sph80229C5C { f32 x, y, z, r; } Sph80229C5C;

void fn_80100CF4(Sph80229C5C *s);
void fn_80190940(void *a, void *b);
extern f32 lbl_80365D10;
extern f32 lbl_80365D14;

struct V80229C5C {
    u8 pad[104];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();
    virtual void SetBounds(Sph80229C5C *s);
};

struct Model80229C5C {
    u8 pad[8];
    Sph80229C5C bounds;
    u8 pad18[156 - 24];
    void *unk9C;
    u8 padA0[456 - 160];
    f32 *radius;
};

struct C80229C5C {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13();
    virtual void GetPos(Vec80229C5C *v, s32 a, s32 b, s32 c, s32 d);
    u8 pad4[156 - 4];
    V80229C5C *model;
    u8 padA0[280 - 160];
    Vec80229C5C pos;
    u8 pad124[340 - 292];
    f32 unk154;
    u8 pad158[608 - 344];
    Model80229C5C *data;
};

void fn_8022FC30(C80229C5C *p);

void fn_80229C5C(C80229C5C *p, Model80229C5C *data) {
    Vec80229C5C v;
    Sph80229C5C s;
    fn_80100CF4(&s);
    p->data = data;
    fn_80190940(p->model, p->data->unk9C);
    v.x = lbl_80365D10;
    v.y = lbl_80365D10;
    v.z = lbl_80365D10;
    p->GetPos(&v, 0, 0, 0, 0);
    p->pos = v;
    p->unk154 = lbl_80365D10;
    s = *(Sph80229C5C *)((u8 *)p->model + 8);
    s.r = p->data->radius != 0 ? *p->data->radius : lbl_80365D14;
    p->model->SetBounds(&s);
    fn_8022FC30(p);
}

} /* extern "C" */
