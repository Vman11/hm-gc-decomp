#include "common.h"
struct Strm {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int more(); virtual void fill();
    u8 *cur; u8 *end; s32 bit;
};
typedef struct Inf {
    u8 pad0[4]; u32 adler; u8 win[0x8000]; s32 wpos; s32 rpos; u32 copyLen;
    u8 lit[0x8998 - 0x8014]; u8 dist[0x931c - 0x8998]; s32 final; s32 done; u16 stored;
} Inf;
extern "C" {
extern const s32 lbl_8029FC40[];
extern s32 lbl_802A3D04[], lbl_802A3D78[], lbl_802A3DEC[], lbl_802A3E64[];
extern char lbl_802A4468[], lbl_802A44D0[], lbl_802A44F0[];
void fn_80060568(char *, int, int, int);
void fn_801F1544(Inf *, Strm **);
u8 fn_801F36D8(Strm *);
u32 fn_801F2F78(void *, Strm **);

static inline bool eof(Strm *s) { return s->cur < s->end || !s->more(); }
static inline u32 getBits(Strm **pp, s32 n) {
    Strm *s = *pp;
    s32 bit = s->bit;
    u32 v;
    if (n <= 8 - bit) {
        v = ((s32)*s->cur >> bit) & lbl_8029FC40[n];
        s->bit += n;
    } else {
        s32 sh;
        v = 0;
        sh = 0;
        if (bit < 8) {
            sh = 8 - bit;
            v = ((s32)*s->cur >> bit) & lbl_8029FC40[8 - bit];
            n -= 8 - bit;
        }
        while (n > 0) {
            (*pp)->cur++;
            (*pp)->bit = 0;
            if ((*pp)->cur >= (*pp)->end) {
                bool r;
                (*pp)->fill();
                r = eof(*pp);
                if (!r) fn_80060568(lbl_802A4468, 0, 0, 0);
            }
            if (n > 8) {
                v |= *(*pp)->cur << sh;
                (*pp)->bit = 0;
                sh += 8;
                n -= 8;
            } else {
                s = *pp;
                v |= (*s->cur & lbl_8029FC40[n]) << sh;
                s->bit += n;
                break;
            }
        }
    }
    return v;
}

static inline void adl(Inf *z, u8 c) {
    u32 ad = z->adler;
    u32 lo = ad & 0xFFFF;
    u32 hi = ad >> 16;
    lo = (lo + c) % 65521;
    hi = (lo + hi) % 65521;
    z->adler = (hi << 16) | lo;
}
u32 fn_801F20F0(Inf *z, Strm **pp, u32 n, u8 *buf) {
    u32 i = 0;
    while (i < n) {
        if (z->stored != 0) {
            for (; z->stored != 0 && i < n; i++) {
                u8 c;
                z->stored--;
                c = fn_801F36D8(*pp);
                adl(z, c);
                buf[i] = c;
            }
            if (z->stored == 0 && z->final == 0) fn_801F1544(z, pp);
        } else if (z->copyLen != 0) {
            if (n - i > z->copyLen) {
                while (z->copyLen != 0) {
                    u8 c;
                    c = z->win[z->rpos];
                    z->win[z->wpos] = c;
                    z->copyLen--;
                    z->rpos = (z->rpos + 1) & 0x7FFF;
                    z->wpos = (z->wpos + 1) & 0x7FFF;
                    adl(z, c);
                    buf[i++] = c;
                }
            } else {
                while (i < n) {
                    u8 c;
                    c = z->win[z->rpos];
                    z->win[z->wpos] = c;
                    z->copyLen--;
                    z->rpos = (z->rpos + 1) & 0x7FFF;
                    z->wpos = (z->wpos + 1) & 0x7FFF;
                    adl(z, c);
                    buf[i++] = c;
                }
            }
        } else {
            u32 sym = fn_801F2F78(z->lit, pp);
            if (sym < 256) {
                z->win[z->wpos] = sym;
                z->wpos = (z->wpos + 1) & 0x7FFF;
                adl(z, sym);
                buf[i] = sym;
                i++;
            } else if (sym == 256) {
                if (z->final != 0) {
                    z->done = 1;
                    return i;
                }
                fn_801F1544(z, pp);
            } else if (sym < 286) {
                s32 len;
                const s32 *eb;
                sym -= 257;
                eb = &lbl_802A3D04[sym];
                len = lbl_802A3D78[sym];
                s32 dist;
                u32 d;
                u8 c;
                if (*eb) len += getBits(pp, *eb);
                d = fn_801F2F78(z->dist, pp);
                if (d > 29) fn_80060568(lbl_802A44D0, 0, 0, 0);
                eb = &lbl_802A3DEC[d];
                dist = lbl_802A3E64[d];
                if (*eb) dist += getBits(pp, *eb);
                z->rpos = (z->wpos + 0x8000 - dist) & 0x7FFF;
                z->copyLen = len;
                c = z->win[z->rpos];
                z->win[z->wpos] = c;
                z->rpos = (z->rpos + 1) & 0x7FFF;
                z->wpos = (z->wpos + 1) & 0x7FFF;
                z->copyLen--;
                adl(z, c);
                buf[i++] = c;
            } else {
                fn_80060568(lbl_802A44F0, 0, 0, 0);
            }
        }
    }
    return i;
}

}
