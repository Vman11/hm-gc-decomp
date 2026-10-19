// auto/text_801782F4 fn_801782F4 99.4643
extern "C" {
extern u32 lbl_8035AC68;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_8016CA68(int, int);
struct C801781F8 { char pad[0x28]; C801781F8(); ~C801781F8(); };

void fn_801782F4(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    *(u32 *)(param_1 + 0x18) = param_2;
    if (lbl_8035AC68 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC68));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C801781F8[iVar3];
    *(u32 *)(param_1 + 0x1c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x1c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8016CA68((int)(*(u32 *)(param_1 + 0x18)), (int)(param_1));
}
}
