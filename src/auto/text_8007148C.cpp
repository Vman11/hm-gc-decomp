// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching (DIFF 10, SDIFF 0): f1c product fixed via temp; left: f3/f4 swap (K33C vs dir.z) in the dot.

extern "C" {

struct W_7148C { u32 v[3]; };
struct V_7148C { f32 x, y, z; V_7148C() {} V_7148C(const V_7148C &o) { volatile u32 *d = (volatile u32 *)this; const volatile u32 *q = (const volatile u32 *)&o; u32 a = q[0], b = q[1], c = q[2]; d[0] = a; d[1] = b; d[2] = c; } };
struct FT_7148C { u8 pad[12]; void (*f12)(void *, V_7148C *); };
extern FT_7148C lbl_803286D0;
struct G334_7148C { u8 pad[8]; void *f8; };
extern G334_7148C *volatile lbl_8035B334;
struct P_7148C { u8 pad[16]; void *f16; u8 pad20[12]; u32 f32; };
struct O_7148C { u32 f0; u8 pad4[44]; P_7148C *f48; u8 pad52[100]; u32 f152; f32 f156; u8 pad160[12]; f32 f172; };
struct E_7148C { u8 pad[0x5c]; char *f5c[2]; char *f64; u8 f68; };
struct S_7148C { O_7148C *f0; u8 pad4[8]; s32 fc; s32 f10; f32 f14; f32 f18; f32 f1c; };
struct T_7148C { u8 pad[0x114]; S_7148C *f114; };
extern s32 lbl_80306690[];
extern V_7148C lbl_803066A8[];
extern E_7148C *lbl_80306708[];
extern V_7148C lbl_80306720[];
extern u32 lbl_8035F348, lbl_8035F34C, lbl_8035F350;
extern f32 lbl_8035F33C, lbl_8035F354, lbl_8035F358, lbl_8035F35C, lbl_8035F360, lbl_8035F364;
O_7148C *fn_8022ECB4(void *, char *);
void fn_80190C98(O_7148C *);
void fn_80196688(O_7148C *);
void fn_8023F5FC(T_7148C *, char *, f32);

static inline f32 dot_7148C(const V_7148C &a, f32 x, f32 y, f32 z) { return a.x * x + a.y * y + a.z * z; }

static inline f32 dot2_7148C(const V_7148C &a, const V_7148C &b) { return a.x * b.x + a.y * b.y + a.z * b.z; }

static inline void act_7148C(O_7148C *ob, V_7148C *p) {
    P_7148C *q = ob->f48;
    if (q) {
        lbl_803286D0.f12(q->f16, p);
        q->f32 |= lbl_8035F348;
        fn_80190C98(ob);
    }
}

static inline void spawn_7148C(char *nm, V_7148C p) {
    O_7148C *ob = fn_8022ECB4(lbl_8035B334->f8, nm);
    if (ob) {
        act_7148C(ob, &p);
        ob->f0 |= lbl_8035F34C;
        ob->f156 = lbl_8035F33C;
        ob->f152 &= ~6;
        ob->f172 = lbl_8035F33C;
        fn_80196688(ob);
        ob->f152 |= lbl_8035F350;
    }
}

static inline void snd_7148C(T_7148C *t, char *nm, V_7148C p) {
    fn_8023F5FC(t, nm, *(volatile f32 *)&lbl_8035F35C);
    if (t->f114) {
        act_7148C(t->f114->f0, &p);
        t->f114->fc = 1;
        t->f114->f10 = 1;
        t->f114->f18 = lbl_8035F33C;
        t->f114->f14 = lbl_8035F360;
        f32 d = t->f114->f18 - t->f114->f14; t->f114->f1c = d * lbl_8035F364;
    }
}

void fn_8007148C(T_7148C *t) {
    s32 *st = lbl_80306690;
    V_7148C *pos = lbl_803066A8;
    E_7148C **ent = lbl_80306708;
    V_7148C *dir = lbl_80306720;
    int i;
    for (i = 0; i < 2; i++) {
        if (st[i] == 1) {
            u32 j;
            for (j = 0; j < ent[i]->f68; j++) {
                char *nm = ent[i]->f5c[(s8)j];
                if (*nm) spawn_7148C(nm, pos[i]);
            }
            char *s = ent[i]->f64;
            if (*s) {
                V_7148C up; up.x = lbl_8035F33C; up.y = lbl_8035F33C; up.z = lbl_8035F354;
                                if ((f32)__fabs(lbl_8035F354 - dot2_7148C(up, dir[i])) < lbl_8035F358) {
                    snd_7148C(t, s, pos[i]);
                }
            }
            return;
        }
    }
}

} /* extern "C" */
