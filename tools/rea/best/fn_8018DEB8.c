// auto/text_8018DEB8 fn_8018DEB8 96.5246
extern "C" {
extern u32 lbl_8035AEA8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_801A0DE8(void);
struct C80190308 { char pad[0x20]; C80190308(); };

void fn_8018DEB8(u32 param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;
    u32 iVar4;

    fn_801A0DE8();
    uVar1 = *(u32 *)(param_3 + 0x4c);
    *(u32 *)(param_1 + 0x90) = *(u32 *)(param_3 + 0x48);
    *(u32 *)(param_1 + 0xa4) = uVar1 & 0xffff;
    if (*(u32 *)(param_1 + 0xa4) != 0) {
        if (lbl_8035AEA8 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035AEA8));
        iVar4 = *(u32 *)(param_1 + 0xa4);
        uVar3 = (u32) new C80190308[iVar4];
        *(u32 *)(param_1 + 0xa0) = uVar3;
        fn_800F7E98();
        if (*(u32 *)(param_1 + 0xa0) == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
    }
}
}
