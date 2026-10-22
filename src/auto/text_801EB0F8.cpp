// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[212]; u8 *fD4; } T801EB0F8;
typedef struct { u32 a; u32 b; } H801EB0F8;
typedef struct S801EB0F8 {
    u8 pad0[8];
    T801EB0F8 *f8;
    s32 fC;
    u8 pad10[40 - 16];
    H801EB0F8 f28;
    u32 f30;
} S801EB0F8;
void fn_800FB064(void *, char *);
u32 fn_800F9398(u8 *, char *);
u32 fn_800F9788(u8 *, char *, char *);
void fn_801EF720(S801EB0F8 *, void *);

static inline void hset(H801EB0F8 *h, u32 x) {
    h->b = 0;
    h->a = 0;
    h->a = x;
}

void fn_801EB0F8(S801EB0F8 *p, void *a, s32 id) {
    char n2a[16];
    char n2b[8];
    char n1[8];
    u8 *t;
    u32 r;
    switch (id) {
    case 105:
        fn_800FB064(a, n2a);
        fn_800FB064(a, n1);
        t = p->f8->fD4;
        if (n1 == 0 || n1[0] == 0) {
            r = fn_800F9398(t + 144, n2a);
        } else {
            r = fn_800F9788(t + 168, n1, n2a);
        }
        hset(&p->f28, r);
        break;
    case 136:
        fn_800FB064(a, n2b);
        fn_800FB064(a, n1);
        t = p->f8->fD4;
        if (n1 == 0 || n1[0] == 0) {
            r = fn_800F9398(t + 264, n2b);
        } else {
            r = fn_800F9788(t + 288, n1, n2b);
        }
        p->f30 = r;
        break;
    case 170:
        p->fC = 28;
        break;
    case 172:
        p->fC = 29;
        break;
    case 173:
        p->fC = 30;
        break;
    default:
        fn_801EF720(p, a);
        break;
    }
}

} /* extern "C" */
