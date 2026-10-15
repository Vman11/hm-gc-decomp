/* Functions from 0x801F5C24 to 0x801F5D6C, found by decomp-toolkit. */
#include "common.h"

void fn_801F59B8(void *);
void fn_801F5BA0(void *);
void dtor_801F59EC(void *);
void fn_801F5C24(void *arg0) { fn_801F5BA0((u8 *)arg0 + *(u32 *)((u8 *)arg0 + 0x10) - 8); }

void fn_801F5C38(void *arg0) { fn_801F59B8((u8 *)arg0 + *(u32 *)((u8 *)arg0 + 0x10) - 0xC); }

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

