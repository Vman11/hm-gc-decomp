// auto/text_8003E8A0 fn_8003E8A0 97.0926
extern "C" {
extern u32 lbl_8035A0A0;
extern void *memset(void *, int, unsigned long);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_800F8E38(int, int);
u32 fn_8021616C(int);

void fn_8003E8A0(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 uVar2;
    u32 iVar3;

    uVar1 = fn_8021616C((int)(param_2));
    *(u32 *)(param_1 + 0x2a8) = uVar1;
    uVar2 = 0;
    iVar3 = param_1;
    do {
        fn_800F8E38((int)(iVar3 + 0x2e4), (int)(0x32));
        if (lbl_8035A0A0 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035A0A0));
        uVar1 = (u32) new u8[200];
        *(u32 *)(param_1 + 0x550) = uVar1;
        fn_800F7E98();
        if (*(u32 *)(param_1 + 0x550) == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
        memset(*(void **)(param_1 + 0x550),0,200);
        uVar2 = uVar2 + 1;
        param_1 = param_1 + 4;
        iVar3 = iVar3 + 0x14;
    } while (uVar2 < 0x1f);
}
}
