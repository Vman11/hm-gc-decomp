// fn_8004AA74: camera fly-to step (wA_80030E98, from wCZ draft).
#include "common.h"
struct V3 { f32 x, y, z; };
struct CamIf { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void get(V3 *, V3 *, V3 *, V3 *, int); virtual void set(V3 *, V3 *, V3 *, V3 *, int); };
struct FT { u8 pad[0x130]; void (*f130)(u32, V3 *); u8 pad134[0x10]; void (*f144)(u32, V3 *); void (*f148)(u32, V3 *); void (*f14c)(u32, V3 *); };
struct G28 { u8 pad[0x10]; u32 f10; };
struct G { u8 pad[0x28]; G28 *f28; };
struct S1C0 { s32 f0; };
struct Cam {
    u8 pad0[0xe0];
    CamIf *fe0;
    u8 pade4[0x34];
    char *f118;
    u8 pad11c[0x38];
    f32 *f154;
    f32 *f158;
    f32 *f15c;
    f32 *f160;
    u8 pad164[4];
    f32 *f168;
    f32 *f16c;
    f32 *f170;
    u8 pad174[4];
    f32 *f178;
    u8 pad17c[8];
    s32 f184;
    u8 pad188[0x38];
    S1C0 *f1c0;
    u8 pad1c4[0xc];
    s32 f1d0;
    u8 pad1d4[0x10];
    s32 f1e4;
};
extern "C" {
extern FT lbl_803286D0;
extern G *lbl_8035B65C;
extern void *lbl_80359F2C;
extern char lbl_80295CB0[];
extern char lbl_8035D304[8];
extern f32 lbl_8035D34C;
extern f64 lbl_8035D350;
extern f64 lbl_8035D358;
void fn_80101820(V3 *);
void fn_80101744(V3 *, V3 *);
void fn_802494A4(Cam *, int);
int fn_800F6CD0(char *, char *);
void fn_800F6E88(char *, void *);
void fn_8002A860(void *, int);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);

}
extern "C" void fn_8004AA74(Cam *c, f32 dt) {
    V3 pos, at, up, v5c;
    V3 p, f, u, r;
    V3 d, n;
    f32 len, spd;
    int arrived;
    c->fe0->get(&pos, &at, &up, &v5c, 0);
    lbl_803286D0.f130(lbl_8035B65C->f28->f10, &p);
    lbl_803286D0.f14c(lbl_8035B65C->f28->f10, &f);
    lbl_803286D0.f144(lbl_8035B65C->f28->f10, &r);
    lbl_803286D0.f148(lbl_8035B65C->f28->f10, &u);
    u.x = -u.x; u.y = -u.y; u.z = -u.z;
    fn_80101820(&f);
    if (c->f1d0 != 0) {
        f32 k = *c->f168;
        p.x = k * f.x + p.x; p.y = k * f.y + p.y; p.z = k * f.z + p.z;
        k = *c->f16c;
        p.x = k * r.x + p.x; p.y = k * r.y + p.y; p.z = k * r.z + p.z;
        k = *c->f170;
        p.x = k * u.x + p.x; p.y = k * u.y + p.y; p.z = k * u.z + p.z;
    } else {
        f32 k = *c->f158;
        p.x = k * f.x + p.x; p.y = k * f.y + p.y; p.z = k * f.z + p.z;
        k = *c->f15c;
        p.x = k * r.x + p.x; p.y = k * r.y + p.y; p.z = k * r.z + p.z;
        k = *c->f160;
        p.x = k * u.x + p.x; p.y = k * u.y + p.y; p.z = k * u.z + p.z;
    }
    d.x = p.x - pos.x;
    d.y = p.y - pos.y;
    *(volatile f32 *)&d.z = p.z - pos.z;
    len = d.x * d.x + d.y * d.y + d.z * d.z;
    if (len > *(volatile f32 *)&lbl_8035D34C) {
        f64 g = __frsqrte(len);
        volatile f32 y;
        g = lbl_8035D350 * g * (lbl_8035D358 - len * (g * g));
        g = lbl_8035D350 * g * (lbl_8035D358 - len * (g * g));
        g = lbl_8035D350 * g * (lbl_8035D358 - len * (g * g));
        y = len * g;
        len = y;
    }
    spd = *c->f154 * dt;
    if (c->f1d0 != 0) spd = *c->f178 * dt;
    arrived = 0;
    if (spd > len) {
        spd = len;
        arrived = 1;
    }
    fn_80101744(&n, &d);
    n.x = n.x * spd; n.y = n.y * spd; n.z = n.z * spd;
    pos.x = pos.x + n.x; pos.y = pos.y + n.y; pos.z = pos.z + n.z;
    at.x = -f.x; at.y = -f.y; at.z = -f.z;
    fn_80101820(&at);
    up = u;
    fn_80101820(&up);
    v5c.x = -r.x; v5c.y = -r.y; v5c.z = -r.z;
    fn_80101820(&v5c);
    c->fe0->set(&pos, &at, &up, &v5c, 0);
    if (arrived != 0) {
        fn_802494A4(c, 5);
        if (fn_800F6CD0(c->f118, lbl_80295CB0) != 0) {
            if (fn_800F6CD0(c->f118, lbl_80295CB0) != 0) {
                char buf[8];
                c->f1e4 = 0;
                __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035D304, 0, 0, 0);
                fn_800F6E88(buf, (u8 *)c->fe0 + 0x8c);
                buf[7] = c->f1e4 + '0';
                switch (c->f1e4) {
                case 0:
                    break;
                case 1:
                    __ct__9C80253F24Fiiii(lbl_8035B65C, buf, 0, 0, 0);
                    break;
                case 2:
                    __ct__9C80253F24Fiiii(lbl_8035B65C, buf, 0, 0, 0);
                    break;
                case 3:
                    __ct__9C80253F24Fiiii(lbl_8035B65C, buf, 0, 0, 0);
                    break;
                }
            }
            fn_8002A860(lbl_80359F2C, 1);
        } else if (c->f1c0->f0 == 0 && fn_800F6CD0(c->f118, lbl_80295CB0) == 0) {
            c->f1c0->f0 = 1;
            __ct__9C80253F24Fiiii(lbl_8035B65C, (char *)c->f184, 0, 0, 0);
        }
    }
}
