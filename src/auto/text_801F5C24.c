/* Functions from 0x801F5C24 to 0x801F5D6C, found by decomp-toolkit. */
#include "common.h"

void fn_801F59B8(void *);
void fn_801F5BA0(void *);
void dtor_801F59EC(void *);
void fn_801F5C24(void *arg0) { fn_801F5BA0((u8 *)arg0 + *(u32 *)((u8 *)arg0 + 0x10) - 8); }

void fn_801F5C38(void *arg0) {
    u32 offset = 0x10;
    fn_801F59B8((u8 *)arg0 + *(u32 *)((u8 *)arg0 + offset) - 0xC);
}

void fn_801F5C9C(void *arg0) { dtor_801F59EC((u8 *)arg0 + *(u32 *)((u8 *)arg0 + 8) - 0x20); }

void fn_801F5CB0(void *arg0) {
    u8 **p5 = *(u8 ***)*(u8 ***)arg0;
    u8 *p6 = *p5;
    if (*(s32 *)(p6 + 0xC) >= 0) {
        *(s32 *)(p6 + 4) += 1;
    }
    *(s32 *)(*p5 + 0xC) = -1;
    *(s32 *)(**(u8 ***)*(u8 ***)arg0 + 4) = *(s32 *)(**(u8 ***)*(u8 ***)arg0 + 8) + 4;
    *(s32 *)(**(u8 ***)*(u8 ***)arg0 + 8) = *(s32 *)((u8 *)arg0 + 8);
}

void fn_801F5D10(struct S { u32 pad; s32 value; } ****arg0, s32 arg1, s32 *arg2) {
    *arg2 = (***arg0)->value;
    (***arg0)->value += arg1;
}

s32 fn_801F5D40(void *arg0) {
    u32 a = *(u32 *)((u8 *)arg0 + 8);
    u32 b = *(u32 *)(*(u32 *)(*(u32 *)*(u32 *)arg0) + 4);
    return b >= a;
}

