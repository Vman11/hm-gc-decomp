// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[32];
    s32 f32;
    u8 pad2[4];
} Buf;
typedef struct {
    Buf buf;
    s32 a;
    u8 b[76];
} S;
typedef struct {
    void *f0;
    u8 pad[2332 - 4];
    void *f2332;
    u32 idx;
} P;
extern char lbl_803657F8[8];
void fn_802148D4(void *);
int fn_800D339C(void *, u32, Buf *);
int fn_8020AD88(void *, void *, void *);
void fn_80214A74(void *);
void fn_8021488C(void *, char *);
void fn_802148B0(void *, Buf *);
void fn_80214884(void *, s32);

int fn_8020B774(P *p, void *q) {
    S s;
    fn_802148D4(q);
    for (p->idx = 0; p->idx < 127; p->idx++) {
        if (fn_800D339C(p->f0, p->idx, &s.buf) == 0 && fn_8020AD88(p->f2332, s.b, &s.a) != 0) {
            fn_80214A74(q);
            fn_8021488C(q, lbl_803657F8);
            fn_802148B0(q, &s.buf);
            fn_80214884(q, s.buf.f32);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
