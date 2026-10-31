// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct V2 { f32 x, y; };
struct Rect { f32 x0, y0, x1, y1; };
struct Scr { u8 pad[28]; u16 w; u16 h; };
struct Ctx { u8 pad[4]; Scr *scr; };
struct W {
  u8 pad0[4]; u32 flags; u8 pad1[4]; f32 f12; f32 f16; f32 f20; f32 f24; u8 pad2[8]; f32 f36; f32 f40; u8 pad3[4];
  Rect rc; u8 col[20]; void *font; s8 *str; f32 f92; f32 f96;
};
extern f32 lbl_80364CF8;
extern f32 lbl_80364CFC;
extern f32 lbl_8035AE94;
void fn_8012D0A4(void *font, Rect *r, s8 *s, V2 *pos, V2 *scl, s32 n, f32 a, f32 b, f32 c);
void fn_8012C938(void *font, Ctx *c, s8 *s, V2 *pos, V2 *scl, u8 *col, Rect *rc, s32 n, f32 a, f32 b, f32 d);

void fn_8019DF78(W *p, Ctx *c) {
    Rect rc;
    Rect ext;
    V2 pos __attribute__((aligned(8)));
    char scl[3];
    f32 sz;
    if (p->str == NULL || p->font == NULL) return;
    if (p->flags & 8) {
        s32 w = c->scr->w;
        s32 h = c->scr->h;
        pos.x = p->f12 * (f32)w;
        pos.y = p->f16 * (f32)h;
        rc.x0 = p->rc.x0 * (f32)w;
        rc.x1 = p->rc.x1 * (f32)w;
        rc.y0 = p->rc.y0 * (f32)h;
        rc.y1 = p->rc.y1 * (f32)h;
        sz = p->f92 * (f32)w;
    } else {
        pos.x = p->f12;
        pos.y = p->f16;
        rc.x0 = p->rc.x0;
        rc.y0 = p->rc.y0;
        rc.x1 = p->rc.x1;
        rc.y1 = p->rc.y1;
        sz = p->f92;
    }
    *(f32 *)&scl[0] = p->f20;
    *(f32 *)&scl[4] = p->f24;
    if (p->f36 != lbl_80364CF8) {
        fn_8012D0A4(p->font, &ext, p->str, &pos, (V2 *)scl, 17, sz, p->f96, lbl_8035AE94);
        if (ext.x1 - ext.x0 > p->f36) *(f32 *)&scl[0] = p->f36 / (ext.x1 - ext.x0);
    }
    if (p->f40 != lbl_80364CF8) {
        fn_8012D0A4(p->font, &ext, p->str, &pos, (V2 *)scl, 17, sz, p->f96, lbl_8035AE94);
        if (ext.y1 - ext.y0 > p->f40) *(f32 *)&scl[4] = p->f40 / (ext.y1 - ext.y0);
    }
    if (p->flags & 6) {
        fn_8012D0A4(p->font, &ext, p->str, &pos, (V2 *)scl, 17, sz, p->f96, lbl_8035AE94);
        if (p->flags & 2) pos.x = lbl_80364CFC * ((f32)(s32)c->scr->w - (ext.x1 - ext.x0));
        if (p->flags & 4) pos.y = lbl_80364CFC * ((f32)(s32)c->scr->h - (ext.y1 - ext.y0));
    }
    fn_8012C938(p->font, c, p->str, &pos, (V2 *)scl, p->col, &rc, 17, sz, p->f96, lbl_8035AE94);
}
}

} /* extern "C" */
