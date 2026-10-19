// auto/text_80163398 fn_80163398 99.4643
extern "C" {
extern u32 lbl_8035AC28;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_8016CA28(int, int);
struct C801632A0 { char pad[0x4c]; C801632A0(); ~C801632A0(); };

void fn_80163398(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    *(u32 *)(param_1 + 0x18) = param_2;
    if (lbl_8035AC28 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC28));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C801632A0[iVar3];
    *(u32 *)(param_1 + 0x1c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x1c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8016CA28((int)(*(u32 *)(param_1 + 0x18)), (int)(param_1));
}
}
