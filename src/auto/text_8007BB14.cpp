// Code-matching draft (wMO): DIFF 0 vs target .o, but NOT linkable: the tables are TU-local .data (base lbl_802C2B38 in jt_802C2B34, a=+0x300 b=+0x310 c=+0x390, d0 = placeholder for +0..0x300) and the strings a .rodata pool at lbl_802986B0 (readonly strings); the TU spans the neighbours that share lbl_802C2B38 (8007BDF4 ...). Linking needs owning that .data/.rodata (merge).
#include "common.h"
#pragma readonly_strings on
extern "C" {

extern char lbl_8035F7D0[8], lbl_8035F7D8[8], lbl_8035F7E0[8], lbl_8035F7E8[8], lbl_8035F7F0[8], lbl_8035F7F8[8], lbl_8035F800[8], lbl_8035F808[8], lbl_8035F810[8], lbl_8035F818[8], lbl_8035F820[8], lbl_8035F828[8], lbl_8035F82C[8], lbl_8035F834[8], lbl_8035F83C[8], lbl_8035F844[8], lbl_8035F84C[8], lbl_8035F854[8], lbl_8035F85C[8], lbl_8035F864[8], lbl_8035F86C[8], lbl_8035F874[8], lbl_8035F87C[8], lbl_8035F884[8], lbl_8035F88C[8];
struct Str { char a[12]; char b[12]; char c[12]; };
extern Str lbl_802986B0;
struct Tb { u8 pad[768]; s32 a[4]; s32 b[32]; s32 c[32]; };
static s32 d0[192] = {1}; static s32 tA[4] = {1}; static s32 tB[32] = {1}; static s32 tC[32] = {1};
extern void *lbl_8035B65C;
struct T { u8 pad[96]; int f96; };
int fn_802491DC(T *, int);
void fn_80242B58(T *, const char *);
void fn_80254C90(void *);
void *keep_d0 = d0;
void fn_8007BB14(T *t, int k) {
    s32 *q;
    s32 idx;
    s32 v;
    idx = tA[k];
    v = t->f96;
    for (q = &tB[idx]; v > 0; q++) {
        if (*q > v) break;
        v -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0: fn_802491DC(t, 0); break;
    case 1: return;
    case 2: fn_802491DC(t, 1); break;
    case 3: fn_80242B58(t, "BALLROOM"); break;
    case 4: fn_80242B58(t, "CHILDREN"); break;
    case 5: fn_80242B58(t, lbl_8035F7D0); break;
    case 6: fn_80242B58(t, lbl_8035F7D8); break;
    case 7: fn_80242B58(t, lbl_8035F7E0); break;
    case 8: fn_80242B58(t, lbl_8035F7E8); break;
    case 9: fn_80242B58(t, lbl_8035F7F0); break;
    case 10: fn_80242B58(t, lbl_8035F7F8); break;
    case 11: fn_80242B58(t, lbl_8035F800); break;
    case 12: fn_80242B58(t, lbl_8035F808); break;
    case 13: fn_80242B58(t, lbl_8035F810); break;
    case 14: fn_80242B58(t, lbl_8035F818); break;
    case 15: fn_80242B58(t, lbl_8035F820); break;
    case 16: fn_80242B58(t, lbl_8035F828); break;
    case 17: fn_80242B58(t, lbl_8035F82C); break;
    case 18: fn_80242B58(t, lbl_8035F834); break;
    case 19: fn_80242B58(t, "MASTRBED"); break;
    case 20: fn_80242B58(t, lbl_8035F83C); break;
    case 21: fn_80242B58(t, lbl_8035F844); break;
    case 22: fn_80242B58(t, lbl_8035F84C); break;
    case 23: fn_80242B58(t, lbl_8035F854); break;
    case 24: fn_80242B58(t, lbl_8035F85C); break;
    case 25: fn_80242B58(t, lbl_8035F864); break;
    case 26: fn_80242B58(t, lbl_8035F86C); break;
    case 27: fn_80242B58(t, lbl_8035F874); break;
    case 28: fn_80242B58(t, lbl_8035F87C); break;
    case 29: fn_80242B58(t, lbl_8035F884); break;
    case 30: fn_80242B58(t, lbl_8035F88C); break;
    case 31: fn_80254C90(lbl_8035B65C); break;
    case 32: break;
    }
}

} /* extern "C" */
