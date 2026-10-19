// auto/text_8018FB34 fn_8018FB34 95.7162
extern "C" {
extern u32 lbl_8035AE60;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void fn_8018B2A0(int, int, int);
void __ct__9C8018B484Fv(int);
void fn_8018F68C(int, int);
void fn_80191F88(int, int, int);
struct VCall_fn_8018FB34_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

void fn_8018FB34(u32 *param_1, u32 param_2, u32 *param_3) {
    u32 uVar1;

    if ((*param_1 & 1) != 0) {
        ((VCall_fn_8018FB34_0 *)(param_1))->m();
    }
    fn_80191F88((int)(param_1), (int)(param_2), (int)(param_3));
    *param_1 = *param_1 | *param_3 & 0x800;
    if (*(u32 *)(param_3[0x1b] + 4) == 0) {
        if (lbl_8035AE60 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035AE60));
        uVar1 = __nw__FUl((int)(0x34));
        if (uVar1 != 0) {
            __ct__9C8018B484Fv((int)(uVar1));
        }
        param_1[0x1b] = uVar1;
        fn_800F7E98();
        if (param_1[0x1b] == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
        fn_8018B2A0((int)(param_1[0x1b]), (int)(*(u32 *)(param_2 + 4)), (int)(param_3[0x1b]));
        param_1[0x1c] = 1;
    }
    else {
        param_1[0x1b] = param_3[0x1b];
        fn_8018F68C((int)(param_1), (int)(param_1[0x1b]));
    }
}
}
