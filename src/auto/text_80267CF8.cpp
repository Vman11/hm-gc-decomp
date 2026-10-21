// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* This unit's .rodata (lbl_802AA320..0x802AA3F0): fn_80267CF8 addresses the strings through one section base. */
static const char s_000[24] = "GmMs2DSteeringStateBase";
static const char s_018[16] = "AtEvSubscriber";
static const char s_028[12] = "GmBaObject";
static const char s_034[16] = "GmMsMotionState";
static const char s_044[12] = "HITLEDGE";
static const char s_050[12] = "LONGFALL";
static const char s_05C[16] = "MaxAcceleration";
static const char s_06C[16] = "MaxTurnSpeed";
static const char s_07C[24] = "bAllowedToFallOffEdge";
static const char s_094[16] = "AvoidObstacles";
static const char s_0A4[16] = "NormalGoesUp";
static const char s_0B4[12] = "TestOffset";
static const char s_0C0[16] = "TestScale";
extern char lbl_80366CE4[6];
extern char lbl_80366CEC[8];
extern char lbl_80366CF4[8];
void *fn_80261114(void *p, const char *name, s32 flag);
void *fn_80110444(void *a, const char *name, s32 b);
void **fn_8010FEDC(void *a, void *b, const char *name, s32 c);
void fn_80261B18(void *p, void *q);

} /* extern "C" */

struct V_80267CF8 {
    u8 pad[8];
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual s32 f5(s32);
};

extern "C" {

void fn_80267CF8(void *p, void *q) {
    V_80267CF8 *obj;
    void *g;
    M2C_FIELD(p, void **, 0xb8) = fn_80261114(p, lbl_80366CE4, 1);
    M2C_FIELD(p, f32 *, 0xbc) = *M2C_FIELD(p, f32 **, 0xb8);
    M2C_FIELD(p, void **, 0xb0) = fn_80261114(p, s_05C, 0);
    M2C_FIELD(p, void **, 0xb4) = fn_80261114(p, s_06C, 1);
    M2C_FIELD(p, void **, 0xc4) = fn_80261114(p, s_07C, 0);
    M2C_FIELD(p, void **, 0xcc) = fn_80261114(p, s_094, 0);
    M2C_FIELD(p, void **, 0xd0) = fn_80261114(p, s_0A4, 0);
    M2C_FIELD(p, void **, 0xe4) = fn_80261114(p, s_0B4, 0);
    M2C_FIELD(p, void **, 0xe8) = fn_80261114(p, s_0C0, 0);
    g = fn_80110444(M2C_FIELD(p, void **, 0xc), lbl_80366CEC, 0);
    obj = (V_80267CF8 *)*fn_8010FEDC(M2C_FIELD(p, void **, 0xc), g, lbl_80366CF4, 0);
    M2C_FIELD(p, s32 *, 0xc0) = obj->f5(0);
    fn_80261B18(p, q);
}

} /* extern "C" */
