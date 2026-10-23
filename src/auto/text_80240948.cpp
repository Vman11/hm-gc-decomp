// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct O80240948 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14(f32 t);
};
struct Q80240948 {
    u8 pad[20];
    s32 f20;
};
struct M80240948 {
    u8 pad[256];
    Q80240948 *f256;
};
struct P80240948 {
    u8 pad[128];
    s32 count;
    u8 pad2[192 - 132];
    u32 *objs;
    void **names;
    u8 pad3[224 - 200];
    u8 *f224;
};
extern "C" {
extern char lbl_80366190[6];
extern char lbl_802A8E10[9];
extern u8 *lbl_8035B308;
extern f32 lbl_8036613C;
void fn_800F6FBC(void *obj, char *buf);
s32 fn_800F6F00(char *a, char *b);
void *fn_80247AE4(Q80240948 *q, void *a);
void fn_802635C0(void *o, void *x);
void fn_80263528(void *o, void *y);

static inline Q80240948 *GetQ80240948(M80240948 *m) {
    Q80240948 *q = 0;
    if (m) q = m->f256;
    return q;
}
static inline void *Find80240948(Q80240948 *q, void *a) {
    void *r = 0;
    if (q->f20) r = fn_80247AE4(q, a);
    return r;
}

void fn_80240948(P80240948 *p, void *a, void *b) {
    O80240948 *o;
    s32 i;
    char buf[16];
    for (i = 0; i < p->count; i++) {
        fn_800F6FBC(p->names[i], buf);
        if (fn_800F6F00(buf, lbl_80366190) == 0 || fn_800F6F00(buf, lbl_802A8E10) == 0) {
            u32 v = p->objs[i];
            if (v != 0) {
                M80240948 *m = *(M80240948 **)(*(u8 **)(*(u8 **)(lbl_8035B308 + 72) + 600) + 524);
                if (m != 0 && m->f256 != 0) {
                    void *r;
                    o = (O80240948 *)v;
                    r = Find80240948(GetQ80240948(m), a);
                    if (r != 0) {
                        fn_802635C0(o, r);
                        fn_80263528(o, b);
                        o->v11();
                        o->v14(lbl_8036613C);
                        *(s32 *)(p->f224 + 576) = 1;
                    }
                }
            }
        }
    }
}

} /* extern "C" */
