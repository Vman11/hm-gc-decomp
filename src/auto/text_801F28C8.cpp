#include "common.h"
extern "C" {
} /* extern "C" */
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

extern char lbl_802A4510[], lbl_802A452C[];
typedef struct Huf Huf;
s32 fn_801F2F78(Huf *, Strm **);
void fn_801F28C8(Inf *z, Strm **pp, Huf *h, u32 *out, u32 n) {
    u32 i = 0;
    while (i < n) {
        s32 c = fn_801F2F78(h, pp);
        if (c < 16) {
            out[i++] = c;
        } else if (c == 16) {
            u32 r = getBits(pp, 2) + 3;
            u32 j;
            for (j = 0; j < r; j++) {
                if (i == n) fn_80060568(lbl_802A4510, 0, 0, 0);
                out[i] = out[i - 1];
                i++;
            }
        } else if (c == 17) {
            u32 *q;
            u32 r;
            u32 j;
            r = getBits(pp, 3) + 3;
            q = &out[i];
            for (j = 0; j < r; j++) {
                if (i == n) fn_80060568(lbl_802A4510, 0, 0, 0);
                *q++ = 0;
                i++;
            }
        } else if (c == 18) {
            u32 r;
            u32 *q;
            u32 j;
            r = getBits(pp, 7) + 11;
            q = &out[i];
            for (j = 0; j < r; j++) {
                if (i == n) fn_80060568(lbl_802A4510, 0, 0, 0);
                *q++ = 0;
                i++;
            }
        } else {
            fn_80060568(lbl_802A452C, 0, 0, 0);
        }
    }
}

}
