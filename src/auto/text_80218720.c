/* Functions from 0x80218720 to 0x802194C0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B228;
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

void fn_802194B8(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

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

extern f32 lbl_8035B230;
extern f32 lbl_80359730;

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
