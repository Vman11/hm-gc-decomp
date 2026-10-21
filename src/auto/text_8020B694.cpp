// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
typedef struct {
    u8 pad[32];
    s32 v;
    u8 pad2[4];
} Info8020B694;

typedef struct {
    Info8020B694 info;
    s32 a;
    u8 b[76];
} Loc8020B694;

void fn_802148D4(void *);
s32 fn_800D339C(void *, u32, Info8020B694 *);
s32 fn_8020AD88(void *, void *, void *);
void fn_80214A74(void *);
void fn_8021488C(void *, void *);
void fn_802148B0(void *, Info8020B694 *);
void fn_80214884(void *, s32);
extern u8 lbl_803657F8[8];

s32 fn_8020B694(void *p, void *q) {
    Loc8020B694 l;
    fn_802148D4(q);
    for (F(p, u32, 2336)++; F(p, u32, 2336) < 127; F(p, u32, 2336)++) {
        if (fn_800D339C(F(p, void *, 0), F(p, u32, 2336), &l.info) == 0 && fn_8020AD88(F(p, void *, 2332), l.b, &l.a) != 0) {
            fn_80214A74(q);
            fn_8021488C(q, lbl_803657F8);
            fn_802148B0(q, &l.info);
            fn_80214884(q, l.info.v);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
