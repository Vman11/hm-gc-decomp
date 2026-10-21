// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VO_800A66E0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void f24(); };
typedef struct { f32 x, y, z; } V3_800A66E0;
s32 fn_8022C558(VO_800A66E0 *);
void fn_80072AC8(void *, V3_800A66E0 *);
void *fn_80245F8C(void *, s32);
f32 fn_80101590(V3_800A66E0 *, void *);
void fn_802494A4(u8 *, s32);
void fn_8023FE08(u8 *, f32);
extern u8 *lbl_8035B308;
extern f32 lbl_80361EA8;

void fn_800A66E0(u8 *p, f32 t) {
    V3_800A66E0 pos;
    f32 d;
    s32 s = *(s32 *)(p + 96);
    if (s == 4) {
        if (fn_8022C558(*(VO_800A66E0 **)(p + 224)) != 0) {
            (*(VO_800A66E0 **)(p + 224))->f24();
        }
    } else if (s != 0) {
        fn_80072AC8(*(void **)(lbl_8035B308 + 72), &pos);
        d = lbl_80361EA8;
        if (*(s32 *)(p + 320) >= 0) {
            void *o = fn_80245F8C(*(void **)(p + 316), *(s32 *)(p + 320));
            d = fn_80101590(&pos, o);
        }
        s = *(s32 *)(p + 96);
        if ((s == 1 || s == 2) && d <= **(f32 **)(p + 288)) {
            fn_802494A4(p, 3);
        } else if (s == 3 && d > **(f32 **)(p + 292)) {
            if (*(s32 *)(p + 312) != 0) {
                fn_802494A4(p, 2);
            } else {
                fn_802494A4(p, 1);
            }
        }
    }
    fn_8023FE08(p, t);
}

} /* extern "C" */
