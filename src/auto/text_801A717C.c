/* Functions from 0x801A717C to 0x801A73D8, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364E80;
s32 fn_801A717C(void* arg0, f32 farg0, f32 farg1) {
    void* temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg1 > *(f32*)((char*)temp_r4 + 0x11C) * lbl_80364E80) {
        *(s32*)((char*)temp_r4 + 0x1C) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x1C) = 2;
    }
    temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg0 > *(f32*)((char*)temp_r4 + 0x118) * lbl_80364E80) {
        *(s32*)((char*)temp_r4 + 0x20) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x20) = 2;
    }
    return 1;
}
typedef struct Def Def; typedef struct DefF DefF; typedef struct Val Val;
struct Def { u8 pad[16]; u32 n; int mn; int mx; };
struct DefF { u8 pad[16]; u32 n; f32 mn; f32 mx; };
static inline int MX(Def *d){return d->mx;}
static inline int MN(Def *d){return d->mn;}
static inline f32 FMX(Def *d){return ((DefF*)d)->mx;}
static inline f32 FMN(Def *d){return ((DefF*)d)->mn;}
static inline void CLI(int *p,int hi,int lo){ if (*p > hi) *p = hi; if (*p < lo) *p = lo; }
static inline void CLF(f32 *p,f32 hi,f32 lo){ if (*p > hi) *p = hi; if (*p < lo) *p = lo; }
struct Val { Def *d; u8 pad[8]; union { int i; f32 f; u8 *b; int *pi; f32 *pf; }; };
// NonMatching: register colouring only (SDIFF 0, DIFF 72): clamp loads want desc r4 / val r3 / max r0, this gives desc r3 / val r0 / max r3. Same issue as fn_8010F1E0.
void fn_801A71DC(void *o, u32 type, Val *v) {
    switch (type) {
    case 0: case 4: case 5: case 10: case 11:
        break;
    case 1:
        if (v->i > 1) v->i = 1;
        if (v->i < 0) v->i = 0;
        break;
    case 2:
{ int m = MX(v->d); if (v->i > m) v->i = m; }
{ int m = MN(v->d); if (v->i < m) v->i = m; }
        break;
    case 3:
{ f32 m = FMX(v->d); if (v->f > m) v->f = m; }
{ f32 m = FMN(v->d); if (v->f < m) v->f = m; }
        break;
    case 7:
        { u32 k; for (k = 0; k < v->d->n; k++) if (v->b[k] > 255) v->b[k] = 255; }
        break;
    case 6:
        { u32 k; for (k = 0; k < v->d->n; k++) {
            if (v->pi[k] > 1) v->pi[k] = 1;
            if (v->pi[k] < 0) v->pi[k] = 0;
        } }
        break;
    case 8:
        { u32 k; for (k = 0; k < v->d->n; k++) {
            if (v->pi[k] > MX(v->d)) v->pi[k] = MX(v->d);
            if (v->pi[k] < MN(v->d)) v->pi[k] = MN(v->d);
        } }
        break;
    case 9:
        { u32 k; for (k = 0; k < v->d->n; k++) {
            if (v->pf[k] > FMX(v->d)) v->pf[k] = FMX(v->d);
            if (v->pf[k] < FMN(v->d)) v->pf[k] = FMN(v->d);
        } }
        break;
    }
}
