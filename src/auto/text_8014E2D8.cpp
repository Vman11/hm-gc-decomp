/* Functions from 0x8014E2D8 to 0x8014E434, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[0x2FC];
} Unk8014E3F0Elem;

typedef struct {
    u8 pad[0x60];
    Unk8014E3F0Elem elems[1];
} Unk8014E3F0;

void fn_8014D7A0(void* arg0);

asm void fn_8014E2D8(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D7A0
}

void fn_8014D7CC(void);

asm void fn_8014E2EC(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D7CC
}

void fn_8014DC90(void);

asm void fn_8014E300(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014DC90
}

void fn_8014D8C4(void);

asm void fn_8014E314(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D8C4
}

void fn_8014D8AC(void);

asm void fn_8014E328(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D8AC
}

void fn_8014D8B4(void);

asm void fn_8014E33C(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D8B4
}

void fn_8014D8BC(void);

asm void fn_8014E350(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D8BC
}

void fn_8014D7E8(void);

asm void fn_8014E364(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D7E8
}

void fn_8014DE10(void);

asm void fn_8014E378(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014DE10
}

void __dt__9C8014E1E0Fv(void);

asm void fn_8014E38C(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b __dt__9C8014E1E0Fv
}

void fn_8014DC98(void);

asm void fn_8014E3A0(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014DC98
}

void fn_8014D8D8(void);

asm void fn_8014E3B4(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014D8D8
}

void fn_8014DBE8(void);

asm void fn_8014E3C8(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014DBE8
}

void fn_8014DD3C(void);

asm void fn_8014E3DC(void) {
    nofralloc
    li r11, 212
    lwzx r11, r3, r11
    add r3, r3, r11
    addi r3, r3, -548
    b fn_8014DD3C
}

void* fn_8014E3F0(Unk8014E3F0* arg0, s32 arg1) {
    return &arg0->elems[arg1];
}

s32 fn_8014E404(void) {
    return 0;
}

s32 fn_8014E40C(void) {
    return 0;
}

s32 fn_8014E414(void) {
    return 0;
}

s32 fn_8014E41C(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x1C);
}

s32 fn_8014E424(void) {
    return 4;
}

s32 fn_8014E42C(void) {
    return 0;
}

} /* extern "C" */
