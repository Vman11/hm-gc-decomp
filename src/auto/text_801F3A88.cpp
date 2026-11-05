// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 hdr; u8 d[64]; } Ent;
typedef struct { u8 pad[12]; u32 a; u32 b; u8 pad2[48 - 20]; u32 n; u32 m; Ent *src; u8 *dst; } T;
u8 *fn_8013C11C(void *heap, u32 size);
void *memcpy(void *, const void *, u32);

void fn_801F3A88(T *t, void *heap) {
    u32 size = t->n * t->a * t->m * t->b << 6;
    if (size) {
        if (!t->dst) t->dst = fn_8013C11C(heap, size);
        if (t->a == 1 && t->b == 1) {
            u32 off = 0; s32 base = 0; u32 i, k; s32 j, idx;
            for (i = 0; i < t->n; i++) {
                for (k = 0; k < 8; k++) {
                    for (j = 0, idx = base; j < t->m; idx++, j++) {
                        memcpy(t->dst + off, &t->src[idx].d[k * 8], 8);
                        off += 8;
                    }
                }
                base += t->m;
            }
        } else {
            u8 *p; s32 idx; u32 k; u32 pos = 0; u32 i; u32 l; s32 j; s32 base = 0; u32 c;
            for (i = 0; i < t->n; i++) {
                for (k = 0; k < 8; k++) {
                    for (l = 0; l < t->a; l++) {
                        for (j = 0, idx = base; j < t->m; idx++, j++) {
                            p = &t->src[idx].d[k * 8];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[0];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[1];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[2];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[3];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[4];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[5];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[6];
                            for (c = 0; c < t->b; c++) t->dst[pos++] = p[7];
                        }
                    }
                }
                base += t->m;
            }
        }
    }
}

} /* extern "C" */
