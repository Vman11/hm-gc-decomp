#include "common.h"
#pragma readonly_strings on
namespace m80120408 { extern "C" u32 *fn_80120408(void); }
namespace m80120410 { struct S80120410; extern "C" void fn_80120410(S80120410 *, u8 *); }
namespace m80120580 { extern "C" void *fn_80120580(void *); }
namespace m80120598 { struct Self_80120598; struct B_80120598; extern "C" void fn_80120598(Self_80120598 *, void *, B_80120598 *, s32); }
namespace m80120718 { struct T; extern "C" void fn_80120718(T *); }
namespace m80120D3C { extern "C" void fn_80120D3C(s32); }
namespace m80120D78 { struct T; extern "C" void fn_80120D78(T *, u8 *); }

extern "C" char __dt__9C801203A8Fv[];
extern "C" void fn_80148818(void);
extern "C" void *__vt__9C801203A8[11] = { 0, 0, (void *)m80120718::fn_80120718, (void *)__dt__9C801203A8Fv, (void *)fn_80148818,
    (void *)m80120D78::fn_80120D78, (void *)m80120D3C::fn_80120D3C, (void *)m80120598::fn_80120598, (void *)m80120580::fn_80120580,
    (void *)m80120410::fn_80120410, (void *)m80120408::fn_80120408 };
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void __dl__FPv(int);
void __dt__9C80148AE4Fv(int, int);

extern "C" {
}
struct C80148AE4 { char pad[0x53c]; ~C80148AE4(); };
struct C801203A8 : C80148AE4 { ~C801203A8(); virtual void vfx(); };

C801203A8::~C801203A8() {

}

} /* extern "C" */


namespace m80120408 {
extern "C" {
/* Functions from 0x80120408 to 0x80120410, found by decomp-toolkit. */

extern u32 lbl_80363DD0;

u32* fn_80120408(void) {
    return &lbl_80363DD0;
}

} /* extern "C" (c unit) */
} /* namespace m80120408 */

struct V80120410 {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual s32 v4(u32);
};
namespace m80120410 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
/* hoisted */
struct S80120410 {
    u8 pad0[16];
    u32 f16;
    u32 f20;
    u32 f24;
    u8 pad28[2];
    u16 f30;
    u8 pad32[16];
    u8 f48[4];
    V80120410 *f52;
    u32 f56;
    u8 pal[321][4];
    u32 f1344;
    u32 f1348;
};
extern "C" {
void fn_801485B4(S80120410 *, s32);
s32 fn_802108B4(u8 *, u8 *, u32, u32 *);

static inline void wp80120410(S80120410 *self, u8 *out) {
    u32 i;
    u8 *dst = out;
    for (i = 0; i < self->f56; i++) {
        dst[0] = self->pal[i][2];
        dst[1] = self->pal[i][1];
        dst[2] = self->pal[i][0];
        dst += 3;
    }
}
void fn_80120410(S80120410 *self, u8 *buf) {
    u32 i;
    u8 *dst;
    u8 *out;
    s32 err;
    u32 tmp;
    out = buf + 16;
    buf[0] = self->f16;
    buf[1] = self->f16 >> 8;
    buf[2] = self->f20;
    buf[3] = self->f20 >> 8;
    buf[4] = self->f30;
    buf[5] = (u32)self->f30 >> 8;
    buf[6] = self->f56;
    buf[7] = self->f56 >> 8;
    buf[8] = self->f24;
    buf[9] = self->f24 >> 8;
    buf[10] = self->f24 >> 16;
    buf[11] = self->f24 >> 24;
    buf[12] = self->f1348;
    buf[13] = self->f1348 >> 8;
    buf[14] = self->f1348 >> 16;
    buf[15] = self->f1348 >> 24;
    wp80120410(self, out);
    out += self->f56 * 3;
    err = self->f52->v4(self->f1344);
    if (err) fn_801485B4(self, err);
    err = fn_802108B4(self->f48, out, self->f1348, &tmp);
    if (err) fn_801485B4(self, err);
}

} /* extern "C" */

} /* namespace m80120410 */

namespace m80120580 {
extern "C" {
/* Functions from 0x80120580 to 0x80120598, found by decomp-toolkit. */

void* fn_80120580(void* arg0) {
    u32 value = ((u32*)arg0)[0x38 / 4] * 3;
    u32 result = ((u32*)arg0)[0x544 / 4];
    result = value + result;
    result += 0x10;
    return (void*)result;
}

} /* extern "C" (c unit) */
} /* namespace m80120580 */

struct V52_80120598 {
    u8 pad[16];
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void *m(u32);
};
namespace m80120598 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
/* hoisted */
extern "C" {

typedef struct Rect_80120598 { s32 x, y, w, h; } Rect_80120598;
typedef struct B_80120598 { u8 pad[28]; u16 f28; u16 f30; } B_80120598;
typedef struct Self_80120598 {
    u8 pad0[16]; u32 f16; u32 f20; u32 f24; u8 f28[20]; u8 f48[4]; V52_80120598 *f52; u32 f56; u8 f60[1284];
    u32 f1344; u32 f1348; u8 *f1352;
} Self_80120598;

extern void *lbl_8035A9F4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801485B4(Self_80120598 *, void *);
void *fn_802108B4(void *, void *, u32, void *);
void fn_80129168(B_80120598 *, void *, void *, u32);
void fn_80148330(Self_80120598 *, void *, B_80120598 *, u8);
void fn_80128F98(B_80120598 *, Rect_80120598 *, u8 *, u32, Rect_80120598 *);
void fn_80128F54(B_80120598 *);

void fn_80120598(Self_80120598 *self, void *a, B_80120598 *b, s32 c) {
    u8 *buf;
    void *r;
    Rect_80120598 r2;
    Rect_80120598 r1;
    u32 tmp;
    if (self->f1352 == 0) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        buf = new u8[self->f1348];
        fn_800F7E98();
        if (buf == 0) fn_800604C4(-4, 0, 0, 0);
        r = self->f52->m(self->f1344);
        if (r) fn_801485B4(self, r);
        r = fn_802108B4(self->f48, buf, self->f1348, &tmp);
        if (r) fn_801485B4(self, r);
    } else {
        buf = self->f1352;
    }
    fn_80129168(b, self->f28, self->f60, self->f56);
    c = (c == 0);
    fn_80148330(self, a, b, c);
    r2.x = r2.y = 0;
    r2.w = self->f16;
    r2.h = self->f20;
    r1.x = r1.y = 0;
    r1.w = b->f28;
    r1.h = b->f30;
    fn_80128F98(b, &r1, buf, self->f24, &r2);
    fn_80128F54(b);
    if (self->f1352 == 0) delete[] buf;
}

} /* extern "C" */

} /* namespace m80120598 */

namespace m80120718 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

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
static const char s_ucd[] = "Unsupported color depth encountered";
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
    default: fn_801486B4(t, s_ucd); break;
    }
}

} /* extern "C" */

} /* namespace m80120718 */

namespace m80120D3C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_801487C8(void);

void fn_80120D3C(s32 param_1) {
    fn_801487C8();
    *(u32 *)(param_1 + 0x540) = 0;
    *(u32 *)(param_1 + 0x544) = 0;
    *(u32 *)(param_1 + 0x548) = 0;
}

} /* extern "C" */

} /* namespace m80120D3C */

namespace m80120D78 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_8029DEA0[];
struct C4 { u8 b, g, r, a; };
struct T { u8 pad[16]; u32 f16; u32 f20; u32 f24; u16 f28; u8 pad30[26]; u32 f56; C4 pal[322]; u32 f1348; u8 *f1352; };
struct TV { u8 pad[1340]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void reset(); };
void fn_8014824C(void *, int, int, int, int);
void fn_80148288(void *, int, u32, u32, u32, u32, int);
void fn_801486B4(T *, const char *);
static inline void pal(T *t, u8 *q, u32 i) {
    for (; i < t->f56; i++) {
        t->pal[i].r = q[0];
        t->pal[i].g = q[1];
        t->pal[i].b = q[2];
        t->pal[i].a = 255;
        q += 3;
    }
}
void fn_80120D78(T *t, u8 *h) {
    if (t->f28) ((TV *)t)->reset();
    u8 *p = h + 16;
    t->f16 = h[0] + (h[1] << 8);
    t->f20 = h[2] + (h[3] << 8);
    u32 bpp = h[4] + (h[5] << 8);
    t->f56 = h[6] + (h[7] << 8);
    t->f24 = h[8] + ((u32)h[9] << 8) + ((u32)h[10] << 16) + ((u32)h[11] << 24);
    t->f1348 = h[12] + ((u32)h[13] << 8) + ((u32)h[14] << 16) + ((u32)h[15] << 24);
    switch (bpp) {
    case 4: fn_8014824C(&t->f28, 4, 15, 0, 0); break;
    case 8: fn_8014824C(&t->f28, 8, 255, 0, 0); break;
    case 16: fn_80148288(&t->f28, 16, 0x7C00, 0x3E0, 0x1F, 0, 0); break;
    case 24: fn_80148288(&t->f28, 24, 0xFF0000, 0xFF00, 0xFF, 0, 0); break;
    case 32: fn_80148288(&t->f28, 32, 0xFF00, 0xFF0000, 0xFF000000, 0xFF, 0); break;
    default: fn_801486B4(t, m80120718::s_ucd); break;
    }
    pal(t, p, 0);
    p += t->f56 * 3;
    t->f1352 = p;
}

} /* extern "C" */

} /* namespace m80120D78 */

