/* Functions from 0x801F6258 to 0x801F6334, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern void __dt__9C801F5F94Fv(void *);
extern void fn_801F5D40(void *);
extern void fn_801F6334(void *);




void fn_801F61D4(void);

asm void fn_801F6258(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -8
    b fn_801F61D4
}


asm void fn_801F626C(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, 32
    b fn_801F6334
}


asm void fn_801F6280(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -16
    b fn_801F5D40
}


asm void fn_801F6294(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -16
    b __dt__9C801F5F94Fv
}


asm void fn_801F62A8(void) {
    nofralloc
    li r11, 8
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -36
    b __dt__9C801F5F94Fv
}


asm void fn_801F62BC(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b __dt__9C801F5F94Fv
}

void fn_801F5D6C(void);

asm void fn_801F62D0(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b fn_801F5D6C
}

void fn_801F5D98(void);

asm void fn_801F62E4(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b fn_801F5D98
}

void fn_801F5DC8(void);

asm void fn_801F62F8(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b fn_801F5DC8
}

void fn_801F5CB0(void);

asm void fn_801F630C(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b fn_801F5CB0
}

void fn_801F5D10(void);

asm void fn_801F6320(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b fn_801F5D10
}

} /* extern "C" */
