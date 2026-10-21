// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef void (*ConstructorDestructor)(void *, s16);
class __partial_array_destructor {
public:
    void *p;
    u32 size;
    u32 n;
    ConstructorDestructor dtor;
    u32 i;
    __partial_array_destructor(void *a, u32 s, u32 c, ConstructorDestructor d) { p = a; size = s; n = c; dtor = d; i = n; }
    ~__partial_array_destructor() {
        if (i < n && dtor) {
            char *q;
            for (q = (char *)p + size * i; i > 0; i--) {
                q -= size;
                dtor(q, -1);
            }
        }
    }
};

void __construct_array(void *block, ConstructorDestructor ctor, ConstructorDestructor dtor, u32 size, u32 n) {
    __partial_array_destructor pad(block, size, n, dtor);
    char *p;
    for (pad.i = 0, p = (char *)block; pad.i < n; pad.i++, p += size) {
        ctor(p, 1);
    }
}

} /* extern "C" */
