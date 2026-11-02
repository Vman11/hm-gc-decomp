/* Functions from 0x800E24F0 to 0x800E2C68, found by decomp-toolkit. */
#include "common.h"



extern const double lbl_8029BF20[];
asm unsigned __cvt_fp2unsigned(double d) {
    nofralloc
    stwu r1, -16(r1)
    lis r4, lbl_8029BF20@h
    ori r4, r4, lbl_8029BF20@l
    li r3, 0
    lfd f0, 0(r4)
    lfd f3, 8(r4)
    lfd f4, 16(r4)
    fcmpu cr0, f1, f0
    fcmpu cr6, f1, f3
    blt cr0, L_end
    addi r3, r3, -1
    bge cr6, L_end
    fcmpu cr7, f1, f4
    fmr f2, f1
    blt cr7, L_cv
    fsub f2, f1, f4
L_cv:
    fctiwz f2, f2
    stfd f2, 8(r1)
    lwz r3, 12(r1)
    blt cr7, L_end
    addis r3, r3, -32768
L_end:
    addi r1, r1, 16
    blr
}

int GetR2__Fv_800E2C60(int r2) {
    return r2;
}

asm s32 fn_800E24F0(void *p) {
    nofralloc
    lwz r5, 0(r3)
    lwz r6, 4(r3)
    lwz r7, 8(r3)
    li r3, 1
    cmpwi r5, 0
    cmpwi cr6, r6, 0
    cmpwi cr7, r7, 0
    bnelr
    bnelr cr6
    bnelr cr7
    li r3, 0
    blr
}

asm s32 fn_800E2520(void *a, void *b) {
    nofralloc
    lwz r5, 0(r3)
    lwz r6, 0(r4)
    lwz r7, 4(r3)
    lwz r8, 4(r4)
    lwz r9, 8(r3)
    lwz r10, 8(r4)
    li r3, 1
    cmpw r5, r6
    cmpw cr6, r7, r8
    cmpw cr7, r9, r10
    bnelr
    bnelr cr6
    bnelr cr7
    li r3, 0
    blr
}

asm void __ptmf_scall(void) {
    nofralloc
    lwz r0, 0(r12)
    lwz r11, 4(r12)
    lwz r12, 8(r12)
    add r3, r3, r0
    cmpwi r11, 0
    blt loc_0x20
    lwzx r12, r3, r12
    lwzx r12, r12, r11
loc_0x20:
    mtctr r12
    bctr
}
