// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { s32 a, b, c, d, e; } P5;
void fn_8023F764(void *p, void *h, P5 prm);
void fn_80240DBC(void *p, f32 f);
extern f32 lbl_80361BCC;
extern const P5 lbl_8029A8CC;
struct V800A27B0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void m();
};

static inline void helper(u8 *p, void *h, s32 x) {
    P5 prm = lbl_8029A8CC;
    prm.a = x;
    fn_8023F764(p, h, prm);
}
void fn_800A27B0(u8 *p) {
    (*(V800A27B0 **)(p + 224))->m();
    if (*(void **)(p + 520) != 0) {
        helper(p, p + 520, *(s32 *)(p + 324));
        *(void **)(p + 520) = 0;
        fn_80240DBC(p, lbl_80361BCC);
    }
    *(s32 *)(p + 440) = 0;
}

} /* extern "C" */
