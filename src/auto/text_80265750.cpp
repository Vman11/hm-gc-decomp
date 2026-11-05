#include "common.h"
extern "C" {
typedef struct V3_5750 { f32 x, y, z; } V3_5750;
typedef struct P_5750 { u8 pad[20]; V3_5750 f20; V3_5750 f32_; V3_5750 f44; V3_5750 f56; u8 pad2[12]; V3_5750 f80; V3_5750 f92; V3_5750 f104; V3_5750 f116; f32 f128; f32 f132; f32 f136; u8 pad3[8]; f32 f148; u8 pad4[24]; f32 *f176; f32 *f180; f32 *f184; f32 *f188; } P_5750;
extern volatile f32 lbl_80366BA8;
extern f32 lbl_80366BAC;
void fn_802610A0(P_5750 *);
void fn_8026102C(P_5750 *);
void fn_801012C0(V3_5750 *, V3_5750 *, V3_5750 *, f32);
void fn_80101820(V3_5750 *);
void fn_80265750(P_5750 *p, f32 f) {
    V3_5750 v;
    fn_802610A0(p);
    *(volatile f32 *)&v.x = *p->f180;
    *(volatile f32 *)&v.y = *p->f184;
    *(volatile f32 *)&v.z = *p->f188;
    f32 *sp = *(f32 *volatile *)&p->f176;
    fn_801012C0(&p->f92, &v, &p->f32_, f * (lbl_80366BA8 * *sp));
    fn_80101820(&p->f92);
    fn_801012C0(&p->f116, &v, &p->f56, f * (lbl_80366BA8 * *p->f176));
    fn_80101820(&p->f116);
    fn_801012C0(&p->f104, &v, &p->f44, f * (lbl_80366BA8 * *p->f176));
    fn_80101820(&p->f104);
    p->f80.x = p->f20.x;
    p->f80.y = p->f20.y;
    p->f80.z = p->f20.z;
    p->f128 = lbl_80366BAC;
    p->f132 = lbl_80366BAC;
    p->f136 = lbl_80366BAC;
    p->f148 = lbl_80366BAC;
    fn_8026102C(p);
}
}
