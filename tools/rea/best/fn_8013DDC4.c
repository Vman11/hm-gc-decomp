// auto/text_8013DDC4 fn_8013DDC4 97.7887
extern "C" {
void fn_80148210(int, int, int, int, int);
void fn_80148288(int, int, int, int, int, int, int);
struct VCall_fn_8013DDC4_0 { char vptr_pad[0x53c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_8013DDC4(u32 param_1, u8 *param_2) {
    if (*(s16 *)(param_1 + 0x1c) != 0) {
        ((VCall_fn_8013DDC4_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x540) =
              (u32)*param_2 +
              (u32)param_2[1] * 0x100 + (u32)param_2[2] * 0x10000 + (u32)param_2[3] * 0x1000000;
    *(u32 *)(param_1 + 0x14) = (u32)param_2[4] + (u32)param_2[5] * 0x100;
    *(u32 *)(param_1 + 0x10) = (u32)param_2[6] + (u32)param_2[7] * 0x100;
    *(u32 *)(param_1 + 0x54c) = (u32)param_2[8] + (u32)param_2[9] * 0x100;
    if (*(u32 *)(param_1 + 0x54c) == 3) {
        fn_80148288((int)(param_1 + 0x1c), (int)(0x18), (int)(0xff), (int)(0xff00), (int)(0xff0000), (int)(0), (int)(0));
    }
    else {
        fn_80148210((int)(param_1 + 0x1c), (int)(8), (int)(0xff), (int)(0), (int)(0));
    }
    *(u32 *)(param_1 + 0x18) = *(u32 *)(param_1 + 0x10) * *(u32 *)(param_1 + 0x54c);
    *(u8 **)(param_1 + 0x544) = param_2 + 10;
}
}
