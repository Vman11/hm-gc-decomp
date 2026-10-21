#include "common.h"

extern "C" {

void fn_801F59B8(void *);
void fn_801F5BA0(void *);
void __dt__9C801F5AC4Fv(void *);
void fn_801F5990(void);
void fn_801F5960(void);
void fn_801F5978(void);

asm void fn_801F5C24(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -8
    b fn_801F5BA0
}


asm void fn_801F5C38(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -12
    b fn_801F59B8
}

asm void fn_801F5C4C(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -12
    b fn_801F5990
}

asm void fn_801F5C60(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -12
    b fn_801F5960
}

asm void fn_801F5C74(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -12
    b fn_801F5978
}


asm void fn_801F5C88(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -12
    b __dt__9C801F5AC4Fv
}


asm void fn_801F5C9C(void) {
    nofralloc
    li r11, 8
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -32
    b __dt__9C801F5AC4Fv
}

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

} /* extern "C" */
