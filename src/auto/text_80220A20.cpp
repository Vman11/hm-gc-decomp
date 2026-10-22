/* Functions from 0x80220A20 to 0x80220C38, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80220A20(s32* arg0) {
    extern u8 lbl_802F05B0[];
    arg0[2] = (s32)lbl_802F05B0;
    arg0[0] = 0;
    arg0[1] = 0;
}

extern u8 lbl_80356E14[];
extern u8 lbl_80356E24[];
extern u8 lbl_80356E34[];
extern u8 lbl_80356E44[];
extern u8 lbl_80356E50[];
extern u8 lbl_8035B278[8];
extern u8 lbl_8035B280[8];
extern u8 lbl_8035B288[8];
extern u8 lbl_803659F8[8];
extern u8 lbl_80365A00[8];

asm void fn_80220A3C(void) {
    nofralloc
    stwu r1, -0xa0(r1)
    stfd f14, 0x8(r1)
    stfd f15, 0x10(r1)
    stfd f16, 0x18(r1)
    stfd f17, 0x20(r1)
    stfd f18, 0x28(r1)
    stfd f19, 0x30(r1)
    stfd f20, 0x38(r1)
    stfd f21, 0x40(r1)
    stfd f22, 0x48(r1)
    stfd f23, 0x50(r1)
    stfd f24, 0x58(r1)
    stfd f25, 0x60(r1)
    stfd f26, 0x68(r1)
    stfd f27, 0x70(r1)
    stfd f28, 0x78(r1)
    xor r7, r7, r7
    addi r8, r5, 0x0
    lis r10, lbl_8035B278@ha
    addi r10, r10, lbl_8035B278@l
    psq_l f9, 0x0(r10), 0, 0
    lis r10, lbl_8035B280@ha
    addi r10, r10, lbl_8035B280@l
    psq_l f10, 0x0(r10), 0, 0
    lis r10, lbl_8035B288@ha
    addi r10, r10, lbl_8035B288@l
    psq_l f11, 0x0(r10), 0, 0
    lis r10, lbl_80356E44@ha
    addi r10, r10, lbl_80356E44@l
    psq_l f19, 0x0(r10), 0, 0
    psq_l f20, 0x8(r10), 1, 0
    lis r10, lbl_80356E50@ha
    addi r10, r10, lbl_80356E50@l
    psq_l f21, 0x0(r10), 0, 0
    psq_l f22, 0x8(r10), 1, 0
    lis r10, lbl_80356E14@ha
    addi r10, r10, lbl_80356E14@l
    psq_l f3, 0x0(r10), 0, 0
    psq_l f4, 0x8(r10), 0, 0
    lis r10, lbl_80356E24@ha
    addi r10, r10, lbl_80356E24@l
    psq_l f5, 0x0(r10), 0, 0
    psq_l f6, 0x8(r10), 0, 0
    lis r10, lbl_80356E34@ha
    addi r10, r10, lbl_80356E34@l
    psq_l f7, 0x0(r10), 0, 0
    psq_l f8, 0x8(r10), 0, 0
    la r10, lbl_803659F8
    psq_l f16, 0x0(r10), 0, 0
    la r10, lbl_80365A00
    psq_l f17, 0x0(r10), 0, 0
    li r10, 0x4
    mtspr GQR7, r10
L_80220B10:
    cmpw r8, r6
    bgt L_80220BF0
    lwz r9, 0x0(r8)
    andi. r9, r9, 0xf
    bne L_80220BE8
    psq_l f2, 0xc(r8), 1, 0
    psq_l f0, 0x10(r8), 0, 0
    ps_merge00 f2, f2, f2
    psq_l f1, 0x18(r8), 0, 0
    ps_madd f12, f7, f2, f5
    ps_madd f13, f8, f2, f6
    ps_madd f12, f12, f2, f3
    ps_madd f13, f13, f2, f4
    ps_sub f14, f12, f17
    ps_sub f15, f13, f17
    ps_sel f12, f12, f12, f16
    ps_sel f13, f13, f13, f16
    ps_sel f12, f14, f17, f12
    ps_sel f13, f15, f17, f13
    psq_st f12, 0x0(r4), 0, 7
    psq_st f13, 0x2(r4), 0, 7
    addi r4, r4, 0x10
    ps_madd f18, f11, f2, f10
    ps_madd f18, f18, f2, f9
    ps_muls0 f23, f19, f18
    ps_muls0 f24, f20, f18
    ps_muls1 f25, f21, f18
    ps_muls1 f26, f22, f18
    ps_sub f27, f0, f23
    ps_sub f28, f1, f24
    ps_sub f27, f27, f25
    ps_sub f28, f28, f26
    psq_st f27, 0x0(r3), 0, 0
    psq_st f28, 0x8(r3), 1, 0
    ps_add f27, f0, f23
    ps_add f28, f1, f24
    ps_sub f27, f27, f25
    ps_sub f28, f28, f26
    psq_st f27, 0x10(r3), 0, 0
    psq_st f28, 0x18(r3), 1, 0
    ps_sub f27, f0, f23
    ps_sub f28, f1, f24
    ps_add f27, f27, f25
    ps_add f28, f28, f26
    psq_st f27, 0x20(r3), 0, 0
    psq_st f28, 0x28(r3), 1, 0
    ps_add f27, f0, f23
    ps_add f28, f1, f24
    ps_add f27, f27, f25
    ps_add f28, f28, f26
    psq_st f27, 0x30(r3), 0, 0
    psq_st f28, 0x38(r3), 1, 0
    addi r3, r3, 0x40
    addi r7, r7, 0x1
L_80220BE8:
    addi r8, r8, 0x40
    b L_80220B10
L_80220BF0:
    addi r3, r7, 0x0
    lfd f14, 0x8(r1)
    lfd f15, 0x10(r1)
    lfd f16, 0x18(r1)
    lfd f17, 0x20(r1)
    lfd f18, 0x28(r1)
    lfd f19, 0x30(r1)
    lfd f20, 0x38(r1)
    lfd f21, 0x40(r1)
    lfd f22, 0x48(r1)
    lfd f23, 0x50(r1)
    lfd f24, 0x58(r1)
    lfd f25, 0x60(r1)
    lfd f26, 0x68(r1)
    lfd f27, 0x70(r1)
    lfd f28, 0x78(r1)
    addi r1, r1, 0xa0
    blr
}

} /* extern "C" */
