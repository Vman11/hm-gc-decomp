// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VF_80211A84 { u8 pad[16]; virtual void v0(); virtual void v1(); virtual s32 open(u8 *, char *, s32); };
struct VA_80211A84 { virtual void v0(); virtual void v1(); virtual VF_80211A84 *alloc(); virtual void release(VF_80211A84 *); };
void fn_80207E5C(u8 *);
s32 fn_80207CDC(u8 *, char *, s32, char *);
void fn_80060568(char *, s32, s32, s32);
extern char lbl_802A7130[];

s32 fn_80211A84(u8 *p, char *path, s32 mode, VF_80211A84 **out) {
    char buf[268];
    s32 r;
    VF_80211A84 *f;
    if (*(void **)(p + 1724) == 0) {
        return 3;
    }
    fn_80207E5C(p);
    if (fn_80207CDC(p, buf, 268, path) == 0) {
        fn_80060568(lbl_802A7130, 0, 0, 0);
    }
    f = (*(VA_80211A84 **)(p + 1760))->alloc();
    if (f == 0) {
        return 3;
    }
    r = f->open(p + 128, buf, mode);
    if (r != 0) {
        (*(VA_80211A84 **)(p + 1760))->release(f);
        *out = 0;
        return r;
    }
    (*(u32 *)(p + 1700))++;
    if (*(u32 *)(p + 1700) > *(u32 *)(p + 1708)) {
        *(u32 *)(p + 1708) = *(u32 *)(p + 1700);
    }
    *out = f;
    return 0;
}

} /* extern "C" */
