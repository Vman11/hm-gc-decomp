// auto/text_801C3DD8 fn_801C3DD8 98.0328
extern "C" {
extern u32 lbl_8035AFDC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct VCall_fn_801C3DD8_0 { char vptr_pad[0x70]; virtual void p0(); virtual void p1(); virtual void m(); };

u32 fn_801C3DD8(u32 *param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (param_1[0x18] != 0) {
        ((VCall_fn_801C3DD8_0 *)(param_1))->m();
    }
    *param_1 = param_2;
    param_1[0x1a] = param_3;
    if (lbl_8035AFDC == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AFDC));
    uVar1 = (u32) new u8[param_3 << 2];
    param_1[0x19] = uVar1;
    fn_800F7E98();
    if (param_1[0x19] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (u32)param_1[0x1a]; uVar3 = uVar3 + 1) {
        *(u32 *)(param_1[0x19] + iVar2) = 0;
        iVar2 = iVar2 + 4;
    }
    param_1[0x18] = 1;
    return 0;
}
}
