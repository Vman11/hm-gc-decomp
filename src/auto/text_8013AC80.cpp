// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual s32 next(); };
struct Ent { u32 type; u32 val; };
class C8013B1D0 { public: u8 hdr[0x1C]; u32 val; u32 cnt; Ent ent[16]; C8013B1D0(); };
struct P { u16 n; u16 pad2; u32 pad4; C8013B1D0 *arr; u8 padC[0xC]; virtual void p0(); virtual void fill(C8013B1D0 *, s32 *); };
extern "C" { u16 fn_800FADA8(R *); u32 fn_800FB33C(R *); void fn_800FB000(R *, s32); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void *memset(void *, int, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); u32 fn_80139228(R *, u32 *, u32 *); void fn_8014C8C8(void *, u32, u32, u32); extern void *lbl_8035AC60; }

extern "C" void fn_8013AC80(P *p, R *r) {
    u32 a;
    u32 b;
    s32 map[16];
    C8013B1D0 *e;
    C8013B1D0 *end;
    s32 k;
    if (p->n != 0) {
        r->err(39);
    }
    p->n = fn_800FADA8(r);
    if (p->n < 1) {
        r->err(35);
    }
    if (!lbl_8035AC60) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC60);
    p->arr = new C8013B1D0[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    memset(p->arr, 0, p->n * sizeof(C8013B1D0));
    end = p->arr + p->n;
    for (e = p->arr; e < end; e++) {
        fn_800FB000(r, 96);
        fn_800FAEF8(r);
        e->cnt = 0;
        while ((u32)(k = r->next()) != 6) {
            if (e->cnt >= 16) {
                r->err(38);
            }
            switch (k) {
            case 63:
                fn_8014C8C8(e, fn_80139228(r, &a, &b), a, b);
                p->fill(e, map);
                continue;
            case 166:
                e->val = fn_800FB33C(r);
                continue;
            case 97: e->ent[map[e->cnt]].type = 0; break;
            case 98: e->ent[map[e->cnt]].type = 1; break;
            case 99: e->ent[map[e->cnt]].type = 2; break;
            case 100: e->ent[map[e->cnt]].type = 3; break;
            case 101: e->ent[map[e->cnt]].type = 9; break;
            case 102: e->ent[map[e->cnt]].type = 10; break;
            case 103: e->ent[map[e->cnt]].type = 11; break;
            case 104: e->ent[map[e->cnt]].type = 12; break;
            case 105: e->ent[map[e->cnt]].type = 13; break;
            case 106: e->ent[map[e->cnt]].type = 14; break;
            case 107: e->ent[map[e->cnt]].type = 15; break;
            case 108: e->ent[map[e->cnt]].type = 8; break;
            case 109: e->ent[map[e->cnt]].type = 16; break;
            case 110: e->ent[map[e->cnt]].type = 4; break;
            case 111: e->ent[map[e->cnt]].type = 5; break;
            case 112: e->ent[map[e->cnt]].type = 6; break;
            case 113: e->ent[map[e->cnt]].type = 7; break;
            default:
                r->err(30);
                break;
            }
            e->ent[map[e->cnt]].val = fn_800FB33C(r);
            e->cnt++;
        }
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
