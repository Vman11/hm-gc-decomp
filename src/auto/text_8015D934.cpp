// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8016F860(void *);
void fn_8012FE00(void *);

void fn_8015D934(u8 *p) {
    u8 *q = p;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 296); i++) {
        fn_8016F860(q + 72);
        q += 28;
    }
    fn_8012FE00(p);
    *(u32 *)(p + 296) = 0;
}

} /* extern "C" */
