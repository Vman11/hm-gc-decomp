// auto/text_8015ED30 fn_8015ED30 99.4231
extern "C" {
extern u32 lbl_8035AC08;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80170688 { char pad[0x70]; C80170688(); ~C80170688(); };

void fn_8015ED30(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC08 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC08));
    iVar3 = *(u32 *)(param_1 + 0x34);
    uVar2 = (u32) new C80170688[iVar3];
    *(u32 *)(param_1 + 0x44) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x44) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
