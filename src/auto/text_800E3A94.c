/* Functions from 0x800E3A94 to 0x800E3CDC, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f64 d;
    f32 ps0;
    f32 ps1;
} UnkFReg;

typedef struct UnkFrame {
    struct UnkFrame* prev;
    u32 unk4;
} UnkFrame;

typedef struct {
    UnkFReg f[32];
    u32 r[32];
    u32 unk280;
    UnkFrame* frame;
} UnkRegCtx;

static inline void RestorePSRegs(UnkRegCtx* ctx, UnkFReg* src, s32 n) {
    s32 i;
    for (i = 32 - n; i < 32; i++, src++) {
        ctx->f[i].ps0 = src->ps0;
        ctx->f[i].ps1 = src->ps1;
        ctx->f[i].d = src->d;
    }
}

static inline void RestoreFRegs(UnkRegCtx* ctx, f64* src, s32 n) {
    s32 i;
    for (i = 32 - n; i < 32; i++) {
        ctx->f[i].d = *src++;
    }
}

static inline void RestoreGPRegs(UnkRegCtx* ctx, u32* src, s32 n) {
    s32 i;
    for (i = 32 - n; i < 32; i++) {
        ctx->r[i] = *src++;
    }
}

u32 fn_800E3A94(UnkRegCtx* ctx, u16** pc) {
    UnkFrame* callers_SP;
    char* FPR_save_area;
    UnkFReg* PS_save_area;
    s32 saved_GPRs, saved_FPRs;
    s32 i, j;

    callers_SP = ctx->frame->prev;
    saved_FPRs = (**pc >> 6) & 0x1F;
    if ((**pc >> 1) & 1) {
        PS_save_area = (UnkFReg*)((char*)callers_SP - saved_FPRs * 16);
        FPR_save_area = (char*)PS_save_area;
    } else {
        FPR_save_area = (char*)callers_SP - saved_FPRs * 8;
    }
    if ((**pc >> 1) & 1) {
        for (i = 32 - saved_FPRs, j = 0; i < 32; i++, j++) {
            ctx->f[i].ps0 = PS_save_area[j].ps0;
            ctx->f[i].ps1 = PS_save_area[j].ps1;
            ctx->f[i].d = PS_save_area[j].d;
        }
    } else {
        for (i = 32 - saved_FPRs, j = 0; i < 32; i++, j++) {
            ctx->f[i].d = ((f64*)FPR_save_area)[j];
        }
    }
    saved_GPRs = **pc >> 11;
    FPR_save_area -= saved_GPRs * 4;
    for (i = 32 - saved_GPRs, j = 0; i < 32; i++, j++) {
        ctx->r[i] = ((u32*)FPR_save_area)[j];
    }
    ctx->frame = callers_SP;
    return callers_SP->unk4;
}
