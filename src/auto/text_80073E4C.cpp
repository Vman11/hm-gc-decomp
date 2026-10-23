// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_80298060[];
extern void *lbl_8035B374;
extern void *lbl_8035B65C;
extern char lbl_8035F510[6];
extern char lbl_8035F518[8];
extern char lbl_8035F520[8];
extern char lbl_8035F528[7];
extern char lbl_8035F530[8];
extern char lbl_8035F3F4[1];
extern f32 lbl_8035F3EC;
extern f32 lbl_8035F490;
} /* extern "C" */
struct O80073E4C;
struct T80073E4C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();  virtual void play(O80073E4C *, s32, f32, char *, char *, f32, s32); };
struct U80073E4C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();  virtual void cue(char *, s32, s32, s32, s32); };
struct O80073E4C { u8 pad[1076]; U80073E4C *f1076; u8 pad2[1716 - 1080]; u8 state; };
extern "C" {
T80073E4C *fn_80233550(void *, char *);
void __ct__9C80253F24Fiiii(void *, char *, O80073E4C *, s32, s32);
#pragma opt_propagation off
void fn_80073E4C(O80073E4C *o, s32 arg) {
    char *str = lbl_80298060;
    T80073E4C *r = 0;
    switch (o->state) {
    case 6:
        if (arg == 1) r = fn_80233550(lbl_8035B374, lbl_8035F510);
        break;
    case 5:
        r = fn_80233550(lbl_8035B374, str + 168);
        break;
    case 4:
        r = fn_80233550(lbl_8035B374, str + 180);
        break;
    case 3:
        r = fn_80233550(lbl_8035B374, str + 192);
        break;
    case 2:
        r = fn_80233550(lbl_8035B374, str + 204);
        break;
    case 1:
        r = fn_80233550(lbl_8035B374, str + 216);
        break;
    default:
        r = fn_80233550(lbl_8035B374, lbl_8035F518);
        break;
    }
    if (r) {
        r->play(o, 1, lbl_8035F3EC, lbl_8035F3F4, lbl_8035F520, lbl_8035F490, 0);
        if (o->state == 6) {
            o->f1076->cue(lbl_8035F528, 0, 0, 0, 0);
        }
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035F530, o, 0, 0);
    }
}
#pragma opt_propagation reset

} /* extern "C" */
