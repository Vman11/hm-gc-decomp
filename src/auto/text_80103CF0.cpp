// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B80103CF0 {
    u8 pad[36];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(void *p);
};
struct T40 : B80103CF0 { };
struct T52 : B80103CF0 { u8 pad2[12]; };
struct S80103CF0 {
    u8 pad[28];
    u32 na;
    u32 nb;
    T40 *a;
    T52 *b;
};
struct P80103CF0 { void *x; u8 pad[12]; void *y; };
typedef void (*FP80103CF0)(void *, void *);
extern FP80103CF0 lbl_803286D0[];

static inline u8 inA(S80103CF0 *s, void *x) {
    u8 r = 0;
    if ((T40 *)x >= s->a && (T40 *)x < s->a + s->na) r = 1;
    return r;
}
static inline u8 inB(S80103CF0 *s, void *x) {
    u8 r = 0;
    if ((T52 *)x >= s->b && (T52 *)x < s->b + s->nb) r = 1;
    return r;
}

void fn_80103CF0(u8 *p1, S80103CF0 *p2, S80103CF0 *p3, P80103CF0 *p4) {
    B80103CF0 *q;
    lbl_803286D0[0](M2C_FIELD(p1, void **, 16), p4->y);
    if (p4->x != 0) {
        if (inA(p3, p4->x)) q = &p2->a[(T40 *)p4->x - p3->a];
        else if (inB(p3, p4->x)) q = &p2->b[(T52 *)p4->x - p3->b];
        else return;
        q->f4(p1);
    }
}

} /* extern "C" */
