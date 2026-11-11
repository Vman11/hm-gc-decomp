#include "common.h"

extern "C" {

struct OV { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *s5(s32); };
struct OQ { u8 pad[12]; u32 f12; };
struct M { u8 pad[192]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual u8 a5(void *); virtual u32 a6(); };
struct G { u8 c[4]; u32 n; u8 pad[12]; };
struct T { u8 pad[740]; G g[37]; u8 pad1480[4]; u32 a1484[31]; };
struct H { u8 pad[12]; u8 *h; };
// pool-order helper: the strings below are this TU's pooled .rodata (lbl_80294E10, owned by text_8003D130)
void zzpool(void (*f)(const char *)) { f("DIFFCLTY"); f("LvSprFnd"); f("LvSprTtl"); f("DETHCERT"); f("SOUNDVOL"); f("MUSICVOL"); f("mGemFlag"); f("NUMCARDS"); f("ZEKERSHP"); f("ZEKELIVE"); }
extern char lbl_80357740[];
extern void *lbl_8035A9F4;
extern M *lbl_8035B684;
extern H *lbl_8035B460;
extern char lbl_8035C1D8[8], lbl_8035C1E4[8], lbl_8035C1EC[8], lbl_8035C1F4[8], lbl_8035C200[8], lbl_8035C20C[8], lbl_8035C214[8], lbl_8035C21C[8];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);
void fn_800F6FBC(void *, void *);
void *fn_800F85F0(G *, u32);
void fn_800F803C(G *, u32, void *);
void *fn_80207198(void *, const char *, int);
static inline void SumA(T *t, u32 *s) { u32 k; *s = 0; for (k = 0; k < 31; k++) *s += t->a1484[k]; }
static inline u32 *SumB(T *t, u32 *s) { u32 k; for (k = 0; k < 31; k++) *s += t->a1484[k]; return s; }
static inline void Put(u8 **b, s32 *p, u8 v) { (*b)[*p] = v; (*p)++; }
#pragma push
#pragma opt_lifetimes off
void fn_8003D518(T *t, u8 **pbuf, s32 *pos) {
    u32 sum;
    u32 v8;
    u8 k24[8];
    u8 k16[8];
    u32 j, i;
    T *tt;
    *pos = 0;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    *pbuf = (u8 *)__nwa__FUl(8191);
    fn_800F7E98();
    if (*pbuf == 0) fn_800604C4(-4, 0, 0, 0);
    memset(*pbuf, 0, 8191);
    (*pbuf)[(*pos)++] = 3;
    (*pbuf)[(*pos)++] = 0;
    fn_800F6FBC(lbl_80357740, k24);
    (*pbuf)[*pos] = lbl_8035B684->a5(k24);
    (*pos)++;
    sum = 0; for (j = 0; j < 31; j++) sum += t->a1484[j];
    memcpy(*pbuf + *pos, &sum, 4);
    *pos += 4;
    for (i = 0; i < lbl_8035B684->a6(); i++) {
        for (j = 0; j < t->g[i].n; j++) {
            void *e = fn_800F85F0(&t->g[i], j);
            if (e != 0) {
                (*pbuf)[*pos] = i;
                (*pos)++;
                fn_800F803C(&t->g[i], j, k16);
                memcpy(*pbuf + *pos, k16, 8);
                *pos += 8;
                memcpy(*pbuf + *pos, e, 4);
                *pos += 4;
            }
        }
    }
    (*pbuf)[(*pos)++] = 3;
    v8 = ((OQ *)fn_80207198(lbl_8035B460->h + 992, "DETHCERT", 0))->f12;
    memcpy(*pbuf + *pos, &v8, 4);
    *pos += 4;
    (*pbuf)[(*pos)++] = 1;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1D8, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "SOUNDVOL", 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "MUSICVOL", 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1E4, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1EC, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "mGemFlag", 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "NUMCARDS", 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1F4, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C200, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "DIFFCLTY", 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C20C, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C214, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C21C, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "ZEKERSHP", 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, "ZEKELIVE", 0))->s5(0), 4);
    *pos += 4;
    (*pbuf)[(*pos)++] = 2;
}
#pragma pop


} /* extern "C" */
