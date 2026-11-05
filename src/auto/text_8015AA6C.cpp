#include "common.h"

extern "C" {
struct FObj { u32 pos; u8 pad[12]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void seek(u32); };
struct C80215414 { u32 a; FObj *file; C80215414(); ~C80215414(); };
struct Rq { virtual void v0(); virtual void v1(); virtual s32 wait(); };
struct H1 { u8 d[16]; };
struct H2 { char name[8]; u32 bufSize; u16 nRefs; u16 h66; u32 refOff; u32 objOff; u32 dataSize; u32 dataOff; };
struct Ref { char key[8]; char grp[8]; };
struct Key8 { u8 d[8]; };
struct X { u8 pad[120]; u8 a120[24]; u8 b144[24]; };
struct Res { u8 pad[20]; u8 refs[4]; void **ptrs; u32 nObj; u8 pad2[12]; u8 *objs; u8 *data; u32 dataSize; };
extern "C" {
extern char lbl_803645B8[4];
extern char lbl_803645BC[6];
extern void *lbl_8035A9F4;
extern void *lbl_8035ABD8;
s32 fn_80215284(C80215414 *, char *, char *, s32);
void fn_80060E30(s32, const char *, ...);
s32 fn_80215154(C80215414 *, void *, u32, s32);
s32 fn_802151F4(C80215414 *, void *, u32, s32, Rq **);
void fn_80215110(C80215414 *, Rq *);
void fn_80215230(C80215414 *);
void fn_8012D6D8(Res *, X *, u16, char *);
void fn_8013EBAC(u8 *, X *, u16);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void fn_80179250(u8 *, X *, Res *, u8 **, u8 **);
void *memcpy(void *, const void *, u32);
void fn_800F87F0(Res *, Key8 *, u8 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
static inline char *nz(char *s) { if (s[0] == 0) return 0; return s; }
static inline void *findC(X *x, char *grp, void *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(x->a120, key);
    }
    return fn_800F9788(x->b144, grp, key);
}
static inline s32 rd(C80215414 *f, void *buf, u32 n, Rq *&rq) {
    s32 e = fn_802151F4(f, buf, n, 0, &rq);
    if (e == 7) {
        e = rq->wait();
        fn_80215110(f, rq);
    }
    return e;
}
extern "C" {
void fn_8015AA6C(Res *res, X *x, char *path) {
    Rq *rq;
    u8 *op;
    u8 *dp;
    C80215414 f;
    Key8 k;
    H1 h1;
    H2 h2;
    s32 e;
    u8 *buf;
    u32 sz;
    if ((e = fn_80215284(&f, path, lbl_803645B8, 2)) != 0) fn_80060E30(e, lbl_803645BC, path, lbl_803645B8);
    if ((e = fn_80215154(&f, &h1, 16, 0)) != 0) fn_80060E30(e, lbl_803645BC, path, lbl_803645B8);
    if ((e = fn_80215154(&f, &h2, 32, 0)) != 0) fn_80060E30(e, lbl_803645BC, path, lbl_803645B8);
    f.file->seek((f.file->pos + 3) & ~3);
    sz = h2.bufSize;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    buf = new u8[sz];
    fn_800F7E98();
    if (buf == 0) fn_800604C4(-4, 0, 0, 0);
    if ((e = rd(&f, buf, sz, rq)) != 0) fn_80060E30(e, lbl_803645BC, path, lbl_803645B8);
    res->dataSize = h2.dataSize;
    if (lbl_8035ABD8 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ABD8);
    res->data = new u8[res->dataSize];
    fn_800F7E98();
    if (res->data == 0) fn_800604C4(-4, 0, 0, 0);
    if ((e = rd(&f, res->data, res->dataSize, rq)) != 0) fn_80060E30(e, lbl_803645BC, path, lbl_803645B8);
    fn_8012D6D8(res, x, h2.h66, nz(h2.name));
    {
        Ref *r = (Ref *)(buf + h2.refOff);
        u32 i;
        fn_8013EBAC(res->refs, x, h2.nRefs);
        for (i = 0; i < h2.nRefs; r++, i++) res->ptrs[i] = findC(x, r->grp, r);
    }
    op = buf + h2.objOff;
    dp = res->data + h2.dataOff;
    {
        u32 i;
        for (i = 0; i < res->nObj; i++) {
            fn_80179250(res->objs + i * 236, x, res, &op, &dp);
            memcpy(&k, res->objs + i * 236, 8);
            fn_800F87F0(res, &k, res->objs + i * 236);
        }
    }
    delete[] buf;
    fn_80215230(&f);
}
}
}
