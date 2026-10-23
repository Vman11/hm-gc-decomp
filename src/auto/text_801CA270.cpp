// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void v5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void v24(A*); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(A*); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void v76(int); virtual void s77(); virtual void s78(); virtual void v79(); virtual f32 v80(u32); virtual void v81(); virtual void s82(); virtual void s83(); virtual void v84(); virtual void v85(); virtual void v86(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern s8 lbl_8035B004;
extern int lbl_8035B000;
extern void *lbl_8035AFCC;
extern char lbl_802A28F0[];
extern char lbl_802A293C[];
void fn_80060568(char *, int, int, int);
void fn_800604C4(int, int, int, int);
u8 *fn_8010EE60(void *, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801DB744(A *);
void fn_801C4B28(A *, int);
int fn_801CA270(A *p) {
    u32 i, j;
    if (!lbl_8035B004) { lbl_8035B000 = 1; lbl_8035B004 = 1; }
    if (lbl_8035B000) {
        if (!F(p,0x164,void*)) fn_80060568(lbl_802A28F0, 0, 0, 0);
        if (!F(p,0x168,void*)) fn_80060568(lbl_802A293C, 0, 0, 0);
        F(p,0x1ac,u32) = F(F(fn_8010EE60((u8*)p + 0x180, 0),4,u8*),0x20,u32);
        if (!F(p,0x1c8,f32*)) {
            if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AFCC);
            F(p,0x1c8,f32*) = new f32[F(p,0x1ac,u32)];
            fn_800F7E98();
            if (!F(p,0x1c8,f32*)) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < F(p,0x1ac,u32); i++) F(p,0x1c8,f32*)[i] = p->v80(i);
        }
        if (F(p,0x170,A*)) p->v69(F(p,0x170,A*));
        if (F(p,0x174,A*)) p->v69(F(p,0x174,A*));
        lbl_8035B000 = 0;
    }
    fn_801DB744(p);
    p->v79();
    if (F(p,0x17c,A**)) {
        for (j = 0; j < F(p,0x1f0,u32); j++) {
            if (F(p,0x17c,A**)[j]) {
                F(p,0x17c,A**)[j]->v5();
                F(p,0x17c,A**)[j]->v24(p);
                F(F(p,0x17c,A**)[j],0x168,int) = 0;
                F(p,0x17c,A**)[j]->v76(1);
            }
        }
    }
    p->v81();
    p->v86();
    p->v85();
    if (F(p,0x170,A*)) fn_801C4B28(F(p,0x170,A*), 0);
    if (F(p,0x174,A*)) fn_801C4B28(F(p,0x174,A*), 0);
    p->v84();
    if (F(p,0x170,A*)) p->v69(F(p,0x170,A*));
    if (F(p,0x174,A*)) p->v69(F(p,0x174,A*));
    return 0;
}

} /* extern "C" */
