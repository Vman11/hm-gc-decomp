// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad[16]; u32 n; } C0;
typedef struct { C0 *f0; } CN;
struct VO {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17();
    virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22();
    virtual void on(); virtual void off();
};
extern char lbl_802967A8[];
extern void *lbl_8035A0A4;
extern void *lbl_8035B530;
extern char lbl_8035E060[4];
extern u32 lbl_8035E194;
extern f32 lbl_8035E198, lbl_8035E1A0;
s32 fn_8003C778(void *, void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
CN *fn_8023F4A0(void *, char *, char *, char *, s32);
void fn_80196688(void *);
void fn_8022BBF4(void *);
void fn_8022AD0C(void *);
void fn_8022B618(void *);
void fn_8022A7A8(void *);
void fn_80107F3C(void *, V3 *);
void fn_802494A4(void *, s32);

#define F(T, o) (*(T *)(p + (o)))
static inline void sf(u8 *p, s32 on, u32 f) { if (on) *F(u32 *, 580) |= f; else *F(u32 *, 580) &= ~f; }
#pragma opt_propagation off
static inline void deact(u8 *p) {
    s32 x = *F(s32 *, 432);
    s32 a = *F(s32 *, 332);
    s32 c = *F(s32 *, 336);
    if (x != 0) {
        if (x != 0) *(u32 *)(*(u8 **)(F(u8 *, 224) + 156) + 152) |= lbl_8035E194;
    } else if (*F(s32 *, 324) != 0) {
        F(VO *, 224)->off();
    }
    *F(u32 *, 580) &= ~F(u32, 584);
    if (a != 0) fn_8022B618(F(void *, 224));
    if (c != 0) fn_8022A7A8(F(void *, 224));
    if (F(void *, 572) != 0 && *F(s32 *, 412) != 0) {
        V3 v;
        void *q;
        v.x = lbl_8035E1A0; v.y = lbl_8035E1A0; v.z = lbl_8035E1A0;
        q = *(void **)(*(u8 **)(F(u8 *, 224) + 156) + 120);
        if (q != 0) fn_80107F3C(q, &v);
    }
}
void fn_80055EFC(u8 *p, s32 b) {
    char *str = lbl_802967A8;
    s32 r = 0;
    u8 *o;
    s32 c;
    s32 a;
    if (F(void *, 580) != 0 && F(s32 *, 284) != 0 && *F(s32 *, 284) != 0 && F(s32, 576) != 0) F(void *, 580) = 0;
    F(s32, 576) = 0;
    if (*F(s32 *, 284) != 0 && *(s32 *)(F(u8 *, 224) + 276) == 0) {
        F(s32, 576) = 1;
        r = fn_8003C778(lbl_8035A0A4, F(void *, 224), p + 580);
    } else if (F(void *, 580) == 0) {
        if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        F(void *, 580) = __nw__FUl(4);
        fn_800F7E98();
        if (F(void *, 580) == 0) fn_800604C4(-4, 0, 0, 0);
    }
    if (r == 0) {
        bool c;
        sf(p, *F(s32 *, 288), F(u32, 584));
        c = *F(s32 *, 292) != 0 && b == 0;
        sf(p, c, F(u32, 588));
        sf(p, *F(s32 *, 296), F(u32, 592));
    }
    if (*F(s32 *, 364) != 0) *(u32 *)(F(u8 *, 224) + 180) |= 4;
    F(u32, 540) = F(u32, 280);
    F(u32, 544) = F(u32, 280);
    F(CN *, 440) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 276, 1);
    if (F(CN *, 440)->f0->n < F(u32, 540)) F(u32, 540) = F(CN *, 440)->f0->n;
    F(CN *, 444) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 296, 1);
    if (F(CN *, 444)->f0->n < F(u32, 540)) F(u32, 540) = F(CN *, 444)->f0->n;
    F(CN *, 448) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 312, 1);
    if (F(CN *, 448)->f0->n < F(u32, 544)) F(u32, 544) = F(CN *, 448)->f0->n;
    F(CN *, 452) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 332, 1);
    if (F(CN *, 452)->f0->n < F(u32, 544)) F(u32, 544) = F(CN *, 452)->f0->n;
    F(CN *, 456) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 352, 1);
    if (F(CN *, 456)->f0->n < F(u32, 540)) F(u32, 540) = F(CN *, 456)->f0->n;
    F(CN *, 460) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 376, 1);
    if (F(CN *, 460)->f0->n < F(u32, 544)) F(u32, 544) = F(CN *, 460)->f0->n;
    F(u32, 536) = F(u32, 540);
    if (F(u32, 544) > F(u32, 536)) F(u32, 536) = F(u32, 544);
    F(CN *, 464) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 404, 1);
    F(CN *, 472) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 424, 1);
    F(CN *, 476) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 436, 1);
    F(CN *, 480) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 452, 0);
    F(CN *, 484) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 468, 1);
    F(CN *, 488) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 480, 1);
    F(CN *, 492) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 492, 1);
    F(u32, 496) = F(CN *, 492)->f0->n;
    F(CN *, 468) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 504, 1);
    F(CN *, 152) = fn_8023F4A0(p, lbl_8035E060, lbl_8035E060, str + 504, 0);
    if (*F(u32 *, 580) & F(u32, 584)) {
        s32 x = *F(s32 *, 432);
        a = *F(s32 *, 332);
        c = *F(s32 *, 336);
        if (x != 0) {
            if (F(s32, 96) != 4 && x != 0) {
                o = *(u8 **)(F(u8 *, 224) + 156);
                *(f32 *)(o + 156) = lbl_8035E198;
                *(u32 *)(o + 152) &= ~6;
                *(f32 *)(o + 172) = lbl_8035E198;
                fn_80196688(o);
                *(u32 *)(o + 152) &= ~8;
            }
        } else if (*F(s32 *, 324) != 0) {
            F(VO *, 224)->on();
        }
        *F(u32 *, 580) |= F(u32, 584);
        if (a != 0) fn_8022BBF4(F(void *, 224));
        if (c != 0) fn_8022AD0C(F(void *, 224));
    } else {
        deact(p);
    }
    if (*F(u32 *, 580) & F(u32, 588)) fn_802494A4(p, 1);
    else fn_802494A4(p, 3);
}
#pragma opt_propagation reset

} /* extern "C" */
