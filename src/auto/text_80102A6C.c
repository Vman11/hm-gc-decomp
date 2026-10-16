/* Functions from 0x80102A6C to 0x80102C30, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    f32 x;
    u8 pad[0x10];
} Unk14;

typedef struct {
    f32 x;
    u8 pad[0xC];
} Unk10;

typedef struct {
    Unk14 *a;
    Unk10 *b;
    Unk10 *c;
    u32 countAB;
    u32 countC;
} UnkArrays;

extern f32 lbl_80363864;

void fn_80102A6C(UnkArrays *arg0) {
    Unk14 *p;
    Unk14 *pend;
    Unk10 *q;
    Unk10 *qend;

    p = arg0->a;
    pend = p + arg0->countAB;
    for (; p < pend; p++) {
        p->x = lbl_80363864;
    }
    q = arg0->b;
    qend = q + arg0->countAB;
    for (; q < qend; q++) {
        q->x = lbl_80363864;
    }
    q = arg0->c;
    qend = q + arg0->countC;
    for (; q < qend; q++) {
        q->x = lbl_80363864;
    }
}
