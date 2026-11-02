// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct W;
struct L {
    virtual s32 isKind(s32);
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual s32 check(W *);
};
struct Node { L *obj; s32 enabled; Node *next; };
struct WV {
    u8 pad[104]; void *f104; u32 f108; void *p112; u8 pad1[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(s32); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(W *);
    virtual void v70(); virtual void v71(); virtual void v72(s32); virtual void v73(s32);
};
struct Ent { u8 pad[4]; s32 on; u8 pad2[4]; };
struct P464 { u8 pad[12]; s32 f12; };
struct P468 { u8 pad[12]; u32 *p12; };
struct PV { u8 pad[52]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void f(s32, void *); };
struct W : WV {
    u8 padw[4]; Node *list; u8 pad2[144]; WV *p284; u8 pad3[36]; u32 type; u8 pad4[40]; s32 f368; s32 f372; u8 pad5[8]; u32 f384; u32 sel; u32 n; u8 pad6[44]; WV **items; Ent *ents; u8 pad7[16]; P464 *p464; P468 *p468;
};
extern "C" {
void fn_801D95E8(W *, u32, s32);
void fn_801B4654(W *);
void fn_801B3EB0(W *);
}
static inline u8 isItem(WV *x) {
    u8 r = 0;
    u32 t = (u16)((W *)x)->type;
    if (t == 8 || t == 4 || t == 32 || t == 128 || t == 512) r = 1;
    return r;
}
static inline s32 enabled(W *w, s32 i) {
    if (w->items) return isItem(w->items[i]);
    return w->ents[i].on;
}
static inline void notif(W *w) { Node *n; for (n = w->list; n; n = n->next) { if (n->obj->isKind(7) && n->enabled) n->obj->check(w); } }
static inline void clrE(W *w) { u32 i = 0; for (; i < w->n; i++) { if (enabled(w, i)) w->ents[i].on = 0; } }
static inline void desel(W *w) {
    u32 i;
    if (w->ents) {
        for (i = 0; i < w->n; i++) if (enabled(w, i)) w->ents[i].on = 0;
    } else if (w->items) {
        for (i = 0; i < w->n; i++) if (enabled(w, i)) w->items[i]->v73(1);
    }
}
extern "C" {
s32 fn_801B63C0(W *w, u32 k, s32 c) {
    switch ((s32)w->type) {
    case 16:
        fn_801D95E8(w, k, c);
        goto ret;
    case 32:
        if (!((w->f108 >> 1) & 1)) return 1;
        if (!(w->f108 & 1)) w->v20(1);
        if (k & 3) {
            if (w->sel < w->n - 1) {
                w->sel++;
                fn_801B4654(w);
                fn_801B3EB0(w);
            }
        } else if (w->sel < w->n - 1) {
            w->sel++;
            w->f384 = w->sel;
            desel(w);
            w->p464->f12 = 1;
            *w->p468->p12 = w->sel;
            if (w->ents) w->ents[w->sel].on = 1;
            else if (w->items) w->items[w->sel]->v72(1);
            if (w->f368) {
                if (w->p284) w->p284->v69(w);
            } else {
                w->f372 = 1;
            }
            notif(w);
            fn_801B3EB0(w);
        }
        break;
    }
    if (c && w->p112) ((PV *)w->p112)->f(2, w->f104);
ret:
    return 1;
}
}

} /* extern "C" */
