// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_80190604 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void *g(); };
struct V2_80190604 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(void *); };
extern char lbl_802A1BD8[];
void fn_80060568(const char *, s32, s32, s32);
V2_80190604 *fn_800F8274(void *, void *);
void fn_80190C98(void *);

void fn_80190604(V1_80190604 *p, u8 *q, void *s) {
    void *r = p->g();
    u8 *e;
    u8 **pp;
    if (r == NULL) {
        fn_80060568(lbl_802A1BD8, 0, 0, 0);
    }
    fn_800F8274(*(void **)(q + 0xA8), s)->m(r);
    e = *(u8 **)(q + 0x58);
    pp = (u8 **)(q + 0x58);
    while (e != NULL) {
        if (e == (u8 *)p) {
            *pp = *(u8 **)(e + 0x54);
            *(u8 **)(e + 0x54) = 0;
            *(u8 **)(e + 0x50) = 0;
            break;
        }
        pp = (u8 **)(e + 0x54);
        e = *(u8 **)(e + 0x54);
    }
    fn_80190C98(p);
}

} /* extern "C" */
