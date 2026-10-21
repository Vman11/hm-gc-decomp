// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { u8 pad[28]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void set(s32); };
struct P {
    u8 pad0[20];
    void *f20;
    u8 pad18[4];
    f32 f28;
    f32 f32_;
    u8 pad24[4];
    u32 *arr;
    u8 pad2c[4];
    s32 f48;
};
extern u8 *lbl_8035B308;
void fn_8026A944(void *, P *, u32 *, f32);
void fn_8026AA88(void *, P *, u32 *, f32);
void fn_8026A820(void *, P *, u32 *, s32);
void fn_8026AE28(void *, P *, u32 *, f32, s32);
void fn_8026A6F4(void *, P *, u32 *, O *);

void fn_802488C4(P *p, O *o, s32 idx, s32 arg, s32 flag, f32 t) {
    if (o == 0) {
        return;
    }
    if (flag == 0 && *(s32 *)(*(u8 **)(*(u8 **)(lbl_8035B308 + 72) + 600) + 768) != 0) {
        return;
    }
    if (flag != 0) {
        p->f48 = 1;
        o->set(-1);
    } else {
        p->f48 = 0;
        o->set(0);
    }
    fn_8026A944(p->f20, p, &p->arr[idx], p->f32_);
    fn_8026AA88(p->f20, p, &p->arr[idx], p->f28);
    fn_8026A820(p->f20, p, &p->arr[idx], arg);
    fn_8026AE28(p->f20, p, &p->arr[idx], t, 0);
    fn_8026A6F4(p->f20, p, &p->arr[idx], o);
}

} /* extern "C" */
