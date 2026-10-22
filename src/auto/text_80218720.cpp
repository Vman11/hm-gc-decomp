/* Functions from 0x80218720 to 0x802194C0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B228;
extern f32 lbl_8035B230;
extern f32 lbl_80359730;

void __ct__9C80218720Fv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B2) = 0;
}

void fn_80218750(s32 arg0) {
    lbl_8035B228 = arg0;
}

asm void fn_80218758(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    nofralloc
    slwi r4, r4, 8
    add r4, r4, r3
    slwi r3, r4, 16
    add r3, r3, r4
    mtspr 916, r3
    slwi r6, r6, 8
    add r6, r6, r5
    slwi r5, r6, 16
    add r5, r5, r6
    mtspr 917, r5
    slwi r8, r8, 8
    add r8, r8, r7
    slwi r7, r8, 16
    add r7, r7, r8
    mtspr 918, r7
    blr
}

asm void fn_80218798(void) {
    nofralloc
    mtctr r5
    subi r3, r3, 0x8
    lis r8, 0xcc00
    ori r8, r8, 0x8000
    subi r4, r4, 0x1
L_802187AC:
    psq_lux f6, r3, r7, 0, 4
    psq_lx f7, r3, r7, 1, 4
    addi r3, r3, 0x4
    lbzu r9, 0x1(r4)
    slwi r9, r9, 2
    lwzx r9, r6, r9
    psq_l f0, 0x0(r9), 0, 0
    ps_mul f8, f0, f6
    psq_l f1, 0x8(r9), 0, 0
    ps_madd f8, f1, f7, f8
    psq_l f2, 0x10(r9), 0, 0
    ps_sum0 f8, f8, f8, f8
    ps_mul f9, f2, f6
    psq_l f3, 0x18(r9), 0, 0
    ps_madd f9, f3, f7, f9
    psq_l f4, 0x20(r9), 0, 0
    ps_sum0 f9, f9, f9, f9
    ps_mul f10, f4, f6
    psq_l f5, 0x28(r9), 0, 0
    ps_madd f10, f5, f7, f10
    psq_st f8, 0x0(r8), 1, 0
    ps_sum0 f10, f10, f10, f10
    psq_st f9, 0x0(r8), 1, 0
    psq_st f10, 0x0(r8), 1, 0
    bdnz L_802187AC
    blr
}

asm void fn_80218814(void *a, void *b, u8 *idx, s32 n, void **mtx, s32 s1, s32 s2) {
    nofralloc
    stwu r1, -0xa0(r1)
    stfd f14, 0x8(r1)
    stfd f15, 0x10(r1)
    stw r14, 0x18(r1)
    mtctr r6
    add r12, r8, r8
    add r14, r9, r9
    subf r3, r12, r3
    subf r4, r14, r4
    lis r10, 0xcc00
    ori r10, r10, 0x8000
    subi r5, r5, 0x1
L_loop:
    psq_lux f6, r3, r12, 0, 4
    psq_lx f7, r3, r12, 1, 4
    add r3, r3, r8
    psq_lux f8, r4, r14, 0, 6
    psq_lx f9, r4, r14, 1, 6
    add r4, r4, r9
    lbzu r11, 0x1(r5)
    slwi r11, r11, 2
    lwzx r11, r7, r11
    psq_l f0, 0x0(r11), 0, 0
    psq_l f1, 0x8(r11), 0, 0
    ps_mul f10, f0, f6
    ps_mul f13, f0, f8
    ps_madd f10, f1, f7, f10
    ps_sum0 f13, f13, f13, f13
    ps_sum0 f10, f10, f10, f10
    ps_madd f13, f1, f9, f13
    psq_l f2, 0x10(r11), 0, 0
    psq_l f3, 0x18(r11), 0, 0
    ps_mul f11, f2, f6
    ps_mul f14, f2, f8
    ps_madd f11, f3, f7, f11
    ps_sum0 f14, f14, f14, f14
    ps_sum0 f11, f11, f11, f11
    ps_madd f14, f3, f9, f14
    psq_l f4, 0x20(r11), 0, 0
    psq_l f5, 0x28(r11), 0, 0
    ps_mul f12, f4, f6
    ps_mul f15, f4, f8
    ps_madd f12, f5, f7, f12
    ps_sum0 f15, f15, f15, f15
    ps_sum0 f12, f12, f12, f12
    ps_madd f15, f5, f9, f15
    psq_st f10, 0x0(r10), 1, 0
    psq_st f11, 0x0(r10), 1, 0
    psq_st f12, 0x0(r10), 1, 0
    psq_st f13, 0x0(r10), 1, 6
    psq_st f14, 0x0(r10), 1, 6
    psq_st f15, 0x0(r10), 1, 6
    bdnz L_loop
    lfd f14, 0x8(r1)
    lfd f15, 0x10(r1)
    lwz r14, 0x18(r1)
    addi r1, r1, 0xa0
    blr
}

asm void fn_802188F8(void *a, void *b, u8 *idx, s32 n, void **tbl, s32 s1, s32 s2) {
    nofralloc
    stwu r1, -0xa0(r1)
    stfd f14, 0x8(r1)
    stfd f15, 0x10(r1)
    stfd f16, 0x18(r1)
    stfd f17, 0x20(r1)
    stfd f18, 0x28(r1)
    stw r14, 0x30(r1)
    mtctr r6
    add r12, r8, r8
    add r14, r9, r9
    subf r3, r12, r3
    subf r4, r14, r4
    lis r10, 0xcc00
    ori r10, r10, 0x8000
    subi r5, r5, 0x1
L_loop:
    psq_lux f6, r3, r12, 0, 4
    psq_lx f7, r3, r12, 1, 4
    add r3, r3, r8
    psq_lux f8, r4, r14, 0, 6
    psq_lx f9, r4, r14, 1, 6
    add r4, r4, r9
    lbzu r11, 0x1(r5)
    slwi r11, r11, 2
    lwzx r11, r7, r11
    psq_l f0, 0x0(r11), 0, 0
    psq_l f1, 0x8(r11), 0, 0
    ps_mul f10, f0, f6
    ps_mul f13, f0, f8
    ps_madd f10, f1, f7, f10
    ps_sum0 f13, f13, f13, f13
    ps_sum0 f10, f10, f10, f10
    ps_madd f13, f1, f9, f13
    psq_l f2, 0x10(r11), 0, 0
    psq_l f3, 0x18(r11), 0, 0
    ps_mul f11, f2, f6
    ps_mul f14, f2, f8
    ps_madd f11, f3, f7, f11
    ps_sum0 f14, f14, f14, f14
    ps_sum0 f11, f11, f11, f11
    ps_madd f14, f3, f9, f14
    psq_st f10, 0x0(r10), 1, 0
    psq_l f4, 0x20(r11), 0, 0
    psq_l f5, 0x28(r11), 0, 0
    ps_mul f12, f4, f6
    ps_mul f15, f4, f8
    ps_madd f12, f5, f7, f12
    ps_sum0 f15, f15, f15, f15
    ps_sum0 f12, f12, f12, f12
    ps_madd f15, f5, f9, f15
    psq_st f11, 0x0(r10), 1, 0
    fmuls f16, f13, f10
    fmuls f17, f13, f13
    fmadds f16, f14, f11, f16
    fmadds f17, f14, f14, f17
    fmadds f16, f15, f12, f16
    fmadds f17, f15, f15, f17
    psq_st f12, 0x0(r10), 1, 0
    fadds f16, f16, f16
    fdivs f16, f16, f17
    fnmsubs f10, f16, f13, f10
    fnmsubs f11, f16, f14, f11
    fnmsubs f12, f16, f15, f12
    fmuls f18, f10, f10
    fmadds f18, f11, f11, f18
    fmadds f18, f12, f12, f18
    frsqrte f18, f18
    fmul f10, f10, f18
    fmul f11, f11, f18
    fmul f12, f12, f18
    psq_st f13, 0x0(r10), 1, 6
    psq_st f14, 0x0(r10), 1, 6
    psq_st f15, 0x0(r10), 1, 6
    psq_st f10, 0x0(r10), 1, 6
    psq_st f11, 0x0(r10), 1, 6
    psq_st f12, 0x0(r10), 1, 6
    bdnz L_loop
    lfd f14, 0x8(r1)
    lfd f15, 0x10(r1)
    lfd f16, 0x18(r1)
    lfd f17, 0x20(r1)
    lfd f18, 0x28(r1)
    lwz r14, 0x30(r1)
    addi r1, r1, 0xa0
    blr
}


asm void fn_80218A48(void) {
    nofralloc
    lwz r11, 0x8(r1)
    stwu r1, -0xa0(r1)
    stfd f14, 0x8(r1)
    stfd f15, 0x10(r1)
    stw r14, 0x18(r1)
    stw r15, 0x1c(r1)
    stw r16, 0x20(r1)
    mtctr r5
    add r12, r10, r10
    subf r3, r11, r3
    lfs f13, lbl_80359730(r0)
    subf r4, r12, r4
    lis r14, 0xcc00
    ori r14, r14, 0x8000
    lfs f14, lbl_8035B230(r0)
    subi r7, r7, 0x1
L_80218A88:
    lfs f6, lbl_8035B230(r0)
    addi r15, r9, 0x0
    lfs f7, lbl_8035B230(r0)
    lfs f8, lbl_8035B230(r0)
    psq_lux f4, r4, r12, 0, 4
    psq_lx f5, r4, r12, 1, 4
    add r4, r4, r10
    lfs f12, lbl_8035B230(r0)
L_80218AA8:
    psq_lux f15, r3, r11, 1, 5
    subi r15, r15, 0x1
    lbzu r16, 0x1(r7)
    ps_cmpo0 cr0, f15, f14
    bne L_80218AC0
    b L_80218B14
L_80218AC0:
    slwi r16, r16, 2
    lwzx r16, r6, r16
    psq_l f0, 0x0(r16), 0, 0
    ps_mul f9, f0, f4
    psq_l f1, 0x8(r16), 0, 0
    ps_madd f10, f1, f5, f9
    psq_l f2, 0x10(r16), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f3, 0x18(r16), 0, 0
    ps_mul f9, f2, f4
    fmadds f6, f11, f15, f6
    fadds f12, f12, f15
    ps_madd f10, f3, f5, f9
    psq_l f0, 0x20(r16), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f1, 0x28(r16), 0, 0
    ps_mul f9, f0, f4
    fmadds f7, f11, f15, f7
    ps_madd f10, f1, f5, f9
    ps_sum0 f11, f10, f11, f10
    fmadds f8, f11, f15, f8
L_80218B14:
    cmpwi r15, 0x0
    bgt L_80218AA8
    fsubs f15, f13, f12
    lbzu r16, 0x1(r7)
    ps_cmpo0 cr0, f15, f14
    bne L_80218B30
    b L_80218B80
L_80218B30:
    slwi r16, r16, 2
    lwzx r16, r6, r16
    psq_l f0, 0x0(r16), 0, 0
    ps_mul f9, f0, f4
    psq_l f1, 0x8(r16), 0, 0
    ps_madd f10, f1, f5, f9
    psq_l f2, 0x10(r16), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f3, 0x18(r16), 0, 0
    ps_mul f9, f2, f4
    fmadds f6, f11, f15, f6
    ps_madd f10, f3, f5, f9
    psq_l f0, 0x20(r16), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f1, 0x28(r16), 0, 0
    ps_mul f9, f0, f4
    fmadds f7, f11, f15, f7
    ps_madd f10, f1, f5, f9
    ps_sum0 f11, f10, f11, f10
    fmadds f8, f11, f15, f8
L_80218B80:
    psq_st f6, 0x0(r14), 1, 0
    subf r7, r8, r7
    psq_st f7, 0x0(r14), 1, 0
    psq_st f8, 0x0(r14), 1, 0
    bdnz L_80218A88
    lfd f14, 0x8(r1)
    lfd f15, 0x10(r1)
    lwz r14, 0x18(r1)
    lwz r15, 0x1c(r1)
    lwz r16, 0x20(r1)
    addi r1, r1, 0xa0
    blr
}


asm void fn_80218BB0(void) {
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
    stw r14, 0x50(r1)
    stw r15, 0x54(r1)
    stw r16, 0x58(r1)
    stw r17, 0x5c(r1)
    stw r18, 0x60(r1)
    stw r19, 0x64(r1)
    lwz r11, 0xa8(r1)
    lwz r12, 0xac(r1)
    lwz r14, 0xb0(r1)
    add r15, r11, r11
    add r16, r12, r12
    mtctr r6
    lfs f21, lbl_8035B230(r0)
    subf r3, r14, r3
    lfs f20, lbl_80359730(r0)
    subf r4, r15, r4
    lis r17, 0xcc00
    ori r17, r17, 0x8000
    subf r5, r16, r5
    subi r8, r8, 0x1
L_80218C28:
    lfs f8, lbl_8035B230(r0)
    addi r18, r10, 0x0
    lfs f9, lbl_8035B230(r0)
    lfs f10, lbl_8035B230(r0)
    lfs f11, lbl_8035B230(r0)
    lfs f12, lbl_8035B230(r0)
    lfs f13, lbl_8035B230(r0)
    psq_lux f4, r4, r15, 0, 4
    psq_lx f5, r4, r15, 1, 4
    add r4, r4, r11
    psq_lux f6, r5, r16, 0, 6
    psq_lx f7, r5, r16, 1, 6
    add r5, r5, r12
    lfs f19, lbl_8035B230(r0)
L_80218C60:
    psq_lux f22, r3, r14, 1, 5
    subi r18, r18, 0x1
    lbzu r19, 0x1(r8)
    ps_cmpo0 cr0, f22, f21
    bne L_80218C78
    b L_80218CFC
L_80218C78:
    slwi r19, r19, 2
    lwzx r19, r7, r19
    psq_l f0, 0x0(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    psq_l f1, 0x8(r19), 0, 0
    ps_sum0 f17, f17, f17, f17
    ps_madd f15, f1, f5, f14
    ps_madd f18, f1, f7, f17
    psq_l f2, 0x10(r19), 0, 0
    ps_sum0 f16, f15, f16, f15
    fmadds f11, f18, f22, f11
    ps_mul f17, f2, f6
    psq_l f3, 0x18(r19), 0, 0
    ps_mul f14, f2, f4
    ps_sum0 f17, f17, f17, f17
    fmadds f8, f16, f22, f8
    fadds f19, f19, f22
    ps_madd f18, f3, f7, f17
    ps_madd f15, f3, f5, f14
    psq_l f0, 0x20(r19), 0, 0
    fmadds f12, f18, f22, f12
    ps_sum0 f16, f15, f16, f15
    psq_l f1, 0x28(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    fmadds f9, f16, f22, f9
    ps_madd f15, f1, f5, f14
    ps_sum0 f17, f17, f17, f17
    ps_sum0 f16, f15, f16, f15
    fmadds f10, f16, f22, f10
    ps_madd f18, f1, f7, f17
    fmadds f13, f18, f22, f13
L_80218CFC:
    cmpwi r18, 0x0
    bgt L_80218C60
    fsubs f22, f20, f19
    lbzu r19, 0x1(r8)
    ps_cmpo0 cr0, f22, f21
    bne L_80218D18
    b L_80218D98
L_80218D18:
    slwi r19, r19, 2
    lwzx r19, r7, r19
    psq_l f0, 0x0(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    psq_l f1, 0x8(r19), 0, 0
    ps_sum0 f17, f17, f17, f17
    ps_madd f15, f1, f5, f14
    ps_madd f18, f1, f7, f17
    psq_l f2, 0x10(r19), 0, 0
    ps_sum0 f16, f15, f16, f15
    fmadds f11, f18, f22, f11
    ps_mul f17, f2, f6
    psq_l f3, 0x18(r19), 0, 0
    ps_mul f14, f2, f4
    ps_sum0 f17, f17, f17, f17
    fmadds f8, f16, f22, f8
    ps_madd f18, f3, f7, f17
    ps_madd f15, f3, f5, f14
    psq_l f0, 0x20(r19), 0, 0
    fmadds f12, f18, f22, f12
    ps_sum0 f16, f15, f16, f15
    psq_l f1, 0x28(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    fmadds f9, f16, f22, f9
    ps_madd f15, f1, f5, f14
    ps_sum0 f17, f17, f17, f17
    ps_sum0 f16, f15, f16, f15
    fmadds f10, f16, f22, f10
    ps_madd f18, f1, f7, f17
    fmadds f13, f18, f22, f13
L_80218D98:
    psq_st f8, 0x0(r17), 1, 0
    subf r8, r9, r8
    psq_st f9, 0x0(r17), 1, 0
    psq_st f10, 0x0(r17), 1, 0
    psq_st f11, 0x0(r17), 1, 6
    psq_st f12, 0x0(r17), 1, 6
    psq_st f13, 0x0(r17), 1, 6
    bdnz L_80218C28
    lfd f14, 0x8(r1)
    lfd f15, 0x10(r1)
    lfd f16, 0x18(r1)
    lfd f17, 0x20(r1)
    lfd f18, 0x28(r1)
    lfd f19, 0x30(r1)
    lfd f20, 0x38(r1)
    lfd f21, 0x40(r1)
    lfd f22, 0x48(r1)
    lwz r14, 0x50(r1)
    lwz r15, 0x54(r1)
    lwz r16, 0x58(r1)
    lwz r17, 0x5c(r1)
    lwz r18, 0x60(r1)
    lwz r19, 0x64(r1)
    addi r1, r1, 0xa0
    blr
}


asm void fn_80218DFC(void) {
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
    stw r14, 0x68(r1)
    stw r15, 0x6c(r1)
    stw r16, 0x70(r1)
    stw r17, 0x74(r1)
    stw r18, 0x78(r1)
    stw r19, 0x7c(r1)
    lwz r11, 0xa8(r1)
    lwz r12, 0xac(r1)
    lwz r14, 0xb0(r1)
    add r15, r11, r11
    add r16, r12, r12
    mtctr r6
    lfs f23, lbl_8035B230(r0)
    subf r3, r14, r3
    lfs f22, lbl_80359730(r0)
    subf r4, r15, r4
    lis r17, 0xcc00
    ori r17, r17, 0x8000
    subf r5, r16, r5
    subi r8, r8, 0x1
L_80218E80:
    lfs f8, lbl_8035B230(r0)
    addi r18, r10, 0x0
    lfs f9, lbl_8035B230(r0)
    lfs f10, lbl_8035B230(r0)
    lfs f11, lbl_8035B230(r0)
    lfs f12, lbl_8035B230(r0)
    lfs f13, lbl_8035B230(r0)
    psq_lux f4, r4, r15, 0, 4
    psq_lx f5, r4, r15, 1, 4
    add r4, r4, r11
    psq_lux f6, r5, r16, 0, 6
    psq_lx f7, r5, r16, 1, 6
    add r5, r5, r12
    lfs f21, lbl_8035B230(r0)
L_80218EB8:
    psq_lux f24, r3, r14, 1, 5
    subi r18, r18, 0x1
    lbzu r19, 0x1(r8)
    ps_cmpo0 cr0, f24, f23
    bne L_80218ED0
    b L_80218F54
L_80218ED0:
    slwi r19, r19, 2
    lwzx r19, r7, r19
    psq_l f0, 0x0(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    psq_l f1, 0x8(r19), 0, 0
    ps_sum0 f17, f17, f17, f17
    ps_madd f15, f1, f5, f14
    ps_madd f18, f1, f7, f17
    psq_l f2, 0x10(r19), 0, 0
    ps_sum0 f16, f15, f16, f15
    fmadds f11, f18, f24, f11
    ps_mul f17, f2, f6
    psq_l f3, 0x18(r19), 0, 0
    ps_mul f14, f2, f4
    ps_sum0 f17, f17, f17, f17
    fmadds f8, f16, f24, f8
    fadds f21, f21, f24
    ps_madd f18, f3, f7, f17
    ps_madd f15, f3, f5, f14
    psq_l f0, 0x20(r19), 0, 0
    fmadds f12, f18, f24, f12
    ps_sum0 f16, f15, f16, f15
    psq_l f1, 0x28(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    fmadds f9, f16, f24, f9
    ps_madd f15, f1, f5, f14
    ps_sum0 f17, f17, f17, f17
    ps_sum0 f16, f15, f16, f15
    fmadds f10, f16, f24, f10
    ps_madd f18, f1, f7, f17
    fmadds f13, f18, f24, f13
L_80218F54:
    cmpwi r18, 0x0
    bgt L_80218EB8
    fsubs f24, f22, f21
    lbzu r19, 0x1(r8)
    slwi r19, r19, 2
    lwzx r19, r7, r19
    psq_l f0, 0x0(r19), 0, 0
    ps_mul f14, f0, f4
    ps_mul f17, f0, f6
    psq_l f1, 0x8(r19), 0, 0
    ps_sum0 f17, f17, f17, f17
    ps_madd f15, f1, f5, f14
    ps_madd f18, f1, f7, f17
    psq_l f2, 0x10(r19), 0, 0
    ps_sum0 f16, f15, f16, f15
    fmadds f11, f18, f24, f11
    ps_mul f17, f2, f6
    psq_l f3, 0x18(r19), 0, 0
    ps_mul f14, f2, f4
    ps_sum0 f17, f17, f17, f17
    fmadds f8, f16, f24, f8
    ps_madd f18, f3, f7, f17
    psq_st f8, 0x0(r17), 1, 0
    fmuls f19, f11, f8
    fmuls f20, f11, f11
    ps_madd f15, f3, f5, f14
    psq_l f0, 0x20(r19), 0, 0
    fmadds f12, f18, f24, f12
    ps_sum0 f16, f15, f16, f15
    psq_l f1, 0x28(r19), 0, 0
    subf r8, r9, r8
    fmadds f9, f16, f24, f9
    fmadds f20, f12, f12, f20
    ps_mul f14, f0, f4
    fmadds f19, f12, f9, f19
    ps_mul f17, f0, f6
    ps_madd f15, f1, f5, f14
    ps_sum0 f17, f17, f17, f17
    psq_st f9, 0x0(r17), 1, 0
    ps_sum0 f16, f15, f16, f15
    fmadds f10, f16, f24, f10
    ps_madd f18, f1, f7, f17
    fmadds f13, f18, f24, f13
    psq_st f10, 0x0(r17), 1, 0
    fmadds f19, f13, f10, f19
    fmadds f20, f13, f13, f20
    psq_st f11, 0x0(r17), 1, 6
    fadds f19, f19, f19
    psq_st f12, 0x0(r17), 1, 6
    fdivs f19, f19, f20
    psq_st f13, 0x0(r17), 1, 6
    fnmsubs f8, f19, f11, f8
    fnmsubs f9, f19, f12, f9
    fnmsubs f10, f19, f13, f10
    fmuls f25, f8, f8
    fmadds f25, f9, f9, f25
    fmadds f25, f10, f10, f25
    frsqrte f25, f25
    fmul f8, f8, f25
    fmul f9, f9, f25
    fmul f10, f10, f25
    psq_st f8, 0x0(r17), 1, 6
    psq_st f9, 0x0(r17), 1, 6
    psq_st f10, 0x0(r17), 1, 6
    bdnz L_80218E80
    lfs f16, lbl_8035B230(r0)
    psq_st f16, 0x0(r17), 1, 6
    psq_st f16, 0x0(r17), 1, 6
    psq_st f16, 0x0(r17), 1, 6
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
    lwz r14, 0x68(r1)
    lwz r15, 0x6c(r1)
    lwz r16, 0x70(r1)
    lwz r17, 0x74(r1)
    lwz r18, 0x78(r1)
    lwz r19, 0x7c(r1)
    addi r1, r1, 0xa0
    blr
}


asm void fn_802190B8(void *a, void *b, s32 n, void *c, u8 *d, s32 e, s32 f, s32 g) {
    nofralloc
    stwu r1, -0xa0(r1)
    stfd f14, 0x8(r1)
    stw r14, 0x10(r1)
    mtctr r5
    subf r3, r10, r3
    add r11, r9, r9
    lfs f12, lbl_80359730(r0)
    subf r4, r11, r4
    lis r12, 0xcc00
    ori r12, r12, 0x8000
    lfs f13, lbl_8035B230(r0)
    addi r7, r7, -0x1
L_802190E8:
    psq_lux f4, r4, r11, 0, 4
    psq_lx f5, r4, r11, 1, 4
    add r4, r4, r9
    psq_lux f14, r3, r10, 1, 5
    ps_cmpo0 cr0, f14, f13
    beq L_8021910C
    ps_cmpo0 cr0, f14, f12
    beq L_8021910C
    b L_80219124
L_8021910C:
    psq_st f4, 0x0(r12), 0, 0
    psq_st f5, 0x0(r12), 1, 0
    addi r7, r7, 0x2
    subf r7, r8, r7
    bdnz L_802190E8
    b L_802191E4
L_80219124:
    lbzu r14, 0x1(r7)
    slwi r14, r14, 2
    lwzx r14, r6, r14
    psq_l f0, 0x0(r14), 0, 0
    ps_mul f9, f0, f4
    psq_l f1, 0x8(r14), 0, 0
    ps_madd f10, f1, f5, f9
    psq_l f2, 0x10(r14), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f3, 0x18(r14), 0, 0
    ps_mul f9, f2, f4
    fmuls f6, f11, f14
    ps_madd f10, f3, f5, f9
    psq_l f0, 0x20(r14), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f1, 0x28(r14), 0, 0
    ps_mul f9, f0, f4
    fmuls f7, f11, f14
    ps_madd f10, f1, f5, f9
    ps_sum0 f11, f10, f11, f10
    fmuls f8, f11, f14
    fsubs f14, f12, f14
    lbzu r14, 0x1(r7)
    slwi r14, r14, 2
    lwzx r14, r6, r14
    psq_l f0, 0x0(r14), 0, 0
    ps_mul f9, f0, f4
    psq_l f1, 0x8(r14), 0, 0
    ps_madd f10, f1, f5, f9
    psq_l f2, 0x10(r14), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f3, 0x18(r14), 0, 0
    ps_mul f9, f2, f4
    fmadds f6, f11, f14, f6
    ps_madd f10, f3, f5, f9
    psq_l f0, 0x20(r14), 0, 0
    ps_sum0 f11, f10, f11, f10
    psq_l f1, 0x28(r14), 0, 0
    ps_mul f9, f0, f4
    fmadds f7, f11, f14, f7
    ps_madd f10, f1, f5, f9
    ps_sum0 f11, f10, f11, f10
    fmadds f8, f11, f14, f8
    psq_st f6, 0x0(r12), 1, 0
    subf r7, r8, r7
    psq_st f7, 0x0(r12), 1, 0
    psq_st f8, 0x0(r12), 1, 0
    bdnz L_802190E8
L_802191E4:
    lfd f14, 0x8(r1)
    lwz r14, 0x10(r1)
    addi r1, r1, 0xa0
    blr
}


asm void fn_802191F4(void) {
    nofralloc
    lwz r11, 0x8(r1)
    lwz r12, 0xc(r1)
    stwu r1, -0xa0(r1)
    stfd f14, 0x8(r1)
    stfd f15, 0x10(r1)
    stfd f16, 0x18(r1)
    stfd f17, 0x20(r1)
    stfd f18, 0x28(r1)
    stfd f19, 0x30(r1)
    stfd f20, 0x38(r1)
    stfd f21, 0x40(r1)
    stw r14, 0x48(r1)
    stw r15, 0x4c(r1)
    stw r16, 0x50(r1)
    stw r17, 0x54(r1)
    mtctr r6
    subf r3, r12, r3
    add r16, r10, r10
    add r17, r11, r11
    lfs f19, lbl_80359730(r0)
    subf r4, r16, r4
    subf r5, r17, r5
    lis r14, 0xcc00
    ori r14, r14, 0x8000
    lfs f20, lbl_8035B230(r0)
    subi r8, r8, 0x1
L_8021925C:
    psq_lux f4, r4, r16, 0, 4
    psq_lx f5, r4, r16, 1, 4
    add r4, r4, r10
    psq_lux f6, r5, r17, 0, 6
    psq_lx f7, r5, r17, 1, 6
    add r5, r5, r11
    psq_lux f21, r3, r12, 1, 5
    ps_cmpo0 cr0, f21, f20
    beq L_8021928C
    ps_cmpo0 cr0, f21, f19
    beq L_8021928C
    b L_802192AC
L_8021928C:
    psq_st f4, 0x0(r14), 0, 0
    psq_st f5, 0x0(r14), 1, 0
    psq_st f6, 0x0(r14), 0, 6
    psq_st f7, 0x0(r14), 1, 6
    addi r8, r8, 0x2
    subf r8, r9, r8
    bdnz L_8021925C
    b L_802193D8
L_802192AC:
    lbzu r15, 0x1(r8)
    slwi r15, r15, 2
    lwzx r15, r7, r15
    psq_l f0, 0x0(r15), 0, 0
    ps_mul f14, f0, f4
    ps_mul f16, f0, f6
    psq_l f1, 0x8(r15), 0, 0
    ps_sum0 f16, f16, f16, f16
    ps_madd f15, f1, f5, f14
    ps_madd f18, f1, f7, f16
    psq_l f2, 0x10(r15), 0, 0
    ps_sum0 f17, f15, f17, f15
    fmuls f11, f18, f21
    ps_mul f16, f2, f6
    psq_l f3, 0x18(r15), 0, 0
    ps_mul f14, f2, f4
    ps_sum0 f16, f16, f16, f16
    fmuls f8, f17, f21
    ps_madd f18, f3, f7, f16
    ps_madd f15, f3, f5, f14
    psq_l f0, 0x20(r15), 0, 0
    fmuls f12, f18, f21
    ps_sum0 f17, f15, f17, f15
    psq_l f1, 0x28(r15), 0, 0
    ps_mul f14, f0, f4
    ps_mul f16, f0, f6
    fmuls f9, f17, f21
    ps_madd f15, f1, f5, f14
    ps_sum0 f16, f16, f16, f16
    ps_sum0 f17, f15, f17, f15
    fmuls f10, f17, f21
    ps_madd f18, f1, f7, f16
    fmuls f13, f18, f21
    fsubs f21, f19, f21
    lbzu r15, 0x1(r8)
    slwi r15, r15, 2
    lwzx r15, r7, r15
    psq_l f0, 0x0(r15), 0, 0
    ps_mul f14, f0, f4
    ps_mul f16, f0, f6
    psq_l f1, 0x8(r15), 0, 0
    ps_sum0 f16, f16, f16, f16
    ps_madd f15, f1, f5, f14
    ps_madd f18, f1, f7, f16
    psq_l f2, 0x10(r15), 0, 0
    ps_sum0 f17, f15, f17, f15
    fmadds f11, f18, f21, f11
    ps_mul f16, f2, f6
    psq_l f3, 0x18(r15), 0, 0
    ps_mul f14, f2, f4
    ps_sum0 f16, f16, f16, f16
    fmadds f8, f17, f21, f8
    ps_madd f18, f3, f7, f16
    ps_madd f15, f3, f5, f14
    psq_l f0, 0x20(r15), 0, 0
    fmadds f12, f18, f21, f12
    ps_sum0 f17, f15, f17, f15
    psq_l f1, 0x28(r15), 0, 0
    ps_mul f14, f0, f4
    ps_mul f16, f0, f6
    fmadds f9, f17, f21, f9
    ps_madd f15, f1, f5, f14
    ps_sum0 f16, f16, f16, f16
    ps_sum0 f17, f15, f17, f15
    fmadds f10, f17, f21, f10
    ps_madd f18, f1, f7, f16
    fmadds f13, f18, f21, f13
    psq_st f8, 0x0(r14), 1, 0
    subf r8, r9, r8
    psq_st f9, 0x0(r14), 1, 0
    psq_st f10, 0x0(r14), 1, 0
    psq_st f11, 0x0(r14), 1, 6
    psq_st f12, 0x0(r14), 1, 6
    psq_st f13, 0x0(r14), 1, 6
    bdnz L_8021925C
L_802193D8:
    lfd f14, 0x8(r1)
    lfd f15, 0x10(r1)
    lfd f16, 0x18(r1)
    lfd f17, 0x20(r1)
    lfd f18, 0x28(r1)
    lfd f19, 0x30(r1)
    lfd f20, 0x38(r1)
    lfd f21, 0x40(r1)
    lwz r14, 0x48(r1)
    lwz r15, 0x4c(r1)
    lwz r16, 0x50(r1)
    lwz r17, 0x54(r1)
    addi r1, r1, 0xa0
    blr
}


asm void fn_80219410(void *a, void *b, void *c, s32 n, s32 s1, s32 s2) {
    nofralloc
    add r9, r7, r7
    add r10, r8, r8
    mtctr r6
    lfs f0, lbl_8035B230(r0)
    subf r4, r9, r4
    lis r11, 0xcc00
    ori r11, r11, 0x8000
    lfs f1, lbl_80359730(r0)
    subf r5, r10, r5
    psq_l f2, 0x0(r3), 0, 0
    psq_l f3, 0x8(r3), 1, 0
L_loop:
    psq_lux f4, r4, r9, 0, 4
    psq_lx f5, r4, r9, 1, 4
    add r4, r4, r7
    psq_lux f6, r5, r10, 0, 6
    psq_lx f7, r5, r10, 1, 6
    add r5, r5, r8
    ps_sub f4, f4, f2
    ps_sub f5, f5, f3
    ps_mul f10, f6, f4
    ps_sum0 f10, f10, f10, f10
    ps_madd f10, f7, f5, f10
    ps_merge00 f10, f10, f10
    ps_add f10, f10, f10
    ps_nmsub f8, f10, f6, f4
    ps_nmsub f9, f10, f7, f5
    ps_mul f11, f8, f8
    ps_sum0 f11, f11, f11, f11
    ps_madd f11, f9, f9, f11
    ps_merge00 f11, f11, f11
    ps_rsqrte f11, f11
    ps_mul f8, f8, f11
    ps_mul f9, f9, f11
    psq_st f6, 0x0(r11), 0, 6
    psq_st f7, 0x0(r11), 1, 6
    psq_st f8, 0x0(r11), 0, 6
    psq_st f9, 0x0(r11), 1, 6
    bdnz L_loop
    psq_st f0, 0x0(r11), 1, 6
    psq_st f0, 0x0(r11), 1, 6
    psq_st f1, 0x0(r11), 1, 6
    blr
}

void fn_802194B8(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

} /* extern "C" */
