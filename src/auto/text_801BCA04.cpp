// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Obj_801BCA04 {
    virtual s32 v0(s32);
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42();
    virtual s32 v43(void *, void *);
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50();
    virtual void v51(void *, s32);
};
struct Ent_801BCA04 {
    u8 pad[128];
    virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(); virtual void w4();
    virtual void w5(); virtual void w6(); virtual void w7(); virtual void w8(); virtual void w9();
    virtual void w10(); virtual void w11(); virtual void w12(); virtual void w13(); virtual void w14();
    virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19();
    virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24();
    virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29();
    virtual void w30(); virtual void w31(); virtual void w32(); virtual void w33(); virtual void w34();
    virtual void w35(); virtual void w36(); virtual void w37(); virtual void w38(); virtual void w39();
    virtual void w40(); virtual void w41(); virtual void w42(); virtual void w43(); virtual void w44();
    virtual void w45(); virtual void w46(); virtual void w47(); virtual void w48(); virtual void w49();
    virtual void w50(); virtual void w51(); virtual void w52(); virtual void w53(); virtual void w54();
    virtual void w55(); virtual void w56(); virtual void w57(); virtual void w58(); virtual void w59();
    virtual void w60(); virtual void w61(); virtual void w62(); virtual void w63(); virtual void w64();
    virtual void w65(); virtual void w66(); virtual void w67(); virtual void w68();
    virtual void w69(void *);
    virtual void w70(); virtual void w71(); virtual void w72(); virtual void w73(); virtual void w74();
    virtual void w75(); virtual void w76(); virtual void w77(); virtual void w78();
    virtual void w79();
};
extern "C" {

typedef struct Node_801BCA04 { Obj_801BCA04 *obj; s32 active; struct Node_801BCA04 *next; } Node_801BCA04;
typedef struct S360_801BCA04 { u8 pad[12]; s32 f12; } S360_801BCA04;
typedef struct Self_801BCA04 {
    u8 pad0[108]; u32 f108; u8 pad112[24]; Node_801BCA04 *f136; u8 pad140[144]; Ent_801BCA04 *f284;
    u8 pad288[68]; Ent_801BCA04 **f356; S360_801BCA04 *f360; s32 f364;
} Self_801BCA04;

static inline s32 check_801BCA04(Self_801BCA04 *self, Ent_801BCA04 *arg) {
    Node_801BCA04 *n;
    s32 found;
    found = 0;
    for (n = self->f136; n != 0; n = n->next) {
        if (n->active != 0) {
            if (n->obj->v43(self, arg) == 0) found = 1;
        }
    }
    return found;
}

s32 fn_801BCA04(Self_801BCA04 *self, Ent_801BCA04 *arg) {
    s32 i;
    Ent_801BCA04 *e;
    Node_801BCA04 *n2;
    if (check_801BCA04(self, arg)) return 0;
    if (!(self->f108 & 2)) return 0;
    for (i = 0; i < self->f364; i++) {
        e = self->f356[i];
        if (e != 0) {
            if (e != arg) {
                e->w79();
            } else {
                self->f360->f12 = i;
                for (n2 = self->f136; n2 != 0; n2 = n2->next) {
                    if (n2->obj->v0(13) != 0 && n2->active != 0) n2->obj->v51(self, i);
                }
                if (self->f284 != 0) self->f284->w69(self);
            }
        }
    }
    return 0;
}

} /* extern "C" */
