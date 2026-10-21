// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803647F0;
extern volatile f32 lbl_803647F4;
typedef struct { u8 pad[40]; f32 f; u8 pad2[4]; u32 flags; u8 pad3[8]; } Item_8017A028;
typedef struct { void *x0; u32 count; Item_8017A028 *items; u8 sub[4]; } S_8017A028;
void fn_8017AF08(Item_8017A028 *it, void *x);
void fn_80102A6C(void *sub);
void fn_8017AE14(Item_8017A028 *it, void *sub);
void fn_80102730(void *sub, void *x);

void fn_8017A028(S_8017A028 *p) {
    Item_8017A028 *first;
    Item_8017A028 *end;
    u32 n;
    Item_8017A028 *it;
    if (p->x0 == 0) return;
    if (p->count == 1) {
        fn_8017AF08(p->items, p->x0);
        return;
    }
    it = p->items;
    end = it + p->count;
    n = 0;
    first = 0;
    for (; it < end; it++) {
        if ((it->flags & 1) && !(it->f >= lbl_803647F0 && it->f <= lbl_803647F4)) {
            n++;
            if (first != 0) break;
            first = it;
        }
    }
    if (n == 0) return;
    if (n == 1) {
        fn_8017AF08(first, p->x0);
        return;
    }
    fn_80102A6C(p->sub);
    for (; first < end; first++) {
        if (!(first->f >= lbl_803647F0 && first->f <= lbl_803647F4)) {
            fn_8017AE14(first, p->sub);
        }
    }
    fn_80102730(p->sub, p->x0);
}

} /* extern "C" */
