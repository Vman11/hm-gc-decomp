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
