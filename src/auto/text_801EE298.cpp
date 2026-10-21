// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Key { u8 d[8]; };
void fn_800FB064(void *, void *);
u32 fn_800F9398(void *, void *);
u32 fn_800F9788(void *, char *, void *);
void fn_801EF720(u8 *, void *);

void fn_801EE298(u8 *p, void *r, s32 id) {
    Key key2;
    Key key1;
    char grp[8];
    u8 *q;
    u32 v;
    switch (id) {
    case 137:
        fn_800FB064(r, &key2);
        fn_800FB064(r, grp);
        q = *(u8 **)(*(u8 **)(p + 8) + 228);
        if ((char *)grp == 0 || grp[0] == 0) {
            v = fn_800F9398(q + 132, &key2);
        } else {
            v = fn_800F9788(q + 156, grp, &key2);
        }
        *(u32 *)(p + 52) = v;
        break;
    case 138:
        fn_800FB064(r, &key1);
        fn_800FB064(r, grp);
        q = *(u8 **)(*(u8 **)(p + 8) + 228);
        if ((char *)grp == 0 || grp[0] == 0) {
            v = fn_800F9398(q + 72, &key1);
        } else {
            v = fn_800F9788(q + 96, grp, &key1);
        }
        *(u32 *)(p + 48) = 0;
        *(u32 *)(p + 44) = 0;
        *(u32 *)(p + 44) = v;
        break;
    case 170:
        *(u32 *)(p + 12) = 31;
        break;
    case 173:
        *(u32 *)(p + 12) = 32;
        break;
    default:
        fn_801EF720(p, r);
        break;
    }
}

} /* extern "C" */
