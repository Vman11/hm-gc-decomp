#include "common.h"

extern "C" {

struct Obj_801FBA4C {
    u32 flags;
    void *owner;
    u8 pad8[8];
    f32 f10;
    f32 f14;
    u8 pad18[4];
    f32 f1c;
    u8 pad20[0x20];
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4c;
};
extern f32 lbl_8036558C;
extern u32 lbl_80365590;
extern f32 lbl_80365594;
extern f32 lbl_80365598;
extern f32 lbl_8036559C;
extern u32 lbl_803655A8;
void fn_801FA858(void *, Obj_801FBA4C *);
void fn_801FA800(void *, Obj_801FBA4C *);

void fn_801FBA4C(Obj_801FBA4C *o, u32 n, f32 v) {
    if (v < lbl_80365594) v = lbl_80365594;
    if (v > lbl_80365598) v = lbl_80365598;
    if (n != 0) {
        if (!(o->flags & 0x10)) {
            if (!(o->flags & 0x18)) fn_801FA858(o->owner, o);
            o->flags |= lbl_80365590;
        }
        o->f1c = o->f14;
        o->f44 = v;
        o->f48 = lbl_80365594;
        o->f4c = lbl_8036559C * (f32)(s32)n;
    } else {
        if (*(volatile u32 *)&o->flags & 0x10) {
            o->flags &= ~0x10;
            if (!(o->flags & 0x18)) fn_801FA800(o->owner, o);
        }
        o->f14 = v;
    }
}

void fn_801FBB60(Obj_801FBA4C *o, u32 n, f32 v) {
    if (v < lbl_80365594) v = lbl_80365594;
    if (v > lbl_8036558C) v = lbl_8036558C;
    if (n != 0) {
        if (!(o->flags & 0x8)) {
            if (!(o->flags & 0x18)) fn_801FA858(o->owner, o);
            o->flags |= lbl_803655A8;
        }
        o->f40 = o->f10;
        o->f44 = v;
        o->f48 = lbl_80365594;
        o->f4c = lbl_8036559C * (f32)(s32)n;
    } else {
        if (*(volatile u32 *)&o->flags & 0x8) {
            o->flags &= ~0x8;
            if (!(o->flags & 0x18)) fn_801FA800(o->owner, o);
        }
        o->f10 = v;
    }
}

}
