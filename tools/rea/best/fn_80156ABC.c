// auto/text_80156ABC fn_80156ABC 99.6154
extern "C" {
extern u32 lbl_8035ABC0;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8015749C { char pad[0xd0]; C8015749C(); ~C8015749C(); };

void fn_80156ABC(u32 param_1) {
    u16 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (lbl_8035ABC0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ABC0));
    uVar1 = *(u16 *)(param_1 + 0x9a);
    uVar3 = (u32) new C8015749C[uVar1];
    *(u32 *)(param_1 + 0xcc) = uVar3;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0xcc) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
