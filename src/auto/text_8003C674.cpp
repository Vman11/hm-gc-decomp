#include "common.h"

extern "C" {

struct G { u8 p[192]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void fill(char *, int); virtual void v4(); virtual int find(void *); };
extern G *lbl_8035B684;
extern u8 lbl_8035C1D0;
struct E { u8 p[20]; };
struct O { u8 p[740]; E tbl[31]; u32 *pool[31]; u32 cnt[31]; };
u32 *fn_800F8274(E *, char *);
void fn_800F87F0(E *, char *, u32 *);
int fn_8003C674(O *o, char *name, u32 **out) {
    bool found;
    s32 t = lbl_8035B684->find(&lbl_8035C1D0);
    s32 idx;
    *out = 0;
    idx = t;
    if (t == -1) {
        char buf[16];
        lbl_8035B684->fill(buf, -1);
        idx = lbl_8035B684->find(buf);
    }
    E *e = &o->tbl[idx];
    *out = fn_800F8274(e, name);
    found = *out != 0;
    if (!*out) {
        *out = o->pool[idx] + o->cnt[idx];
        fn_800F87F0(e, name, *out);
        o->cnt[idx]++;
    }
    return found;
}

} /* extern "C" */
