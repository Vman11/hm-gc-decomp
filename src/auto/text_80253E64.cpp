// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C800322B0 { u32 a; s32 b; u32 c; C800322B0() { a = 0; c = 0; b = 0; } ~C800322B0() {} };
void __ct__9C80242B00Fi(void *p);
struct C80032274 : C800322B0 {
    u8 name[8];
    s32 f20;
    s32 f24;
    u8 pad[16];
    C80032274() { __ct__9C80242B00Fi(this); }
    ~C80032274() {}
};
extern void *lbl_8035B308;
extern const char lbl_803665AC[6];
u8 *fn_8010915C(u8 *p, char *name);
void fn_800F6E88(u8 *dst, char *name);
void fn_801089F0(u8 *obj, void *l);
u8 *fn_802288FC(void *a, const char *b);
void fn_80241DD0(void *obj, char *name, s32 a, s32 b, s32 c, s32 d);

void __ct__9C80253E64Fv(u8 *self, char *name, s32 a, s32 b) {
    u8 *obj;
    C80032274 loc;
    u8 *q;
    obj = fn_8010915C(self + 56, name);
    if (obj != 0) {
        fn_800F6E88(loc.name, name);
        loc.a = (u32)obj;
        loc.b = -1;
        loc.f20 = a;
        loc.f24 = b;
        fn_801089F0(obj, &loc);
        q = fn_802288FC(lbl_8035B308, lbl_803665AC);
        if (*(void **)(q + 524) != 0) {
            fn_80241DD0(*(void **)(q + 524), name, a, b, 0, 0);
        }
    }
}

} /* extern "C" */
