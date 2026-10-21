/* Functions from 0x8027245C to 0x80272500, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B808;

typedef struct {
    s32 unk0;
    s32 unk4[60];
    s32 unkF4[60];
    s32 unk1E4;
    s32 unk1E8;
} UnkStruct8027245C;


typedef struct X_8027245C X_8027245C;
typedef struct T_8027245C { s32 n; X_8027245C *a[60]; u32 k[60]; void *mgr; s32 x; } T_8027245C;

static inline void clr_8027245C(T_8027245C *t) {
    u32 i;
    for (i = 0; i < 60; i++) {
        t->a[i] = 0;
        t->k[i] = 0;
    }
    t->x = 0;
    t->n = 0;
    t->mgr = 0;
}

void __ct__9C8027245CFv(T_8027245C *t) {
    clr_8027245C(t);
}

void fn_802724F8(s32 arg0) {
    lbl_8035B808 = arg0;
}

} /* extern "C" */
