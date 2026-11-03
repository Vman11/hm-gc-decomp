#include "common.h"
extern "C" char lbl_802EE90C[];
struct Huf { void *vt; u8 pad[2432]; Huf() { vt = lbl_802EE90C; } ~Huf() { vt = lbl_802EE90C; } };
extern "C" {
struct Strm {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual int more(); virtual void fill();
    u8 *cur; u8 *end; s32 bit;
};
typedef struct Inf {
    u8 pad0[4]; u32 adler; u8 win[0x8000]; s32 wpos; s32 rpos; u32 copyLen;
    u8 lit[0x8998 - 0x8014]; u8 dist[0x931c - 0x8998]; s32 final; s32 done; u16 stored;
} Inf;
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

extern char lbl_802A4480[], lbl_802A4498[], lbl_802A44B4[];
extern u32 lbl_802A3EDC[], lbl_802A435C[];
extern u8 lbl_802A3CF0[];
u32 fn_801F359C(Strm *);
void fn_801F3174(void *, s32, u32, u32 *);
void fn_801F28C8(Inf *, Strm **, Huf *, u32 *, u32);
void *memset(void *, int, u32);
void fn_801F1544(Inf *z, Strm **pp) {
    s32 type;
    if ((*pp)->bit < 0) (*pp)->bit = 0;
    if ((s32)getBits(pp, 1) == 0) z->final = 0;
    else z->final = 1;
    type = getBits(pp, 2);
    if (type == 0) {
        u32 nc;
        if ((*pp)->bit >= 0) (*pp)->cur++;
        (*pp)->bit = -1;
        z->stored = fn_801F359C(*pp);

        { u32 nc2 = fn_801F359C(*pp); if (z->stored != (s32)(u16)~(u16)nc2 || z->stored == 0) fn_80060568(lbl_802A4480, 0, 0, 0); }
    } else if (type == 1) {
        fn_801F3174(z->lit, 15, 288, lbl_802A3EDC);
        fn_801F3174(z->dist, 15, 32, lbl_802A435C);
        z->stored = 0;
    } else if (type == 2) {
        u32 clen[19];
        u32 hlit = getBits(pp, 5);
        u32 hdist = getBits(pp, 5);
        u32 hclen = getBits(pp, 4);
        u8 *ord;
        u32 i;
        if (hclen + 4 > 19) fn_80060568(lbl_802A4498, 0, 0, 0);
        memset(clen, 0, sizeof(clen));

        for (i = 0; i < hclen + 4; i++) clen[lbl_802A3CF0[i]] = getBits(pp, 3);
        Huf h;
        u32 llen[288];
        u32 dlen[32];
        fn_801F3174(&h, 7, 19, clen);
        fn_801F28C8(z, pp, &h, llen, hlit + 257);
        fn_801F28C8(z, pp, &h, dlen, hdist + 1);
        fn_801F3174(z->lit, 15, hlit + 257, llen);
        fn_801F3174(z->dist, 15, hdist + 1, dlen);
        z->stored = 0;
    } else {
        fn_80060568(lbl_802A44B4, 0, 0, 0);
    }
}

}
