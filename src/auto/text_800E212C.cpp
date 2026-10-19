// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef void (*CD_800E212C)(void *, s16);
class PAD_800E212C {
public:
    void *p;
    u32 size;
    u32 n;
    CD_800E212C dtor;
    u32 i;
    PAD_800E212C(void *a, u32 s, u32 c, CD_800E212C d) { p = a; size = s; n = c; dtor = d; i = n; }
    ~PAD_800E212C() {
        if (i < n && dtor) {
            char *q;
            for (q = (char *)p + size * i; i > 0; i--) {
                q -= size;
                dtor(q, -1);
            }
        }
    }
};

void *__construct_new_array(void *block, CD_800E212C ctor, CD_800E212C dtor, u32 size, u32 n) {
    char *ptr = (char *)block;
    if (ptr != 0) {
        ((u32 *)ptr)[0] = size;
        ((u32 *)ptr)[1] = n;
        ptr += 16;
        if (ctor) {
            PAD_800E212C pad(ptr, size, n, dtor);
            char *p;
            for (pad.i = 0, p = ptr; pad.i < n; pad.i++, p += size) {
                ctor(p, 1);
            }
        }
    }
    return ptr;
}

} /* extern "C" */
