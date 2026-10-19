// auto/text_80200544 fn_80200544 97.1622
extern "C" {
extern u32 lbl_8035B168;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801FDDE4 { char pad[0x30c]; C801FDDE4(int); };

u32 fn_80200544(u32 param_1) {
    u32 iVar1;

    if (lbl_8035B168 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B168));
    iVar1 = (u32) new C801FDDE4((u32)(param_1));
    fn_800F7E98();
    if (iVar1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar1;
}
}
