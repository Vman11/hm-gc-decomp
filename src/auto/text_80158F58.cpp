// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[16]; u32 flags; u8 pad14[104 - 20]; } E_80158F58;
typedef struct { E_80158F58 e[2]; s32 idx; } T_80158F58;
typedef struct { u8 b[28]; } S_80158F58;
typedef struct {
    u8 pad0[12];
    s32 x12;
    u8 pad10[4];
    s32 x20;
    T_80158F58 *t;
    u8 pad1C[48 - 28];
    S_80158F58 s[2];
    s32 idx;
    u8 pad6C[4];
    s32 x112;
    u8 pad74[4];
    s32 x120;
} P_80158F58;
typedef struct {
    u8 pad[6452];
    void *x6452;
    void *x6456;
} B_80158F58;
typedef struct {
    u8 pad[296];
    u32 x296;
} C_80158F58;

void fn_8015C998(C_80158F58 *c, void *x, E_80158F58 *e);
void fn_8016B254(void *, u32, u32, u32);
void fn_80163BE4(B_80158F58 *b);
void fn_80163BC0(B_80158F58 *b);
void fn_8015D624(C_80158F58 *c, B_80158F58 *b, u32 i);
void fn_8015C95C(C_80158F58 *c, void *a, u32 i);
void fn_80166094(void *, E_80158F58 *, S_80158F58 *, u32, u32, u8 *, s32, s32, s32, s32, s32);
void fn_80168AE8(void *, E_80158F58 *, S_80158F58 *, u32, u32, u8 *, s32, s32, s32, s32, s32);
extern u8 lbl_802A04DC[];

#pragma opt_propagation off
void fn_80158F58(P_80158F58 *p, B_80158F58 *b0, C_80158F58 *c0, u32 n, u32 flag) {
    void *a;
    B_80158F58 *b = b0;
    E_80158F58 *e;
    S_80158F58 *s;
    C_80158F58 *c = c0;
    u32 i;
    e = &p->t->e[p->t->idx];
    s = &p->s[p->idx];
    a = b->x6452;
    fn_8015C998(c, b->x6456, e);
    fn_8016B254(a, !!(e->flags & 0x400), n, flag);
    if (e->flags & 0x100) fn_80163BE4(b);
    i = 0;
    do {
        fn_8015D624(c, b, i);
        fn_8015C95C(c, a, i);
        if (n > 1) {
            fn_80166094(a, e, s, n, flag, lbl_802A04DC, p->x12, p->x20, p->x112, p->x120, p->x12);
        } else {
            fn_80168AE8(a, e, s, n, flag, lbl_802A04DC, p->x12, p->x20, p->x112, p->x120, p->x12);
        }
        i++;
    } while (i < c->x296);
    if (e->flags & 0x100) fn_80163BC0(b);
}
#pragma opt_propagation reset

} /* extern "C" */
