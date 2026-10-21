#include "common.h"

extern "C" {

extern u32 lbl_8035B4C0;

struct C80242D38 {
    u8 pad0[0xc];
    char name[8];
    u32 count;
    void **table;
    u32 f1c;
    C80242D38 *f20;
    C80242D38 *f24;
    u32 f28;
};

void fn_800604C4(s32, s32, s32, s32);
s32 fn_800F6CD0(u32, char *);
void fn_800F6E88(char *, u32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void *fn_802288FC(u32, u32);
void fn_80243440(C80242D38 *, u32, u32);

void fn_80242D38(C80242D38 *p, u32 a, u32 b) {
    u32 i;
    void *h;
    C80242D38 *n;

    p->f28 = 1;
    if (p->name[0] == 0 || fn_800F6CD0(a, p->name) != 0) {
        if (p->table == 0) {
            if (lbl_8035B4C0 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035B4C0);
            p->table = new void *[8];
            fn_800F7E98();
            if (p->table == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
            p->count = 8;
            fn_800F6E88(p->name, a);
            for (i = 0; i < p->count; i++) {
                p->table[i] = 0;
            }
            fn_80242D38(p, a, b);
        }
        else {
            h = fn_802288FC(p->f1c, b);
            for (n = p; n != 0; n = n->f20) {
                for (i = 0; i < n->count; i++) {
                    if (p->table[i] == h) {
                        return;
                    }
                }
            }
            for (i = 0; i < p->count; i++) {
                if (p->table[i] == 0) {
                    p->table[i] = h;
                    return;
                }
            }
            if (p->f20 == 0) {
                fn_80243440(p, a, 8);
            }
            fn_80242D38(p->f20, a, b);
        }
    }
    else {
        if (p->f24 == 0) {
            fn_80243440(p, a, 8);
        }
        fn_80242D38(p->f24, a, b);
    }
}

} /* extern "C" */
