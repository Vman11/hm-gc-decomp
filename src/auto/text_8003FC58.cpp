// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct V8003FC58 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void m18();
    virtual void v19();
    virtual void m20();
};
extern "C" {
extern char lbl_8035C2F8[4];
extern f32 lbl_8035C2FC;
s32 fn_800F6CD0(void *a, void *b);
void fn_8024118C(void *p, void *s, s32 x);

void fn_8003FC58(u8 *p) {
    void *s;
    V8003FC58 *v;
    u32 *f;
    M2C_FIELD(p, s32 *, 368) = 1;
    s = M2C_FIELD(p, void **, 296);
    if (s != 0) {
        if (fn_800F6CD0(s, lbl_8035C2F8) == 0) {
            fn_8024118C(p, s, 0);
        }
    }
    v = M2C_FIELD(p, V8003FC58 **, 224);
    M2C_FIELD(v, f32 *, 280) = lbl_8035C2FC;
    M2C_FIELD(v, f32 *, 284) = lbl_8035C2FC;
    M2C_FIELD(v, f32 *, 288) = lbl_8035C2FC;
    M2C_FIELD(v, f32 *, 340) = lbl_8035C2FC;
    M2C_FIELD(p, V8003FC58 **, 224)->m20();
    M2C_FIELD(p, V8003FC58 **, 224)->m18();
    f = M2C_FIELD(p, u32 **, 340);
    if (f != 0) {
        *f &= ~0x800;
    }
}

} /* extern "C" */
