#include "common.h"
struct V3 { f32 x, y, z; };
struct C4 { u8 r, g, b, a; };
struct P;
typedef void (P::*PMF)();
struct P {
    u8 pad0[140];
    void *o140;
    u8 pad144[12];
    s32 n156;
    void *o160;
    u8 pad164[224];
    u8 *buf388;
    u8 pad392[1336];
    u8 *a1728;
    u8 *a1732;
    C4 c1736;
    f32 f1740;
    u8 pad1744[36];
    PMF pmf;
};
extern "C" {
extern f32 lbl_80364380;
extern f32 lbl_80364384;
void fn_80101820(V3 *);
void fn_80142990(P *p) {
    C4 loc;
    u8 *q;
    u8 *end;
    u8 a;
    V3 v;
    if (p->o160) {
        if (p->o160 == p->o140) {
            u8 *s = p->buf388;
            p->c1736.r = s[0];
            p->c1736.g = s[1];
            p->c1736.b = s[2];
            p->c1736.a = s[3];
            p->a1732 = p->a1728;
        }
        {
            s32 sn;
            u8 *sb = p->buf388;
            p->buf388 = (u8 *)&loc;
            sn = p->n156;
            p->n156 = 1;
            (p->*(p->pmf))();
            p->buf388 = sb;
            p->n156 = sn;
        }
    } else {
        loc.r = p->c1736.r;
        loc.g = p->c1736.g;
        loc.b = p->c1736.b;
        loc.a = p->c1736.a;
    }
    q = p->buf388;
    end = (u8 *)&((u32 *)q)[p->n156] - 4;
    for (; q < end; q += 4) {
        a = q[3];
        v.x = (f32)(s32)a - (f32)(s32)q[7];
        v.y = (f32)(s32)*p->a1732 - (f32)(s32)a;
        v.z = p->f1740;
        fn_80101820(&v);
        q[0] = (s32)(lbl_80364380 * (lbl_80364384 + v.x));
        q[1] = (s32)(lbl_80364380 * (lbl_80364384 + v.y));
        q[2] = (s32)(lbl_80364380 * (lbl_80364384 + v.z));
        *p->a1732 = a;
        p->a1732++;
    }
    a = q[3];
    v.x = (f32)(s32)a - (f32)(s32)loc.a;
    v.y = (f32)(s32)*p->a1732 - (f32)(s32)a;
    v.z = p->f1740;
    fn_80101820(&v);
    q[0] = (s32)(lbl_80364380 * (lbl_80364384 + v.x));
    q[1] = (s32)(lbl_80364380 * (lbl_80364384 + v.y));
    q[2] = (s32)(lbl_80364380 * (lbl_80364384 + v.z));
    *p->a1732 = a;
    p->a1732++;
}
}
