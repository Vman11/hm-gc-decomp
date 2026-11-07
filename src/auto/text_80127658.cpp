#include "common.h"
struct RC { u32 x0, y0, x1, y1; };
struct OV { u8 pad_[4]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void s4(void *, int, u32); virtual void s5(void *, int, u32); };
struct G {
    u16 fl;
    u8 pad_[30];
    virtual void v0(); virtual void v1(); virtual void *s2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void s6();
};
struct RR {
    u8 pad_[32];
    virtual void v0(); virtual void v1(); virtual void *s2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void s9(u32 *, u32 *, int); virtual void s10();
};
struct ENT { u32 w; u16 pad4; u16 sx; u16 id; u16 dx; u16 dy; u16 pad14; };
struct PB {
    u8 pad_[8];
    u32 fl;
    u32 n;
    u32 h;
    u8 pad20[32];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual G *s11(u32);
};
struct P : PB { u8 pad56[28]; ENT *ents; };
struct Q52 { u8 pad[20]; u32 fl; };
struct Q { u8 pad[52]; Q52 *q52; };
extern "C" {
extern u8 lbl_80328890[];
void fn_80128F54(G *);
void fn_80129168(G *, RR *, void *, u32);
void fn_80129040(G *, int, int);
void fn_80128F98(G *, RC *, u32, u32, RC *);

void fn_80127658(P *p, Q *q, RR *r) {
    RC dst, src;
    u32 a12, a8;
    G *cur;
    void *pal;
    u32 i;
    u32 last;
    u32 v;
    cur = 0;
    last = -1;
    dst.y0 = 0;
    dst.y1 = p->h;
    r->s9(&a12, &a8, 1);
    v = 0;
    pal = 0;
    if (r->s2()) {
        u32 c = *(u16 *)r->s2();
        v = c;
        ((OV *)r->s2())->s4(lbl_80328890, 0, c);
        pal = lbl_80328890;
    }
    for (i = 0; i < p->n; i++) {
        if (last != p->ents[i].id) {
            int b;
            if (cur) fn_80128F54(cur);
            last = p->ents[i].id;
            cur = p->s11(last);
            if ((p->fl & 0x100) && (cur->fl & 4) && (q->q52->fl & 0x10200) == 0x10200) cur->s6();
            fn_80129168(cur, r, pal, v);
            if (cur->s2()) ((OV *)cur->s2())->s5(pal, 0, v);
            b = 0;
            if (p->fl & 0x100) {
                if (!(cur->fl & 4)) b = 1;
                else if ((q->q52->fl & 0x10200) == 0x10200) cur->s6();
            }
            fn_80129040(cur, b, 0);
        }
        { u32 sx = p->ents[i].sx, dx, dy;
        dst.x0 = sx;
        dst.x1 = sx + p->ents[i].w;
        dx = p->ents[i].dx;
        src.x0 = dx;
        dy = p->ents[i].dy;
        src.y0 = dy;
        src.x1 = dx + p->ents[i].w;
        src.y1 = dy + p->h; }
        fn_80128F98(cur, &src, a12, a8, &dst);
    }
    if (cur) fn_80128F54(cur);
    r->s10();
}
}
