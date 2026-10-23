// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035A1DC;
struct R_8003AF34 {
    u8 pad[0x1930];
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void set(s32, s32, s32);
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void flush();
};
struct E_8003AF34 {
    u8 pad[0x50];
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void draw(R_8003AF34 *);
};
struct Q_8003AF34 {
    u8 pad[0x30];
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void f(s32);
};
u8 *fn_80180EBC(void *p, s32 i);
u32 fn_800FBB9C(void);

void fn_8003AF34(u8 *p, s32 idx, s32 v) {
    R_8003AF34 *r;
    E_8003AF34 *e;
    *(s32 *)(p + 0x1c) = v;
    r = *(R_8003AF34 **)(lbl_8035A1DC + 0x2c50);
    r->set(*(s32 *)(p + 0xc), 7, 0);
    e = (E_8003AF34 *)(*(u8 **)(fn_80180EBC(*(void **)(p + 0x18), 0) + 0x14) + idx * 0x58);
    e->draw(r);
    r->flush();
    (*(Q_8003AF34 **)(lbl_8035A1DC + 0x2c4c))->f(1);
    r->set(*(s32 *)(p + 0xc), 7, 0);
    e->draw(r);
    r->flush();
    (*(Q_8003AF34 **)(lbl_8035A1DC + 0x2c4c))->f(1);
    *(u32 *)(p + 0x10) = fn_800FBB9C();
}

} /* extern "C" */
