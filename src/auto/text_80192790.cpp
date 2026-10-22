// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Elem80192790 { u8 pad[64]; void *f64; u8 pad2[116 - 68]; } Elem80192790;
typedef struct Obj80192790 { u8 pad[108]; u32 count; u8 pad2[176 - 112]; Elem80192790 *arr; } Obj80192790;
void fn_80193500(Obj80192790 *p, void *a);
void fn_80192EE4(Obj80192790 *p, void *a);
void fn_801928D4(Obj80192790 *p, void *a);
void fn_8019AD10(void *a, Elem80192790 *e);
static inline void Each80192790(Obj80192790 *p, void *a) {
    u32 i;
    for (i = 0; i < p->count; i++) {
        if (p->arr[i].f64 != 0) {
            fn_8019AD10(a, &p->arr[i]);
        }
    }
}

void fn_80192790(Obj80192790 *p, void *a) {
    fn_80193500(p, a);
    fn_80192EE4(p, a);
    fn_801928D4(p, a);
    Each80192790(p, a);
}

} /* extern "C" */
