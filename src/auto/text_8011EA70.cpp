// NonMatching (wRE): SDIFF 0 / DIFF 60 register-only (B1 inline fixed first loop i; left: Expire loop i r26 vs r22, tick k/ls/cnt colour).
#include "common.h"
extern "C" {
struct Ev { u8 *p; u32 f4; u32 f8; u32 f12; s32 f16; u32 f20; u32 f24; };
struct VL { virtual void On(Ev *); virtual void Off(Ev *); };
struct Nd { Nd *next; u32 f4, f8; s32 f12; u32 f16; u32 f20; VL *l; };
struct Lst { Nd *head; u32 pad; };
struct VP { u8 pad[208];
    virtual void v0(); virtual int Busy(); virtual int Busy2();
    virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void *Get(u32);
    virtual void v14(); virtual void v15();
    virtual void Expire(u32);
};
extern f32 lbl_80363DB0;
void fn_80118988(void *, f32);
void fn_8011DFE8(u8 *);
void fn_8011E5B0(u8 *);
#define U32(o) (*(u32 *)(p + (o)))
#define VPP ((VP *)p)
static inline Lst *GetList(u8 *p, u32 k) { return k < U32(168) ? &(*(Lst **)(p + 148))[k] : 0; }
static inline void fire(u8 *p, Ev *ev, u32 cnt, u32 j) {
    for (; j < cnt; j++) {
        VL *l = (*(VL ***)(p + 56))[j];
        if (ev->f16) l->On(ev);
        else l->Off(ev);
    }
}
static inline void B1(u8 *p) {
    u32 i;
    if (*(s32 *)(p + 24) == 1) {
        for (i = 0; i < U32(4); i++) {
            if (i >= U32(172)) continue;
            if (i < U32(4)) {
                fn_80118988(VPP->Get(i), lbl_80363DB0);
            } else {
                u32 j = i - U32(4);
                if (j < U32(8)) {
                    (*(f32 **)(p + 164))[j] = (*(f32 **)(p + 160))[j];
                    (*(f32 **)(p + 160))[j] = lbl_80363DB0;
                }
            }
        }
    }
}
static inline void tick(u8 *p, u32 k) {
    for (; k < U32(168); k++) {
            s32 v = (*(s32 **)(p + 120))[k];
            u32 tm;
            if (v == 0) continue;
            for (tm = (*(u32 **)(p + 128))[k]; tm < U32(176); tm += U32(180)) {
                Lst *ls = GetList(p, k);
                u32 cnt = U32(64);
                Ev ev;
                bool b;
                u32 j;
                ev.p = p;
                ev.f4 = 0;
                ev.f8 = (*(u32 **)(p + 76))[k * 2];
                ev.f12 = 0;
                ev.f16 = v;
                ev.f20 = U32(176);
                b = (*(s32 **)(p + 120))[k] == (*(s32 **)(p + 124))[k] && v != 0;
                ev.f24 = (b != 0);
                fire(p, &ev, cnt, 0);
                if (ls) {
                    Nd *n;
                    for (n = ls->head; n; n = n ? n->next : ls->head) {
                        if (n->f12 == ev.f16) {
                            ev.f12 = n->f16;
                            if (ev.f16 == 0) n->l->Off(&ev);
                            else n->l->On(&ev);
                        }
                    }
                }
            }
            (*(u32 **)(p + 128))[k] = tm;
        }
}
int fn_8011EA70(u8 *p, u32 dt) {
    u32 i;
    int r;
    U32(176) += dt;
    B1(p);
    if ((r = VPP->Busy()) != 0) return r;
    if ((r = VPP->Busy2()) != 0) return r;
    {
        u8 *q = p;
        for (i = 0; i < U32(12); q += 4, i++) {
            u32 t = *(u32 *)(q + 132);
            if (t) {
                if (t <= dt) VPP->Expire(i);
                else *(u32 *)(q + 132) = t - dt;
            }
        }
    }
    fn_8011DFE8(p);
    fn_8011E5B0(p);
    if (*(s32 *)(p + 200)) {
        tick(p, 0);
    }
    return 0;
}
}
