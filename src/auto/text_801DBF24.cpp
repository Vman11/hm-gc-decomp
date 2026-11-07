#include "common.h"

extern "C" {

struct WB2 {
    u8 pad0[4];
    s32 type[4];
    struct W2 *ref[4];
    f32 off[4];
    u32 flags;
    u8 pad38[0x10];
    f32 abs[4];
    f32 L, T, R, B;
    u8 pad68[0x18];
};
struct W2 : WB2 {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12(); virtual void setR(f32 *); virtual void w14();virtual void w15();virtual void w16();virtual void w17();virtual void w18();virtual void w19();virtual void w20();virtual void w21();virtual void w22();virtual void w23();virtual void w24(); virtual void upd();
    u8 pad84[0x98];
    W2 *parent;
    u8 pad120[0x14];
    W2 *next;
    W2 *child;
};
extern f32 lbl_80365258;

void fn_801DBF24(W2 *p) {
    W2 *c;
    if (p->parent == 0) {
        p->abs[0] = p->L;
        p->abs[1] = p->T;
        p->abs[2] = p->R;
        p->abs[3] = p->B;
    } else {
        p->abs[0] = p->L + p->parent->abs[0];
        p->abs[1] = p->T + p->parent->abs[1];
        p->abs[2] = p->R + p->parent->abs[0];
        p->abs[3] = p->B + p->parent->abs[1];
    }
    for (c = p->child; c; c = c->next) {
        f32 o[4];
        u32 j;
        o[0] = c->L;
        o[1] = c->T;
        o[2] = c->R;
        o[3] = c->B;
        for (j = 0; j < 4; j++) {
            W2 *r = c->ref[j];
            switch (c->type[j]) {
            case 0:
                break;
            case 1:
                if (r == p) c->T = c->off[j];
                else c->T = r->T + c->off[j];
                if (!(c->flags & 2)) c->B = c->T + (o[3] - o[1]);
                break;
            case 2:
                if (r == p) { f32 dd = (p->B - p->T); c->T = dd * lbl_80365258 + c->off[j]; }
                else { f32 dd = (r->B - r->T); c->T = dd * lbl_80365258 + c->off[j]; }
                if (!(c->flags & 2)) c->B = c->T + (o[3] - o[1]);
                break;
            case 4:
                if (r == p) { f32 dd = (p->B - p->T); c->T = dd + c->off[j]; }
                else c->T = r->B + c->off[j];
                if (!(c->flags & 2)) c->B = c->T + (o[3] - o[1]);
                break;
            case 8:
                if (r == p) c->B = -c->off[j];
                else c->B = r->T - c->off[j];
                if (!(c->flags & 1)) c->T = c->B - (o[3] - o[1]);
                break;
            case 0x10:
                if (r == p) { f32 dd = (p->B - p->T); c->B = dd * lbl_80365258 - c->off[j]; }
                else { f32 dd = (r->B - r->T); c->B = dd * lbl_80365258 - c->off[j]; }
                if (!(c->flags & 1)) c->T = c->B - (o[3] - o[1]);
                break;
            case 0x20:
                if (r == p) { f32 dd = (p->B - p->T); c->B = dd - c->off[j]; }
                else c->B = r->B - c->off[j];
                if (!(c->flags & 1)) c->T = c->B - (o[3] - o[1]);
                break;
            case 0x40:
                if (r == p) { f32 dd = (p->R - p->L); c->R = dd - c->off[j]; }
                else c->R = r->R - c->off[j];
                if (!(c->flags & 8)) c->L = c->R - (o[2] - o[0]);
                break;
            case 0x80:
                if (r == p) { f32 dd = (p->R - p->L); c->R = dd * lbl_80365258 - c->off[j]; }
                else { f32 dd = (r->R - r->L); c->R = dd * lbl_80365258 - c->off[j]; }
                if (!(c->flags & 8)) c->L = c->R - (o[2] - o[0]);
                break;
            case 0x100:
                if (r == p) c->R = -c->off[j];
                else c->R = r->L;
                if (!(c->flags & 8)) c->L = c->R - (o[2] - o[0]);
                break;
            case 0x200:
                if (r == p) { f32 dd = (p->R - p->L); c->L = dd + c->off[j]; }
                else c->L = r->R + c->off[j];
                if (!(c->flags & 4)) c->R = c->L + (o[2] - o[0]);
                break;
            case 0x400:
                if (r == p) { f32 dd = (p->R - p->L); c->L = dd * lbl_80365258 + c->off[j]; }
                else { f32 dd = (r->R - r->L); c->L = dd * lbl_80365258 + c->off[j]; }
                if (!(c->flags & 4)) c->R = c->L + (o[2] - o[0]);
                break;
            case 0x800:
                if (r == p) c->L = c->off[j];
                else c->L = r->L + c->off[j];
                if (!(c->flags & 4)) c->R = c->L + (o[2] - o[0]);
                break;
            case 0x1000:
                if (r == p) {
                    { f32 g = (p->B - p->T) - (c->B - c->T); c->T = g * lbl_80365258; }
                    c->B = (p->B - p->T) - c->T;
                } else {
                    f32 g = (r->B - r->T) - (c->B - c->T); f32 h = g * lbl_80365258;
                    c->T = h + *(volatile f32 *)&r->T;
                    c->B = r->B - h;
                }
                break;
            case 0x2000:
                if (r == p) {
                    { f32 g = (p->R - p->L) - (c->R - c->L); c->L = g * lbl_80365258; }
                    c->R = (p->R - p->L) - c->L;
                } else {
                    f32 g = (r->R - r->L) - (c->R - c->L); f32 h = g * lbl_80365258;
                    c->L = h + *(volatile f32 *)&r->L;
                    c->R = r->R - h;
                }
                break;
            case 0x4000:
                if (r == p) {
                    f32 d = c->off[j];
                    o[0] = d;
                    o[1] = d;
                    o[3] = (p->B - p->T) - d;
                    o[2] = (p->R - p->L) - d;
                    c->setR(o);
                } else {
                    f32 d;
                    o[0] = r->L;
                    o[1] = r->T;
                    o[2] = r->R;
                    o[3] = r->B;
                    o[1] = o[1] + c->off[j];
                    o[3] = o[3] - c->off[j];
                    o[0] = o[0] + c->off[j];
                    o[2] = o[2] - c->off[j];
                    c->setR(o);
                }
                break;
            case 0x8000:
                break;
            }
        }
        c->upd();
    }
}

} /* extern "C" */
