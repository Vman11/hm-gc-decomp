/* Functions from 0x800E2CDC to 0x800E2F24, found by decomp-toolkit. */
#include "common.h"

asm void fn_800E2CDC(void) {
    nofralloc
    mr r8, r5
    mr r2, r4
    lwz r0, 0x280(r3)
    mtcrf 255, r0
    lmw r13, 0x234(r3)
    addi r7, r3, 0xe8
    psq_lx f14, r0, r7, 0, 0
    lfd f14, 0xe0(r3)
    addi r7, r3, 0xf8
    psq_lx f15, r0, r7, 0, 0
    lfd f15, 0xf0(r3)
    addi r7, r3, 0x108
    psq_lx f16, r0, r7, 0, 0
    lfd f16, 0x100(r3)
    addi r7, r3, 0x118
    psq_lx f17, r0, r7, 0, 0
    lfd f17, 0x110(r3)
    addi r7, r3, 0x128
    psq_lx f18, r0, r7, 0, 0
    lfd f18, 0x120(r3)
    addi r7, r3, 0x138
    psq_lx f19, r0, r7, 0, 0
    lfd f19, 0x130(r3)
    addi r7, r3, 0x148
    psq_lx f20, r0, r7, 0, 0
    lfd f20, 0x140(r3)
    addi r7, r3, 0x158
    psq_lx f21, r0, r7, 0, 0
    lfd f21, 0x150(r3)
    addi r7, r3, 0x168
    psq_lx f22, r0, r7, 0, 0
    lfd f22, 0x160(r3)
    addi r7, r3, 0x178
    psq_lx f23, r0, r7, 0, 0
    lfd f23, 0x170(r3)
    addi r7, r3, 0x188
    psq_lx f24, r0, r7, 0, 0
    lfd f24, 0x180(r3)
    addi r7, r3, 0x198
    psq_lx f25, r0, r7, 0, 0
    lfd f25, 0x190(r3)
    addi r7, r3, 0x1a8
    psq_lx f26, r0, r7, 0, 0
    lfd f26, 0x1a0(r3)
    addi r7, r3, 0x1b8
    psq_lx f27, r0, r7, 0, 0
    lfd f27, 0x1b0(r3)
    addi r7, r3, 0x1c8
    psq_lx f28, r0, r7, 0, 0
    lfd f28, 0x1c0(r3)
    addi r7, r3, 0x1d8
    psq_lx f29, r0, r7, 0, 0
    lfd f29, 0x1d0(r3)
    addi r7, r3, 0x1e8
    psq_lx f30, r0, r7, 0, 0
    lfd f30, 0x1e0(r3)
    addi r7, r3, 0x1f8
    psq_lx f31, r0, r7, 0, 0
    lfd f31, 0x1f0(r3)
    mtlr r8
    lwz r1, 0x28c(r3)
    lwz r3, 0x284(r3)
    lwz r3, 0(r3)
    stw r3, 0(r1)
    blr
}
