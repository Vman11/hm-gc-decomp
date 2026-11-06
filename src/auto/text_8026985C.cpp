#include "common.h"
struct EV;
struct VA { u8 pad[0x24]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void *get(s32); };
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void *m(); };
struct H2 { V *v; }; struct H1 { u8 pad[4]; H2 *h; };
struct P { u8 pad[1340]; s32 f1340; u8 pad2[4]; s32 f1348; u8 pad3[4]; H1 *f1356; void *f1360; s32 f1364; H1 *f1368; void *f1372; void ev(EV *); };
struct G { u8 pad[0x14]; VA *f14; };
typedef void (P::*PM)(EV *);
extern "C" {
static const char sPad[176] = {1};
static const char s176[] = "M_STOPSC";
static const char s188[] = "M_STOPSR";
static const char s200[] = "M_STOPS1";
static const char s212[] = "M_STOPS2";
static const char s224[] = "M_STOPS3";
static const char s236[] = "M_STOPS4";
static const char s248[] = "M_STOPS5";
static const char s260[] = "M_AMBSND";
static const char sPad2[60] = {1};
static const char s332[] = "AMBIENT_LOOP";
static char dpad[408] = {1};
extern void *lbl_8035B65C;
extern G *lbl_8035B7BC;
extern char lbl_80366DAC[0x8];
extern char lbl_80366D54[0x7];
extern char lbl_80366D5C[0x7];
extern char lbl_80366D64[0x7];
extern char lbl_80366D6C[0x8];
extern char lbl_80366D74[0x8];
extern char lbl_80366D7C[0x8];
extern char lbl_80366D84[0x8];
extern char lbl_80366D8C[0x8];
H1 *fn_800F8274(void *, const char *);
void fn_80253B24(void *, P *, PM *, const char *);
void fn_8026985C(P *p) {
    void *r = lbl_8035B7BC->f14->get(0);
    p->f1356 = fn_800F8274(r, lbl_80366DAC);
    p->f1360 = 0;
    p->f1360 = p->f1356->h->v->m();
    p->f1368 = fn_800F8274(r, s332);
    p->f1372 = 0;
    p->f1372 = p->f1368->h->v->m();
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D54); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D5C); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D64); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D6C); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D74); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D7C); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D84); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, lbl_80366D8C); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s176); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s188); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s200); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s212); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s224); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s236); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s248); }
    { PM m = &P::ev; fn_80253B24(lbl_8035B65C, p, &m, s260); }
}
}
