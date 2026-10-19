// auto/text_800FB0F8 fn_800FB0F8 95.0000
extern "C" {
extern u32 lbl_8035AA10;
extern void *memcpy(void *, const void *, unsigned long);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 strlen(int);
struct VCall_fn_800FB0F8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB0F8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FB0F8(u32 param_1, u32 *param_2) {
    u32 iVar1;
    u32 sVar2;

    iVar1 = ((VCall_fn_800FB0F8_0 *)(param_1))->m();
    if (iVar1 != 2) {
        ((VCall_fn_800FB0F8_1 *)(param_1))->m((u32)(3));
    }
    sVar2 = strlen((int)((s8 *)(param_1 + 0x14)));
    if (lbl_8035AA10 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AA10));
    iVar1 = (u32) new u8[sVar2 + 1];
    *param_2 = iVar1;
    fn_800F7E98();
    if (*param_2 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    if (*param_2 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    memcpy((void *)*param_2,(void *)(param_1 + 0x14),sVar2 + 1);
}
}
