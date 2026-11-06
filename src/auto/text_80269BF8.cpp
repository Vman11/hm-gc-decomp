#include "common.h"

extern "C" {


struct EV;
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void m(void *); };
struct H2 { V *v; }; struct H1 { u8 pad[4]; H2 *h; };
struct C8023D2AC { virtual ~C8023D2AC(); virtual void a1(); virtual void a2(); virtual void stop(); virtual void a4(); virtual void a5(); u8 pad[1336]; };
struct C80269BF8 : C8023D2AC { s32 f1340; u8 pad2[4]; s32 f1348; u8 pad3[4]; H1 *f1356; void *f1360; s32 f1364; H1 *f1368; void *f1372; virtual ~C80269BF8(); virtual void stop(); void ev(EV *); void Unreg(); };
typedef void (C80269BF8::*PM)(EV *);

static void strs(void (*g)(...)) { g("MusicDatabase","MusicEvent","Searching","RoomClear","RoomClearReturn","Special1","Special2","Special3","Special4","Special5","GmSoMusicManager","AtEvSubscriber","GmBaObject"); }
void *keepstrs = (void*)strs;

extern void *lbl_8035B65C;
struct T12 { s32 a, b; void *f; };
void fn_80268B08(void);
static char dpad[600] = {1};
void fn_80253AD8(void *, C80269BF8 *, PM, const char *);
#define Reg(p, q, n) fn_80253AD8(lbl_8035B65C, p, &C80269BF8::ev, n)
extern s32 lbl_8035B79C;
#pragma inline_max_size(4000)
inline void C80269BF8::Unreg() {
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_TENS");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SUCC");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SRCH");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SPEC1");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SPEC2");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SPEC3");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SPEC4");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_SPEC5");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPSC");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPSR");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPS1");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPS2");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPS3");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPS4");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_STOPS5");
    fn_80253AD8(lbl_8035B65C, this, &C80269BF8::ev, "M_AMBSND");
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
