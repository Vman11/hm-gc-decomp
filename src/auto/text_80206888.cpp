#include "common.h"
extern "C" {
struct Cfg { u8 pad[8]; s32 max0; s32 min0; s32 step0; s32 max1; s32 min1; s32 step1; u8 pad20[0x3c]; u32 flags; };
struct Obj { u8 pad[0x20]; s32 f20; u8 pad24[8]; f32 f2c; u8 pad30[0x4c]; s32 f7c; };
struct S { u8 pad[8]; Cfg *cfg; s32 done; Obj *obj; s32 f14; };
void fn_800C9A0C(s32, int);
s32 fn_80201714(s32);
f32 fn_801FC18C(f32);
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);
void fn_80206888(S *s) {
    s->done = 0;
    fn_800C9A0C(s->f14, 1);
    if (s->done == 0) {
        if (s->obj->f20 != 0) {
            if (s->cfg->flags & 1) {
                s32 n = fn_80201714((s->cfg->max0 - s->cfg->min0) / s->cfg->step0 + 1);
                n *= s->cfg->step0;
                n += s->cfg->min0;
                s->obj->f2c = fn_801FC18C((f32)n);
            }
            if (s->cfg->flags & 2) {
                s32 n = fn_80201714((s->cfg->max1 - s->cfg->min1) / s->cfg->step1 + 1);
                n *= s->cfg->step1;
                n += s->cfg->min1;
                s32 v = n;
                s32 lvl = OSDisableInterrupts();
                s->obj->f7c = v << 16;
                OSRestoreInterrupts(lvl);
            }
        }
        s->done = 1;
    }
}
}
