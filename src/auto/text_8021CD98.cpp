// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C80210CEC { C80210CEC(); ~C80210CEC(); u8 b[8]; };
extern "C" {
struct P {
    u32 fl;
    char name[8];
    u32 c12;
    virtual void s0(u32); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void s9(u32);
    virtual void s10(u32); virtual void s11(u32);
    u32 c20;
    u32 c24;
    u32 c28;
    u8 pad32[8];
    void *d40;
    void *d44;
    void *d48;
    void *d52;
};
extern char lbl_80365928[4], lbl_8036592C[4], lbl_80365930[4], lbl_80365934[4], lbl_80365974[6];
extern u32 lbl_80365964, lbl_80365968, lbl_8036596C, lbl_80365970;
void fn_800F6E40(char *, char *);
s32 fn_80210ABC(C80210CEC *, char *, char *, int);
void fn_80060E30(s32, char *, ...);
s32 fn_802108B4(C80210CEC *, void *, u32, u32 *);
void fn_80210938(C80210CEC *);

#define SEC(A, B, S, SLOT, CNT, MUL, DATA, K) \
    if ((p->fl & A) && !(p->fl & B)) { \
        s32 r; \
        if ((r = fn_80210ABC(&f, buf, S, 2)) != 0) fn_80060E30(r, lbl_80365974, buf, S); \
        p->SLOT(p->CNT); \
        if ((r = fn_802108B4(&f, p->DATA, p->CNT * MUL, &got)) != 0) fn_80060E30(r, lbl_80365974, buf, S); \
        fn_80210938(&f); \
        p->fl |= K; \
    }

void fn_8021CD98(P *p) {
    char buf[16];
    C80210CEC f;
    u32 got;
    fn_800F6E40(buf, p->name);
    SEC(4, 2, lbl_80365928, s0, c12, 2, d40, lbl_80365964)
    SEC(0x10, 8, lbl_8036592C, s9, c20, 8, d44, lbl_80365968)
    SEC(0x40, 0x20, lbl_80365930, s10, c24, 12, d48, lbl_8036596C)
    SEC(0x100, 0x80, lbl_80365934, s11, c28, 12, d52, lbl_80365970)
}

} /* extern "C" */
