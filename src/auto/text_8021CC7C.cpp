/* Functions from 0x8021CC7C to 0x8021CD34, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u32 flags;
    u8 pad4[0x2C];
    void* unk30;
    void* unk34;
    u8 pad38[0x8];
    u32 unk40;
    u32 unk44;
} UnkVtxDesc;


asm void fn_8021CC7C(void) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq L_8021CCB0
    mulli r0, r4, 0x6
    lwz r4, 0x34(r3)
    lwz r3, 0x44(r3)
    add r4, r4, r0
    mtspr GQR4, r3
    psq_l f0, 0x0(r4), 0, 4
    psq_l f1, 0x4(r4), 0, 4
    psq_st f0, 0x0(r5), 0, 4
    psq_st f1, 0x8(r5), 1, 4
    blr
L_8021CCB0:
    mulli r0, r4, 0xc
    lwz r3, 0x34(r3)
    add r3, r3, r0
    lfs f2, 0x0(r3)
    stfs f2, 0x0(r5)
    lfs f2, 0x4(r3)
    stfs f2, 0x4(r5)
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r5)
    blr
}

asm void fn_8021CCD8(void) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 19, 19
    beq L_8021CD0C
    mulli r0, r4, 0x6
    lwz r4, 0x30(r3)
    lwz r3, 0x40(r3)
    add r4, r4, r0
    mtspr GQR4, r3
    psq_l f0, 0x0(r4), 0, 4
    psq_l f1, 0x4(r4), 0, 4
    psq_st f0, 0x0(r5), 0, 4
    psq_st f1, 0x8(r5), 1, 4
    blr
L_8021CD0C:
    mulli r0, r4, 0xc
    lwz r3, 0x30(r3)
    add r3, r3, r0
    lfs f2, 0x0(r3)
    stfs f2, 0x0(r5)
    lfs f2, 0x4(r3)
    stfs f2, 0x4(r5)
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r5)
    blr
}

} /* extern "C" */
