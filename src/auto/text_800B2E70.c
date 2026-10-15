/* Functions from 0x800B2E70 to 0x800E1DA8, found by decomp-toolkit. */
#include "common.h"

typedef struct TRKState_unk {
    u8 pad0[0x8C];
    s32 unk8C;
    u8 pad90[0x8];
    s32 unk98;
} TRKState_unk;

typedef struct TRKCPUState_unk {
    u8 pad0[0x238];
    u32 unk238;
} TRKCPUState_unk;

typedef struct UnkInterp {
    f32* unk0;
    u32 unk4;
    f32 unk8;
    u32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
} UnkInterp;

typedef struct UnkStep {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} UnkStep;

extern TRKState_unk gTRKState;
extern TRKCPUState_unk gTRKCPUState;
extern u32 lbl_80325D58;

extern s32 __OSArenaHi_8035A578;
s32 PPCMfmsr(void) { return __MFMSR(); }

s32 OSGetArenaHi(void) {
    return __OSArenaHi_8035A578;
}

extern s32 __OSArenaLo_80359538;
s32 OSGetArenaLo(void) {
    return __OSArenaLo_80359538;
}

void OSSetArenaHi(s32 arg0) {
    __OSArenaHi_8035A578 = arg0;
}

extern s32 __OSArenaLo_80359538;
void OSSetArenaLo(s32 arg0) {
    __OSArenaLo_80359538 = arg0;
}

void fn_800B9624(void) {

}

void InitMetroTRK_BBA(void) {

}

void fn_800BDA6C(void) {

}

extern u8 DummyCommandBlock_80308400[];
extern s32 FatalErrorFlag_8035A690;
extern void *executing_8035A678;
extern u32 lbl_8035A698;
extern void (*lbl_8035A69C)(s32, void *);
extern u32 lbl_8035A6A8;
extern s32 lbl_8035A6AC;
void fn_800BDD08(void);
void fn_800C06EC(void);
void stateReady(void);
void DVDReset(void);
void __DVDStoreErrorCode(u32 code);
void fn_800BCBF4(void (*cb)(u32));
void fn_800BDE18(u32 intType);
void cbForStateError(u32 intType) {
    void *finished;
    void (*callback)(s32, void *);

    if (intType == 16) {
        *(s32 *)((u8 *)executing_8035A678 + 0xC) = -1;
        fn_800BDD08();
        return;
    }
    fn_800C06EC();
    finished = executing_8035A678;
    executing_8035A678 = DummyCommandBlock_80308400;
    FatalErrorFlag_8035A690 = 1;
    callback = *(void (**)(s32, void *))((u8 *)finished + 0x28);
    if (callback) {
        callback(-1, finished);
    }
    if (lbl_8035A698) {
        lbl_8035A698 = 0;
        if (lbl_8035A69C) {
            lbl_8035A69C(0, finished);
        }
    }
    stateReady();
}

extern unsigned int lbl_8035A6F0;
extern unsigned int lbl_8035A6C0;
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void fn_800C05F0(void);
extern char lbl_802DA610[];
unsigned int fn_800C0BD0(unsigned int arg0) {
    volatile u32 pad[2];
    unsigned int old = lbl_8035A6F0;
    OSDisableInterrupts();
    lbl_8035A6F0 = arg0;
    OSRestoreInterrupts();
    return old;
}

char *fn_800C0C14(unsigned int arg0) {
    switch (arg0) {
    case 0: return lbl_802DA610 + 0x44;
    case 1: return lbl_802DA610 + 0x6A;
    case 2: return lbl_802DA610 + 0x90;
    case 3: return lbl_802DA610 + 0xB6;
    case 4: return lbl_802DA610 + 0x44;
    case 5: return lbl_802DA610 + 0x6A;
    case 6: return lbl_802DA610 + 0xDC;
    case 7: return lbl_802DA610 + 0x102;
    case 8: return lbl_802DA610 + 0x128;
    case 9: return lbl_802DA610 + 0x14E;
    case 10: return lbl_802DA610 + 0x90;
    case 11: return lbl_802DA610 + 0xB6;
    case 12: return lbl_802DA610 + 0x174;
    case 13: return lbl_802DA610 + 0x19A;
    default: return 0;
    }
}

extern s32 lbl_8035A6DC;
s32 fn_800C2600(void) {
    return lbl_8035A6DC;
}

void fn_800C6C2C(void) {

}

extern u8 lbl_80308780[][0x780];
extern u8 lbl_80309E00[][0x780];
extern s32 lbl_8035A814;
extern s32 lbl_8035A810;
extern u32 lbl_8035A7F0;
void fn_800C7624(void** arg0) {
    *arg0 = lbl_80308780[lbl_8035A814];
}

void fn_800C7640(void** arg0) {
    *arg0 = lbl_80308780[lbl_8035A814] + 0x280;
}

extern s32 lbl_8035A830;
s32 fn_800C7964(void) {
    return lbl_8035A830;
}

void fn_800C807C(void) {

}

extern s32 lbl_8035A858;
void fn_800C885C(s32 arg0) {
    lbl_8035A858 = arg0;
}

void fn_800C8C94(void) {

}

extern s32 lbl_8035A8A8;
s32 fn_800C8D2C(void) {
    return lbl_8035A8A8;
}

void fn_800C9944(void) {

}

extern s32 lbl_8035A8C8;
void fn_800CA090(s32 arg0) {
    lbl_8035A8C8 = arg0;
}

extern s32 lbl_8035A8C8;
s32 fn_800CA098(void) {
    return lbl_8035A8C8;
}

extern s32 lbl_8035A8D0;
s32 fn_800CC224(void) {
    return lbl_8035A8D0;
}

void fn_800CCC78(void) {

}

void fn_800D79CC(void *lt_obj, f32 *nx, f32 *ny, f32 *nz) {
    *nx = -*(f32 *)((u8 *)lt_obj + 0x34);
    *ny = -*(f32 *)((u8 *)lt_obj + 0x38);
    *nz = -*(f32 *)((u8 *)lt_obj + 0x3C);
}

void fn_800D79F4(void *lt_obj, u32 *color) {
    *(u32 *)((u8 *)lt_obj + 0xC) = *color;
}

void fn_800D7A00(void *lt_obj, u32 *color) {
    *color = *(u32 *)((u8 *)lt_obj + 0xC);
}

void fn_800D8F00(void) {

}

void usr_put_initialize(void) {

}

u32 fn_800E1150(u32 addr) {
    if (addr >= lbl_80325D58 && addr < lbl_80325D58 + 0x4000 && (gTRKCPUState.unk238 & 3)) {
        return addr;
    }
    if (addr >= 0x7E000000 && addr <= 0x80000000) {
        return addr;
    }
    return (addr & 0x3FFFFFFF) | 0x80000000;
}

void fn_800E18F0(void);
s32 fn_800DF4D0(void*);
void EnableMetroTRKInterrupts(void) {
    fn_800E18F0();
}

void TRKUARTInterruptHandler(void) {

}

