// fn_80126A9C: text layout (word wrap, align, bbox). NonMatching: 6 instr scheduling diffs (see hm-work/wGE/STATUS.txt).
#include "common.h"

extern "C" {

struct GlyphInfo {
    s32 width;
    u8 pad4[0xA];
    u8 space;
    u8 newline;
};

struct Font {
    u8 pad0[0x10];
    s32 height;
    u8 pad14[0x8];
    f32 spacing;
    f32 lineSpacing;
    u8 pad24[0x30];
    GlyphInfo *glyphs;
};

struct Rect {
    f32 x0, y0, x1, y1;
};

struct Glyph {
    s32 idx;
    s32 vis;
    Rect r;
};

struct Vec2 {
    f32 x, y;
};

extern f32 lbl_8035AB70;
extern f32 lbl_8035AB74;
extern f32 lbl_80363E24, lbl_80363E28, lbl_80363E2C;

void fn_80126A9C(Font *font, Rect *out, Glyph *glyphs, s32 n, Vec2 *pos, Vec2 *scale, u16 flags,
                 f32 maxWidth, f32 spacing, f32 lineSpacing) {
    f32 lineAdv;
    f32 h;
    f32 x, y;
    f32 sx;
    f32 adv;
    f32 acc;
    Glyph *end;
    Glyph *cur;
    Glyph *lineStart;
    Glyph *lastFit;
    u32 count;
    int brk;
    int nl;

    if (lbl_8035AB70 == spacing) spacing = font->spacing;
    if (lbl_8035AB74 == lineSpacing) lineSpacing = font->lineSpacing;
    if (scale) {
        lineSpacing *= scale->y;
        spacing *= scale->x;
        h = (f32)font->height * scale->y - lbl_80363E24;
        sx = scale->x;
    } else {
        h = (f32)(font->height - 1);
        sx = lbl_80363E24;
    }
    if (maxWidth > lbl_80363E28) maxWidth += pos->x;
    x = pos->x;
    y = pos->y;
    lineAdv = h + lineSpacing;
    out->x0 = x;
    out->y0 = y;
    out->x1 = out->x0;
    lastFit = lineStart = cur = glyphs;
    end = glyphs + n;
    count = 0;
    acc = lbl_80363E28;
    for (; cur <= end; cur++) {
        if (cur == end) {
            adv = lbl_80363E28;
            brk = 1;
            nl = 1;
        } else if (cur->idx == -1) {
            adv = lbl_80363E28;
            brk = 1;
            nl = 1;
            cur->r.x0 = x;
            cur->r.x1 = x;
            cur->r.y0 = y;
            cur->r.y1 = y;
            cur->vis = 0;
        } else {
            GlyphInfo *gi = &font->glyphs[cur->idx];
            adv = sx * (f32)gi->width - lbl_80363E24;
            cur->r.x0 = x;
            cur->r.x1 = x + adv;
            adv += spacing;
            x += adv;
            cur->r.y0 = y;
            cur->r.y1 = y + h;
            nl = gi->newline;
            brk = gi->space | nl;
            cur->vis = nl == 0;
        }
        if (brk) {
            if (lineStart->r.x0 + acc > maxWidth) {
                y += lineAdv;
                if (count == 0) {
                    f32 w = lastFit->r.x1;
                    x = pos->x;
                    if (w > out->x1) out->x1 = w;
                    if (++lastFit < end) {
                        cur = lastFit;
                        lastFit->r.x1 = x + lastFit->r.x1 - lastFit->r.x0;
                        lastFit->r.x0 = x;
                        lastFit->r.y0 = y;
                        lastFit->r.y1 = y + h;
                        x = lastFit->r.x1 + spacing;
                    }
                    adv = lbl_80363E28;
                } else {
                    f32 w = lineStart->r.x0 - spacing;
                    f32 dx;
                    if (w > out->x1) out->x1 = w;
                    lineStart->vis = 0;
                    lineStart++;
                    dx = pos->x - lineStart->r.x0;
                    for (; lineStart < cur; lineStart++) {
                        lineStart->r.x0 += dx;
                        lineStart->r.x1 += dx;
                        lineStart->r.y0 = y;
                        lineStart->r.y1 = y + h;
                    }
                    if (cur < end) {
                        cur->r.x0 += dx;
                        cur->r.x1 += dx;
                        cur->r.y0 = y;
                        cur->r.y1 = y + h;
                    }
                    x += dx;
                }
                count = 0;
            } else if (cur == end) {
                x -= spacing;
                if (x > out->x1) out->x1 = x;
                y += lineAdv;
                x = pos->x;
                count = 0;
            } else if (nl) {
                x -= spacing;
                if (x > out->x1) out->x1 = x;
                x = pos->x;
                y += lineAdv;
                count = 0;
                cur->r.x0 = x;
                cur->r.x1 = x;
                cur->r.y0 = y;
                cur->r.y1 = y;
            } else {
                count++;
            }
            acc = lbl_80363E28;
            lineStart = cur;
            lastFit = cur;
        } else if (cur->r.x1 <= maxWidth) {
            lastFit = cur;
        }
        acc += adv;
    }
    out->y1 = y;
    if (flags == 0x11) return;
    if ((flags & 2) == 2) {
        Glyph *p, *q, *last;
        for (q = p = glyphs; p < end; p++) {
            if (p->r.y0 == q->r.y0 && p != end - 1) continue;
            last = p;
            if (p->r.y0 != q->r.y0) last = --p;
            while (p->vis == 0 || *(volatile f32 *)&lbl_80363E28 == p->r.x1 - p->r.x0 || font->glyphs[p->idx].space ||
                   font->glyphs[p->idx].newline)
                p--;
            {
                f32 dx = pos->x - p->r.x1;
                for (; q <= last; q++) {
                    q->r.x0 += dx;
                    q->r.x1 += dx;
                }
            }
            p = q = last + 1;
        }
    }
    if ((flags & 4) == 4) {
        Glyph *p, *q, *last;
        for (q = p = glyphs; p < end; p++) {
            if (p->r.y0 == q->r.y0 && p != end - 1) continue;
            last = p;
            if (p->r.y0 != q->r.y0) last = --p;
            while (p->vis == 0 || *(volatile f32 *)&lbl_80363E28 == p->r.x1 - p->r.x0 || font->glyphs[p->idx].space ||
                   font->glyphs[p->idx].newline)
                p--;
            {
                f32 dx = p->r.x1 - q->r.x0;
                dx = pos->x - q->r.x0 - dx * lbl_80363E2C;
                for (; q <= last; q++) {
                    q->r.x0 += dx;
                    q->r.x1 += dx;
                }
            }
            p = q = last + 1;
        }
    }
    {
        Glyph *p;
        *out = glyphs->r;
        for (p = glyphs; p < end; p++) {
            f32 ax0, ax1, bx0, bx1, ay0, ay1, by0, by1;
            ax0 = out->x0; bx0 = p->r.x0; ax1 = out->x1; bx1 = p->r.x1;
            ay0 = out->y0; ay1 = out->y1; by0 = p->r.y0; by1 = p->r.y1;
            out->x0 = ax0 < bx0 ? ax0 : bx0;
            out->x1 = ax1 > bx1 ? ax1 : bx1;
            out->y0 = ay0 < by0 ? ay0 : by0;
            out->y1 = ay1 > by1 ? ay1 : by1;
        }
    }
    if ((flags & 0x20) == 0x20) {
        Glyph *p;
        f32 dy = out->y1 - pos->y;
        for (p = glyphs; p < end; p++) {
            p->r.y0 -= dy;
            p->r.y1 -= dy;
        }
        out->y1 -= dy;
        out->y0 -= dy;
    }
    if ((flags & 0x40) == 0x40) {
        Glyph *p;
        f32 dy = out->y1 - out->y0;
        dy *= lbl_80363E2C;
        for (p = glyphs; p < end; p++) {
            p->r.y0 -= dy;
            p->r.y1 -= dy;
        }
        out->y1 -= dy;
        out->y0 -= dy;
    }
}

}
