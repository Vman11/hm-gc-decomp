// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct H801C8370 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual s32 v15(void *p, void *a);
};
struct N801C8370 { H801C8370 *h; s32 active; N801C8370 *next; };
struct L801C8370 {
    u8 pad[52];
    virtual void x0();
    virtual void x1();
    virtual void x2();
    virtual void x3();
    virtual void x4();
    virtual void x5();
    virtual void x6(s32 a, void *b);
};
struct P801C8370 {
    u8 pad[104];
    void *f104;
    u8 pad108[4];
    L801C8370 *f112;
    u8 pad116[12];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void w20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void w53();
    virtual void w54();
    virtual void w55();
    virtual void w56();
    virtual void w57();
    virtual void w58();
    virtual void w59();
    virtual void w60();
    virtual void w61();
    virtual void w62();
    virtual void w63();
    virtual void w64();
    virtual void w65();
    virtual void w66();
    virtual void w67();
    virtual void w68();
    virtual void w69();
    virtual void w70();
    virtual void w71();
    virtual void w72();
    virtual void w73();
    virtual void w74();
    virtual void w75();
    virtual void w76();
    virtual void w77();
    virtual void w78();
    virtual void w79();
    virtual void w80();
    virtual void w81();
    virtual void w82();
};
void fn_801D99B4(P801C8370 *p, void *a, s32 b);
s32 fn_801C8370(P801C8370 *p, void *a, s32 b) {
    N801C8370 *n;
    s32 blocked;
    u32 t = M2C_FIELD(p, u32 *, 324);
    if (t == 8 || t == 32 || t == 128 || t == 512) {
        blocked = 0;
        for (n = M2C_FIELD(p, N801C8370 **, 136); n != 0; n = n->next) {
            if (n->active != 0 && n->h->v15(p, a) == 0) blocked = 1;
        }
        if (blocked) return 1;
        if (M2C_FIELD(p, u32 *, 444) != 0) {
            M2C_FIELD(p, u32 *, 444)--;
            p->w81();
            p->w82();
        }
        if (b != 0 && p->f112 != 0) p->f112->x6(1, p->f104);
    } else {
        fn_801D99B4(p, a, b);
    }
    return 1;
}

} /* extern "C" */
