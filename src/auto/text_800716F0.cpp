#include "common.h"

extern "C" {

}
struct V3 { f32 x, y, z; V3() {} V3(const V3 &o) { u32 a = *(volatile u32 *)&o.x, b = *(volatile u32 *)&o.y, c = *(volatile u32 *)&o.z; *(volatile u32 *)&x = a; *(volatile u32 *)&y = b; *(volatile u32 *)&z = c; } };
struct K8 { u32 a, b; };
struct Gt { virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
    virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9(); virtual void g10(); virtual void g11(); virtual void g12();
    virtual void getpos(V3 *, int, int, int, int); };
struct Dt { u8 pad[0x5c]; char *names[2]; char *str; u8 count; };
struct Gh { u8 pad[0x338]; Dt *d; };
struct Ob { u32 fl; u8 pad4[0x2c]; u8 *f30; u8 pad34[0x64]; u32 f98; f32 f9c; u8 pada0[0xc]; f32 fac; };
struct Sp { Ob *o; u8 pad4[8]; s32 fc; s32 f10; f32 f14; f32 f18; f32 f1c; };
struct A8 { u8 pad[0xa8]; void *fa8; };
struct E0 { u8 pad[0xa0]; A8 *fa0; };
struct T { u8 pad[0xe0]; E0 *fe0; u8 pade4[0x30]; Sp *f114; Gh *f118; };
struct M10 { u8 pad[0x10]; void *f10; };
extern "C" {
extern f32 lbl_8035F33C, lbl_8035F360, lbl_8035F364;
extern volatile f32 lbl_8035F384, lbl_8035F35C;
extern u32 lbl_8035F348, lbl_8035F34C, lbl_8035F350;
extern s32 lbl_8035F330, lbl_8035F334;
extern char lbl_8035F368[4], lbl_8035F36C[8], lbl_8035F374[8], lbl_8035F37C[8], lbl_8035F388[8], lbl_8035F390[8], lbl_8035F398[8], lbl_8035F3A0[8];
extern u8 lbl_803286D0[];
extern u8 *volatile lbl_8035B334;
extern M10 *lbl_8035B754;
extern s32 lbl_80306690[];
extern char *lbl_80306708[];
extern V3 lbl_803066A8[];
int fn_800F6CD0(const char *, const char *);
void fn_800F6E88(K8 *, const char *);
void fn_800F6FBC(const char *, K8 *);
Ob *fn_8022ECB4(void *, K8 *);
void *fn_8010511C(void *, const char *);
void fn_80107244(void *, V3 *);
void fn_80190C98(Ob *);
void fn_80196688(Ob *);
void fn_8023F5FC(T *, const char *, f32);
void fn_800F806C(void *, char *, K8 *);

static inline u8 *Q(Ob *o) { return o->f30; }
static inline void SetPos(Ob *o, V3 *v) {
    u8 *q = Q(o);
    if (q != 0) {
        (*(void (**)(void *, V3 *))(lbl_803286D0 + 0xC))(*(void **)(q + 0x10), v);
        *(u32 *)(q + 0x20) |= lbl_8035F348;
        fn_80190C98(o);
    }
}
static inline void Reset(Ob *o) {
    o->fl |= lbl_8035F34C;
    o->f9c = lbl_8035F33C;
    o->f98 &= ~6;
    o->fac = lbl_8035F33C;
    fn_80196688(o);
    o->f98 |= lbl_8035F350;
}
static inline void Place(K8 *k, V3 v) {
    Ob *o = fn_8022ECB4(*(void **)(lbl_8035B334 + 8), k);
    if (o) {
        SetPos(o, &v);
        Reset(o);
    }
}
static inline void Spawn(T *t, const char *nm, V3 v, volatile f32 *k) {
    fn_8023F5FC(t, nm, *k);
    if (t->f114) {
        SetPos(t->f114->o, &v);
        t->f114->fc = 1;
        t->f114->f10 = 1;
        t->f114->f18 = lbl_8035F33C;
        t->f114->f14 = lbl_8035F360;
        { f32 dd = t->f114->f18 - t->f114->f14; t->f114->f1c = dd * lbl_8035F364; }
    }
}
static inline void PlaceM(T *t, K8 *k, V3 v, s32 mode) {
    Ob *o = fn_8022ECB4(*(void **)(lbl_8035B334 + 8), k);
    if (o) {
        if (mode == 0 || mode == 1) {
            V3 w;
            void *m;
            if (mode == 0) m = fn_8010511C(t->fe0->fa0->fa8, lbl_8035F374);
            else m = fn_8010511C(t->fe0->fa0->fa8, lbl_8035F37C);
            fn_80107244(m, &w);
            SetPos(o, &w);
        } else {
            SetPos(o, &v);
        }
        Reset(o);
    }
}

void fn_800716F0(T *t, s32 mode) {
    V3 pos;
    Dt *d;
    pos.x = lbl_8035F33C;
    pos.y = lbl_8035F33C;
    pos.z = lbl_8035F33C;
    d = t->f118->d;
    if (d) {
        u32 i;
        for (i = 0; i < d->count; i++) {
            K8 key;
            char *nm = d->names[(s8)i];
            if (nm && fn_800F6CD0(nm, lbl_8035F368) == 0) fn_800F6E88(&key, nm);
            else fn_800F6FBC(lbl_8035F36C, &key);
            ((Gt *)t->f118)->getpos(&pos, 0, 0, 0, 0);
            PlaceM(t, &key, pos, mode);
        }
        if (*d->str) Spawn(t, d->str, pos, &lbl_8035F384);
    }
    {
        s32 *tbl = lbl_80306690;
        if (tbl) {
            s32 ids[2];
            s32 *p;
            s32 k;
            ids[0] = lbl_8035F330;
            ids[1] = lbl_8035F334;
            for (k = 0, p = ids; k < 2; k++, p++) {
                if (tbl[*p] == 1) {
                    char **nt = lbl_80306708;
                    if (nt && nt[*p]) {
                        V3 *vt = lbl_803066A8;
                        if (vt) {
                            V3 pos2;
                            K8 buf;
                            K8 key;
                            K8 key2;
                            ((Gt *)t->f118)->getpos(&pos2, 0, 0, 0, 0);
                            fn_800F806C(lbl_8035B754->f10, nt[*p], &buf);
                            if (fn_800F6CD0((char *)&buf, lbl_8035F388) != 0) {
                                fn_800F6FBC(lbl_8035F390, &key);
                                Place(&key, vt[*p]);
                                fn_800F6FBC(lbl_8035F398, &key);
                                Place(&key, vt[*p]);
                                fn_800F6FBC(lbl_8035F3A0, &key2);
                                Spawn(t, (char *)&key2, vt[*p], &lbl_8035F35C);
                            }
                        }
                    }
                }
            }
        }
    }
}

} /* extern "C" */
