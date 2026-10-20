/* Functions from 0x801F66EC to 0x801F6728, found by decomp-toolkit. */
#include "common.h"

void fn_801F6334(void *);
void fn_801F66EC(void *arg0) {
    fn_801F6334((u8 *)arg0 + *(s32 *)((u8 *)arg0 + 0x10) - 0x14);
}

void fn_801F6334(void);

asm void fn_801F66EC(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -20
    b fn_801F6334
}

void fn_801F60FC(void);

asm void fn_801F6700(void) {
    nofralloc
    li r11, 16
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -20
    b fn_801F60FC
}

void fn_801F60FC(void);

asm void fn_801F6714(void) {
    nofralloc
    li r11, 8
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -40
    b fn_801F60FC
}
