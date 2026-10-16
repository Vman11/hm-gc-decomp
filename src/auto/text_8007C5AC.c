/* Functions from 0x8007C5AC to 0x8007C668, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_802C3040[];
extern char lbl_803592D0[4];
extern char lbl_803592D4[4];
void fn_8007C5AC(void *arg0) {
    M2C_FIELD(arg0, void **, 0x28) = lbl_802C3040 + 0x248;
    M2C_FIELD(arg0, s32 *, 0x2C) = 7;
    M2C_FIELD(arg0, void **, 0x30) = lbl_802C3040 + 0x29C;
    M2C_FIELD(arg0, s32 *, 0x54) = 7;
    M2C_FIELD(arg0, void **, 0x58) = lbl_802C3040 + 0x22C;
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, s32 *, 0x68) = 2;
    M2C_FIELD(arg0, void **, 0x6C) = lbl_803592D4;
    M2C_FIELD(arg0, void **, 0x78) = lbl_802C3040 + 0x21C;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0xC4) = lbl_803592D0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 1;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
}
