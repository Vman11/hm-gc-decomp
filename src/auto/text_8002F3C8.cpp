#include "common.h"
struct V36 { u8 pad[36]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); };
struct V116 { u8 pad[116]; virtual ~V116(); virtual void v1(); };
struct E0 { virtual void v0(); virtual void v1(); };
struct Mgr { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void rem(V36 *); };
extern "C" {
struct T12 { u32 v[3]; };
struct O { u8 pad0[156]; u8 x156[8]; u8 x164[4]; u8 x168[12]; V116 *x180; u8 pad184[196 - 184]; V36 *x196; u8 pad200[552 - 200]; E0 **arr; int n; };
extern char lbl_8035BBB4[8], lbl_8035BBBC[8], lbl_8035BBC4[8], lbl_8035BBCC[8], lbl_8035B8A8[8], lbl_8035B8B0[8], lbl_8035B8B8[8], lbl_8035B8C0[8], lbl_8035B8C8[8], lbl_8035B8D0[8], lbl_8035B8D8[8], lbl_8035B8E0[8], lbl_8035B8E8[8], lbl_8035B8F0[8], lbl_8035B8F8[8], lbl_8035B900[8], lbl_8035B908[8], lbl_8035B910[8], lbl_8035B918[8], lbl_8035B920[8], lbl_8035B928[8], lbl_8035B930[8], lbl_8035B938[8], lbl_8035B940[8], lbl_8035B948[8], lbl_8035B950[8], lbl_8035BBAC[8], lbl_8035BBE8[8], lbl_8035BBF0[8];
extern char lbl_80294400[];
extern u8 *lbl_8035A1DC;
extern u8 * volatile lbl_8035B65C;
extern T12 lbl_802AF7A0, lbl_802AF7AC;
void *fn_801AA960(void *, const char *, const char *);
void fn_801D6DD8(void *, void *);
void fn_80253AD8(void *, O *, volatile T12 *, const char *);
void fn_8026F1F8(E0 *, int);
void fn_8002F120(O *);
static inline void Look(void *ui, const char *a, const char *b, void *dst) {
    void *x = fn_801AA960(ui, a, b);
    if (x) fn_801D6DD8(x, dst);
}
void fn_8002F3C8(O *o) {
    char *pool = lbl_80294400;
    if (o->x196) {
        o->x196->v3();
        (*(Mgr **)(*(u8 **)(lbl_8035B65C + 4) + 16))->rem(o->x196);
    }
    if (o->x180) o->x180->v1();
    if (o->x180) delete o->x180;
    if (*(void **)(lbl_8035A1DC + 13232)) {
        void *ui;
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035BBAC, pool + 728, o->x156);
        Look(*(void **)(lbl_8035A1DC + 13232), pool + 704, pool + 716, o->x168);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035BBB4, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035BBBC, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035BBC4, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035BBCC, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8A8, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8B0, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8B8, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8C0, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8C8, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8D0, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8D8, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8E0, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8E8, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8F0, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B8F8, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B900, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B908, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B910, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B918, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B920, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B928, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B930, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B938, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B940, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B948, pool + 24, o->x164);
        Look(*(void **)(lbl_8035A1DC + 13232), lbl_8035B950, pool + 24, o->x164);
    }
    {
        T12 t; { s32 z, y, x; T12 *s = &lbl_802AF7A0; x = s->v[0]; y = s->v[1]; z = s->v[2]; t.v[1] = y; t.v[0] = x; *(volatile u32 *)&t.v[2] = z; }
        fn_80253AD8(lbl_8035B65C, o, (volatile T12 *)&t, lbl_8035BBE8);
    }
    {
        T12 t; { s32 z, y, x; T12 *s = &lbl_802AF7AC; x = s->v[0]; y = s->v[1]; z = s->v[2]; t.v[1] = y; t.v[0] = x; *(volatile u32 *)&t.v[2] = z; }
        fn_80253AD8(lbl_8035B65C, o, (volatile T12 *)&t, lbl_8035BBF0);
    }
    if (o->arr) {
        int i;
        for (i = 0; i < o->n; i++) {
            if (o->arr[i] && o->arr[i]) {
                o->arr[i]->v1();
                fn_8026F1F8(o->arr[i], 1);
                o->arr[i] = 0;
            }
        }
        delete[] o->arr;
    }
    fn_8002F120(o);
}
}
