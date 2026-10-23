// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_O { u8 pad[0x258]; f32 vol; };
struct wA_A { u8 pad[0x38]; s32 *s1; s32 *s0; u8 pad40[0x34]; s32 *a; s32 *b; s32 *c; s32 *d; };
struct wA_V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void play(const char *s, wA_O *o, s32 a, s32 b, s32 c); };
extern void *lbl_8035B374;
extern const char lbl_8035E71C[8];
extern f32 *lbl_80357B3C[5];
extern f32 *lbl_80357B28[5];
extern const f32 lbl_8035E70C;
extern char lbl_80297760[];
wA_O *fn_80233460(void *a, const char *b, const char *c);

inline f32 wA_lk(s32 **pp, f32 **tbl) {
    if (*pp != 0 && tbl != 0) {
        if (**pp > 4) {
            **pp = 4;
        }
        if (tbl[**pp] != 0) {
            return *tbl[**pp];
        }
    }
    return lbl_8035E70C;
}
inline s32 wA_get(s32 *x) { return x != 0 ? *x : 0; }

inline void wA_snd(u8 *p, wA_A *a, f32 vol, s32 off) {
    void *r = fn_80233460(lbl_8035B374, lbl_8035E71C, lbl_8035E71C);
    if (r != 0) {
        wA_O *o = (wA_O *)r;
        f32 saved = o->vol;
        if (*(wA_A **)(*(u8 **)(p + 0xfc) + off) == a) {
            o->vol = vol * wA_lk(&a->s0, lbl_80357B3C);
        } else {
            o->vol = wA_lk(&a->s1, lbl_80357B28);
        }
        (*(wA_V **)(p + 0x9c))->play(lbl_80297760, o, 0, 0, 0);
        o->vol = saved;
    }
}

void fn_80065740(u8 *p, wA_A *a, wA_A *b, f32 vol) {
    if (a != 0) {
        wA_snd(p, a, vol, 0x5dc);
        if (wA_get(a->c) == 0 && wA_get(a->a) == 0 && wA_get(a->d) == 0 && wA_get(a->b) == 0) {
            *(wA_A **)(*(u8 **)(p + 0xfc) + 0x5dc) = a;
        } else {
            *(wA_A **)(*(u8 **)(p + 0xfc) + 0x5dc) = 0;
        }
    } else {
        *(wA_A **)(*(u8 **)(p + 0xfc) + 0x5dc) = 0;
    }
    if (b != 0) {
        wA_snd(p, b, vol, 0x5e0);
        if (wA_get(b->c) == 0 && wA_get(b->a) == 0 && wA_get(b->d) == 0 && wA_get(b->b) == 0) {
            *(wA_A **)(*(u8 **)(p + 0xfc) + 0x5e0) = b;
        } else {
            *(wA_A **)(*(u8 **)(p + 0xfc) + 0x5dc) = 0;
        }
    } else {
        *(wA_A **)(*(u8 **)(p + 0xfc) + 0x5dc) = 0;
    }
}

} /* extern "C" */
