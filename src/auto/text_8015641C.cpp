// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Entry8015641C {
    u32 key;
    u32 a, b, c, d, e, f;
} Entry8015641C;

extern Entry8015641C lbl_802A0338[12];
extern Entry8015641C lbl_802A0488[3];
void fn_801482C0(void *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void fn_80148118(void *p);

s32 fn_8015641C(u32 key, void *p) {
    Entry8015641C *e;
    for (e = lbl_802A0338; e < lbl_802A0338 + 12; e++) {
        if (e->key == key) {
            fn_801482C0(p, e->a, e->b, e->c, e->d, e->e, e->f);
            return 1;
        }
    }
    for (e = lbl_802A0488; e < lbl_802A0488 + 3; e++) {
        if (e->key == key) {
            fn_801482C0(p, e->a, e->b, e->c, e->d, e->e, e->f);
            return 1;
        }
    }
    fn_80148118(p);
    return 0;
}

} /* extern "C" */
