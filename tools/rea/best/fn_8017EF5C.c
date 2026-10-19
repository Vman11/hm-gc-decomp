// auto/text_8017EF5C fn_8017EF5C 95.6539
extern "C" {
extern u8 lbl_802A1258[];
extern u32 lbl_8035ADC8;
extern void *memset(void *, int, unsigned long);
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);

void fn_8017EF5C(u32 *param_1, u32 param_2) {
    u32 *puVar1;
    u32 uVar2;
    u32 iVar3;
    u32 iVar4;

    if (param_1[2] != 0) {
        if (param_1[3] != 0) {
            __dla__FPv((int)(param_1[3]));
        }
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2]));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
    }
    puVar1 = (u32 *)lbl_802A1258;
    iVar3 = 0;
    iVar4 = 0x12;
    do {
        if (param_2 < *puVar1) {
            param_2 = (lbl_802A1258)[iVar3];
            break;
        }
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *param_1 = param_2;
    if (lbl_8035ADC8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ADC8));
    uVar2 = (u32) new u8[*param_1 << 3];
    param_1[2] = uVar2;
    fn_800F7E98();
    if (param_1[2] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    memset((void *)param_1[2],0,*param_1 << 3);
    if (lbl_8035ADC8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ADC8));
    uVar2 = (u32) new u8[*param_1 << 3];
    param_1[3] = uVar2;
    fn_800F7E98();
    if (param_1[3] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    memset((void *)param_1[3],0,*param_1 << 3);
}
}
