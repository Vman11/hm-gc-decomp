/* __mem.c: memset / __fill_mem / memcpy in .init (0x80005504..0x8000563C). */
#include "common.h"

void __fill_mem(void);

__declspec(section ".init") asm void memset(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __fill_mem
    lwz r0, 0x14(r1)
    mr r3, r31
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

__declspec(section ".init") asm void __fill_mem(void) {
    nofralloc
    cmplwi r5, 0x20
    clrlwi r4, r4, 24
    subi r6, r3, 0x1
    mr r7, r4
    blt L_800055D4
    nor r0, r6, r6
    clrlwi. r3, r0, 30
    beq L_80005564
    subf r5, r3, r5
L_80005558:
    subic. r3, r3, 0x1
    stbu r7, 0x1(r6)
    bne L_80005558
L_80005564:
    cmplwi r7, 0x0
    beq L_80005584
    slwi r3, r7, 24
    slwi r0, r7, 16
    slwi r4, r7, 8
    or r0, r3, r0
    or r0, r4, r0
    or r7, r7, r0
L_80005584:
    srwi. r3, r5, 5
    subi r4, r6, 0x3
    beq L_800055B8
L_80005590:
    stw r7, 0x4(r4)
    subic. r3, r3, 0x1
    stw r7, 0x8(r4)
    stw r7, 0xc(r4)
    stw r7, 0x10(r4)
    stw r7, 0x14(r4)
    stw r7, 0x18(r4)
    stw r7, 0x1c(r4)
    stwu r7, 0x20(r4)
    bne L_80005590
L_800055B8:
    extrwi. r3, r5, 3, 27
    beq L_800055CC
L_800055C0:
    subic. r3, r3, 0x1
    stwu r7, 0x4(r4)
    bne L_800055C0
L_800055CC:
    addi r6, r4, 0x3
    clrlwi r5, r5, 30
L_800055D4:
    cmplwi r5, 0x0
    beqlr
L_800055DC:
    subic. r5, r5, 0x1
    stbu r7, 0x1(r6)
    bne L_800055DC
    blr
}

__declspec(section ".init") asm void memcpy(void) {
    nofralloc
    cmplw r4, r3
    blt L_80005618
    subi r4, r4, 0x1
    subi r6, r3, 0x1
    addi r5, r5, 0x1
    b L_8000560C
L_80005604:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r6)
L_8000560C:
    subic. r5, r5, 0x1
    bne L_80005604
    blr
L_80005618:
    add r4, r4, r5
    add r6, r3, r5
    addi r5, r5, 0x1
    b L_80005630
L_80005628:
    lbzu r0, -0x1(r4)
    stbu r0, -0x1(r6)
L_80005630:
    subic. r5, r5, 0x1
    bne L_80005628
    blr
}

