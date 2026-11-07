#include "common.h"
extern "C" {
}
struct Snd { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void play(char *, char *); };
struct Busy { virtual void v0(); virtual int busy(); };
struct Mus { u8 pad[0x58]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void start(int, int, Busy *); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void vol(f32, int); };
struct Cam { u8 pad[0x68]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void upd(f32); };
struct Plr { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void upd(f32);
    virtual void w13(); virtual void w14(); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void say(char *, int, int, int, int);
    u8 pad[0x9c - 4]; Cam *f9c; u8 pada0[0x33c - 0xa0]; int f33c; };
struct G308 { u8 pad[0x48]; Plr *f48; };
struct GUi { u8 pad[0x2f0]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void hud(int); };
struct G65C { u8 pad[0x8c]; u32 f8c; };
struct G7BC { u8 pad[0x20]; f32 *f20; u8 pad24[4]; Mus *f28; };
struct C800322B0 { int a, b, c; ~C800322B0() {} };
struct T {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void done(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void finish(int);
    u8 pad4[0x10]; u8 f14[8]; u32 f1c; u8 pad20[8]; int f28; u8 pad2c[0x20]; f32 f4c; f32 f50; f32 f54; u32 f58; u8 *f5c; int *f60; f32 *f64; int *f68; Snd **f6c; int f70; u8 pad74[8]; int f7c; f32 f80; int f84; int f88; int f8c;
    f32 f90; f32 f94; u8 *f98; void *f9c; Busy *fa0; f32 *fa4; };
extern "C" {
extern G308 *lbl_8035B308;
extern u8 *lbl_8035B460;
extern volatile f32 lbl_8035B584;
extern void *volatile lbl_8035B594;
extern void *lbl_8035B5E4;
extern GUi *lbl_8035B65C;
extern void *lbl_8035B79C;
extern G7BC *lbl_8035B7BC;
extern f32 lbl_803663B8, lbl_803663E4, lbl_803663FC;
extern char lbl_803663E8[8], lbl_803663F0[8], lbl_803663F8[4], lbl_80366400[8], lbl_80366408[8];
void fn_802502BC(Snd *);
void fn_80250EBC(Snd *);
void *fn_800F8274(void *, char *);
int fn_80253664(void *, int);
int fn_80268004(void *);
void fn_80268014(void *);
void fn_8026B5CC(G7BC *, f32);
void fn_801F74D8(u8 *);
void fn_8024E3DC(void *, u8 *, int *);
void fn_800E8F6C(char *, const char *, ...);
int fn_800F9398(void *, char *);
void fn_801089F0(int, C800322B0 *);
void *fn_8024E69C(void *, u8 *);
void *fn_8024E57C(void *, u8 *);
void fn_802501D4(void *);
void fn_80250E80(void *);
static inline f32 Zero() { return lbl_803663B8; }
static inline void Pl(f32 dt) {
    lbl_8035B308->f48->upd(dt);
    lbl_8035B308->f48->f9c->upd(dt);
}
static inline void StopAll(T *t) {
    u32 o8, o4, i;
    i = 0;
    t->f1c = i;
    o4 = i;
    o8 = i;
    for (; i < t->f58; o4 += 4, o8 += 8, i++) {
        switch (*(int *)((u8 *)t->f60 + o4)) {
        case 1: fn_802501D4(fn_8024E69C(lbl_8035B594, t->f5c + o8)); break;
        case 2: fn_80250E80(fn_8024E57C(lbl_8035B594, t->f5c + o8)); break;
        }
    }
}
static inline void Stop(T *t) {
    if (!t->f28 && t->f1c != 0) {
        StopAll(t);
        if (fn_80268004(lbl_8035B79C)) fn_80268014(lbl_8035B79C);
        fn_8026B5CC(lbl_8035B7BC, *lbl_8035B7BC->f20);
        if (!t->f70) {
            lbl_8035B65C->hud(0);
            if (lbl_8035B308->f48) lbl_8035B308->f48->say(lbl_803663E8, 0, 0, 0, 0);
        }
    }
}

static inline void Can(T *t, int &pl) {
    bool b, a;
    Plr *g;
    if ((g = lbl_8035B308->f48) != 0) {
        a = 0;
        b = a;
        if (!t->f70 && (((G65C *)lbl_8035B65C)->f8c & 0x10)) b = 1;
        if (b && g->f33c) a = 1;
        pl = a;
    }
}
void fn_8024CAE0(T *t, f32 dt) {
    u32 o;
    int pl = 0;
    int any;
    u32 i;
    Can(t, pl);
    if (t->f1c == 1 && t->f4c > lbl_803663B8 && !(((G65C *)lbl_8035B65C)->f8c & 0x10)) {
        t->f50 -= dt;
        f32 k, v;
        v = *(volatile f32 *)&t->f50;
        k = *(volatile f32 *)&lbl_803663B8;
        if (v <= k) {
            t->f50 = k;
            t->done();
        }
    }
    any = 0;
    if (t->f1c > 1 && t->f1c < 5 && t->f28 == 0) {
        t->f54 += dt;
        for (i = 0, o = 0; i < t->f58; o += 4, i++) {
            if (*(int *)((u8 *)t->f68 + o) == 0 && t->f54 >= *(f32 *)((u8 *)t->f64 + o)) {
                switch (*(int *)((u8 *)t->f60 + o)) {
                case 1: fn_802502BC(*(Snd **)((u8 *)t->f6c + o)); *(int *)((u8 *)t->f68 + o) = 1; break;
                case 2: fn_80250EBC(*(Snd **)((u8 *)t->f6c + o)); *(int *)((u8 *)t->f68 + o) = 1; break;
                case 3: (*(Snd **)((u8 *)t->f6c + o))->play(lbl_803663F8, lbl_803663F8); *(int *)((u8 *)t->f68 + o) = 1; break;
                }
            }
        }
        if (t->f70 == 0 && t->f54 > lbl_803663B8) {
            int nz = fn_80253664(fn_800F8274(lbl_8035B5E4, lbl_803663F0), 0x4c) != 0;
            if (t->f8c) {
                if (nz == 1) t->finish(0);
            } else if (nz != t->f88) t->f8c = 1;
        }
    if (t->f1c == 2) {
        if (t->f9c) {
            Mus *m = lbl_8035B7BC->f28;
            if (fn_80268004(lbl_8035B79C)) {
                if (t->fa4) m->vol(*t->fa4, 0);
                m->start((int)t->f9c, 0, t->fa0);
                t->f1c = 3;
                { f32 r = *lbl_8035B7BC->f20; r = lbl_803663FC * r; fn_8026B5CC(lbl_8035B7BC, r); }
            }
        } else t->f1c = 3;
    }
    if (t->f1c == 3) {
        int busy;
        if (t->f54 >= t->f94) {
            *(f32 *)(t->f98 + 0x6c) = lbl_8035B584;
            fn_801F74D8(t->f98);
            t->f94 = lbl_803663E4;
        }
        busy = 0;
        if (t->f9c) busy = t->fa0->busy();
        lbl_8035B584 -= dt;
        if (!busy) {
          f32 k, v;
          v = lbl_8035B584;
          k = *(volatile f32 *)&lbl_803663B8;
          if (v < k) {
            lbl_8035B584 = k;
            t->f90 = t->f80;
            t->f1c = 4;
          }
        }
        if (pl) Pl(dt);
    }
    if (t->f1c == 4) {
        t->f90 -= dt;
        f32 k, v;
        v = *(volatile f32 *)&t->f90;
        k = *(volatile f32 *)&lbl_803663B8;
        if (v < k) {
            t->f90 = k;
            if (t->f70 == 0 && t->f84 == 0) {
                C800322B0 s;
                int ok;
                char buf[8];
                *(volatile int *)&s.a = 0;
                *(volatile int *)&s.c = 0;
                *(volatile int *)&s.b = 0;
                fn_8024E3DC(lbl_8035B594, t->f14, &ok);
                if (ok) fn_800E8F6C(buf, lbl_80366400, t->f7c);
                else fn_800E8F6C(buf, lbl_80366408, t->f7c);
                s.a = fn_800F9398(*(u8 **)(*(u8 **)(lbl_8035B460 + 0xc) + 0x336c) + 4, buf);
                s.b = -1;
                fn_801089F0(s.a, &s);
                t->f84 = 1;
                fn_80268014(lbl_8035B79C);
            }
            if (t->f70) t->finish(0);
            else {
                for (i = 0, o = 0; i < t->f58; o += 4, i++) {
                    switch (*(int *)((u8 *)t->f60 + o)) { case 1: any = *(int *)(*(u8 **)((u8 *)t->f6c + o) + 0x24); }
                }
                if (!any) t->finish(0);
            }
        }
        if (pl) Pl(dt);
    }
    }
    if (t->f1c == 5) {
        if (t->f9c && !t->fa0->busy()) Stop(t);
        lbl_8035B584 -= dt;
        f32 k, v;
        v = lbl_8035B584;
        k = *(volatile f32 *)&lbl_803663B8;
        if (v < k) {
            lbl_8035B584 = k;
            Stop(t);
        }
        if (pl) Pl(dt);
    }
}
}
