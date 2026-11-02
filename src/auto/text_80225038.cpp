// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V3 { f32 x, y, z; };
struct VO {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void s14(f32);
};
struct VO2 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void s11();
    virtual void v12(); virtual void v13();
    virtual void s14(f32);
};
struct Q50 { u8 pad[0xc0]; VO2 **fc0; void **fc4; u8 pc8[0xd8 - 0xc8]; s32 fd8; };
struct CS;
struct CSV {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void s14(V3 *, V3 *, V3 *, V3 *, int);
};
struct CS : CSV {
    u8 pad4[0x20c - 4];
    Q50 *q;
    u8 pad210[0x26c - 0x210];
    f32 f26c, f270, f274, f278;
    s32 i27c, i280, i284;
};
struct E30 { u8 pad[0x10]; void *f10; };
struct Ent { u8 pad[0x30]; E30 *f30; };
struct FT { u8 pad[0x130]; void (*f130)(void *, V3 *); void (*f134)(void *, V3 *, V3 *, V3 *); };
struct G8 { u8 pad[8]; u8 *f8; };
extern "C" {
extern f32 lbl_80365A70;
extern f32 lbl_80365A80;
extern f32 lbl_80365A90;
extern char lbl_802A8228[];
extern volatile s32 lbl_80359748;
extern G8 *volatile lbl_8035B460;
extern FT lbl_803286D0;
void fn_800F6FBC(void *, void *);
int fn_800F6CD0(void *, const char *);
void fn_80239678(CS *);
void fn_80241DD0(Q50 *, const char *, int, int, int, int);
Ent *fn_800F9398(void *, const char *);

void fn_80225038(CS *p) {
    char *str = lbl_802A8228;
    p->i284 = 0;
    p->f26c = lbl_80365A90;
    p->f270 = lbl_80365A80;
    p->f278 = lbl_80365A70;
    p->f274 = lbl_80365A70;
    p->i27c = 0;
    p->i280 = 1;
    if (p->q) {
        u8 buf[8];
        fn_800F6FBC(p->q->fc4[p->q->fd8], buf);
        if (fn_800F6CD0(buf, str + 0x130)) return;
    }
    fn_80239678(p);
    fn_80241DD0(p->q, str + 0x58, 0, 0, 0, 0);
    lbl_80359748 = 3;
    Ent *e = fn_800F9398(lbl_8035B460->f8 + 0x90, str + 0x118);
    if (e) {
        V3 c, a, b, d;
        a.x = lbl_80365A70; a.y = lbl_80365A70; a.z = lbl_80365A70;
        b.x = lbl_80365A70; b.y = lbl_80365A70; b.z = lbl_80365A70;
        if (e->f30) lbl_803286D0.f130(e->f30->f10, &c);
        else { c.x = lbl_80365A70; c.y = lbl_80365A70; c.z = lbl_80365A70; }
        if (e->f30) lbl_803286D0.f134(e->f30->f10, &a, &b, &d);
        a.x = -a.x; a.y = -a.y; a.z = -a.z;
        b.x = -b.x; b.y = -b.y; b.z = -b.z;
        p->s14(&c, &a, &d, &b, 0);
    }
    p->q->fc0[p->q->fd8]->s11();
    p->q->fc0[p->q->fd8]->s14(lbl_80365A70);
}

} /* extern "C" */
