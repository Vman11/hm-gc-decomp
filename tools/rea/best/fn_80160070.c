// auto/text_80160070 fn_80160070 99.6154
extern "C" {
extern u32 lbl_8035AC18;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801768A4 { char pad[0x68]; C801768A4(); ~C801768A4(); };

void fn_80160070(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC18 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC18));
    iVar3 = *(u32 *)(param_1 + 0x1c);
    uVar2 = (u32) new C801768A4[iVar3];
    *(u32 *)(param_1 + 0x2c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x2c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
