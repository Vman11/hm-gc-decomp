// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct E8018B8F8 {
    u8 pad[116];
    u32 f116;
    u8 pad2[12];
    u32 f132;
    u8 pad3[12];
    E8018B8F8 *next;
};

struct A8018B8F8 {
    u8 pad[20];
    u32 count;
    u32 flags;
    u8 pad2[24];
    E8018B8F8 *arr;
    u8 pad3[4];
    E8018B8F8 *head;
};

struct V8018B8F8 {
    u8 pad[8];
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
    virtual void v10(E8018B8F8 *e, s32 n);
};
extern "C" {

extern u32 lbl_80364A68;
extern s32 lbl_8035AE8C;

void fn_8018B8F8(A8018B8F8 *a, V8018B8F8 *v) {
    u32 old;
    u32 cnt;
    E8018B8F8 **link;
    E8018B8F8 *e;
    E8018B8F8 *end;
    s32 n;
    cnt = 0;
    link = &a->head;
    e = a->arr;
    end = e + a->count;
    for (; e < end; e++) {
        n = lbl_8035AE8C++;
        old = e->f132;
        v->v10(e, n);
        if (e->f132 != 0 && old == 0) {
            *link = e;
            link = &e->next;
            e->next = 0;
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
