// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct OB { virtual void v0(); virtual void v1(); virtual s32 s2(); };
struct RD {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual s32 s4(u32); virtual s32 s5(u8 *, u32, int, OB **);
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void s9(OB *);
};
struct S28 { u8 pad[1764]; RD *rd; };
struct S20 { u8 pad[28]; S28 *s28; };
struct P {
    u32 a0;
    u32 a4;
    u32 fl;
    char *name;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void s3();
    S20 *s20;
    u32 a24;
    u32 a28;
};
extern u32 lbl_8036588C;
extern void *lbl_8035B1D4;
s32 fn_80213AD0(S20 *, void *, u32 *);
u32 strlen(const char *);
char *strcpy(char *, const char *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline u32 rd32(u8 *b) { return b[0] + (b[1] << 8) + (b[2] << 16) + (b[3] << 24); }

static inline s32 rdx(RD *r, u8 *buf, OB **o) {
    s32 res = r->s5(buf, 4, 0, o);
    if (res == 7) {
        res = (*o)->s2();
        r->s9(*o);
    }
    return res;
}
static inline RD *getrd(P *p) { return p->s20->s28->rd; }
static inline s32 tail(P *p, RD *r, char *name) {
    s32 res;
    u8 buf[4];
    OB *o;
    u32 n;
    if (r->s4(p->a24)) return 3;
    res = rdx(r, buf, &o);
    if (res) return 3;
    p->a4 = rd32(buf);
    p->fl |= lbl_8036588C;
    p->a0 = 0;
    p->a24 += 4;
    p->a24 += 28;
    n = strlen(name);
    if (!lbl_8035B1D4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B1D4);
    p->name = new char[n + 1];
    fn_800F7E98();
    if (!p->name) fn_800604C4(-4, 0, 0, 0);
    strcpy(p->name, name);
    return 0;
}
s32 fn_80213704(P *p, void *a, char *name, u32 fl) {
    u32 v;
    RD *r;
    s32 res;
    OB *o;
    u8 buf[4];
    u32 n;
    p->s3();
    p->fl = fl;
    v = p->fl;
    if ((v & 1) || (v & 0x20)) {
        p->fl &= ~1;
        p->fl &= ~0x20;
    }
    v = p->fl;
    if ((v & 8) || (v & 4)) {
        p->fl = 0;
        return 9;
    }
    if (v & 0x40) p->fl = v & ~0x40;
    if (!fn_80213AD0(p->s20, a, &p->a24)) return 2;
    return tail(p, getrd(p), name);
}

} /* extern "C" */
