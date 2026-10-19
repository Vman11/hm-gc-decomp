// auto/text_80190940 fn_80190940 97.5556
extern "C" {
void fn_80190C98(int);
struct VCall_fn_80190940_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_80190940_1 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual int m(); };
struct VCall_fn_80190940_2 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_80190940(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;

    iVar1 = ((VCall_fn_80190940_0 *)(param_1))->m();
    iVar2 = ((VCall_fn_80190940_1 *)(param_2))->m();
    if ((iVar1 != 0) && (iVar2 != 0)) {
        ((VCall_fn_80190940_2 *)(iVar2))->m((u32)(iVar1));
        if (*(u32 *)(param_1 + 0x50) != param_2) {
            *(u32 *)(param_1 + 0x50) = param_2;
            *(u32 *)(param_1 + 0x54) = *(u32 *)(param_2 + 0x58);
            *(u32 *)(param_2 + 0x58) = param_1;
        }
        fn_80190C98((int)(param_1));
    }
}
}
