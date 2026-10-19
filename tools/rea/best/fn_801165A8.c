// auto/text_801165A8 fn_801165A8 98.2353
extern "C" {
s32 fn_80110444(int, int, int);
struct VCall_fn_801165A8_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(int, int, int); };

void fn_801165A8(u32 param_1, u32 param_2, s32 param_3) {
    s32 *piVar1;
    s32 local_8 [2];

    local_8[0] = param_3;
    piVar1 = (s32 *)fn_80110444((int)(param_1), (int)(param_2), (int)(0));
    if ((piVar1 != (s32 *)0x0) && (piVar1 = (s32 *)*piVar1, piVar1 != (s32 *)0x0)) {
        if (*(s32 *)(*piVar1 + 0x18) < local_8[0]) {
            local_8[0] = *(s32 *)(*piVar1 + 0x18);
        }
        if (*(s32 *)(*piVar1 + 0x14) > local_8[0]) {
            local_8[0] = *(s32 *)(*piVar1 + 0x14);
        }
        ((VCall_fn_801165A8_0 *)(piVar1))->m((s32)(local_8), (s32)(0), (s32)(1));
    }
}
}
