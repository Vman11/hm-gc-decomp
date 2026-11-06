#include "common.h"
extern "C" {
struct wA_BR {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual s32 more(); virtual void refill();
    u8 *ptr; u8 *end; s32 bits;
};
struct wA_C { wA_BR *br; };
struct wA_H { u8 pad0[4]; s32 maxcode[16]; s32 valoff[16]; u8 idx[16]; u8 vals[0x104]; s32 minlen; };
extern char lbl_802A5968[];
extern char lbl_802A5988[];
extern char lbl_802A59B4[];
extern char lbl_802A59E0[];
extern char lbl_802A5A00[];
extern u32 lbl_8029DE58[];
extern u32 lbl_8029DE7C[];
extern u32 lbl_8029DE38[];
void fn_80060568(const char *s, s32 a, s32 b, s32 c);

inline void wA_fill(wA_C *c) {
    if (c->br->ptr >= c->br->end) {
        bool ok;
        c->br->refill();
        ok = false;
        if (c->br->ptr < c->br->end || c->br->more() == 0) {
            ok = true;
        }
        if (!ok) {
            fn_80060568(lbl_802A5968, 0, 0, 0);
        }
    }
}

inline void wA_next(wA_C *c, char *msg) {
    if (*c->br->ptr == 0xff) {
        c->br->ptr++;
        wA_fill(c);
        if (*c->br->ptr != 0) {
            fn_80060568(msg, 0, 0, 0);
        }
    }
    c->br->ptr++;
    c->br->bits = 8;
    wA_fill(c);
}

u8 fn_801F5150(wA_H *h, wA_C *c) {
    s32 n = h->minlen;
    u32 code;
    if (n <= c->br->bits) {
        c->br->bits -= n;
        code = (*c->br->ptr >> c->br->bits) & lbl_8029DE58[n];
    } else {
        code = 0;
        if (c->br->bits > 0) {
            n -= c->br->bits;
            code = (*c->br->ptr & lbl_8029DE58[c->br->bits]) << n;
        }
        while (n > 0) {
            wA_next(c, lbl_802A5988);
            if (n >= 8) {
                n -= 8;
                code |= *c->br->ptr << n;
                c->br->bits = 0;
            } else {
                wA_BR *b = c->br;
                code |= (*b->ptr & lbl_8029DE7C[n]) >> (8 - n);
                b->bits -= n;
                break;
            }
        }
    }
    {
        s32 cv;
        u16 v = code;
        u32 k = h->minlen - 1;
        while ((cv = v) > h->maxcode[k] && k < 16) {
            if (c->br->bits == 0) {
                if (*c->br->ptr == 0xff) {
                    c->br->ptr++;
                    wA_fill(c);
                    if (*c->br->ptr != 0) {
                        fn_80060568(lbl_802A59B4, 0, 0, 0);
                    }
                }
                c->br->ptr++;
                c->br->bits = 8;
                if (c->br->ptr >= c->br->end) {
                    bool ok;
                    c->br->refill();
                    ok = false;
                    if (c->br->ptr < c->br->end || c->br->more() == 0) {
                        ok = true;
                    }
                    if (!ok) {
                        fn_80060568(lbl_802A59E0, 0, 0, 0);
                    }
                }
            }
            k++;
            c->br->bits--;
            v = (cv << 1) | ((*c->br->ptr & lbl_8029DE38[c->br->bits]) != 0 ? 1 : 0);
        }
        if (k >= 16) {
            fn_80060568(lbl_802A5A00, 0, 0, 0);
        }
        {
            s32 j = h->idx[k] + (cv - h->valoff[k]);
            return h->vals[j];
        }
    }
}
}
