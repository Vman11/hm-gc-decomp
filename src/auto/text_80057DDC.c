// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

u8 wA_fn_80057DDC_pad[0x208] = {1};
extern u8 lbl_8035E060[8];
extern u8 lbl_8035E1C4[8];
extern u8 lbl_8035E1CC[8];
extern u8 lbl_8035E1D4[8];
extern u8 lbl_8035E1DC[8];
void * fn_8023F52C(void *p, const void *a0, const void *a1, const void *a2, s32 a3, s32 a4);
void fn_8023F214(void *p);

void fn_80057DDC(u8 *p) {
    *(void * *)(p + 0x11C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bSaveState", 1, 0);
    *(void * *)(p + 0x120) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bStartEnabled", 1, 0);
    *(void * *)(p + 0x124) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bStartInInitialState", 1, 0);
    *(void * *)(p + 0x128) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1C4, 1, 0);
    *(void * *)(p + 0x12C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bLockGroup", 1, 0);
    *(void * *)(p + 0x130) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bAutoActivate", 1, 0);
    *(void * *)(p + 0x134) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bOneShot", 1, 0);
    *(void * *)(p + 0x138) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bOneShotCameraActivate", 1, 0);
    *(void * *)(p + 0x13C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bOneShotCameraDeactivate", 1, 0);
    *(void * *)(p + 0x140) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bRespondToLightEvents", 1, 0);
    *(void * *)(p + 0x144) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bAllowDrawStateChange", 1, 0);
    *(void * *)(p + 0x148) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bToggleDrawing", 1, 0);
    *(void * *)(p + 0x14C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bToggleCollision", 1, 0);
    *(void * *)(p + 0x150) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bToggleLineSeg", 1, 0);
    *(void * *)(p + 0x154) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1CC, 1, 0);
    *(void * *)(p + 0x158) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bSyncOnInit", 1, 0);
    *(void * *)(p + 0x15C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bPlayerCanActivate", 1, 0);
    *(void * *)(p + 0x160) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bPlayerCanDeactivate", 1, 0);
    *(void * *)(p + 0x164) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bNearTrigger", 1, 0);
    *(void * *)(p + 0x168) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "NearRange", 1, 0);
    *(void * *)(p + 0x16C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bUpdateWhileHidden", 1, 0);
    *(void * *)(p + 0x170) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1D4, 1, 0);
    *(void * *)(p + 0x174) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rRevertTime", 1, 0);
    *(void * *)(p + 0x178) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "nNumActivateTriggersRequired", 1, 0);
    *(void * *)(p + 0x17C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "nNumDeactivateTriggersRequired", 1, 0);
    *(void * *)(p + 0x180) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1DC, 1, 0);
    *(void * *)(p + 0x184) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "aActivatePassword", 1, 0);
    *(void * *)(p + 0x188) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "aDeactivatePassword", 1, 0);
    *(void * *)(p + 0x18C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "aCameraActivateEvent", 1, 0);
    *(void * *)(p + 0x190) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "aCameraDeactivateEvent", 1, 0);
    *(void * *)(p + 0x194) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rTrans1LoopTime", 1, 0);
    *(void * *)(p + 0x198) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rTrans2LoopTime", 1, 0);
    *(void * *)(p + 0x19C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bPulsate", 1, 0);
    *(void * *)(p + 0x1A0) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rDistMin", 1, 0);
    *(void * *)(p + 0x1A4) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rDistMax", 1, 0);
    *(void * *)(p + 0x1A8) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rRateMin", 1, 0);
    *(void * *)(p + 0x1AC) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "rRateMax", 1, 0);
    *(void * *)(p + 0x1B0) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "bIsParticle", 1, 0);
    *(void * *)(p + 0x1B4) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, "aObjectType", 1, 0);
    fn_8023F214(p);
}
