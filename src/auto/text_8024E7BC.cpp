// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V5 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *v5(); };
struct V27 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void *v27(); };
struct Q { u8 pad[0x6b8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual s32 has(char *); };
struct G { u8 pad[0x2c44]; V27 *o2c44; u8 pad2[4]; void *k2c4c; u8 pad3[0x2f44 - 0x2c50]; V5 *o2f44; u8 pad4[8]; void *k2f50; u8 pad5[0x3040 - 0x2f54]; u8 s3040[4]; };
struct GG { u8 pad[0xc]; G *g; };
extern GG *lbl_8035B460;
struct L { void *f0; };
extern L *lbl_8035B418;
extern char lbl_80366460[8], lbl_80366468[8], lbl_80366470[4], lbl_80366474[8], lbl_8036647C[8];
void fn_800E8F6C(char *, const char *, ...);
void fn_8012ACAC(void *, void *, char *, s32, s32);
void fn_8018182C(void *, void *, char *, s32);
char *fn_8023C824(L *, void *);
void fn_801FAB7C(void *, void *, char *, s32);
void fn_801E4CD0(void *, void *, char *, s32);
#define F(T, o) (*(T *)((u8 *)p + (o)))

void fn_8024E7BC(u8 *p, void *x, Q *q, char *name, s32 flag, char *name2) {
    char buf[64];
    char tmp[12];
    if (!flag) {
        fn_800E8F6C(buf, lbl_80366460, name);
        if (q->has(buf) == 0) {
            G *g = lbl_8035B460->g;
            void *k = g->k2c4c;
            if (flag) {
                F(void *, 0xa0) = g->o2c44->v27();
                fn_8012ACAC(F(void *, 0xa0), k, name, 2, 0);
            } else {
                F(void *, 0x148) = g->o2c44->v27();
                fn_8012ACAC(F(void *, 0x148), k, name, 0, 0);
            }
        }
    }
    if (flag && name2) {
        fn_800E8F6C(buf, lbl_80366460, name2);
        if (q->has(buf) == 0) {
            G *g = lbl_8035B460->g;
            void *k = g->k2c4c;
            F(void *, 0x9c) = g->o2c44->v27();
            fn_8012ACAC(F(void *, 0x9c), k, name2, 0, 0);
        }
    }
    if (!flag) {
        fn_800E8F6C(buf, lbl_80366468, name);
        if (q->has(buf) == 0) {
            void *b = lbl_8035B460->g->s3040;
            if (flag) fn_8018182C(p + 0xa4, b, name, 0);
            else fn_8018182C(p + 0x14c, b, name, 0);
        }
    }
    if (!flag) {
        fn_800E8F6C(tmp, lbl_80366470, fn_8023C824(lbl_8035B418, lbl_8035B418->f0));
        fn_800E8F6C(buf, lbl_80366468, tmp);
        if (q->has(buf) == 0) {
            fn_8018182C(p + 0x1f0, lbl_8035B460->g->s3040, tmp, 0);
        }
    }
    if (!flag) {
        fn_800E8F6C(buf, lbl_80366474, name);
        if (q->has(buf) == 0) {
            G *g = lbl_8035B460->g;
            void *k = g->k2f50;
            V5 *o = g->o2f44;
            if (flag) {
                F(void *, 0x144) = o->v5();
                fn_801FAB7C(F(void *, 0x144), k, name, 0);
            } else {
                F(void *, 0x1ec) = o->v5();
                fn_801FAB7C(F(void *, 0x1ec), k, name, 0);
            }
        }
    }
    fn_800E8F6C(buf, lbl_8036647C, name);
    if (q->has(buf) == 0) {
        if (flag) fn_801E4CD0(p + 0x11c, x, name, 0);
        else fn_801E4CD0(p + 0x1c4, x, name, 0);
    }
}

} /* extern "C" */
