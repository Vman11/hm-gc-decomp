// auto/text_80252B0C fn_80252B0C 97.8750
extern "C" {
extern u32 lbl_8035B620;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80251C08(int, int, int, int, int);
void fn_802522D4(int);
void fn_80252ACC(int);
void fn_802538F8(int);
struct C80252244 { char pad[0x90]; C80252244(void); };
struct VCall_fn_80252B0C_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80252B0C_1 { char vptr_pad[0x10];  virtual void m(int); };

void fn_80252B0C(u32 *param_1, u32 param_2) {
    u32 iVar1;

    if (param_1[2] != 0) {
        if (*param_1 != 0) {
            ((VCall_fn_80252B0C_0 *)(*param_1))->m();
            iVar1 = *param_1;
            if (iVar1 != 0) {
                ((VCall_fn_80252B0C_1 *)(iVar1))->m((u32)(1));
            }
        }
        param_1[2] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    param_1[2] = 1;
    param_1[1] = *(u32 *)(param_2 + 4);
    lbl_8035B620 = *(u32 *)(param_2 + 8);
    fn_802522D4((int)(lbl_8035B620));
    fn_80252ACC((int)(lbl_8035B620));
    fn_802538F8((int)(lbl_8035B620));
    if (lbl_8035B620 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B620));
    iVar1 = (u32) new C80252244();
    *param_1 = iVar1;
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_80251C08((int)(*param_1), (int)(param_1[1]), (int)(*(u32 *)(param_2 + 0x10)), (int)(*(u32 *)(param_2 + 0x14)), (int)(*(u32 *)(param_2 + 0xc)));
}
}
