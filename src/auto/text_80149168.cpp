// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Chunk { u8 pad[8]; u8 type[4]; u8 *data; u32 len; } Chunk;
struct Rd { Chunk *c; u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void next(); };
typedef struct Png {
    u8 pad0[4]; Rd rd; u8 pad14[0x64 - 0x14]; u8 depth; u8 pad65[3]; u32 ctype; u8 pad6c[0x88 - 0x6c];
    f64 gamma; s32 seenIDAT; s32 seenPLTE; s32 f98; s32 seenIEND;
    u8 padA0[0x93c8 - 0xa0]; u32 bgIdx; u32 bgR, bgG, bgB; u32 npal; u8 *pal;
} Png;
extern char lbl_803643D0[8], lbl_803643D8[8], lbl_803643E0[8], lbl_803643E8[8], lbl_803643F0[8], lbl_803643F8[8], lbl_80364400[8],
    lbl_80364408[8], lbl_80364410[8], lbl_80364418[8], lbl_80364420[8], lbl_80364428[8], lbl_80364430[8], lbl_80364438[8];
extern const f64 lbl_803643C0;
extern char lbl_8029FFDC[], lbl_8029FF58[], lbl_8029FF70[], lbl_8029FF98[], lbl_8029FFC0[], lbl_8029FEBC[], lbl_8029FED4[], lbl_8029FD18[],
    lbl_8029FE54[], lbl_8029FE7C[], lbl_8029FEA4[], lbl_8029FDF0[], lbl_8029FE14[], lbl_8029FE38[], lbl_8029FD8C[], lbl_8029FDB4[],
    lbl_8029FDD8[], lbl_8029FCA8[], lbl_8029FCD4[], lbl_8029FCFC[], lbl_8029FC64[], lbl_8029FD2C[], lbl_8029FD54[], lbl_8029FD6C[],
    lbl_8029FC90[], lbl_8029FFF4[];
int memcmp(const void *, const void *, u32);
void fn_80060568(char *, int, int, int);
void fn_80148E6C(Png *);
static inline s32 is(u8 *t, char *n) { s32 r = (memcmp(t, n, 4) == 0) ? 1 : 0; return r; }
static inline u32 swap32(u32 v) { u8 *q = (u8 *)&v; return q[3] | (q[2] << 8) | (q[1] << 16) | (q[0] << 24); }
static inline void cpal(Png *p) {
    u8 *q;
    s32 k;
    u8 *s;
    u32 i;
    s32 j;
    i = 0;
    j = 0;
    k = 0;
    s = p->rd.c->data;
    for (; i < p->npal; i++, j += 3) {
        q = s + j;
        p->pal[k] = q[0];
        p->pal[k + 1] = q[1];
        p->pal[k + 2] = q[2];
        p->pal[k + 3] = 255;
        k += 4;
    }
}
void fn_80149168(Png *p) {
    u8 *t = p->rd.c->type;
    if (is(t, lbl_803643D0)) {
        fn_80060568(lbl_8029FFDC, 0, 0, 0);
    } else if (is(t, lbl_803643D8)) {
        fn_80148E6C(p);
    } else if (is(t, lbl_803643E0)) {
        u32 n;
        if (p->seenPLTE != 0) fn_80060568(lbl_8029FF58, 0, 0, 0);
        p->seenPLTE = 1;
        if (p->ctype == 0 || p->ctype == 4) fn_80060568(lbl_8029FF70, 0, 0, 0);
        n = p->rd.c->len;
        if (n % 3 != 0) fn_80060568(lbl_8029FF98, 0, 0, 0);
        if (n > 768) fn_80060568(lbl_8029FFC0, 0, 0, 0);
        p->npal = n / 3;
        if (p->ctype != 2 && p->ctype != 6) {
            cpal(p);
        }
    } else if (is(t, lbl_803643E8)) {
        p->seenIEND = 1;
    } else if (is(t, lbl_803643F0)) {
        u8 *d = p->rd.c->data;
        switch ((s32)p->ctype) {
        case 0:
        case 3:
        case 4:
            if (p->rd.c->len == 0) fn_80060568(lbl_8029FEBC, 0, 0, 0);
            p->bgIdx = d[0];
            if (p->bgIdx >= (u32)(1 << p->depth)) fn_80060568(lbl_8029FED4, 0, 0, 0);
            break;
        case 2:
        case 6:
            if (p->rd.c->len < 6) fn_80060568(lbl_8029FEBC, 0, 0, 0);
            p->bgR = d[0];
            p->bgG = d[2];
            p->bgB = d[4];
            break;
        default:
            fn_80060568(lbl_8029FD18, 0, 0, 0);
            break;
        }
    } else if (is(t, lbl_803643F8)) {
        u8 *d;
        if (p->seenPLTE != 0) fn_80060568(lbl_8029FE54, 0, 0, 0);
        if (p->seenIDAT != 0) fn_80060568(lbl_8029FE7C, 0, 0, 0);
        if (p->rd.c->len < 4) fn_80060568(lbl_8029FEA4, 0, 0, 0);
        d = p->rd.c->data;
        p->gamma = (f64)swap32(d[0] | (d[1] << 8) | (d[2] << 16) | (d[3] << 24)) / lbl_803643C0;
    } else if (is(t, lbl_80364400)) {
        if (p->seenPLTE != 0) fn_80060568(lbl_8029FDF0, 0, 0, 0);
        if (p->seenIDAT != 0) fn_80060568(lbl_8029FE14, 0, 0, 0);
        if (p->rd.c->len != 32) fn_80060568(lbl_8029FE38, 0, 0, 0);
    } else if (is(t, lbl_80364408)) {
        if (p->seenPLTE == 0) fn_80060568(lbl_8029FD8C, 0, 0, 0);
        if (p->seenIDAT != 0) fn_80060568(lbl_8029FDB4, 0, 0, 0);
        { u32 n = p->npal * 2; if (n != p->rd.c->len) fn_80060568(lbl_8029FDD8, 0, 0, 0); }
    } else if (is(t, lbl_80364410)) {
        if (p->seenIDAT != 0) fn_80060568(lbl_8029FCA8, 0, 0, 0);
        if (p->seenPLTE != 0) fn_80060568(lbl_8029FCD4, 0, 0, 0);
        switch ((s32)p->ctype) {
        case 0:
            if (p->rd.c->len < 1) fn_80060568(lbl_8029FCFC, 0, 0, 0);
            break;
        case 2:
        case 3:
            if (p->rd.c->len < 3) fn_80060568(lbl_8029FCFC, 0, 0, 0);
            break;
        case 4:
            if (p->rd.c->len < 2) fn_80060568(lbl_8029FCFC, 0, 0, 0);
            break;
        case 6:
            if (p->rd.c->len < 4) fn_80060568(lbl_8029FCFC, 0, 0, 0);
            break;
        default:
            fn_80060568(lbl_8029FD18, 0, 0, 0);
            break;
        }
    } else if (is(t, lbl_80364418)) {
        if (p->seenIDAT != 0) fn_80060568(lbl_8029FC64, 0, 0, 0);
    } else if (is(t, lbl_80364420)) {
        if (p->seenIDAT != 0) fn_80060568(lbl_8029FD2C, 0, 0, 0);
        if (p->rd.c->len != 12) fn_80060568(lbl_8029FD54, 0, 0, 0);
        if (p->rd.c->data[8] > 1) fn_80060568(lbl_8029FD6C, 0, 0, 0);
    } else if (is(t, lbl_80364428)) {
        if (p->rd.c->len != 8) fn_80060568(lbl_8029FC90, 0, 0, 0);
    } else if (is(t, lbl_80364430)) {
    } else if (is(t, lbl_80364438)) {
    } else if ((t[0] & 0x20) == 0) {
        fn_80060568(lbl_8029FFF4, 0, 0, 0);
    }
    p->rd.next();
}

} /* extern "C" */
