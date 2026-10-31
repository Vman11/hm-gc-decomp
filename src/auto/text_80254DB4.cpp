// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
#define V10 virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
struct O28 { u8 pad[6448];
    V10
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
    virtual void d0(); virtual void reset(); virtual void setColor(f32 *); };
struct O680 { u8 pad[6448]; virtual void a0(); virtual void a1(); virtual void stop(); };
struct O36 { u8 pad[36]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void stop(); };
struct O164 { u8 pad[164]; V10 virtual void b0(); virtual void b1(); virtual void stop(); };
struct O116 { u8 pad[116]; virtual ~O116(); virtual void stop(); };
struct Inner { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void b0(); virtual void b1(); virtual void rel(void *); };
struct O24 { u8 pad[48]; V10 virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual Inner *get(); };
struct Sc { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void rem36(O36 *); virtual void s27(); virtual void rem164(O164 *); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void rem680(O680 *); };
struct P4 { u8 pad[16]; Sc *sc; u8 pad2[4]; O24 *o24; };
struct M65C { u8 pad[4]; P4 *p4; };
struct G {
    u8 pad[4]; P4 *p4; u8 pad1[20]; O28 *p28; u8 pad2[8]; O36 *p40; O36 *p44; u8 pad3[64]; void *p112; void *p116;
    u8 pad4[536]; void *f656; void *f660; void *f664; O116 *p668; O164 *p672; O36 *p676; O680 *p680; O680 *p684; u8 pad5[68]; void *p756; void *p760; void *p764;
};
struct B334 { u8 pad[8]; void *f8; };
extern "C" {
extern void *lbl_8035B488;
extern f32 lbl_803665B8;
extern f32 lbl_803665A8;
extern void *lbl_8035B5E4;
extern char lbl_803665D0[8];
extern char lbl_803665D8[6];
extern char lbl_803665E0[7];
extern u8 lbl_8035784C[];
extern u8 lbl_803578F0[];
extern B334 *lbl_8035B334;
extern M65C *lbl_8035B65C;
void fn_8023E8EC(void *);
void fn_80226894(void *);
void fn_80226984(void *, s32);
void fn_802721A0(void *);
void fn_802722EC(void *, s32);
void fn_802514B8(void *, char *, s32);
void fn_802523E0(void *);
void fn_8025240C(void *, s32);
void fn_80273CEC(void *);
void fn_80273D38(void *, s32);
void fn_80273974(void *);
void fn_802739A0(void *, s32);
void fn_8018B58C(u8 *);
void fn_800FCFA8(u8 *);
void fn_8022EAB4(void *);
void fn_80254CE4(G *);

void fn_80254DB4(G *g) {
    fn_8023E8EC(lbl_8035B488);
    if (g->p28) {
        f32 c[1];
        g->p28->reset();
        c[0] = lbl_803665B8;
        c[1] = lbl_803665B8;
        c[2] = lbl_803665B8;
        c[3] = lbl_803665A8;
        g->p28->setColor(c);
    }
    if (g->p676) {
        g->p676->stop();
        g->p4->sc->rem36(g->p676);
    }
    if (g->p672) g->p672->stop();
    if (g->p668) g->p668->stop();
    if (g->p672) g->p4->sc->rem164(g->p672);
    if (g->p668) delete g->p668;
    if (g->p680) {
        g->p680->stop();
        lbl_8035B65C->p4->sc->rem680(g->p680);
    }
    if (g->p684) {
        g->p684->stop();
        lbl_8035B65C->p4->sc->rem680(g->p684);
    }
    if (g->p112) {
        fn_80226894(g->p112);
        fn_80226984(g->p112, 1);
    }
    if (g->p116) {
        fn_802721A0(g->p116);
        fn_802722EC(g->p116, 1);
    }
    {
        void *s = lbl_8035B5E4;
        if (g->p756) {
            fn_802514B8(s, lbl_803665D0, 0);
            fn_802523E0(g->p756);
            fn_8025240C(g->p756, 1);
        }
        if (g->p760) {
            fn_802514B8(s, lbl_803665D8, 0);
            fn_80273CEC(g->p760);
            fn_80273D38(g->p760, 1);
        }
        if (g->p764) {
            fn_802514B8(s, lbl_803665E0, 0);
            fn_80273974(g->p764);
            fn_802739A0(g->p764, 1);
        }
    }
    if (g->p4) {
        g->p4->o24->get()->rel(g->f664);
        g->p4->o24->get()->rel(g->f660);
        g->p4->o24->get()->rel(g->f656);
    }
    if (g->p40) {
        g->p40->stop();
        g->p4->sc->rem36(g->p40);
    }
    if (g->p44) {
        g->p44->stop();
        g->p4->sc->rem36(g->p44);
    }
    fn_8018B58C(lbl_8035784C);
    fn_800FCFA8(lbl_803578F0);
    fn_8022EAB4(lbl_8035B334->f8);
    fn_80254CE4(g);
}
}

} /* extern "C" */
