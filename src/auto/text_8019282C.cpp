// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u32 flags;
    u8 pad4[60];
    u32 f40;
    u8 pad44[48];
} E8019282C;

typedef struct {
    u8 pad0[108];
    u32 count;
    u8 pad70[64];
    E8019282C *arr;
} S8019282C;

void fn_80193760(S8019282C *, void *);
void fn_80193180(S8019282C *, void *);
void fn_80192B70(S8019282C *, void *);
void fn_8019AE40(void *, E8019282C *);

static inline void loop8019282C(S8019282C *p, void *a) {
    u32 i;
    for (i = 0; i < p->count; i++) {
        if ((p->arr[i].flags & 0x800) && p->arr[i].f40 == 0) {
            fn_8019AE40(a, &p->arr[i]);
        }
    }
}

void fn_8019282C(S8019282C *p, void *a) {
    fn_80193760(p, a);
    fn_80193180(p, a);
    fn_80192B70(p, a);
    loop8019282C(p, a);
}

} /* extern "C" */
