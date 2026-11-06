#include "common.h"

extern "C" {

struct C80105818 { u8 pad0[0xc]; void *c; u8 pad10[8]; void *d; u8 pad1c[0xc]; C80105818(); ~C80105818(); };
struct C80108120 { u8 pad0[0xc]; void *c; u8 pad10[8]; void *d; u8 pad1c[0x18]; C80108120(); ~C80108120(); };
struct wA_E { u8 pad[0xc]; void *c; };
struct wA_VB { virtual void v0(); virtual void alloc(u32 n); virtual void v2(); virtual void v3(); virtual void *get(u32 i); };
struct wA_Src { virtual void v0(); virtual wA_VB *make(); };
struct wA_D { u8 pad0[0x1c]; u32 n1; u32 n2; u8 *e1; u8 *e2; wA_E *sel; u32 n3; };
struct wA_P {
    void *on; u8 pad4[0xc]; virtual void v0(); virtual void clear();
    wA_Src *src; wA_VB *vb; u32 n1; u32 n2; C80105818 *a1; C80108120 *a2; void *sel; u32 n3; u32 idx;
};
struct E1 { u8 pad[0xc]; void *c; u8 p2[0x28-0x10]; };
struct E2 { u8 pad[0xc]; void *c; u8 p2[0x34-0x10]; };
struct wA_Tmp { s8 f; u8 pad[0xf]; };
extern void *lbl_8035AA40;
extern u8 lbl_803286D0[];
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_800F8E38(wA_P *p, u32 n);
void fn_80104F78(void *e, void *a, void *b);
void fn_800F806C(wA_D *d, wA_E *e, wA_Tmp *t);
void fn_800F87F0(wA_P *p, wA_Tmp *t, void *e);
void fn_80107218(C80105818 *e, wA_P *p, wA_D *d, u32 i);
void fn_80107D38(C80108120 *e, wA_P *p, wA_D *d, u32 i);

static inline wA_E *GetE1(wA_D *d, u32 i) { return (wA_E *)(d->e1 + i * 0x28); }
static inline wA_E *GetE2(wA_D *d, u32 i) { return (wA_E *)(d->e2 + i * 0x34); }
void fn_80105350(wA_P *p, wA_Src *src, wA_D *d) {
    wA_Tmp tmp;
    if (p->on != 0) {
        p->clear();
    }
    p->src = src;
    p->n1 = d->n1;
    p->n2 = d->n2;
    p->n3 = d->n3;
    fn_800F8E38(p, p->n2 + p->n1);
    p->vb = src->make();
    p->vb->alloc((p->n2 + p->n1 + p->n3) * 2);
    p->idx = 0;
    if (p->n1 != 0) {
        if (lbl_8035AA40 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AA40);
        p->a1 = new C80105818[p->n1];
        fn_800F7E98();
        if (p->a1 == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    if (p->n2 != 0) {
        if (lbl_8035AA40 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AA40);
        p->a2 = new C80108120[p->n2];
        fn_800F7E98();
        if (p->a2 == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    {
        wA_E *e;
        if (p->n1 != 0) { for (u32 i = 0; i < p->n1; i++) {
            e = GetE1(d, i);
            fn_80104F78(&p->a1[i], p->vb->get(p->idx), p->vb->get(p->idx + 1));
            fn_800F806C(d, e, &tmp);
            if (tmp.f != 0) {
                fn_800F87F0(p, &tmp, &p->a1[i]);
            }
            fn_80107218(&p->a1[i], p, d, i);
            if (e == d->sel) {
                p->sel = &p->a1[i];
            }
            p->idx += 2;
            if (e->c != 0) {
                void *x = p->vb->get(p->idx++);
                void *y;
                (*(void (**)(void *, void *))(lbl_803286D0 + 0))(x, e->c);
                y = p->vb->get(p->idx++);
                {
                    void *el = &p->a1[i];
                    ((C80105818 *)el)->c = x;
                    ((C80105818 *)el)->d = y;
                }
            }
        }}
        if (p->n2 != 0) { for (u32 i = 0; i < p->n2; i++) {
            e = GetE2(d, i);
            fn_80104F78(&p->a2[i], p->vb->get(p->idx), p->vb->get(p->idx + 1));
            fn_800F806C(d, e, &tmp);
            if (tmp.f != 0) {
                fn_800F87F0(p, &tmp, &p->a2[i]);
            }
            fn_80107D38(&p->a2[i], p, d, i);
            if (e == d->sel) {
                p->sel = &p->a2[i];
            }
            p->idx += 2;
            if (e->c != 0) {
                void *x = p->vb->get(p->idx++);
                void *y;
                (*(void (**)(void *, void *))(lbl_803286D0 + 0))(x, e->c);
                y = p->vb->get(p->idx++);
                {
                    void *el = &p->a2[i];
                    ((C80105818 *)el)->c = x;
                    ((C80105818 *)el)->d = y;
                }
            }
        }}
    }
}

} /* extern "C" */
