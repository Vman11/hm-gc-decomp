// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8018FFC4 { u32 n; u8 data[60]; C8018FFC4(); };
typedef struct Arr8018EFC8 { u32 count; C8018FFC4 *items; } Arr8018EFC8;
typedef struct G8018EFC8 { u8 pad[0x18]; u32 f18; u32 f1C; } G8018EFC8;
extern G8018EFC8 *lbl_8035AE50;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8018FF64(u8 *, u8 *, u32);

static inline void CopyItems(Arr8018EFC8 *dst, Arr8018EFC8 *src) {
    u32 i;
    for (i = 0; i < dst->count; i++) {
        C8018FFC4 *s = &src->items[i];
        C8018FFC4 *d = &dst->items[i];
        d->n = s->n;
        fn_8018FF64(d->data, s->data, d->n);
    }
}

void fn_8018EFC8(Arr8018EFC8 *dst, Arr8018EFC8 *src) {
    if (dst->items != 0) {
        if (dst->items != 0) delete[] dst->items;
        dst->count = 0;
        dst->items = 0;
    }
    dst->count = src->count;
    if (lbl_8035AE50->f18 >= 5) {
        lbl_8035AE50->f1C = lbl_8035AE50->f18;
    } else {
        lbl_8035AE50->f1C = 5;
    }
    if (lbl_8035AE50 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AE50);
    dst->items = new C8018FFC4[dst->count];
    fn_800F7E98();
    if (dst->items == 0) fn_800604C4(-4, 0, 0, 0);
    lbl_8035AE50->f1C = lbl_8035AE50->f18;
    CopyItems(dst, src);
}

} /* extern "C" */
