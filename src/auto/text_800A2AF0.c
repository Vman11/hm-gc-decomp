// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

u8 wA_A2AF0_pad[0x34] = {1};
extern u8 lbl_80361BD4[8];
extern char lbl_80361C3C[8];
extern char lbl_80361C44[8];
extern char lbl_80361C4C[8];
void *fn_8023F52C(void *p, void *a, void *b, char *name, s32 c, s32 d);
void *fn_8023F4A0(void *p, void *a, void *b, char *name, s32 c);
void fn_8023F214(void *p);

void fn_800A2AF0(u8 *p) {
    *(void **)(p + 0x118) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMaxNodeDist", 1, 0);
    *(void **)(p + 0x11C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMaxFleeAngle", 1, 0);
    *(void **)(p + 0x120) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rAngleTestIncrement", 1, 0);
    *(void **)(p + 0x124) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rCollisionRange", 1, 0);
    *(void **)(p + 0x128) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rFleeSpeed", 1, 0);
    *(void **)(p + 0x12C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "aHerdEvent", 1, 0);
    *(void **)(p + 0x130) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "aCollisionEvent", 1, 0);
    *(void **)(p + 0x134) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "aCollisionData", 1, 0);
    *(void **)(p + 0x138) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bStartEnabled", 1, 0);
    *(void **)(p + 0x13C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bDisableOnLastNode", 1, 0);
    *(void **)(p + 0x140) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bDisableOnCollision", 1, 0);
    *(void **)(p + 0x144) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, lbl_80361C3C, 1, 0);
    *(void **)(p + 0x148) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rEffectHeightOffset", 1, 0);
    *(void **)(p + 0x14C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "NearRange", 1, 0);
    *(void **)(p + 0x150) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bIgnoreZ", 1, 0);
    *(void **)(p + 0x154) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bAllowZNodeJump", 1, 0);
    *(void **)(p + 0x158) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMaxZJump", 1, 0);
    *(void **)(p + 0x15C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMinScale", 1, 0);
    *(void **)(p + 0x160) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMaxScale", 1, 0);
    *(void **)(p + 0x164) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "aStaticPath", 1, 0);
    *(void **)(p + 0x168) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bClosestStartNode", 1, 0);
    *(void **)(p + 0x16C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bLoopSound", 1, 0);
    *(void **)(p + 0x170) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bPlaySound", 1, 0);
    *(void **)(p + 0x174) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "bRandomSound", 1, 0);
    *(void **)(p + 0x178) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMinSoundDelay", 1, 0);
    *(void **)(p + 0x17C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rMaxSoundDelay", 1, 0);
    *(void **)(p + 0x180) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, lbl_80361C44, 1, 0);
    *(void **)(p + 0x184) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rSquishRadius", 1, 0);
    *(void **)(p + 0x188) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "rSquishHeight", 1, 0);
    *(void **)(p + 0x18C) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, "aaSquishSounds", 1);
    *(void **)(p + 0x190) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, "aaSounds", 1);
    *(void **)(p + 0x194) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, lbl_80361C4C, 1);
    *(void **)(p + 0x198) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, "aaNodeEvents", 1);
    *(void **)(p + 0x19C) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, "aaNodeData", 1);
    *(void **)(p + 0x1A0) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, "arSquishScale", 1);
    *(void **)(p + 0x1A4) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, "aHerdSound", 1, 0);
    fn_8023F214(p);
}
