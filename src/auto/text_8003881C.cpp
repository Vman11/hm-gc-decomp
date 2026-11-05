#include "common.h"
struct Ev { u8 pad[12]; s32 type; s32 val; u8 pad2[8]; Ev() { val = 1; } };
struct XV { u8 pad[128];
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
  virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
  virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void show(s32, s32); };
struct Mgr { u8 pad[752]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void focus(XV *); u8 pad2[40]; s32 f796; };
struct U2 { u8 pad[112]; u32 f112; };
struct U { u8 pad[108]; u32 f108; u8 pad2[196]; U2 *p308; };
struct T { u8 pad[12]; U *u; };
struct G { u8 pad[4]; T *t; };
struct W { u8 pad[16]; s32 f16; s32 f20; s32 f24; s32 f28; s32 f32; u32 f36; u8 pad2[20]; T *t60; };
struct Msg { u8 pad[12]; s32 type; };
struct Top { u8 pad[13232]; void *db; };
extern "C" {
extern Mgr *lbl_8035B65C;
extern G *lbl_8035B7E4;
extern Top *lbl_8035A1DC;
extern char lbl_8035BFEC[4];
extern char lbl_8035BFF0[7];
extern char lbl_8035BFF8[6];
extern char lbl_8035C000[5];
void fn_800303A8(char *);
void fn_800F6E88(char *, char *);
XV *fn_801AA960(void *, char *, char *);
void fn_801C30E8(T *, Ev *);
}
static inline XV *find0(W *w, char *key, char *name) {
    XV *x = 0;
    if (name != 0 && w->f32 != 0) x = fn_801AA960(lbl_8035A1DC->db, key, name);
    return x;
}
static inline XV *find2(XV *x, char *key, char *name) {
    if (name != 0) x = fn_801AA960(lbl_8035A1DC->db, key, name);
    return x;
}
static inline XV *find(char *key, char *name) {
    XV *x = 0;
    if (name) x = fn_801AA960(lbl_8035A1DC->db, key, name);
    return x;
}
static inline void show(XV *x) {
    if (lbl_8035B65C->f796) lbl_8035B65C->focus(x);
    x->show(0, 1);
}
static inline void send(T *t, Ev *e) {
    if (t) fn_801C30E8(t, e);
}
extern "C" {
void fn_8003881C(W *w, Msg *m) {
    Ev e1;
    T *t;
    char name[8];
    XV *x;
    if (w->t60 == 0) t = lbl_8035B7E4->t;
    else t = w->t60;
    if (lbl_8035B65C) fn_800303A8(name);
    else fn_800F6E88(name, lbl_8035BFEC);
    x = 0;
    if (name != 0 && w->f32 != 0) x = fn_801AA960(lbl_8035A1DC->db, lbl_8035BFF0, name);
    if (x) {
        lbl_8035B65C->focus(x);
        x->show(0, 1);
        return;
    }
    switch (m->type) {
    case 118:
        w->f16 = 1;
        break;
    case 120:
        w->f24 = 1;
        if (w->f32) {
            if (name != 0) x = fn_801AA960(lbl_8035A1DC->db, lbl_8035BFF8, name);
            if (x) {
                show(x);
            } else {
                e1.type = 57;
                send(t, &e1);
            }
        }
        break;
    case 116:
        w->f20 = 1;
        if (w->f32) {
            e1.type = 57;
            send(t, &e1);
        }
        break;
    case 117: {
        U *u = t->u;
        if (u->p308 && u->p308->f112 == w->f36 && !(u->f108 & 1)) {
            w->f20 = 1;
            e1.type = 57;
            send(t, &e1);
        } else {
            w->f28 = 1;
            if (w->f32) {
                if (name != 0) x = fn_801AA960(lbl_8035A1DC->db, lbl_8035C000, name);
                if (x) show(x);
            }
        }
        break;
    }
    case 121: {
        Ev e;
        e.type = 66;
        send(t, &e);
        break;
    }
    case 122: {
        Ev e;
        e.type = 67;
        send(t, &e);
        break;
    }
    case 123: {
        Ev e;
        e.type = 69;
        send(t, &e);
        break;
    }
    case 124: {
        Ev e;
        e.type = 70;
        send(t, &e);
        break;
    }
    }
}
}
