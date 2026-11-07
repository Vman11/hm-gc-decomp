#include "common.h"
extern "C" {
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Obj { u8 pad_[16]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void init(void *, char **, u32, u32, u8 *); };
struct Mgr {
    u8 *ctx;        /* 0 */
    u32 f4;
    u32 f8;         /* 8 */
    void *f12;      /* 12 */
    u8 **arr16;     /* 16 */
    void **arr20;   /* 20 */
    Obj **arr24;    /* 24 */
    u8 ***arr28;    /* 28 */
    void **arr32;   /* 32 */
    void **arr36;   /* 36 */
    void **arr40;   /* 40 */
    char **strs;    /* 44 */
    u32 f48;        /* 48 */
    u16 n52, n54, n56, pad58, n60, n62, n64, pad66;
    int n68;        /* 68 */
    u16 n72;        /* 72 */
    u16 pad74;
    char **arr76;   /* 76 */
    u8 pad80[108 - 80];
    u32 f108;       /* 108 */
};
extern char *lbl_8035AF34;
extern u32 lbl_8035AF38;
extern char ***lbl_8035AF28;
extern char **lbl_8035AF1C;
extern char **lbl_8035AF20;
extern char **lbl_8035AF24;
extern char **lbl_8035AF2C;
extern char **lbl_8035AF30;
void fn_8012ACAC(void *, u32, char *, u32, u32);
void fn_80215534(u8 *, u32, char *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
void fn_800F6E88(char *, char *);
void fn_801AAB28(u8 *, u8 *, char *);
void fn_800F9594(char *, u8 *);
void fn_801AAFAC(Mgr *, int);
void fn_8010FD54(void *, u32, char *, u32, u8 *, int);
void fn_8010BF74(void *, u32, char *, u32, u8 *, int, int);
void fn_801A62DC(u8 *, u8 *, char *, u32, u32, u8 *);
void fn_801AAC24(u8 *, u8 *, u8 *);
u8 *fn_801A5550(u8 *, u32);
int fn_800F6CD0(char *, char *);
void fn_801CC694(u8 *);
void fn_801CE888(void *, u8 *, char *, u32, u8 *);
void fn_801AABD0(u8 *, void *, u8 *);
void fn_801AAB7C(u8 *, Obj *, u8 *);
void fn_801AB928(void *, u8 *, char *, u32, u32, u32);
void fn_801C0C80(Obj *);
void fn_801C0CF8(Obj *);
#define FREETBL(t, N) { tt = t; if (tt) { u32 n = (N); u32 c; char **q = tt; for (c = 0; c < n; q++, c++) { if (*q) delete[] *q; } delete[] tt; t = 0; } }
static inline void freeTbl(char ***pt, u32 n) {
    char **t = *pt;
    if (t) {
        u32 i;
        char **q = t;
        for (i = 0; i < n; i++, q++) {
            if (*q) delete[] *q;
        }
        delete[] t;
        *pt = 0;
    }
}
#pragma push
#pragma peephole off
void fn_801AB15C(Mgr *m, u32 a) {
    u8 bb[8];
    char buf16[8];
    char buf8[8];
//P{
    int i;
    u32 j;
    char *s;
    u32 k;
    u8 *e;
//P}
    int jj;
    u32 ii;
    char **tt;
    if (m->f12) fn_8012ACAC(m->f12, F(m->ctx,16,u32), lbl_8035AF34, a, m->f108);
    if (m->n68 > 0) {
        for (i = 0; i < m->n68; i++) {
            for (j = 0; j < m->n72; j++) {
                fn_80215534(m->arr28[i][j], F(F(m->ctx,12,u8*),12,u32), lbl_8035AF28[i][j], a);
            }
        }
        if (!m->strs) {
            if (!lbl_8035AF38) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AF38);
            m->strs = new char *[m->n72];
            fn_800F7E98();
            if (!m->strs) fn_800604C4(-4, 0, 0, 0);
            for (j = 0; j < m->n72; j++) {
                if (!lbl_8035AF38) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035AF38);
                m->strs[j] = new char[8];
                fn_800F7E98();
                if (!m->strs[j]) fn_800604C4(-4, 0, 0, 0);
                m->strs[j][0] = 0;
            }
        }
        for (j = 0; j < m->n72; j++) {
            fn_800F6E88(m->strs[j], F(m->arr28[0][j],12,char*));
            fn_801AAB28(m->ctx, m->arr28[0][j], m->strs[j]);
            s = F(m->arr28[0][j],12,char*);
            fn_800F6E88(buf16, s);
            for (i = 1; i < m->n68; i++) {
                fn_800F6E88(buf8, F(m->arr28[i][j],12,char*));
                fn_800F9594(s, m->arr28[i][j]);
            }
        }
        fn_801AAFAC(m, 0);
    }
    {
#define i ii
        for (i = 0; i < m->n60; i++) {
            bb[0] = 0;
            fn_8010FD54(m->arr32[i], F(m->ctx,8,u32), lbl_8035AF30[i], a, &bb[0], 0);
        }
        for (i = 0; i < m->n62; i++) {
            bb[0] = 0;
            fn_8010BF74(m->arr36[i], F(m->ctx,8,u32), lbl_8035AF2C[i], a, &bb[0], 0, 1);
        }
        for (i = 0; i < m->n52; i++) {
            bb[0] = 0;
            fn_801A62DC(m->arr16[i], m->ctx, lbl_8035AF1C[i], a, m->f48, &bb[0]);
            fn_801AAC24(m->ctx, m->arr16[i], &bb[0]);
            if (m->n68 > 0) {
                for (k = 0; k < F(m->arr16[i],32,u32); k++) {
                    e = fn_801A5550(m->arr16[i], k);
                    for (jj = 0; jj < m->n72; jj++) {
                        if (fn_800F6CD0(F(e,64,char*), m->strs[jj])) {
                            F(e,60,u8) = jj;
                            fn_801CC694(e);
                            break;
                        }
                    }
                }
            }
        }
        for (i = 0; i < m->n54; i++) {
            bb[0] = 0;
            fn_801CE888(m->arr20[i], m->ctx, lbl_8035AF24[i], a, &bb[0]);
            fn_801AABD0(m->ctx, m->arr20[i], &bb[0]);
        }
        for (i = 0; i < m->n56; i++) {
            bb[0] = 0;
            m->arr24[i]->init(m->ctx, &lbl_8035AF20[i], a, m->f48, &bb[0]);
            fn_801AAB7C(m->ctx, m->arr24[i], &bb[0]);
        }
        if (lbl_8035AF34) {
            delete lbl_8035AF34;
            lbl_8035AF34 = 0;
        }
        FREETBL(lbl_8035AF1C, m->n52)
        FREETBL(lbl_8035AF24, m->n54)
        FREETBL(lbl_8035AF20, m->n56)
        if (lbl_8035AF28) {
            int r;
            for (r = 0; r < m->n68; r++) {
                char **row = lbl_8035AF28[r];
                u32 n = m->n72;
                u32 c;
                char **q = row;
                for (c = 0; c < n; q++, c++) {
                    if (*q) delete[] *q;
                }
                delete[] row;
            }
            delete[] lbl_8035AF28;
            lbl_8035AF28 = 0;
        }
        FREETBL(lbl_8035AF30, m->n60)
        FREETBL(lbl_8035AF2C, m->n62)
        for (i = 0; i < m->n64; i++) {
            fn_801AB928(m->arr40[i], m->ctx, m->arr76[i], m->f48, a, m->f8);
        }
        FREETBL(m->arr76, m->n64)
        for (i = 0; i < m->n56; i++) fn_801C0C80(m->arr24[i]);
        for (i = 0; i < m->n56; i++) fn_801C0CF8(m->arr24[i]);
#undef i
    }
}
#pragma pop
}
