// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef void (*CD_800E1F7C)(void *, s16);
class PAD_800E1F7C {
public:
    void *p;
    u32 size;
    u32 n;
    CD_800E1F7C dtor;
    u32 i;
    PAD_800E1F7C(void *a, u32 s, u32 c, CD_800E1F7C d) { p = a; size = s; n = c; dtor = d; i = n; }
    ~PAD_800E1F7C() {
        if (i < n && dtor) {
            char *q;
            for (q = (char *)p + size * i; i > 0; i--) {
                q -= size;
                dtor(q, -1);
            }
        }
    }
};

void __construct_array(void *block, CD_800E1F7C ctor, CD_800E1F7C dtor, u32 size, u32 n) {
    PAD_800E1F7C pad(block, size, n, dtor);
    char *p;
    for (pad.i = 0, p = (char *)block; pad.i < n; pad.i++, p += size) {
        ctor(p, 1);
    }
}

} /* extern "C" */
