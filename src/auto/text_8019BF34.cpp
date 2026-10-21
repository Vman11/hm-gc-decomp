// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct P;
struct EA { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void load(void *, P *, R *); u8 rest[24]; };
struct EB { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void load(void *, P *, R *); u8 rest[12]; };
struct EC { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void load(void *, P *, R *); u8 rest[12]; };
struct ED { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void load(void *, P *, R *); u8 rest[12]; };
struct EE { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void load(void *, P *, R *); u8 rest[32]; };
struct P { u8 pad[0x18]; u32 nEA; EA *aEA; u32 nEB; EB *aEB; u32 nEC; EC *aEC; u32 nED; ED *aED; u32 nEE; EE *aEE; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); }

extern "C" void fn_8019BF34(P *p, void *x, R *r) {
    u32 k;
    u32 n;
    EA *ea_e;
    EA *ea_end;
    EB *eb_e;
    EB *eb_end;
    EC *ec_e;
    EC *ec_end;
    ED *ed_e;
    ED *ed_end;
    EE *ee_e;
    EE *ee_end;
    while ((k = r->next()) != 6) {
        n = fn_800FADA8(r);
        switch ((s32)k) {
        case 57:
            if (n > p->nEA) {
                r->err(35);
            }
            for (ea_e = p->aEA, ea_end = ea_e + n; ea_e < ea_end; ea_e++) {
                fn_800FB000(r, 57);
                ea_e->load(x, p, r);
            }
            break;
        case 58:
            if (n > p->nEB) {
                r->err(35);
            }
            for (eb_e = p->aEB, eb_end = eb_e + n; eb_e < eb_end; eb_e++) {
                fn_800FB000(r, 58);
                eb_e->load(x, p, r);
            }
            break;
        case 59:
            if (n > p->nEC) {
                r->err(35);
            }
            for (ec_e = p->aEC, ec_end = ec_e + n; ec_e < ec_end; ec_e++) {
                fn_800FB000(r, 59);
                ec_e->load(x, p, r);
            }
            break;
        case 60:
            if (n > p->nED) {
                r->err(35);
            }
            for (ed_e = p->aED, ed_end = ed_e + n; ed_e < ed_end; ed_e++) {
                fn_800FB000(r, 60);
                ed_e->load(x, p, r);
            }
            break;
        case 61:
            if (n > p->nEE) {
                r->err(35);
            }
            for (ee_e = p->aEE, ee_end = ee_e + n; ee_e < ee_end; ee_e++) {
                fn_800FB000(r, 61);
                ee_e->load(x, p, r);
            }
            break;
        default:
            r->err(30);
            break;
        }
        fn_800FAEA0(r);
    }
}

} /* extern "C" */
