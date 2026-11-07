#include "common.h"
#include <string.h>

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern "C" {
extern void *lbl_8035B308;
extern f32 lbl_8036613C;
void fn_800F6E40(char *, char *);
void fn_8022CC44(void *, void *, s32, f32, bool, s32, s32, f32);
void *fn_8022D694(void *);
int stricmp(const char *, const char *);
}

struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual bool vf(s32);
};

static inline void Find(O *o, char *tmp, char *key, f32 f, s32 b, s32 c, f32 *pf, s32 flag) {
    s32 off;
    s32 i;
    for (i = 0; i < F(o, s32, 124); i++) {
        strcpy(tmp, *(char **)(F(o, u8 *, 200) + i * 12));
        if (stricmp(tmp, key) == 0) {
            F(o, s32, 220) = i;
            F(F(o, void *, 224), f32, 416) = lbl_8036613C;
            if (pf && !flag) {
                void *e = F(o, void **, 208)[i];
                fn_8022CC44(F(o, void *, 224), e, 1, f, o->vf(i), b, c, *pf);
            } else {
                void *e = F(o, void **, 208)[i];
                fn_8022CC44(F(o, void *, 224), e, 1, f, o->vf(i), b, c, lbl_8036613C);
            }
            if (flag) {
                u16 h = F(F(o, void **, 208)[i], u16, 52);
                void *z = fn_8022D694(F(o, void *, 224));
                F(z, f32, 4) = (f32)(h - 1);
            }
            return;
        }
    }
}

extern "C" void fn_802413D8(O *o, char *name, f32 f, s32 b, s32 c, f32 *pf) {
    char key[12];
    char tmp[12];
    s32 flag;
    flag = F(F(F(lbl_8035B308, void *, 72), void *, 600), s32, 768);
    if (flag) {
        b = 1;
        f = lbl_8036613C;
    }
    fn_800F6E40(key, name);
    Find(o, tmp, key, f, b, c, pf, flag);
}
