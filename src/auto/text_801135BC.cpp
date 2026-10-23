// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[20]; } E20_801135BC;
typedef struct {
    u8 pad[16];
    u32 count;
} Hdr801135BC;
typedef struct {
    Hdr801135BC *hdr;
    u8 pad[8];
    void **ptrs;
    E20_801135BC *elems;
} Obj801135BC;
void fn_800FB6D8(E20_801135BC *e);
void __dla__FPv(void *p);
void fn_8010C3AC(Obj801135BC *o);

static inline u32 getCount_801135BC(Obj801135BC *o) {
    return o->hdr->count;
}
void fn_801135BC(Obj801135BC *obj) {
    u32 count;
    u32 i;
    if (obj->elems != 0) {
        count = getCount_801135BC(obj);
        for (i = 0; i < count; i++) {
            fn_800FB6D8(&obj->elems[i]);
            if (obj->ptrs[i] != 0) {
                __dla__FPv(obj->ptrs[i]);
            }
        }
        __dla__FPv(obj->ptrs);
        if (obj->elems != 0) {
            __dla__FPv((u8 *)obj->elems - 16);
        }
        obj->elems = 0;
        obj->ptrs = 0;
        fn_8010C3AC(obj);
    }
}

} /* extern "C" */
