// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct NN { u8 pad[120]; void *m120; u8 pad124[28]; u32 fl; f32 f156; u8 pad160[12]; f32 f172; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void s23(); virtual void s24();
    u8 pad4[152];
    NN *n156;
};
struct Q;
struct QO { u8 pad[4]; virtual void v0(); virtual void s1(Q *); };
struct Q { u32 fl; f32 f4; u8 pad8[4]; QO *o12; u8 pad16[32]; u32 f48; };
struct P {
    u8 pad0[96];
    s32 st96;
    u8 pad100[108];
    u32 *t208;
    u8 pad212[12];
    A *a224;
    u8 pad228[96];
    s32 *s324;
    s32 *s328;
    s32 *s332;
    s32 *s336;
    u8 pad340[4];
    s32 *s344;
    u8 pad348[64];
    s32 *s412;
    u8 pad416[16];
    s32 *s432;
    u8 pad436[120];
    s32 i556;
    u8 pad560[12];
    u32 u572;
    u8 pad576[4];
    u32 *m580;
    u32 m584;
};
extern u32 lbl_8035E194, lbl_8035E1B8;
extern f32 lbl_8035E198, lbl_8035E19C, lbl_8035E1A0;
extern char lbl_802967F0[];
void fn_8022B618(A *);
void fn_8022A7A8(A *);
void fn_8022BBF4(A *);
void fn_8022AD0C(A *);
void fn_80107F3C(void *, V3 *);
void fn_80196688(NN *);
void fn_80241588(P *, s32, int, f32);
Q *fn_8022D694(A *);
void fn_80241DD0(P *, char *, int, int, int, int);

static inline void on(Q *q) { if (q->f48 & 1) { q->fl |= lbl_8035E1B8; if (q->o12) q->o12->s1(q); } }
void fn_80056FE0(P *p, s32 st) {
    s32 b, c;
    if (st == 0) {
        s32 a = *p->s328;
        b = *p->s332;
        c = *p->s336;
        if (a) {
            s32 s = *p->s432;
            if (s) {
                if (s) p->a224->n156->fl |= lbl_8035E194;
            } else if (*p->s324) {
                p->a224->s24();
            }
            *p->m580 &= ~p->m584;
        }
        if (b) fn_8022B618(p->a224);
        if (c) fn_8022A7A8(p->a224);
        if (p->u572 && *p->s412) {
            V3 v;
            void *m;
            v.x = lbl_8035E1A0;
            v.y = lbl_8035E1A0;
            v.z = lbl_8035E1A0;
            m = p->a224->n156->m120;
            if (m) fn_80107F3C(m, &v);
        }
    } else {
        s32 a = *p->s328;
        b = *p->s332;
        c = *p->s336;
        if (a) {
            s32 s = *p->s432;
            if (s) {
                if (p->st96 != 4 && s) {
                    NN *n = p->a224->n156;
                    n->f156 = lbl_8035E198;
                    n->fl &= ~6;
                    n->f172 = lbl_8035E198;
                    fn_80196688(n);
                    n->fl &= ~8;
                }
            } else if (*p->s324) {
                p->a224->s23();
            }
            *p->m580 |= p->m584;
        }
        if (b) fn_8022BBF4(p->a224);
        if (c) fn_8022AD0C(p->a224);
    }
    if (p->t208[st]) {
        Q *q;
        fn_80241588(p, st, 0, lbl_8035E19C);
        q = fn_8022D694(p->a224);
        on(q);
    } else {
        if (*p->s344) p->i556 = 0;
        if (fn_8022D694(p->a224)) {
            Q *q = fn_8022D694(p->a224);
            if (q->f48 & 1) q->fl &= ~2;
            q = fn_8022D694(p->a224);
            if (q->f48 & 1) {
                q->f4 = lbl_8035E198;
                q->fl &= ~0x18;
            }
        }
        fn_80241DD0(p, lbl_802967F0, 0, 0, 0, 0);
    }
}

} /* extern "C" */
