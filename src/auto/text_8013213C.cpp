#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct E16 { u32 w0, w4, w8; u16 h12; u8 b14; u8 b15; };
struct Z { u8 pad_[12]; virtual u32 conv(u32); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void load(void *, R *, u32); };
struct X { u8 pad_[48]; virtual void s0(); virtual void s1(); virtual void load(void *, void *, R *); };
struct Wd { u8 pad_[68]; virtual void s0(); virtual void s1(); virtual void load(void *, R *); };
struct Ow { u8 pad_[16]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual Z *get(u32); };
struct TB {
    u32 n0;
    u32 n4;
    u32 n8;
    u32 n12;
    E16 *e16;
    virtual void s0(); virtual void clear(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void init0(void *); virtual void init52(); virtual void init4(void *); virtual void init8();
    virtual void s10(); virtual void s11(); virtual void s12();
    virtual Z *get0(u32); virtual Wd *get52(u32); virtual void *get4(u32); virtual X *get8(u32);
};
struct T : TB { Ow *own; u8 s28[8]; u8 s36[16]; u32 n52; u32 f56; };
extern u32 lbl_8035AC08;
extern char lbl_8029E818[];
void fn_800FAEF8(R *);
void fn_800FAEA0(R *);
u32 fn_800FADA8(R *);
void fn_800FB000(R *, s32);
u32 fn_800FB33C(R *);
static inline u32 rd(R *r) { return fn_800FB33C(r); }
void fn_800FB064(R *, void *);
void fn_8013E904(void *, u8 *, R *, u32);
void fn_8013EA54(void *, u8 *, R *);
void fn_8012F548(void *, R *, u32);
void fn_80120FF8(void *, T *, R *);
void fn_80060568(char *, int, int, int);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
void fn_8021F4A4(E16 *);
u32 fn_800F9398(void *, void *);
u32 fn_800F9788(void *, void *, void *);
void fn_8013213C(T *t, u8 *c, u32 a, R *r, u32 b) {
    u32 k;
    u32 a1, a2, a3, a4;
    u32 tok;
    u32 i;
    Z *z;
    u32 id;
    if (t->n8) t->clear();
    t->own = (Ow *)a;
    fn_800FAEF8(r);
    while ((tok = r->next()) != 6) {
        switch (tok) {
        case 59:
            fn_8013E904(t->s28, c, r, b);
            break;
        case 60:
            fn_8013EA54(t->s28, c, r);
            break;
        case 62:
            if (t->n0) r->err(39);
            t->n0 = fn_800FADA8(r);
            t->init0(c);
            for (i = 0; i < t->n0; i++) {
                fn_800FB000(r, 62);
                t->get0(i)->load(c, r, i);
            }
            fn_800FAEA0(r);
            break;
        case 110:
            if (t->n52) r->err(39);
            t->n52 = fn_800FADA8(r);
            t->init52();
            for (i = 0; i < t->n52; i++) {
                fn_800FB000(r, 110);
                t->get52(i)->load(c, r);
            }
            fn_800FAEA0(r);
            break;
        case 103:
            if (t->n4) r->err(39);
            t->n4 = fn_800FADA8(r);
            t->init4(c);
            for (i = 0; i < t->n4; i++) {
                fn_800FB000(r, 103);
                fn_8012F548(t->get4(i), r, i);
            }
            fn_800FAEA0(r);
            break;
        case 61:
            if (t->n8) r->err(39);
            t->n8 = fn_800FADA8(r);
            t->init8();
            for (i = 0; i < t->n8; i++) {
                fn_800FB000(r, 61);
                t->get8(i)->load(c, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 107: {
            if (t->n12) r->err(39);
            t->n12 = fn_800FADA8(r);
            if (!lbl_8035AC08) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC08);
            t->e16 = new E16[t->n12];
            fn_800F7E98();
            if (!t->e16) fn_800604C4(-4, 0, 0, 0);
            for (k = 0; k < t->n12; k++) {
                id = fn_800FB33C(r);
                if (t->n0) {
                    if (id >= t->n0) fn_80060568(lbl_8029E818, 0, 0, 0);
                    z = t->get0(id);
                } else {
                    z = t->own->get(id);
                }
                if (!(F(z,0,u32) & 0xc)) r->err(35);
                a1 = rd(r);
                a2 = rd(r);
                a3 = rd(r);
                a4 = rd(r);
                t->e16[k].b14 = id;
                t->e16[k].h12 = a4;
                if (!(F(z,4,u32) & 0x20)) {
                    t->e16[k].w0 = z->conv(a1);
                    t->e16[k].w4 = z->conv(a2);
                    t->e16[k].w8 = z->conv(a3);
                    fn_8021F4A4(&t->e16[k]);
                } else {
                    t->e16[k].w0 = a1;
                    t->e16[k].w4 = a2;
                    t->e16[k].w8 = a3;
                }
            }
            fn_800FAEA0(r);
            break;
        }
        case 108:
            fn_80120FF8(t->s36, t, r);
            break;
        case 92: {
            char b16[8];
            char b8[8];
            fn_800FB064(r, b16);
            fn_800FB064(r, b8);
            u32 v;
            if (b8 == 0 || b8[0] == 0) v = fn_800F9398(c + 240, b16);
            else v = fn_800F9788(c + 264, b8, b16);
            t->f56 = v;
            break;
        }
        case 109:
        default:
            r->err(30);
            break;
        }
    }
}
}
