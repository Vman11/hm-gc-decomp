#include "common.h"

extern "C" {

typedef struct E80170798 {
    u16 flags;
    u16 f2;
    u8 pad[16];
} E80170798;
typedef struct K80170798 {
    u16 f0;
    u16 f2;
} K80170798;
typedef struct S80170798 {
    u8 pad[0xEC];
    E80170798 ents[12];
} S80170798;

s32 fn_80147A68(E80170798 *e, K80170798 *k);
s32 fn_80147800(E80170798 *e, K80170798 *k);
s32 fn_80147570(E80170798 *e, K80170798 *k);
u32 fn_80148018(void *e);
u32 fn_80147FD8(void *e);
void fn_801482DC(void *out, void *e);

void fn_80170798(S80170798 *p, K80170798 *k, void *out) {
    u32 i;
    u32 j;
    S80170798 *q;
    u16 f2;
    int found = 0;
    if (k->f0 & 0x3E0) {
        fn_801482DC(out, k);
        return;
    }
    if (k->f0 & 4) {
        for (i = 0; i < 12; i++) {
            if (fn_80147A68(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147570(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        found = 1;
    }
    if (found || (k->f0 & 1)) {
        for (i = 0; i < 12; i++) {
            if (fn_80147A68(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147800(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147570(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        {
        f2 = k->f2;
        q = p;
        for (j = 0; j < 12; q = (S80170798 *)((u8 *)q + 20), j++) {
            if ((q->ents[0].flags & 1) && q->ents[0].f2 >= f2 &&
                fn_80148018(&q->ents[0]) >= fn_80148018(k)) {
                fn_801482DC(out, &p->ents[j]);
                return;
            }
        }
        }
        for (i = 0; i < 12; i++) {
            if (p->ents[i].flags & 1) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        fn_801482DC(out, &p->ents[0]);
        return;
    }
    if (k->f0 & 2) {
        for (i = 0; i < 12; i++) {
            if (fn_80147A68(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147800(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147570(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (p->ents[i].flags & 2) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        fn_801482DC(out, &p->ents[0]);
        return;
    }
    if (k->f0 & 8) {
        for (i = 0; i < 12; i++) {
            if (fn_80147A68(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147800(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        for (i = 0; i < 12; i++) {
            if (fn_80147570(&p->ents[i], k)) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
        {
        f2 = k->f2;
        q = p;
        for (j = 0; j < 12; q = (S80170798 *)((u8 *)q + 20), j++) {
            if ((q->ents[0].flags & 8) && q->ents[0].f2 >= f2 &&
                fn_80147FD8(&q->ents[0]) >= fn_80147FD8(k)) {
                fn_801482DC(out, &p->ents[j]);
                return;
            }
        }
        }
        for (i = 0; i < 12; i++) {
            if (p->ents[i].flags & 8) {
                fn_801482DC(out, &p->ents[i]);
                return;
            }
        }
    }
    fn_801482DC(out, &p->ents[0]);
}

}
