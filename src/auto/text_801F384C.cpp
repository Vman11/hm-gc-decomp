// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[16];
    s32 x16;
    u8 pad2[32];
    s32 x52;
    u8 pad3[4];
    u8 *data;
} Img_801F384C;

extern const s32 lbl_802A4578[256];
extern const s32 lbl_802A4978[256];
extern const s32 lbl_802A4D78[256];
extern const s32 lbl_802A5178[256];
static inline s32 clamp_801F384C(s32 c)
{
    if (c < 0) {
        c = 0;
    } else if (c > 255) {
        c = 255;
    }
    return c;
}

void fn_801F384C(Img_801F384C *py, Img_801F384C *pu, Img_801F384C *pv, u8 *out, u32 h, u32 w)
{
    u32 row;
    u32 col;
    s32 off;
    s32 i;
    s32 y;
    u8 u;
    s32 v;

    if (py->data == 0 || pu->data == 0 || pv->data == 0) {
        return;
    }
    off = 0;
    for (row = 0; row < h; row++) {
        i = off;
        for (col = 0; col < w; col++) {
            v = pv->data[i];
            u = pu->data[i];
            y = py->data[i];
            out[0] = clamp_801F384C(y + lbl_802A4578[v]);
            out[1] = clamp_801F384C(y - ((lbl_802A4978[u] + lbl_802A4D78[v] + 0x8000) >> 16));
            out[2] = clamp_801F384C(y + lbl_802A5178[u]);
            i++;
            out += 3;
        }
        off += py->x52 * py->x16 * 8;
    }
}

} /* extern "C" */
