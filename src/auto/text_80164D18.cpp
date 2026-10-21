// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 r, g, b, a; } GXColor;
typedef struct {
    u8 pad[1133];
    GXColor c;
} Q;
typedef struct {
    u8 pad0[12];
    u32 flags;
    u8 pad1[6456 - 16];
    Q *q;
    u8 pad2[6576 - 6460];
    GXColor c;
} P;
extern u32 lbl_803646A8;
void fn_80121848(GXColor *, void *);
void fn_800D7A88(int, GXColor *);

void fn_80164D18(P *p, void *a) {
    Q *q;
    GXColor c;
    p->flags |= lbl_803646A8;
    fn_80121848(&p->c, a);
    if (p->flags & 2) {
        q = p->q;
        if (q->c.r != p->c.r || q->c.g != p->c.g || q->c.b != p->c.b) {
            q->c.r = p->c.r;
            q->c.g = p->c.g;
            q->c.b = p->c.b;
            q->c.a = 255;
            *(u32 *)&c = *(u32 *)&q->c;
            fn_800D7A88(0, &c);
        }
    }
}

} /* extern "C" */
