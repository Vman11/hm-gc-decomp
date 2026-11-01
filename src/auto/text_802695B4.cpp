// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C80215F50 { u8 pad[44]; struct Y *y; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct Y { u8 pad[292]; virtual void y0(); virtual void y1(); virtual void set(void *, s32, s32); };
struct Vt { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *get(s32); };
struct GG { u8 pad[8]; void *x; u8 pad2[36 - 12]; u8 *f36; };
struct El { u32 f0, f4; u32 a[10]; u32 b[10]; };
struct T { u8 pad[20]; El e[15]; u32 f1340; u32 pad1344; f32 *f1348; f32 f1352; };
extern "C" {
extern GG *lbl_8035B65C;
static const char sPad[272] = {1};
static const char s272[] = "MUSICVOL";
static const char s284[] = "Audio\\GCN";
static const char s296[] = "Game\\Game.AOM";
static const char s312[] = "Levels\\%s\\%s.AOM";
extern char lbl_80366DA0[8];
extern char lbl_80366DA8[8];
extern u8 lbl_802F3010[];
Vt *fn_80207198(void *, const char *, s32);
void fn_80216044(void *, const char *);
void fn_800F6FBC(char *, void *);
void fn_800F6E40(char *, void *);
void fn_800E8F6C(char *, const char *, ...);
s32 fn_802160B8(void *, char *, s32);
s32 fn_80215C84(C80215F50 *, char *, const char *, s32, s32);
void fn_80060E30(s32, ...);
void fn_802692F4(T *, Y *);
void fn_80215BFC(C80215F50 *);
void fn_80215FDC(void *);

void fn_802695B4(T *t, char *name) {
        void *x = lbl_8035B65C->x;
    C80215F50 obj;
    u8 tmp[8];
    char buf[32];
    u32 i;
    t->f1348 = (f32 *)fn_80207198(lbl_8035B65C->f36 + 992, s272, 0)->get(0);
    t->f1352 = *t->f1348;
    t->f1340 = *(u32 *)fn_80207198(lbl_8035B65C->f36 + 992, lbl_80366DA0, 0)->get(0);
    fn_80216044(x, s284);
    fn_800F6FBC(name, tmp);
    fn_800F6E40(name, tmp);
    for (i = 0; i < 15; i++) {
        int k;
        t->e[i].f0 = 0;
        t->e[i].f4 = 0;
        for (k = 0; k < 10; k++) { t->e[i].a[k] = 0; t->e[i].b[k] = 0; }
    }
    t->e[0].f0 = 1; t->e[4].f0 = 1; t->e[7].f0 = 1; t->e[8].f0 = 1; t->e[9].f0 = 1; t->e[11].f0 = 1; t->e[12].f0 = 1; t->e[14].f0 = 1;
    fn_800E8F6C(buf, s296);
    if (!fn_802160B8(x, buf, 0)) {
        s32 e = fn_80215C84(&obj, buf, lbl_80366DA8, 2, 0);
        Y *y;
        if (e) fn_80060E30(e, buf);
        y = obj.y;
        y->set(lbl_802F3010, 18, 0);
        fn_802692F4(t, y);
        fn_80215BFC(&obj);
    }
    fn_800E8F6C(buf, s312, name, name);
    if (!fn_802160B8(x, buf, 0)) {
        s32 e = fn_80215C84(&obj, buf, lbl_80366DA8, 2, 0);
        Y *y;
        if (e) fn_80060E30(e, buf);
        y = obj.y;
        y->set(lbl_802F3010, 18, 0);
        fn_802692F4(t, y);
        fn_80215BFC(&obj);
    }
    fn_80215FDC(x);
}

} /* extern "C" */
