// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E8010C840 { u8 data[32]; };
struct E8010CD58 { u8 data[28]; };

struct V80112190 {
    u8 pad[8];
    virtual void f0();
    virtual void f1();
    virtual void Release();
};

void __dt__9C8010C41CFv(void *p, s16 f);
void __dt__9C8010C958Fv(void *p, s16 f);
void fn_8010CDAC(void *p, s16 f);
void fn_800E1E88(void *block, void *dtor);
void fn_8010C840(E8010C840 *p);
void fn_8010CD58(E8010CD58 *p);
void __dl__FPv(void *p);

struct A80112190 {
    u32 count;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    void *arr10;
    E8010C840 *arr14;
    E8010CD58 *arr18;
    A80112190 *child;
};

V80112190 *fn_80111BC0(A80112190 *a, u32 i);

#pragma dont_inline on
void fn_80112190(A80112190 *a) {
    u32 i;
    if (a->count != 0) {
        for (i = 0; i < a->count; i++) {
            fn_80111BC0(a, i)->Release();
            fn_8010C840(&a->arr14[i]);
            fn_8010CD58(&a->arr18[i]);
        }
        if (a->arr10 != 0) fn_800E1E88(a->arr10, (void *)__dt__9C8010C41CFv);
        if (a->arr14 != 0) fn_800E1E88(a->arr14, (void *)__dt__9C8010C958Fv);
        if (a->arr18 != 0) fn_800E1E88(a->arr18, (void *)fn_8010CDAC);
        if (a->child != 0) {
            fn_80112190(a->child);
            __dl__FPv(a->child);
        }
        a->count = 0;
        a->unk4 = 4;
        a->unk8 = 0;
        a->unkC = 0;
        a->arr10 = 0;
        a->arr14 = 0;
        a->arr18 = 0;
        a->child = 0;
    }
}
#pragma dont_inline reset

} /* extern "C" */
