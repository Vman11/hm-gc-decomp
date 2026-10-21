// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *stream, char *out);
void *fn_800F9398(u8 *tbl, char *name);
void *fn_800F9788(u8 *tbl, char *sub, char *name);
void *fn_8019565C(void *x);
void fn_801EF720(u8 *p, void *stream, s32 id);

static inline void *lookupA(u8 *t, char *name, char *sub) {
    if (sub == 0 || sub[0] == 0) {
        return fn_800F9398(t + 144, name);
    } else {
        return fn_800F9788(t + 168, sub, name);
    }
}

static inline void *lookupB(u8 *t, char *name, char *sub) {
    if (sub == 0 || sub[0] == 0) {
        return fn_800F9398(t + 360, name);
    } else {
        return fn_800F9788(t + 384, sub, name);
    }
}

void fn_801E7F08(u8 *p, void *stream, s32 id) {
    char nameA[8];
    char nameB[8];
    char sub[8];
    void *r;
    switch (id) {
    case 98:
        fn_800FB064(stream, nameA);
        fn_800FB064(stream, sub);
        r = lookupA(*(u8 **)(*(u8 **)(p + 8) + 212), nameA, sub);
        if (r != 0) r = fn_8019565C(r);
        *(s32 *)(p + 44) = 0;
        *(void **)(p + 40) = 0;
        *(void **)(p + 40) = r;
        break;
    case 134:
        fn_800FB064(stream, nameB);
        fn_800FB064(stream, sub);
        *(void **)(p + 48) = lookupB(**(u8 ***)(*(u8 **)(p + 8) + 208), nameB, sub);
        break;
    default:
        fn_801EF720(p, stream, id);
        break;
    }
}

} /* extern "C" */
