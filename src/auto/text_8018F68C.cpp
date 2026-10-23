// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct N;
inline u32 fn_8018F998(N *n) { return F(n,4,u32); }
inline u32 fn_8018F990(void *l) { return F(l,16,u32); }
void *fn_80190008(N *);
void *fn_80190074(N *);
void fn_8018AF4C(void *, void *);
N *fn_80185A54(void *, u32);
void fn_8018F68C(void *c, N *n) {
    if (fn_8018F998(n) == 0) fn_8018AF4C(fn_80190074(n), c);
    else if (fn_8018F998(n) == 4) {
        for (u32 i = 0; i < fn_8018F990(fn_80190008(n)); i++) fn_8018F68C(c, fn_80185A54(fn_80190008(n), i));
    }
}

} /* extern "C" */
