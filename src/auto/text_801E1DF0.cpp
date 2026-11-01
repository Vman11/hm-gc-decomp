// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V4_801E1DF0 {
    u8 pad[4];
    virtual void v0();
    virtual void v1();
};
struct V0_801E1DF0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
struct V20_801E1DF0 {
    u8 pad[20];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
extern "C" {
typedef struct Tex801E1DF0 { u8 pad[28]; u16 w; u16 h; } Tex801E1DF0;
typedef struct Img801E1DF0 { u8 pad[4]; Tex801E1DF0 *tex; } Img801E1DF0;
typedef struct Cam801E1DF0 { u8 pad[52]; f32 fov; u8 pad2[20]; f32 znear; f32 zfar; } Cam801E1DF0;
typedef struct Rect801E1DF0 { s32 x, y, w, h; } Rect801E1DF0;
typedef struct A801E1DF0 { u8 pad[192]; Cam801E1DF0 *cam; Rect801E1DF0 *rect; u8 pad2[8]; Img801E1DF0 *img; } A801E1DF0;
typedef struct B801E1DF0 { u32 f0; u8 pad[8]; V4_801E1DF0 *f12; u8 pad2[32]; u32 f48; } B801E1DF0;
typedef struct C801E1DF0 { u8 pad[176]; B801E1DF0 *f176; } C801E1DF0;
typedef struct N1_801E1DF0 { struct N1_801E1DF0 *next; u8 pad[4]; V0_801E1DF0 *obj; } N1_801E1DF0;
typedef struct N2_801E1DF0 { struct N2_801E1DF0 *next; u8 pad[4]; V20_801E1DF0 *obj; } N2_801E1DF0;
typedef struct S801E1DF0 {
    A801E1DF0 *f0;
    u8 pad4[12];
    f32 f16;
    C801E1DF0 *f20;
    u8 pad18[8];
    N2_801E1DF0 *f32;
    u8 pad24[36];
    N1_801E1DF0 *f72;
    u8 pad4c[40];
    s32 f116;
} S801E1DF0;
/* 1.0f and 2.0f are literals: the original TU owns .sdata2 0x803652B8 (1.0f), 0x803652BC (0.5f) and
   0x803652C0 (int-to-float magic), shared with text_801E20BC; externs colour the float registers differently */
extern u32 lbl_803652C8;
void fn_8012962C(Cam801E1DF0 *cam, f32 fov, f32 aspect, f32 znear, f32 zfar);

void fn_801E1DF0(S801E1DF0 *self) {
    N2_801E1DF0 *n2 = self->f32;
    N1_801E1DF0 *n1 = self->f72;
    if (self->f116 == 0) {
        A801E1DF0 *a;
        Rect801E1DF0 *r;
        self->f116 = 1;
        a = self->f0;
        r = a->rect;
        if (r != 0) {
            Tex801E1DF0 *t = a->img->tex;
            f32 w = (f32)(s32)t->w;
            f32 h = (f32)(s32)t->h;
            f32 y = (h - w / self->f16 + 1.0f) / 2.0f;
            Cam801E1DF0 *cam = a->cam;
            r->x = 0;
            r->w = w;
            r->y = y;
            r->h = h - y;
            fn_8012962C(cam, cam->fov, self->f16, cam->znear, cam->zfar);
        }
        if (self->f20 != 0) {
            B801E1DF0 *b = self->f20->f176;
            if (b->f48 & 1) {
                b->f0 |= lbl_803652C8;
                if (b->f12 != 0) b->f12->v1();
            }
        }
        for (; n1 != 0; n1 = n1->next) n1->obj->v6();
        for (; n2 != 0; n2 = n2->next) n2->obj->v6();
    }
}

} /* extern "C" */

// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct C800322B0 {
    s32 a;
    s32 b;
    s32 c;
    C800322B0() { a = 0; c = 0; b = 0; }
    ~C800322B0() {}
};
struct A801E1F94 {
    u8 pad[20];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void Fa();
};
struct B801E1F94 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void Fb();
};
struct NA801E1F94 { NA801E1F94 *next; u32 f4; A801E1F94 *obj; };
struct NB801E1F94 { NB801E1F94 *next; u32 f4; B801E1F94 *obj; };
struct St801E1F94 { u32 flags; u8 pad[44]; u32 f30; };
struct Ent801E1F94 { u8 pad[176]; St801E1F94 *st; };
struct Obj801E1F94 {
    u8 pad0[20];
    Ent801E1F94 *ent;
    u8 pad18[8];
    NA801E1F94 *listA;
    u8 pad24[32];
    void *f44;
    NB801E1F94 *listB;
    u8 pad4c[40];
    s32 f74;
};

void fn_801089F0(void *, C800322B0 *);

void fn_801E1F94(Obj801E1F94 *o) {
    C800322B0 m;
    if (o->f74 != 0) {
        if (o->f44 != 0) {
            m.b = 1;
            m.a = (s32)o->f44;
            fn_801089F0(o->f44, &m);
        }
        {
            C800322B0 m2;
            NB801E1F94 *nb;
            NA801E1F94 *na;
            na = o->listA;
            nb = o->listB;
            if (o->f74 != 0) {
                o->f74 = 0;
                for (; na != 0; na = na->next) {
                    na->obj->Fa();
                }
                for (; nb != 0; nb = nb->next) {
                    nb->obj->Fb();
                }
                if (o->ent != 0 && (o->ent->st->f30 & 1)) {
                    o->ent->st->flags &= ~2;
                }
            }
            if (o->ent != 0) {
                o->ent->st->f30 &= ~1;
            }
        }
    }
}

} /* extern "C" */

namespace m801E20BC {
extern "C" {
struct V4 { u8 pad[4]; virtual void v0(); virtual void v1(); };
struct V4b { u8 pad[4]; virtual void v0(); virtual void v1(void *); };
struct VB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); };
struct VA { u8 pad[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); };
typedef struct Tex { u8 pad[28]; u16 w; u16 h; } Tex;
typedef struct Img { u8 pad[4]; Tex *tex; } Img;
typedef struct Cam { u8 pad[52]; f32 fov; u8 pad2[20]; f32 znear; f32 zfar; } Cam;
typedef struct Rect { s32 x, y, w, h; } Rect;
typedef struct A { u8 pad[192]; Cam *cam; Rect *rect; u8 pad2[8]; Img *img; } A;
typedef struct St { u32 f0; u8 pad[8]; V4 *f12; u8 pad2[32]; u32 f48; } St;
typedef struct Ent { u8 pad[176]; St *f176; } Ent;
typedef struct NB { struct NB *next; u8 pad[4]; VB *obj; } NB;
typedef struct NA { struct NA *next; u8 pad[4]; VA *obj; } NA;
typedef struct S {
    A *f0;
    u32 f4;
    f32 f8;
    f32 f12;
    f32 f16;
    Ent *f20;
    u32 f24;
    u8 pad28[4];
    NA *f32;
    u8 pad36[28];
    void *f64;
    void *f68;
    NB *f72;
    u8 pad4c[40];
    s32 f116;
} S;
extern u32 lbl_803652C8;
extern u32 lbl_803652CC;
void fn_8012962C(Cam *cam, f32 fov, f32 aspect, f32 znear, f32 zfar);
void fn_80103BB4(St *, u32);

static inline void Start(S *self) {
    NA *n2 = self->f32;
    NB *n1 = self->f72;
    if (self->f116 == 0) {
        A *a;
        Rect *r;
        self->f116 = 1;
        a = self->f0;
        r = a->rect;
        if (r != 0) {
            Tex *t = a->img->tex;
            f32 w = (f32)(s32)t->w;
            f32 h = (f32)(s32)t->h;
            f32 y = (h - w / self->f16 + 1.0f) / 2.0f;
            Cam *cam = a->cam;
            r->x = 0;
            r->w = w;
            r->y = y;
            r->h = h - y;
            fn_8012962C(cam, cam->fov, self->f16, cam->znear, cam->zfar);
        }
        if (self->f20 != 0) {
            St *b = self->f20->f176;
            if (b->f48 & 1) {
                b->f0 |= lbl_803652C8;
                if (b->f12 != 0) b->f12->v1();
            }
        }
        for (; n1 != 0; n1 = n1->next) n1->obj->v6();
        for (; n2 != 0; n2 = n2->next) n2->obj->v6();
    }
}
static inline void Inner(S *o) {
        {
            C800322B0 m2;
            NA *na;
            NB *nb;
            na = o->f32;
            nb = o->f72;
            if (o->f116 != 0) {
                o->f116 = 0;
                for (; na != 0; na = na->next) {
                    na->obj->v8();
                }
                for (; nb != 0; nb = nb->next) {
                    nb->obj->v7();
                }
                if (o->f20 != 0 && (o->f20->f176->f48 & 1)) {
                    o->f20->f176->f0 &= ~2;
                }
            }
            if (o->f20 != 0) {
                o->f20->f176->f48 &= ~1;
            }
        }
}
static inline void Stop(S *o) {
    C800322B0 m;
    if (o->f116 != 0) {
        if (o->f68 != 0) {
            m.b = 1;
            m.a = (s32)o->f68;
            fn_801089F0(o->f68, &m);
        }
        Inner(o);
    }
}
void fn_801E20BC(S *o) {
    C800322B0 m;
    if (*(volatile s32 *)&o->f116 != 0) Stop(o);
    if (o->f12 != o->f8) {
        NA *na;
        NB *nb;
        o->f12 = o->f8;
        na = o->f32;
        nb = o->f72;
        for (; nb != 0; nb = nb->next) nb->obj->v8();
        for (; na != 0; na = na->next) na->obj->v7();
    }
    if (o->f20 != 0) {
        St *st = o->f20->f176;
        fn_80103BB4(st, o->f24);
        st->f0 |= lbl_803652C8;
        if (st->f12 != 0) ((V4b *)st->f12)->v1(st);
        st->f48 |= lbl_803652CC;
    }
    Start(o);
    if (o->f64 != 0) {
        m.b = 1;
        m.a = (s32)o->f64;
        fn_801089F0(o->f64, &m);
    }
}

}
} /* namespace m801E20BC */
