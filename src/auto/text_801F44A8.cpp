// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_8013C21C(void *ctx, u32 size);
void *fn_8013C19C(void *ctx, u32 size);
void *memset(void *p, int c, u32 n);

typedef struct Comp801F44A8 {
    u32 unk0;
    u32 h_samp;
    u32 v_samp;
    u32 unkC;
    u32 unk10;
    u8 pad14[0x28 - 0x14];
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    void *unk38;
    u32 unk3C;
    void *unk40;
} Comp801F44A8;

static inline u32 RoundUpDiv801F44A8(u32 a, u32 b) { return (b + a - 1) / b; }

void fn_801F44A8(Comp801F44A8 *__restrict p, u8 *__restrict c) {
    if (p->unk38 == 0) {
        p->unkC = *(u32 *)(c + 6992) / p->v_samp;
        p->unk10 = *(u32 *)(c + 6988) / p->h_samp;
        p->unk28 = RoundUpDiv801F44A8(*(u32 *)(c + 52), p->unkC * 8);
        p->unk2C = RoundUpDiv801F44A8(*(u32 *)(c + 48), p->unk10 * 8);
        p->unk30 = p->v_samp * *(u32 *)(c + 26400);
        p->unk34 = p->h_samp * *(u32 *)(c + 26396);
        p->unk38 = fn_8013C21C(c, p->unk30 * p->unk34);
    }
    if (*(s32 *)(c + 6980) != 0 && p->unk40 == 0) {
        u32 n = p->unk30 * p->unk34;
        p->unk40 = fn_8013C19C(c, n);
        memset(p->unk40, 0, n * 128);
    }
}

} /* extern "C" */
