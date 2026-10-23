// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct R8022705C {
    u8 *x0;
} R8022705C;
typedef struct O8022705C {
    u8 pad0[12];
    R8022705C *x12;
} O8022705C;
typedef struct N8022705C {
    u8 pad0[8];
    O8022705C *x8;
    u8 pad12[4];
    struct N8022705C *x16;
} N8022705C;
typedef struct L8022705C {
    u8 pad0[24];
    N8022705C *x24;
} L8022705C;
typedef struct C8022705C {
    u8 pad0[72];
    L8022705C *x72;
} C8022705C;
typedef struct B8022705C {
    u8 pad0[156];
    C8022705C *x156;
} B8022705C;
typedef struct A8022705C {
    u8 pad0[72];
    B8022705C *x72;
} A8022705C;
typedef struct P8022705C {
    u8 pad0[140];
    u8 name[456];
    u32 *arr[10];
} P8022705C;
extern A8022705C *volatile lbl_8035B308;
void fn_800F6E88(char *dst, u8 *src);
u32 fn_800F6C28(char *s);
u32 *fn_800F8274(u8 *a, char *b);
void fn_80238CF4(P8022705C *p);

void fn_8022705C(P8022705C *p) {
    char buf[16];
    u32 n;
    s32 i;
    R8022705C *r;
    L8022705C *list;
    N8022705C *node;
    fn_800F6E88(buf, p->name);
    n = fn_800F6C28(buf);
    if (n < 7) {
        buf[n + 1] = 0;
    }
    for (i = 0; i < 10; i++) {
        r = 0;
        ((volatile char *)buf)[n] = '0' + i;
        list = lbl_8035B308->x72->x156->x72;
        if (list != 0) {
            for (node = list->x24; node != 0; node = node->x16) {
                if (node->x8 != 0) {
                    r = node->x8->x12;
                }
            }
        }
        if (r != 0 && r->x0 != 0) {
            p->arr[i] = fn_800F8274(r->x0 + 28, buf);
        }
    }
    fn_80238CF4(p);
}

} /* extern "C" */
