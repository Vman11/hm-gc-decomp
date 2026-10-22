// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80101A7C(void);
extern u8 lbl_802A8058[];
extern u8 lbl_802A80DC[];

asm void fn_80220620(void) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r17, 0x44(r1)
    lis r18, lbl_802A8058@ha
    lis r17, lbl_802A80DC@ha
    mr r28, r4
    addi r19, r18, lbl_802A8058@l
    stw r8, 0x8(r1)
    addi r20, r17, lbl_802A80DC@l
    mr r29, r9
    stw r10, 0xc(r1)
    lwz r30, 0x0(r4)
    lwz r31, 0x4(r4)
    lbz r3, 0x18(r30)
    lbz r0, 0x20(r30)
    slwi r21, r3, 2
    lbz r22, 0x18(r31)
    lwzx r18, r20, r21
    slwi r17, r0, 2
    lwzx r23, r19, r21
    slwi r0, r22, 2
    lwzx r22, r20, r17
    slwi r25, r18, 24
    lwzx r21, r19, r17
    slwi r26, r23, 16
    lwzx r20, r20, r0
    slwi r27, r22, 24
    lwzx r19, r19, r0
    slwi r24, r18, 8
    or r25, r25, r26
    slwi r17, r20, 24
    slwi r18, r19, 16
    slwi r0, r21, 16
    or r24, r24, r25
    slwi r22, r22, 8
    or r25, r27, r0
    slwi r0, r20, 8
    or r18, r17, r18
    or r17, r23, r24
    or r0, r0, r18
    or r20, r22, r25
    or r18, r21, r20
    stw r17, 0x30(r1)
    or r0, r19, r0
    stw r18, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_80101A7C
    mulli r17, r29, 0x3
    lwz r18, 0x0(r28)
    stw r3, 0x18(r1)
    lwz r18, 0x4c(r18)
    mullw r0, r3, r17
    lbz r3, 0x20(r30)
    add r0, r18, r0
    stw r0, 0x24(r1)
    bl fn_80101A7C
    slwi r0, r29, 1
    lwz r18, 0x0(r28)
    mullw r0, r3, r0
    stw r3, 0x14(r1)
    lwz r18, 0x5c(r18)
    lbz r3, 0x18(r31)
    add r0, r18, r0
    stw r0, 0x20(r1)
    bl fn_80101A7C
    mr r9, r3
    lwz r18, 0x4(r28)
    mullw r0, r9, r17
    lwz r3, 0x30(r1)
    lwz r17, 0x4c(r18)
    stw r9, 0x10(r1)
    add r6, r17, r0
    stw r6, 0x1c(r1)
    mtspr GQR4, r3
    lwz r3, 0x2c(r1)
    mtspr GQR5, r3
    lwz r3, 0x28(r1)
    mtspr GQR6, r3
    lwz r7, 0x18(r1)
    lwz r8, 0x14(r1)
    add r12, r9, r9
    lwz r4, 0x24(r1)
    add r10, r7, r7
    lwz r5, 0x20(r1)
    add r11, r8, r8
    lwz r3, 0xc(r1)
    subf r4, r10, r4
    subf r5, r11, r5
    subf r6, r12, r6
    mtctr r3
    lwz r3, 0x88(r1)
    lwz r8, 0x8(r1)
L_80220794:
    psq_lux f0, r4, r10, 0, 4
    psq_lx f1, r4, r10, 1, 4
    psq_lux f2, r6, r12, 0, 6
    psq_lx f3, r6, r12, 1, 6
    add r4, r4, r7
    psq_l f4, 0x0(r8), 0, 0
    add r6, r6, r9
    ps_muls0 f2, f2, f4
    ps_muls0 f3, f3, f4
    ps_add f0, f0, f2
    ps_add f1, f1, f3
    psq_st f0, 0x0(r3), 0, 4
    psq_stx f1, r3, r10, 1, 4
    add r3, r3, r7
    add r3, r3, r10
    psq_lux f2, r5, r11, 0, 5
    psq_st f2, 0x0(r3), 0, 5
    add r3, r3, r11
    bdnz L_80220794
    lmw r17, 0x44(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
