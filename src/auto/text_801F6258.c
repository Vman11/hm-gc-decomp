/* Functions from 0x801F6258 to 0x801F6334, found by decomp-toolkit. */
#include "common.h"

extern void dtor_801F5E3C(void *);
extern void fn_801F5D40(void *);
extern void fn_801F6334(void *);
void fn_801F626C(void *arg0) { unsigned int offset = 0x10; fn_801F6334((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) + 0x20); }

void fn_801F6280(void *arg0) { unsigned int offset = 0x10; fn_801F5D40((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) - 0x10); }

void fn_801F62A8(void *arg0) { unsigned int offset = 8; dtor_801F5E3C((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) - 0x24); }

void fn_801F62BC(void *arg0) { unsigned int offset = 0x14; dtor_801F5E3C((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) - 0x30); }

void fn_801F61D4(void);

asm void fn_801F6258(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -8
    b fn_801F61D4
}

void fn_801F6334(void);

asm void fn_801F626C(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, 32
    b fn_801F6334
}

void fn_801F5D40(void);

asm void fn_801F6280(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -16
    b fn_801F5D40
}

void dtor_801F5E3C(void);

asm void fn_801F6294(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -16
    b dtor_801F5E3C
}

void dtor_801F5E3C(void);

asm void fn_801F62A8(void) {
    nofralloc
    li r11, 8
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -36
    b dtor_801F5E3C
}

void dtor_801F5E3C(void);

asm void fn_801F62BC(void) {
    nofralloc
    li r11, 20
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -48
    b dtor_801F5E3C
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
