#include "common.h"

extern "C" {

struct C80197988 {
    u32 flags; u8 pad4[0x64];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void reset();
    u8 pad6c[0x2c]; u32 f98; f32 f9c; u8 padA0[0xc]; f32 fac; u8 padB0[0x34];
    C80197988(); ~C80197988();
};
struct C8023C7CC { u8 b[0x1c]; C8023C7CC(); ~C8023C7CC(); };
struct wA_K { u32 a; u32 b; };
struct wA_Info { u32 v[32]; };
struct wA_M { u8 pad[0x98]; u32 flags; };
struct wA_P { s32 on; u32 *cnt; wA_K *keys; u32 n; C80197988 **objs; C8023C7CC *x; };
extern void *lbl_8035B348;
extern void *lbl_8035B308;
extern u8 **lbl_8035B460;
extern u8 *lbl_8035B65C;
extern const wA_Info lbl_802A8630;
extern f32 lbl_80365D80;
extern const char lbl_80365D84[8];
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_800E1E88(void *p, void *dtor);
void __dt__9C80197988Fv(void *p, s16 f);
void fn_8023C720(C8023C7CC *x, void *a);
u32 fn_800FADA8(void *src);
void fn_800FB064(void *src, wA_K *k);
wA_M *fn_800F9398(void *tbl, wA_K *k);
void fn_800F6F68(wA_Info *i, wA_K *k);
u32 fn_800FB33C(void *src);
void fn_800F6E88(wA_K *d, wA_K *s);
void fn_8019777C(C80197988 *o, u8 *a, wA_M *m, s32 z);
void fn_80196688(C80197988 *o);
void fn_8019B7E8(void *m, C80197988 *o);
void fn_8022992C(void *a, const char *s, wA_K *k, C80197988 *o);
void fn_800FAEA0(void *src);

inline void wA_clear(wA_P *p) {
    if (p->on != 0) {
        if (p->objs != 0) {
            u32 ci;
            for (ci = 0; ci < p->n; ci++) {
                if (p->objs[ci] != 0) {
                    u32 cj;
                    for (cj = 0; cj < p->cnt[ci]; cj++) {
                        p->objs[ci][cj].reset();
                    }
                    fn_800E1E88(p->objs[ci], (void *)__dt__9C80197988Fv);
                }
            }
            delete[] p->objs;
        }
        if (p->keys != 0) {
            delete[] p->keys;
        }
        if (p->cnt != 0) {
            delete[] p->cnt;
        }
        if (p->x != 0) {
            delete p->x;
        }
        p->on = 0;
        p->cnt = 0;
        p->keys = 0;
        p->n = 0;
        p->objs = 0;
        p->x = 0;
    }
}

static inline u8 *Mgr() { return lbl_8035B460[2]; }
void fn_8022ED98(wA_P *p, void *src) {
    wA_K key;
    u8 *r;
    u32 i;
    u32 j;
    wA_M *m;
    wA_clear(p);
    p->on = 1;
    if (lbl_8035B348 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B348);
    p->x = new C8023C7CC;
    fn_800F7E98();
    if (p->x == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_8023C720(p->x, lbl_8035B308);
    r = Mgr();
    p->n = fn_800FADA8(src);
    if (lbl_8035B348 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B348);
    p->cnt = new u32[p->n];
    fn_800F7E98();
    if (p->cnt == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B348 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B348);
    p->keys = new wA_K[p->n];
    fn_800F7E98();
    if (p->keys == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035B348 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B348);
    p->objs = new C80197988 *[p->n];
    fn_800F7E98();
    if (p->objs == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    {
        for (i = 0; i < p->n; i++) {
            fn_800FB064(src, &key);
            if (fn_800F9398(r + 0x90, &key) == 0) {
                wA_Info info;
                p->objs[i] = 0;
                info = lbl_802A8630;
                fn_800F6F68(&info, &key);
                fn_800FB33C(src);
                p->cnt[i] = 0;
            } else {
                fn_800F6E88(&p->keys[i], &key);
                p->cnt[i] = fn_800FB33C(src);
                if (lbl_8035B348 == 0) {
                    fn_800604C4(-2, 0, 0, 0);
                }
                fn_800F7EC0(lbl_8035B348);
                p->objs[i] = new C80197988[p->cnt[i]];
                fn_800F7E98();
                if (p->objs[i] == 0) {
                    fn_800604C4(-4, 0, 0, 0);
                }
                m = fn_800F9398(r + 0x90, &key);
                m->flags &= ~1;
                for (j = 0; j < p->cnt[i]; j++) {
                    C80197988 *o;
                    fn_8019777C(&p->objs[i][j], r, m, 0);
                    o = &p->objs[i][j];
                    o->f9c = lbl_80365D80;
                    o->f98 &= ~6;
                    o->fac = lbl_80365D80;
                    fn_80196688(o);
                    p->objs[i][j].f98 &= ~1;
                    p->objs[i][j].flags &= ~0x800;
                    fn_8019B7E8(*(void **)(lbl_8035B65C + 0xc), &p->objs[i][j]);
                    fn_8022992C(lbl_8035B308, lbl_80365D84, &key, &p->objs[i][j]);
                }
            }
        }
    }
    fn_800FAEA0(src);
}

} /* extern "C" */
