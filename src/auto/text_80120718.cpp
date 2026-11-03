// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Strs { char s0[0x24]; char s24[0x1c]; char s40[0x18]; char s58[0x18]; char s70[0x18]; char s88[0x20]; };
extern Strs lbl_8029DEA0;
extern void *lbl_8035A9F4;
struct C4 { u8 b, g, r, a; };
struct T { u8 pad[16]; u32 w; u32 h; u32 pitch; u8 fmt[20]; u8 rd[8]; u32 npal; C4 pal[321]; u32 off; u32 size; };
void *fn_802108B4(void *, void *, s32, void *);
void fn_801485B4(T *, void *);
void fn_801486B4(T *, const char *);
void fn_8014824C(void *, int, int, int, int);
void fn_80148288(void *, int, u32, u32, u32, u32, int);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline void Pal3(T *t, u8 *q, u32 i) {
    for (; i < t->npal; i++) {
        t->pal[i].r = q[0];
        t->pal[i].g = q[1];
        t->pal[i].b = q[2];
        t->pal[i].a = 255;
        q += 3;
    }
}
static inline void Pal4(T *t, u8 *q, u32 i) {
    for (; i < t->npal; i++) {
        t->pal[i].r = q[0];
        t->pal[i].g = q[1];
        t->pal[i].b = q[2];
        t->pal[i].a = 255;
        q += 4;
    }
}
static void pad_strs(T *t) { fn_801486B4(t, "Unsupported color depth encountered"); }
void *keep_pad = (void *)pad_strs;
void fn_80120718(T *t) {
    u8 ext[52];
    u8 ih[12];
    u8 fh[14];
    u32 err;
    void *e;
    u32 planes;
    u8 *buf;
    u32 bpp;
    u32 comp;
    if ((e = fn_802108B4(t->rd, fh, 14, &err)) != 0) fn_801485B4(t, e);
    if ((u16)(fh[0] + (fh[1] << 8)) != 0x4d42) fn_801486B4(t, "Unsupported BMP file type");
    t->off = fh[10] + ((u32)fh[11] << 8) + ((u32)fh[12] << 16) + ((u32)fh[13] << 24);
    if ((e = fn_802108B4(t->rd, ih, 12, &err)) != 0) fn_801485B4(t, e);
    {
        u32 sz = ih[0] + ((u32)ih[1] << 8) + ((u32)ih[2] << 16) + ((u32)ih[3] << 24);
        t->npal = 0;
        bpp = 0;
        buf = 0;
        comp = 0;
        switch (sz) {
        case 12: {
            t->w = ih[4] + (ih[5] << 8);
            t->h = ih[6] + (ih[7] << 8);
            bpp = ih[10] + (ih[11] << 8);
            planes = ih[8] + (ih[9] << 8);
            t->pitch = ((t->w * bpp + 31) >> 3) & ~3;
            t->size = t->pitch * t->h;
            if (bpp > 8) break;
            t->npal = 1 << (planes * bpp);
            if (t->npal > 256) fn_801486B4(t, "Invalid palette size");
            if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            buf = new u8[t->npal * 3];
            fn_800F7E98();
            if (buf == 0) fn_800604C4(-4, 0, 0, 0);
            if ((e = fn_802108B4(t->rd, buf, t->npal * 3, &err)) != 0) fn_801485B4(t, e);
            Pal3(t, buf, 0);
            break;
        }
        case 40:
        case 64: {
            if ((e = fn_802108B4(t->rd, ext, sz - 12, &err)) != 0) fn_801485B4(t, e);
            t->w = ih[4] + ((u32)ih[5] << 8) + ((u32)ih[6] << 16) + ((u32)ih[7] << 24);
            t->h = ih[8] + ((u32)ih[9] << 8) + ((u32)ih[10] << 16) + ((u32)ih[11] << 24);
            planes = ext[0] + (ext[1] << 8);
            bpp = ext[2] + (ext[3] << 8);
            comp = ext[4] + ((u32)ext[5] << 8) + ((u32)ext[6] << 16) + ((u32)ext[7] << 24);
            t->size = ext[8] + ((u32)ext[9] << 8) + ((u32)ext[10] << 16) + ((u32)ext[11] << 24);
            t->npal = ext[20] + ((u32)ext[21] << 8) + ((u32)ext[22] << 16) + ((u32)ext[23] << 24);
            t->pitch = ((t->w * bpp + 31) >> 3) & ~3;
            if (t->size == 0) t->size = t->pitch * t->h;
            else if (t->pitch * t->h > t->size) fn_801486B4(t, "Invalid pixel map size");
            if (bpp <= 8) {
                if (t->npal == 0) t->npal = 1 << (planes * bpp);
                if (t->npal > 256) fn_801486B4(t, "Invalid palette size");
                if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035A9F4);
                buf = new u8[t->npal * 4];
                fn_800F7E98();
                if (buf == 0) fn_800604C4(-4, 0, 0, 0);
                if ((e = fn_802108B4(t->rd, buf, t->npal * 4, &err)) != 0) fn_801485B4(t, e);
                Pal4(t, buf, 0);
            } else {
                t->npal = 0;
            }
            break;
        }
        default:
            fn_801486B4(t, "Invalid BMP header size");
            break;
        }
    }
    if (buf) delete[] buf;
    if (comp) fn_801486B4(t, "Unsupported compression type");
    switch (bpp) {
    case 4: fn_8014824C(t->fmt, 4, 15, 0, 0); break;
    case 8: fn_8014824C(t->fmt, 8, 255, 0, 0); break;
    case 16: fn_80148288(t->fmt, 16, 0x7C00, 0x3E0, 0x1F, 0, 0); break;
    case 24: fn_80148288(t->fmt, 24, 0xFF0000, 0xFF00, 0xFF, 0, 0); break;
    case 32: fn_80148288(t->fmt, 32, 0xFF00, 0xFF0000, 0xFF000000, 0xFF, 0); break;
    default: fn_801486B4(t, "Unsupported color depth encountered"); break;
    }
}

} /* extern "C" */
