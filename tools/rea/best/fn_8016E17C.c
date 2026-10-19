// auto/text_8016E17C fn_8016E17C 99.4231
extern "C" {
extern u32 lbl_8035AC48;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8016E2AC { char pad[0x38]; C8016E2AC(); ~C8016E2AC(); };

void fn_8016E17C(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC48 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC48));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C8016E2AC[iVar3];
    *(u32 *)(param_1 + 0x18) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x18) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
