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

extern TRKState_unk gTRKState;
extern TRKCPUState_unk gTRKCPUState;
extern u32 lbl_80325D58;

extern s32 __OSArenaHi_8035A578;
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

void fn_800B9624(void) {

}

void InitMetroTRK_BBA(void) {

}

void fn_800BDA6C(void) {

}

extern unsigned int lbl_8035A6F0;
extern unsigned int lbl_8035A6C0;
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void fn_800C05F0(void);
extern char lbl_802DA610[];
unsigned int fn_800C0BD0(unsigned int arg0) {
    unsigned int old = lbl_8035A6F0;
    OSDisableInterrupts();
    lbl_8035A6F0 = arg0;
    OSRestoreInterrupts();
    return old;
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

void fn_800C8C94(void) {

}

void fn_800C9944(void) {

}

void fn_800CCC78(void) {

}

void fn_800D8F00(void) {

}

void usr_put_initialize(void) {

}

void TRKUARTInterruptHandler(void) {

}

