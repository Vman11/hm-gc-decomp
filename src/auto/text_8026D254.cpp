// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern const char lbl_80366DD8[4];
extern const char lbl_802AA7F8[];
s32 fn_800F6CD0(void *, const char *);
void *fn_800F8274(void *, void *);
void fn_800F6E40(char *, void *);
int fn_800E8F6C(char *, const char *, ...);
} /* extern "C" */

struct L8026D254 {
    u8 pad[8];
    u32 count;
    u8 pad2[24];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void *Get(u32);
};

extern "C" {
struct S8026D254 {
    u8 pad[20];
    L8026D254 *f20;
    L8026D254 *f24;
};

void *fn_8026D254(S8026D254 *p, void *a) {
    u32 i;
    void *r;
    char name[12];
    char buf[64];
    if (fn_800F6CD0(a, lbl_80366DD8) != 0) {
        return 0;
    }
    for (i = 0; i < p->f20->count; i++) {
        r = fn_800F8274(p->f20->Get(i), a);
        if (r) {
            return r;
        }
    }
    if (p->f24) {
        for (i = 0; i < p->f24->count; i++) {
            r = fn_800F8274(p->f24->Get(i), a);
            if (r) {
                return r;
            }
        }
    }
    fn_800F6E40(name, a);
    fn_800E8F6C(buf, lbl_802AA7F8, name);
    return 0;
}

} /* extern "C" */
