// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V104_80236808 {
    u8 pad[104];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void release(int);
    virtual void v7(); virtual void v8(); virtual void v9();
    virtual void stop();
};
struct Item_80236808 { V104_80236808 *obj; };
struct V16_80236808 { u8 pad[16]; virtual void v0(); virtual void detach(); };
struct Mgr_80236808 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void remove(V16_80236808 *);
};
struct Sys2_80236808 { u8 pad[11332]; Mgr_80236808 *mgr; };
struct Sys_80236808 { u8 pad[12]; Sys2_80236808 *s; };
struct Ent_80236808 { u8 b; u8 pad[7]; };
struct Obj_80236808 {
    u32 f0;
    u32 cnt[10];
    Ent_80236808 e[10];
    u32 n;
    Item_80236808 ***items;
    void *f132;
    void *f136;
    V16_80236808 *f140;
};
extern "C" {
extern Sys_80236808 *lbl_8035B460;
extern u32 lbl_8035B39C;
void fn_800E1E88(void *, void *);
void __dt__9C8013ECE4Fv(void);
void fn_8023C754(void *);
void __dt__9C8023C7CCFv(void *, int);
}
void __dl__FPv(void *);
void __dla__FPv(void *);

static inline void freei(Obj_80236808 *o, u32 i) {
    for (; i < o->n; i++) {
        if (o->items[i] != NULL) {
                                u32 j; for (j = 0; j < o->cnt[i]; j++) {
                        if (o->items[i][j] != NULL) {
                            o->items[i][j]->obj->stop();
                            if (o->items[i][j]->obj != NULL) {
                                o->items[i][j]->obj->release(1);
                            }
                            __dl__FPv(o->items[i][j]);
                        }
                    }

            __dla__FPv(o->items[i]);
        }
    }
}
extern "C" Obj_80236808 *fn_80236808(Obj_80236808 *o, s16 del) {
    u32 i, j;
    if (o != NULL) {
        lbl_8035B39C = 0;
        if (o->f136 != NULL) {
            fn_800E1E88(o->f136, (void *)__dt__9C8013ECE4Fv);
        }
        if (o->f140 != NULL) {
            o->f140->detach();
            lbl_8035B460->s->mgr->remove(o->f140);
        }
        if (o->items != NULL) {
            freei(o, 0);
            __dla__FPv(o->items);
        }
        if (o->f132 != NULL) {
            fn_8023C754(o->f132);
            __dt__9C8023C7CCFv(o->f132, 1);
        }
        o->f0 = 0;
        o->n = 0;
        o->items = 0;
        o->cnt[0] = 0;
        o->e[0].b = 0;
        o->cnt[1] = 0;
        o->e[1].b = 0;
        o->cnt[2] = 0;
        o->e[2].b = 0;
        o->cnt[3] = 0;
        o->e[3].b = 0;
        o->cnt[4] = 0;
        o->e[4].b = 0;
        o->cnt[5] = 0;
        o->e[5].b = 0;
        o->cnt[6] = 0;
        o->e[6].b = 0;
        o->cnt[7] = 0;
        o->e[7].b = 0;
        o->cnt[8] = 0;
        o->e[8].b = 0;
        o->cnt[9] = 0;
        o->e[9].b = 0;
        o->f132 = 0;
        o->f136 = 0;
        o->f140 = 0;
        if (del > 0) {
            __dl__FPv(o);
        }
    }
    return o;
}

} /* extern "C" */
