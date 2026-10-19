// auto/text_801AEE60 fn_801AEE60 95.0676
extern "C" {
void fn_801C2368(int, int, int);
void fn_801C2800(int, int, int);
struct VCall_fn_801AEE60_0 {  virtual int m(int); };
struct VCall_fn_801AEE60_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void m(int, int); };
struct VCall_fn_801AEE60_2 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };
struct VCall_fn_801AEE60_3 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void m(int, int); };
struct VCall_fn_801AEE60_4 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void m(int, int); };

void fn_801AEE60(s32 param_1, u32 param_2) {
    s32 iVar1;
    u32 *puVar2;

    for (puVar2 = *(u32 **)(param_1 + 0x88); puVar2 != (u32 *)0x0;
            puVar2 = (u32 *)puVar2[2]) {
        iVar1 = ((VCall_fn_801AEE60_0 *)((u32 *)*puVar2))->m((s32)(4));
        if ((iVar1 != 0) && (puVar2[1] != 0)) {
            ((VCall_fn_801AEE60_1 *)((u32 *)*puVar2))->m((s32)(param_1), (s32)(param_2));
        }
    }
    ((VCall_fn_801AEE60_2 *)(param_1))->m((s32)(0));
    *(u32 *)(param_1 + 0x6c) = *(u32 *)(param_1 + 0x6c) & 0xfffffffd;
    if (*(u32 *)(param_1 + 0xe0) != 0) {
        fn_801C2368((int)(*(u32 *)(param_1 + 0x7c)), (int)(*(u32 *)(param_1 + 0xe0)), (int)(1));
        ((VCall_fn_801AEE60_3 *)(param_1))->m((s32)(0), (s32)(1));
        ((VCall_fn_801AEE60_4 *)(*(u32 *)(param_1 + 0xe0)))->m((s32)(0), (s32)(1));
    }
    iVar1 = *(u32 *)(param_1 + 0x7c);
    if (*(u32 *)(iVar1 + 0x10) == param_1) {
        fn_801C2800((int)(iVar1), (int)(*(u32 *)(iVar1 + 4)), (int)(1));
    }
}
}
