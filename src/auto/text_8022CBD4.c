// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_80365D28;
extern f32 lbl_80365D48;
typedef struct { u8 pad[4]; f32 f4; } D8022CBD4;
typedef struct { u8 pad[8]; f32 f8; u8 padc[4]; D8022CBD4 *f10; u8 pad14[0x10]; f32 f24; } Q8022CBD4;
typedef struct { u8 pad[0xb0]; Q8022CBD4 *q; } A8022CBD4;
typedef struct { u8 pad[0xa0]; A8022CBD4 *a; u8 pada4[0x14]; void *b; } S8022CBD4;
void fn_802224D0(void *b, f32 x);
static inline void setq8022CBD4(Q8022CBD4 *q, f32 x) {
    q->f8 = x;
    if (q->f10 != 0) q->f24 = q->f8 / q->f10->f4;
}
void fn_8022CBD4(S8022CBD4 *p, f32 x) {
    if (x < lbl_80365D28) x = lbl_80365D48;
    if (p->a != 0) {
        if (p->b != 0) {
            fn_802224D0(p->b, x);
        } else {
            setq8022CBD4(p->a->q, x);
        }
    }
}
