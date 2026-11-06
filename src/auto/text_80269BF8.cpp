#include "common.h"

extern "C" {

struct EV;
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void m(void *); };
struct H2 { V *v; }; struct H1 { u8 pad[4]; H2 *h; };
struct C8023D2AC { virtual ~C8023D2AC(); virtual void a1(); virtual void a2(); virtual void stop(); u8 pad[1336]; };
struct C80269BF8 : C8023D2AC { s32 f1340; u8 pad2[4]; s32 f1348; u8 pad3[4]; H1 *f1356; void *f1360; s32 f1364; H1 *f1368; void *f1372; void ev(EV *); ~C80269BF8(); void Unreg(); };
typedef void (C80269BF8::*PM)(EV *);

static const struct { char pad[176]; char s[8][12]; } S = {{1}, {"M_STOPSC", "M_STOPSR", "M_STOPS1", "M_STOPS2", "M_STOPS3", "M_STOPS4", "M_STOPS5", "M_AMBSND"}};

extern void *lbl_8035B65C;
extern char lbl_80366D54[0x7];
extern char lbl_80366D5C[0x7];
extern char lbl_80366D64[0x7];
extern char lbl_80366D6C[0x8];
extern char lbl_80366D74[0x8];
extern char lbl_80366D7C[0x8];
extern char lbl_80366D84[0x8];
extern char lbl_80366D8C[0x8];
struct T12 { s32 a, b; void *f; };
void fn_80268B08(void);
static struct { char pad[600]; } D = {{1}};
void fn_80253AD8(void *, C80269BF8 *, PM, const char *);
#define Reg(p, q, n) fn_80253AD8(lbl_8035B65C, p, &C80269BF8::ev, n)
extern s32 lbl_8035B79C;
#pragma inline_max_size(4000)
inline void C80269BF8::Unreg() {
    const char *str = (const char *)&S;
    char *d = (char *)&D;
    Reg(this, (T12 *)(d + 600), lbl_80366D54);
    Reg(this, (T12 *)(d + 612), lbl_80366D5C);
    Reg(this, (T12 *)(d + 624), lbl_80366D64);
    Reg(this, (T12 *)(d + 636), lbl_80366D6C);
    Reg(this, (T12 *)(d + 648), lbl_80366D74);
    Reg(this, (T12 *)(d + 660), lbl_80366D7C);
    Reg(this, (T12 *)(d + 672), lbl_80366D84);
    Reg(this, (T12 *)(d + 684), lbl_80366D8C);
    Reg(this, (T12 *)(d + 696), str + 176);
    Reg(this, (T12 *)(d + 708), str + 188);
    Reg(this, (T12 *)(d + 720), str + 200);
    Reg(this, (T12 *)(d + 732), str + 212);
    Reg(this, (T12 *)(d + 744), str + 224);
    Reg(this, (T12 *)(d + 756), str + 236);
    Reg(this, (T12 *)(d + 768), str + 248);
    Reg(this, (T12 *)(d + 780), str + 260);
    if (f1360) {
        f1356->h->v->m(f1360);
        f1360 = 0;
    }
    if (f1372) {
        f1368->h->v->m(f1372);
        f1372 = 0;
    }
    f1348 = 0;
    f1340 = 1;
    f1356 = 0;
    f1360 = 0;
    f1364 = 0;
    f1368 = 0;
    f1372 = 0;
}
C80269BF8::~C80269BF8() {
    stop();
    Unreg();
    lbl_8035B79C = 0;
}

} /* extern "C" */
