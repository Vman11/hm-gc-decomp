// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8015659C: NonMatching draft (SDIFF 4, DIFF 16: round-up mask regs in the 2 rup() instances), see hm-work/wA_8014D8D8/STATUS.txt.
struct T { u8 pad_[116]; virtual void s0(); virtual u32 v1(u16); virtual u32 v2(u16); virtual u32 v3(u16); virtual u32 v4(u16); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern u32 lbl_803645A8;
static inline void rup(u32 *pv) {
    u32 t = *pv;
    int hb = 0;
    int i;
    for (i = 0; i < 32; i++) if ((t >>= i) & 1) hb = i;
    u32 m = (1 << hb) - 1;
    *pv = (*pv + m) & ~m;
}
void fn_8015659C(u8 *p, u32 flags, u32 *w, u32 *h, u16 *fmt) {
    T *t = F(p,0x34,T*);
    rup(w);
    rup(h);
    if (!(flags & 0x100)) {
        u32 f = F(t,0x14,u32);
        if (F(t,0x68,int)) f = (f & ~0x01000000) | lbl_803645A8;
        if (F(t,0x6c,int) && !F(t,0x70,int)) f &= ~0x02000000;
        if (f & 0x00100000) goto skip;
    }
    if (*w > *h) *h = *w;
    else if (*h > *w) *w = *h;
skip:
    { u32 r = t->v1(fmt[1]); if (*w < r) *w = r; }
    { u32 r = t->v2(fmt[1]); if (*w > r) *w = r; }
    { u32 r = t->v3(fmt[1]); if (*h < r) *h = r; }
    { u32 r = t->v4(fmt[1]); if (*h > r) *h = r; }
}

}
