// auto/text_8015EB90 fn_8015EB90 99.4231
extern "C" {
extern u32 lbl_8035AC08;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8015FE00 { char pad[0x64]; C8015FE00(); ~C8015FE00(); };

void fn_8015EB90(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC08 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC08));
    iVar3 = *(u32 *)(param_1 + 8);
    uVar2 = (u32) new C8015FE00[iVar3];
    *(u32 *)(param_1 + 0x4c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x4c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
