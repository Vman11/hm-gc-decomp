// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



struct S_801FBCC4 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); };
typedef struct {
    u32 flags;
    u8 pad4[8];
    u32 x0C;
    f32 x10;
    f32 x14;
    f32 x18;
} O_801FBCC4;
extern const u32 lbl_803655B4;
void fn_800FB064(S_801FBCC4 *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
f32 fn_800FB2E0(S_801FBCC4 *);
u32 fn_800FB33C(S_801FBCC4 *);

void fn_801FB848(void);
void fn_801FB840(void);
void fn_801FC074(void);
void fn_801FBFF8(void);
void fn_801FBEE8(void);
void fn_801FBE28(void);
void fn_801FBCB4(void);
void fn_801FBCA0(void);
void fn_801FBC8C(void);
void fn_801FBC7C(void);
void fn_801FBC74(void);
void fn_801FBA00(void);
void fn_801FB990(void);
void fn_801FB984(void);
void fn_801FBB60(void);
void fn_801FBA4C(void);
void fn_801FBA24(void);
void fn_801FBCC4(O_801FBCC4 *o, u8 *ctx, S_801FBCC4 *s, s32 tok);
void *lbl_802EF1E0[27] = { 0, 0, (void *)fn_801FBCC4, 0, (void *)fn_801FB848, (void *)fn_801FB840, (void *)fn_801FC074, (void *)fn_801FBFF8, (void *)fn_801FBEE8, (void *)fn_801FBE28, (void *)fn_801FBCB4, (void *)fn_801FBCA0, (void *)fn_801FBC8C, (void *)fn_801FBC7C, (void *)fn_801FBC74, (void *)fn_801FBA00, (void *)fn_801FB990, (void *)fn_801FB984, 0, 0, 0, 0, 0, 0, (void *)fn_801FBB60, (void *)fn_801FBA4C, (void *)fn_801FBA24 };

void fn_801FBCC4(O_801FBCC4 *o, u8 *ctx, S_801FBCC4 *s, s32 tok) {
    char b8[8];
    char b16[16];
    void *r;
    switch (tok) {
    case 61:
        o->flags |= lbl_803655B4;
        break;
    case 62: {
        fn_800FB064(s, b16);
        fn_800FB064(s, b8);
        if (b8 == 0 || b8[0] == 0) {
            r = fn_800F9398(ctx + 192, b16);
        } else {
            r = fn_800F9788(ctx + 216, b8, b16);
        }
        if (r == 0) {
            s->err(37);
        }
        break;
    }
    case 63:
        o->x10 = fn_800FB2E0(s);
        break;
    case 64:
        o->x14 = fn_800FB2E0(s);
        break;
    case 65:
        o->x18 = fn_800FB2E0(s);
        break;
    case 75:
        o->x0C = fn_800FB33C(s);
        if (o->x0C < 1) {
            s->err(35);
        }
        break;
    default:
        s->err(30);
        break;
    }
}

} /* extern "C" */
