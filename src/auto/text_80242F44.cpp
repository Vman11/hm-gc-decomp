// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct Key242 { char d[8]; };
struct X242 { u8 pad[0xc]; char key[8]; };
struct I242 { u8 pad[4]; X242 *f4; };
struct T242 { u8 pad[0xc]; char name[8]; u32 f14; I242 **f18; u32 f1c; T242 *f20; T242 *f24; };
void fn_800F6E88(void *, void *);
s32 fn_800F6CD0(void *, void *);
inline void fn_8024340C(X242 *x, Key242 *k) { fn_800F6E88(k, x->key); }
inline X242 *fn_80243438(I242 *it) { return it->f4; }

s32 fn_80242F44(T242 *t, I242 *it) {
    Key242 k;
    u32 i;
    fn_8024340C(fn_80243438(it), &k);
    if (t->name[0] && fn_800F6CD0(&k, t->name)) {
        if (!t->f18) return 1;
        for (i = 0; i < t->f14; i++) {
            if (t->f18[i] == it) return 1;
        }
        if (t->f20) return fn_80242F44(t->f20, it);
        return 0;
    }
    if (t->f24) return fn_80242F44(t->f24, it);
    return 0;
}

}

} /* extern "C" */
