#include "common.h"
extern "C" {
extern volatile f32 lbl_8035B018;
extern f32 lbl_8035B990;
extern const f32 lbl_8035B99C;
extern volatile s32 lbl_8035B65C;
extern char lbl_8035B8A0[0x6];
extern char lbl_8035B994[0x6];
void fn_8002B42C(s32, s32);
struct VCall_fn_8002AFBC_0;
VCall_fn_8002AFBC_0 *fn_801AA960(u32, char *, char *);
void fn_801C2368(u32, VCall_fn_8002AFBC_0 *, s32);
struct VCall_fn_8002AFBC_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void m(s32, s32); };

void fn_8002AFBC(s32 param_1) {
    VCall_fn_8002AFBC_0 *iVar1;
    VCall_fn_8002AFBC_0 *iVar2;

    fn_8002B42C(param_1, 0);
    **(u32 **)(param_1 + 0xec) = **(u32 **)(param_1 + 0xec) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x104) = **(u32 **)(param_1 + 0x104) & 0xfffff7ff;
    **(u32 **)(param_1 + 0xf0) = **(u32 **)(param_1 + 0xf0) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x108) = **(u32 **)(param_1 + 0x108) & 0xfffff7ff;
    **(u32 **)(param_1 + 0xf4) = **(u32 **)(param_1 + 0xf4) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x10c) = **(u32 **)(param_1 + 0x10c) & 0xfffff7ff;
    **(u32 **)(param_1 + 0xf8) = **(u32 **)(param_1 + 0xf8) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x110) = **(u32 **)(param_1 + 0x110) & 0xfffff7ff;
    **(u32 **)(param_1 + 0xfc) = **(u32 **)(param_1 + 0xfc) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x114) = **(u32 **)(param_1 + 0x114) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x100) = **(u32 **)(param_1 + 0x100) & 0xfffff7ff;
    **(u32 **)(param_1 + 0x118) = **(u32 **)(param_1 + 0x118) & 0xfffff7ff;
    lbl_8035B018 = lbl_8035B990;
    if (*(s32 *)(lbl_8035B65C + 0xb8c) != 0) {
        *(u32 *)(param_1 + 0x178) = 0;
    }
    else {
        *(u32 *)(param_1 + 0x178) = 1;
    }
    iVar2 = fn_801AA960(*(u32 *)(*(s32 *)(lbl_8035B65C + 0x24) + 0x33b0), lbl_8035B994, lbl_8035B8A0); /* "PAUSE" */ /* "Pause" */
    iVar1 = *(VCall_fn_8002AFBC_0 **)(*(s32 *)(lbl_8035B65C + 0x78) + 4);
    if (iVar2 != iVar1) {
        *(VCall_fn_8002AFBC_0 **)(param_1 + 0xcc) = iVar1;
    }
    iVar2->m(0, 1);
    fn_801C2368(*(u32 *)(lbl_8035B65C + 0x78), iVar2, 1);
    *(f32 *)(param_1 + 0x264) = lbl_8035B99C;
}
}
