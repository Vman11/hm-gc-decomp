// auto/text_800F9FE0 fn_800F9FE0 98.4324
extern "C" {
extern char lbl_8029CB08[];
void fn_80060568(void *, int, int, int);
struct VCall_fn_800F9FE0_0 { char vptr_pad[0x18]; virtual void p0(); virtual int m(); };

void fn_800F9FE0(s32 param_1, u8 param_2) {
    s32 iVar1;
    u8 *puVar2;

    if ((u32)(*(s32 *)(param_1 + 4) + *(s32 *)(param_1 + 8)) <= *(u32 *)(param_1 + 0xc)) {
        iVar1 = ((VCall_fn_800F9FE0_0 *)(param_1))->m();
        if (iVar1 == 0) {
            fn_80060568(lbl_8029CB08, (int)(0), (int)(0), (int)(0)); /* "Unable to write buffer to media" */
        }
        *(u32 *)(param_1 + 0xc) = *(u32 *)(param_1 + 4);
    }
    puVar2 = *(u8 **)(param_1 + 0xc);
    *(u8 **)(param_1 + 0xc) = puVar2 + 1;
    *puVar2 = param_2;
}
}
