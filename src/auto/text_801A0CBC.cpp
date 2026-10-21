// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_8010155C(void *, void *);
u32 fn_8014CBEC(void *, void *);
struct VP_801A0CBC { u8 pad[104]; virtual void v0(); virtual void v1(); virtual void f2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void f24(u8 *, s32); };
struct VQ_801A0CBC { u8 pad[6448]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void f37(u32); };

void fn_801A0CBC(u32 *p, u8 *q) {
    u32 r;
    if (*p & 4) {
        ((VP_801A0CBC *)p)->f2();
    }
    if (!(*p & 0x800)) {
        r = 64;
    } else {
        u8 *s = q + 56;
        if (fn_8010155C(p + 6, s + 96) > *(f32 *)(p + 10)) {
            r = 64;
        } else {
            r = fn_8014CBEC(s, p + 6);
        }
    }
    if (r != 64) {
        ((VQ_801A0CBC *)q)->f37(r);
        ((VP_801A0CBC *)p)->f24(q, 0);
    }
}

} /* extern "C" */
