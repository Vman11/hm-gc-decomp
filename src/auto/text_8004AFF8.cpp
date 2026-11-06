#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Ctl {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void Get(V3 *, s32, s32, s32, s32);  /* 60 */
    virtual void Set(V3 *, s32, s32, s32, s32);  /* 64 */
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void Start();  /* 84 */
    virtual void Stop();   /* 88 */
    u8 pad[272];
    s32 f114; /* 276 */
};
struct Y { u8 pad[16]; void *h; u8 pad2[12]; u32 flags; };
struct X { u8 pad[48]; Y *y; };
struct FT { u8 pad[12]; void (*fn)(void *, V3 *); };
struct Obj {
    u8 pad0[96];
    s32 state;   /* 96 */
    u8 pad1[124];
    Ctl *ctl;    /* 224 */
    u8 pad2[52];
    char *name;  /* 280 */
    u8 pad3[116];
    X **xs;      /* 400 */
    V3 pos;      /* 404 */
    u8 pad4[16];
    s32 f1b0;    /* 432 */
    s32 f1b4;    /* 436 */
    s32 f1b8;    /* 440 */
    s32 f1bc;    /* 444 */
    u8 pad5[4];
    u32 *flagp;  /* 452 */
    u32 mask;    /* 456 */
    u8 pad6[8];
    u32 nx;      /* 468 */
    u8 pad7[4];
    s32 f1dc;    /* 476 */
    u8 pad8[4];
    s32 f1e4;    /* 484 */
    s32 f1e8;    /* 488 */
};
s32 fn_8022C558(Ctl *);
void fn_8022B618(Ctl *);
void fn_8022A7A8(Ctl *);
void fn_8022BBF4(Ctl *);
void fn_8022AD0C(Ctl *);
s32 fn_800F6CD0(const char *, const char *);
void __ct__9C80253F24Fiiii(void *, const char *, s32, s32, s32);
void fn_8002A860(void *, s32);
void fn_8004AA74(Obj *, f32);
void fn_8004A7C8(Obj *, f32);
void fn_8023FE08(Obj *, f32);
void fn_80190C98(X *);
extern void *lbl_8035B65C;
extern void *lbl_80359F2C;
extern char lbl_80295CB0[];
extern char lbl_8035D314[8];
extern FT lbl_803286D0;
extern u32 lbl_8035D360;

inline void Mark(X *x, V3 *v)
{
    if (x) {
        Y *y = x->y;
        if (y) {
            lbl_803286D0.fn(y->h, v);
            y->flags |= lbl_8035D360;
            fn_80190C98(x);
        }
    }
}

inline void Apply(Obj *o)
{
    V3 v;
    o->ctl->Get(&v, 0, 0, 0, 0);
    if (o->xs) {
        u32 i;
        for (i = 0; i < o->nx; i++) {
            Mark(o->xs[i], &v);
        }
    }
}

void fn_8004AFF8(Obj *o, f32 dt)
{
    if (!(*o->flagp & o->mask) && fn_8022C558(o->ctl)) {
        if (fn_8022C558(o->ctl)) o->ctl->Stop();
        fn_8022B618(o->ctl);
        fn_8022A7A8(o->ctl);
        *o->flagp &= ~o->mask;
    } else if (o->f1b4) {
        if (fn_800F6CD0(o->name, lbl_80295CB0)) {
            o->f1e4 = 0;
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035D314, 0, 0, 0);
            if (o->f1e4 == 0) fn_8002A860(lbl_80359F2C, 0);
            else fn_8002A860(lbl_80359F2C, 1);
        }
        o->ctl->Get(&o->pos, 0, 0, 0, 0);
        o->f1b4 = 0;
    } else if (o->f1b0 && o->state == 3) {
        if (o->f1dc == 0) {
            if (!fn_8022C558(o->ctl)) o->ctl->Start();
            if (!o->f1e8 && !o->f1b4 && !o->ctl->f114) o->ctl->Set(&o->pos, 0, 0, 0, 0);
            fn_8022BBF4(o->ctl);
            fn_8022AD0C(o->ctl);
        }
        *o->flagp |= o->mask;
        o->f1b0 = 0;
    } else if (o->f1b8) {
        fn_8004AA74(o, dt);
        Apply(o);
    } else if (o->f1bc) {
        fn_8004A7C8(o, dt);
        Apply(o);
    }
    fn_8023FE08(o, dt);
}

}
