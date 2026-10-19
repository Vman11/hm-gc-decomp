// auto/text_8015FFA0 fn_8015FFA0 99.6154
extern "C" {
extern u32 lbl_8035A9F4;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8015C6E4 { char pad[0x1c]; C8015C6E4(); ~C8015C6E4(); };

void fn_8015FFA0(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035A9F4 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035A9F4));
    iVar3 = *(u32 *)(param_1 + 0x20);
    uVar2 = (u32) new C8015C6E4[iVar3];
    *(u32 *)(param_1 + 0x30) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x30) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
