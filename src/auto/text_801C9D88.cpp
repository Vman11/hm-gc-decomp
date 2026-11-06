#include "common.h"
extern "C" {
extern f32 lbl_80365010;
struct Rect_801C9D88 { u8 pad[72]; f32 l, t, r, b; u8 pad58[112 - 88]; u32 on; };
struct Sub_801C9D88 {
    u8 pad[88];
    f32 l, t, r, b;
    u8 pad68[128 - 104];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void update();
};
struct Obj_801C9D88 {
    u8 pad0[72];
    f32 ox, oy;
    u8 pad50[88 - 80];
    f32 x, y;
    u8 pad60[364 - 96];
    Sub_801C9D88 *sub;
    u8 pad170[376 - 368];
    Rect_801C9D88 *rect;
    u8 pad17C[444 - 380];
    u32 rows;
    u32 cols;
    u8 pad1C4[456 - 452];
    f32 *widths;
    f32 h;
    f32 adjx;
    f32 adjy;
    u8 pad1D8[488 - 472];
    u32 n488;
    f32 f492;
    u8 pad1F0[568 - 496];
    s32 f568;
};
void fn_801C9D88(Obj_801C9D88 *o) {
    f32 r, l, b, t;
    f32 y, x;
    u32 i, j;

    b = l = t = r = lbl_80365010;
    if (o->rect != NULL && o->rect->on != 0) {
        y = o->y;
        for (i = 0; i <= o->rows; i++) {
            y += o->h;
            x = o->x;
            b = y;
            t = y - o->h;
            for (j = 0; j <= o->cols; j++) {
                x += o->widths[j];
                r = x;
                l = x - o->widths[j];
            }
        }
        if (o->cols >= o->n488) {
            l -= o->adjx;
            r -= o->adjx;
            if (o->n488 != 0 && o->f568 != 0) {
                l += o->f492;
                r += o->f492;
            }
        }
        t -= o->adjy;
        b -= o->adjy;
        {
            Rect_801C9D88 *rc = o->rect;
            rc->l = l;
            rc->t = t;
            rc->r = r;
            rc->b = b;
        }
        if (o->sub != NULL) {
            o->sub->l = l - o->ox;
            o->sub->t = t - o->oy;
            o->sub->r = r - o->ox;
            o->sub->b = b - o->oy;
            o->sub->update();
        }
    }
}
}
