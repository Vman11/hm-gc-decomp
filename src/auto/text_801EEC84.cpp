// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *stream, char *out);
void *fn_800F9398(u8 *tbl, char *name);
void *fn_800F9788(u8 *tbl, char *sub, char *name);
void fn_801EF3A0(u8 *p, void *stream, s32 id);

static inline void *lookup(u8 *t, char *name, char *sub) {
    if (sub == 0 || sub[0] == 0) {
        return fn_800F9398(t + 384, name);
    } else {
        return fn_800F9788(t + 408, sub, name);
    }
}

void fn_801EEC84(u8 *p, void *stream, s32 id) {
    char name[8];
    char sub[8];
    switch (id) {
    case 84:
        fn_800FB064(stream, name);
        fn_800FB064(stream, sub);
        *(void **)(p + 48) = lookup(*(u8 **)(*(u8 **)(p + 16) + 212), name, sub);
        break;
    case 86:
        fn_800FB064(stream, name);
        fn_800FB064(stream, sub);
        *(void **)(p + 52) = lookup(*(u8 **)(*(u8 **)(p + 16) + 212), name, sub);
        break;
    case 85:
    default:
        fn_801EF3A0(p, stream, id);
        break;
    }
}

} /* extern "C" */
