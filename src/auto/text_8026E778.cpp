// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct E_E778 { u8 pad_[292];
    virtual void v0(); virtual void v1(); virtual void m2(char *, int, int); virtual void v3(); virtual void m4(int); virtual u32 m5();
};
struct C80215F50 { u8 pad[0x2C]; E_E778 *f44; u8 pad2[0x10]; C80215F50(); ~C80215F50(); };
struct M_E778 { u8 pad[0x6a0]; s32 f6a0; u8 pad2[0x14];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual int has(char *);
};
struct G_E778 { u8 pad[8]; void *x; };
struct Sub_E778 { char name[8]; u32 f8; u32 fC; u32 f10; u32 f14; };
struct Ent_E778 { u32 f0; u32 f4; u32 n; u32 nc; Sub_E778 sub[10]; };
struct S_E778 { u8 pad[0x190]; Ent_E778 *ents; };
extern "C" {
extern G_E778 *lbl_8035B65C;
extern char lbl_802AA828[];
extern char lbl_802AA87C[];
extern char lbl_80366E1C[8];
extern char lbl_802F3420[];
void fn_80216044(void *, char *);
M_E778 *fn_8021616C(void *);
s32 fn_802160B8(void *, char *, s32);
void fn_80215FDC(void *);
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80215BFC(C80215F50 *);
void fn_800FB064(E_E778 *, void *);
void fn_800FB000(E_E778 *, int);
u32 fn_800FADA8(E_E778 *);
void fn_800FAEF8(E_E778 *);
void fn_800FAEA0(E_E778 *);

void fn_8026E778(S_E778 *self, void *mgr, char *name, u32 *count) {
    C80215F50 o;
    u32 k;
    u32 t;
    u32 i;
    u32 a;
    u32 b;
    u32 cnt;
    s32 mode;
    u32 n;
    M_E778 *m;
    int e;
    s32 r;

    fn_80216044(mgr, lbl_802AA828);
    m = fn_8021616C(lbl_8035B65C->x);
    if (m->f6a0 == 5) {
        if (m->has(name)) {
            fn_80215FDC(mgr);
            return;
        }
        r = 0;
    } else {
        r = fn_802160B8(mgr, name, 0);
    }
    if (r == 0) {
        if ((e = fn_80215C84(&o, name, lbl_80366E1C, 2, 0)) != 0) fn_80060E30(e, lbl_802AA87C);
        E_E778 *p = o.f44;
        p->m2(lbl_802F3420, 8, 0);
        if (p->m5() == 0x3a) {
            n = fn_800FADA8(p);
            for (i = *count; i < *count + n; i++) {
                fn_800FB000(p, 0x3b);
                fn_800FB064(p, &self->ents[i]);
                fn_800FAEF8(p);
                t = p->m5();
                a = 0;
                b = 0;
                cnt = 0;
                mode = 0;
                while (t != 6) {
                    switch (t) {
                    case 0x3d: mode = 1; break;
                    case 0x3e: mode = 2; break;
                    case 0x3f: mode = 3; break;
                    case 0x3c: a = 1; break;
                    case 0x40: b = 1; break;
                    case 0x41:
                        cnt = fn_800FADA8(p);
                        self->ents[i].n = cnt;
                        self->ents[i].nc = self->ents[i].n;
                        for (k = 0; k < self->ents[i].n; k++) {
                            fn_800FB064(p, self->ents[i].sub[k].name);
                            self->ents[i].sub[k].f8 = 0;
                        }
                        fn_800FAEA0(p);
                        break;
                    }
                    t = p->m5();
                }
                if (mode == 0) mode = 1;
                if (cnt == 0) {
                    self->ents[i].n = 1;
                    cnt = 1;
                    self->ents[i].nc = self->ents[i].n;
                    self->ents[i].sub[0].name[0] = 0;
                    self->ents[i].sub[0].f8 = 0;
                }
                for (k = 0; k < cnt; k++) {
                    self->ents[i].sub[k].f14 = mode;
                    self->ents[i].sub[k].fC = a;
                    self->ents[i].sub[k].f10 = b;
                }
            }
            fn_800FAEA0(p);
            *count = *count + n;
        }
        fn_80215BFC(&o);
    }
    fn_80215FDC(mgr);
}
}
extern "C" {

} /* extern "C" */
