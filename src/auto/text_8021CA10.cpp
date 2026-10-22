/* Functions from 0x8021CA10 to 0x8021CC4C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B250;
void fn_8021CA10(void **arg0) {
    extern u8 lbl_802F03A0[];
    extern u8 lbl_802F0388[];
    arg0[0] = lbl_802F03A0;
    arg0[0] = lbl_802F0388;
}

void fn_8021CA2C(s32 arg0) {
    lbl_8035B250 = arg0;
}

extern u8 lbl_80365938[8];
extern u8 lbl_80365940[8];
extern u8 lbl_80365948[8];
extern u8 lbl_80365950[4];
extern u8 lbl_80365954[4];
extern u8 lbl_80365958[4];
extern u8 lbl_8036595C[4];
extern u8 lbl_80365960[4];

asm void fn_8021CA34(void) {
    nofralloc
    stwu r1, -0x14(r1)
    lis r5, 0x5
    mtspr GQR4, r5
    la r5, lbl_80365938
    la r6, lbl_80365940
    la r7, lbl_80365948
    psq_l f2, 0x0(r5), 0, 0
    psq_l f3, 0x0(r6), 0, 0
    psq_l f4, 0x0(r7), 0, 0
    lwz r5, lbl_80365950(r0)
    and. r7, r5, r3
    lwz r6, lbl_80365954(r0)
    beq L_8021CB40
    and. r7, r6, r3
    beq L_8021CAD8
    lwz r7, lbl_80365958(r0)
    lwz r6, lbl_8036595C(r0)
    lwz r5, lbl_80365960(r0)
    and r7, r3, r7
    and r6, r3, r6
    and r5, r3, r5
    srwi r7, r7, 20
    srwi r6, r6, 10
    sth r7, 0xc(r1)
    sth r6, 0xa(r1)
    sth r5, 0x8(r1)
    psq_l f0, 0x8(r1), 0, 4
    psq_l f1, 0xc(r1), 1, 4
    ps_madd f0, f0, f2, f3
    ps_madd f1, f1, f2, f3
    psq_st f0, 0x0(r4), 0, 4
    psq_st f1, 0x8(r4), 1, 4
    ps_mul f0, f0, f0
    ps_mul f1, f1, f1
    ps_sum0 f0, f0, f0, f0
    ps_add f0, f0, f1
    ps_sub f0, f4, f0
    ps_rsqrte f1, f0
    ps_mul f0, f0, f1
    psq_st f0, 0xc(r4), 1, 4
    b L_8021CC14
L_8021CAD8:
    lwz r7, lbl_80365958(r0)
    lwz r6, lbl_8036595C(r0)
    lwz r5, lbl_80365960(r0)
    and r7, r3, r7
    and r6, r3, r6
    and r5, r3, r5
    srwi r7, r7, 20
    srwi r6, r6, 10
    sth r7, 0xc(r1)
    sth r6, 0xa(r1)
    sth r5, 0x8(r1)
    psq_l f0, 0x8(r1), 0, 4
    psq_l f1, 0xc(r1), 1, 4
    ps_madd f0, f0, f2, f3
    ps_madd f1, f1, f2, f3
    psq_st f0, 0x0(r4), 0, 4
    psq_st f1, 0xc(r4), 1, 4
    ps_mul f0, f0, f0
    ps_mul f1, f1, f1
    ps_sum0 f0, f0, f0, f0
    ps_add f0, f0, f1
    ps_sub f0, f4, f0
    ps_rsqrte f1, f0
    ps_mul f0, f0, f1
    psq_st f0, 0x8(r4), 1, 4
    b L_8021CC14
L_8021CB40:
    and. r7, r6, r3
    beq L_8021CBB0
    lwz r7, lbl_80365958(r0)
    lwz r6, lbl_8036595C(r0)
    lwz r5, lbl_80365960(r0)
    and r7, r3, r7
    and r6, r3, r6
    and r5, r3, r5
    srwi r7, r7, 20
    srwi r6, r6, 10
    sth r7, 0xc(r1)
    sth r6, 0xa(r1)
    sth r5, 0x8(r1)
    psq_l f0, 0x8(r1), 1, 4
    psq_l f1, 0xa(r1), 0, 4
    ps_madd f0, f0, f2, f3
    ps_madd f1, f1, f2, f3
    psq_st f0, 0x0(r4), 1, 4
    psq_st f1, 0x8(r4), 0, 4
    ps_mul f1, f1, f1
    ps_mul f0, f0, f0
    ps_sum0 f1, f1, f1, f1
    ps_add f1, f1, f0
    ps_sub f1, f4, f1
    ps_rsqrte f0, f1
    ps_mul f1, f0, f1
    psq_st f1, 0x4(r4), 1, 4
    b L_8021CC14
L_8021CBB0:
    lwz r7, lbl_80365958(r0)
    lwz r6, lbl_8036595C(r0)
    lwz r5, lbl_80365960(r0)
    and r7, r3, r7
    and r6, r3, r6
    and r5, r3, r5
    srwi r7, r7, 20
    srwi r6, r6, 10
    sth r7, 0xc(r1)
    sth r6, 0xa(r1)
    sth r5, 0x8(r1)
    psq_l f0, 0x8(r1), 1, 4
    psq_l f1, 0xa(r1), 0, 4
    ps_madd f0, f0, f2, f3
    ps_madd f1, f1, f2, f3
    psq_st f0, 0x4(r4), 1, 4
    psq_st f1, 0x8(r4), 0, 4
    ps_mul f1, f1, f1
    ps_mul f0, f0, f0
    ps_sum0 f1, f1, f1, f1
    ps_add f1, f1, f0
    ps_sub f1, f4, f1
    ps_rsqrte f0, f1
    ps_mul f1, f0, f1
    psq_st f1, 0x0(r4), 1, 4
L_8021CC14:
    addi r1, r1, 0x14
    blr
}

void fn_8021CC1C(void *arg0, s32 arg1, f32 *arg2) {
    f32 *src = (f32 *)(*(u8 **)((u8 *)arg0 + 0x3C) + arg1 * 0x10);
    arg2[0] = src[0];
    arg2[1] = src[1];
    arg2[2] = src[2];
    arg2[3] = src[3];
}

} /* extern "C" */
