// auto/text_801715D0 fn_801715D0 99.4231
extern "C" {
extern u32 lbl_8035AC50;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80155460 { char pad[0x50]; C80155460(); ~C80155460(); };

void fn_801715D0(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC50 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC50));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C80155460[iVar3];
    *(u32 *)(param_1 + 0x30) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x30) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
