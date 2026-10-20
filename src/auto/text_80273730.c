// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C80273730[];
void __ct__9C80257738Fv();
void __ct__9C8025E920Fv();

void fn_802575F0(void *);

void *__ct__9C80273730Fv(u8 *p) {
    __ct__9C80257738Fv(p);
    *(void **)p = __vt__9C80273730;
    __ct__9C8025E920Fv(p + 0xC0);
    fn_802575F0(p);
    return p;
}
