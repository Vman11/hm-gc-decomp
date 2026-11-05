// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct D { u8 pad0[2]; u16 bits; u8 pad4[28]; virtual void d0(); virtual void d1(); virtual void d2(); virtual int which(); };
struct T { u8 pad[16]; u32 n; };
int fn_80127D2C(T *t, u32 *v, D *d, u8 *p, int stride, int x) {
    u32 i;
    u32 *q;
    switch (d->bits) {
    case 4:
        if (x ^ d->which()) {
            for (i = 0, q = v; i < t->n; i++, q++) {
                if ((u32)(*p & 0xF) != *q) return 0;
                p += stride;
            }
        } else {
            for (i = 0, q = v; i < t->n; i++, q++) {
                if ((u32)(*p >> 4) != *q) return 0;
                p += stride;
            }
        }
        return 1;
    case 8:
        for (i = 0; i < t->n; i++) {
            if (*p != v[i]) return 0;
            p += stride;
        }
        return 1;
    case 16:
        for (i = 0; i < t->n; i++) {
            if (*(u16 *)p != v[i]) return 0;
            p += stride;
        }
        return 1;
    case 24:
        for (i = 0; i < t->n; i++) {
            if ((u32)(p[0] | (p[1] << 8) | (p[2] << 16)) != v[i]) return 0;
            p += stride;
        }
        return 1;
    case 32:
        for (i = 0; i < t->n; i++) {
            if (*(u32 *)p != v[i]) return 0;
            p += stride;
        }
        return 1;
    }
    return 1;
}

} /* extern "C" */

struct F {
    u16 x0; u16 bits; u8 pad4[24]; u16 x28; u16 x30;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3();
};

extern "C" {

extern char lbl_8029E060[];
void fn_80060568(char *, int, int, int);

// The local copy d declared after the check gives the target's saved-reg colouring (d=r31).
void fn_80127F34(T *a, u32 *out, F *f, u8 *src, int stride) {
    u32 *end;
    if (f->x28 < 4) fn_80060568(lbl_8029E060, 0, 0, 0);
    u32 *d = out;
    end = d + a->n;
    switch (f->bits) {
    case 4:
        if (f->v3()) {
            for (; d < end; d++) { *d = *src & 0xf; src += stride; }
        } else {
            for (; d < end; d++) { *d = (int)*src >> 4; src += stride; }
        }
        break;
    case 8:
        for (; d < end; d++) { *d = *src; src += stride; }
        break;
    case 16:
        for (; d < end; d++) { *d = *(u16 *)src; src += stride; }
        break;
    case 24:
        for (; d < end; d++) { *d = src[0] | (src[1] << 8) | (src[2] << 16); src += stride; }
        break;
    case 32:
        for (; d < end; d++) { *d = *(u32 *)src; src += stride; }
        break;
    }
}

} /* extern "C" */
