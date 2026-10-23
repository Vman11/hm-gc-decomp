// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct C80243F5C {
    ~C80243F5C();
};
struct C80242C70 {
    u8 pad0[0xc];
    char name[8];
    u32 count;
    void **table;
    u32 f1c;
    C80243F5C *f20;
    C80242C70 *f24;
};
extern "C" {

s32 fn_800F6CD0(char *, char *);
void fn_800F6E88(char *, char *);
void fn_802439BC(C80243F5C *);
void fn_80243440(C80242C70 *, char *, s32);

#pragma auto_inline off
void fn_80242C70(C80242C70 *p, char *a) {
    if (p->name[0] == 0 || fn_800F6CD0(a, p->name) != 0) {
        if (p->table != 0) {
            delete[] p->table;
            p->table = 0;
        }
        if (p->f20 != 0) {
            fn_802439BC(p->f20);
            delete p->f20;
            p->f20 = 0;
        }
        fn_800F6E88(p->name, a);
    } else if (p->f24 == 0) {
        fn_80243440(p, a, 0);
    } else {
        fn_80242C70(p->f24, a);
    }
}
#pragma auto_inline reset

} /* extern "C" */
