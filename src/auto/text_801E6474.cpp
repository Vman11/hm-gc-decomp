// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[212]; u8 *fD4; } T801E6474;
typedef struct { u32 a; u32 b; } H801E6474;
typedef struct S801E6474 {
    u8 pad0[16];
    T801E6474 *f10;
    u8 pad14[8];
    H801E6474 f1C;
    u8 pad24[12];
    u32 f30;
} S801E6474;
void fn_800FB064(void *, char *);
u32 fn_800F9398(u8 *, char *);
u32 fn_800F9788(u8 *, char *, char *);
void fn_801EB474(S801E6474 *, void *, s32);

static inline void hset(H801E6474 *h, u32 x) {
    h->b = 0;
    h->a = 0;
    h->a = x;
}

void fn_801E6474(S801E6474 *p, void *a, s32 id) {
    switch (id) {
    case 80: {
        char n2[8];
        char n1[8];
        u8 *t;
        u32 r;
        fn_800FB064(a, n2);
        fn_800FB064(a, n1);
        t = p->f10->fD4;
        if (n1 == 0 || n1[0] == 0) {
            r = fn_800F9398(t + 144, n2);
        } else {
            r = fn_800F9788(t + 168, n1, n2);
        }
        hset(&p->f1C, r);
        break;
    }
    case 69:
        p->f30 |= 1;
        break;
    case 70:
        p->f30 |= 2;
        break;
    case 71:
        p->f30 |= 4;
        break;
    default:
        fn_801EB474(p, a, id);
        break;
    }
}

} /* extern "C" */
