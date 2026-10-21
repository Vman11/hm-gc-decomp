// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8035756C[];
extern u8 lbl_8035758C[];
extern volatile u32 lbl_8035B464;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_800F8DD0(void *);
u32 fn_8021616C(u32);
void fn_8023A630(u32);
void fn_8023B530(u32);
void fn_8023B730(u32);
void fn_8023CE8C(u32);
void fn_8023D0FC(u32);
void fn_8023E778(u32, s32);
void fn_8023EC94(u32);
void fn_8023EDE4(u32);
void fn_8023F1D4(u32);
void fn_802724F8(u32);
struct C8023F088 { u8 pad[0x59fc]; C8023F088(); };
struct C8023E874 { u8 pad[0x14]; C8023E874(); };
struct C8023B710 { u8 pad[0x10]; C8023B710(); };
struct VCall_fn_8023D7F8_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_8023D7F8_1 { char vptr_pad[0xc];  virtual void m(s32); };
struct VCall_fn_8023D7F8_2 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8023D7F8_3 { char vptr_pad[0x10];  virtual void m(s32); };
struct VCall_fn_8023D7F8_4 { char vptr_pad[0x59f8];  virtual void m(s32); };
struct VCall_fn_8023D7F8_5 { char vptr_pad[0xc]; virtual void p0(); virtual void m(u32); };

void fn_8023D7F8(u32 *param_1, u32 *param_2) {
    u32 iVar1;

    if (lbl_8035B464 != 0) {
        if (param_1[4] != 0) {
            ((VCall_fn_8023D7F8_0 *)param_1[4])->m();
            iVar1 = param_1[4];
            if (iVar1 != 0) {
                ((VCall_fn_8023D7F8_1 *)iVar1)->m(1);
            }
        }
        if (param_1[1] != 0) {
            ((VCall_fn_8023D7F8_2 *)param_1[1])->m();
            iVar1 = param_1[1];
            if (iVar1 != 0) {
                ((VCall_fn_8023D7F8_3 *)iVar1)->m(1);
            }
        }
        if (*param_1 != 0) {
            fn_8023EDE4(*param_1);
            iVar1 = *param_1;
            if (iVar1 != 0) {
                ((VCall_fn_8023D7F8_4 *)iVar1)->m(1);
            }
        }
        fn_800F8DD0(lbl_8035758C);
        fn_800F8DD0(lbl_8035756C);
        lbl_8035B464 = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
    }
    param_1[3] = param_2[1];
    lbl_8035B464 = param_2[2];
    fn_8023F1D4(lbl_8035B464);
    fn_8023B730(lbl_8035B464);
    fn_8023A630(lbl_8035B464);
    fn_8023CE8C(lbl_8035B464);
    fn_8023D0FC(lbl_8035B464);
    fn_802724F8(lbl_8035B464);
    fn_8023B530(lbl_8035B464);
    if (lbl_8035B464 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B464);
    *param_1 = (u32) new C8023F088();
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_8023EC94(*param_1);
    if (lbl_8035B464 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B464);
    param_1[1] = (u32) new C8023E874();
    fn_800F7E98();
    if (param_1[1] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_8023E778(param_1[1], 0x14);
    param_1[2] = param_2[3];
    if (lbl_8035B464 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B464);
    param_1[4] = (u32) new C8023B710();
    fn_800F7E98();
    if (param_1[4] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    ((VCall_fn_8023D7F8_5 *)param_1[4])->m(fn_8021616C(param_1[3] + 0x354));
}

} /* extern "C" */
