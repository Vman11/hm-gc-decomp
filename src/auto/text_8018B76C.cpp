// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct E8018B76C {
    u8 pad[116];
    u32 f116;
    u8 pad2[12];
    u32 f132;
    u8 pad3[12];
    E8018B76C *next;
};

struct A8018B76C {
    u8 pad[20];
    u32 count;
    u32 flags;
    u8 pad2[24];
    E8018B76C *arr;
    u8 pad3[4];
    E8018B76C *head;
};

struct V8018B76C {
    u8 pad[104];
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
    virtual void v12(E8018B76C *e, void *x);
};
extern "C" {

extern u32 lbl_80364A68;

void fn_8018B76C(A8018B76C *a, V8018B76C *v, void *x) {
    u32 old;
    u32 cnt;
    E8018B76C **link;
    E8018B76C *e;
    E8018B76C *end;
    link = &a->head;
    cnt = 0;
    e = a->arr;
    end = e + a->count;
    for (; e < end; e++) {
        old = e->f132;
        v->v12(e, x);
        if (e->f132 != 0 && old == 0) {
            *link = e;
            link = &e->next;
        }
        if (e->f132 >= e->f116) {
            cnt++;
        }
    }
    if (cnt == a->count) {
        a->flags |= lbl_80364A68;
    }
}

} /* extern "C" */
