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
    UnkFrame* prev = ctx->frame->prev;
    u16 h = **pc;
    s32 ps = (h >> 1) & 1;
    s32 nf = (h >> 6) & 0x1F;
    UnkFReg* fsrc;
    f64* dsrc;
    u32* isrc;
    s32 i;
    s32 ni;

    if (ps) {
        fsrc = (UnkFReg*)prev - nf;
        isrc = (u32*)fsrc;
    } else {
        isrc = (u32*)((f64*)prev - nf);
    }
    if (ps) {
        for (i = 32 - nf; i < 32; i++, fsrc++) {
            ctx->f[i].ps0 = fsrc->ps0;
            ctx->f[i].ps1 = fsrc->ps1;
            ctx->f[i].d = fsrc->d;
        }
    } else {
        dsrc = (f64*)isrc;
        for (i = 32 - nf; i < 32; i++) {
            ctx->f[i].d = *dsrc++;
        }
    }
    ni = **pc >> 11;
    isrc -= ni;
    for (i = 32 - ni; i < 32; i++) {
        ctx->r[i] = *isrc++;
    }
    ctx->frame = prev;
    return prev->unk4;
}
