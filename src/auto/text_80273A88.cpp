// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V80273A88 {
    u8 pad[752];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void m(u32);
};
extern "C" {
typedef struct { u8 pad[8]; u32 f8; s32 f12; s32 f16; } T80273A88;
typedef struct { u8 pad[12]; s32 f12; } M80273A88;
extern V80273A88 *lbl_8035B65C;
extern f64 lbl_80367030;
extern f64 lbl_80367038;
extern f64 lbl_80367040;
extern f64 lbl_80367048;
f64 fn_800F04FC(f64, f64);
void fn_80273A88(T80273A88 *t, const M80273A88 *m) {
    if (t->f16 != 0) {
        switch (m->f12) {
        case 88:
            t->f16 = 0;
            break;
        case 89:
            t->f8 = t->f8 + fn_800F04FC(lbl_80367030, t->f12);
            t->f12--;
            break;
        case 90:
            t->f8 = t->f8 + lbl_80367038 * fn_800F04FC(lbl_80367030, t->f12);
            t->f12--;
            break;
        case 91:
            t->f8 = t->f8 + lbl_80367040 * fn_800F04FC(lbl_80367030, t->f12);
            t->f12--;
            break;
        case 92:
            t->f8 = t->f8 + lbl_80367048 * fn_800F04FC(lbl_80367030, t->f12);
            t->f12--;
            break;
        }
        if (t->f12 < 0) {
            t->f16 = 0;
            t->f12 = 0;
        }
        if (t->f16 == 0 && lbl_8035B65C) {
            lbl_8035B65C->m(t->f8);
        }
    }
}

} /* extern "C" */
