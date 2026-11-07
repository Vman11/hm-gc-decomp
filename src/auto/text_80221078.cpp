// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// The target addresses lbl_80356DF8+0x1c.. as one TU-local .bss base (r30) with array bases materialized
// (addi rX,r30,off): these were separate static arrays of the TU that owns lbl_80356DF8 (text_80220C98..).
static u8 lbl_80356DF8pad[0x1c]; static f32 v1c[4]; static f32 v2c[4]; static f32 v3c[4]; static f32 v4c[3]; static f32 v58[3];
struct Ctl { u8 pad[0x1930]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();  virtual void *get(int); };
struct Tbl { u8 pad[0x124]; f32 (*f124)(void *, int, int); };
struct P { u8 pad[0x88]; f32 v88[4]; f32 v98[4]; f32 va8[4]; u8 padb8[0xbc]; f32 v174[2]; f32 v17c[2]; f32 v184[2]; };

extern Tbl lbl_803286D0;
static f32 lbl_8035B278[2];
static f32 lbl_8035B280[2];
static f32 lbl_8035B288[2];
void fn_80221078(void *__restrict self, Ctl *__restrict c, P *__restrict p, f32 *__restrict off, f32 s) {
    
    void *m = c->get(0);
    Tbl *t = &lbl_803286D0;
    v4c[0] = t->f124(m, 0, 0);
    v4c[1] = t->f124(m, 1, 0);
    v4c[2] = t->f124(m, 2, 0);
    v58[0] = t->f124(m, 0, 1);
    v58[1] = t->f124(m, 1, 1);
    v58[2] = t->f124(m, 2, 1);
    f32 a0 = v4c[0] * s;
    f32 a1 = v4c[1] * s;
    f32 a2 = v4c[2] * s;
    f32 b0 = v58[0] * s;
    f32 b1 = v58[1] * s;
    f32 b2 = v58[2] * s;
    v1c[0] = p->v88[0];
    v1c[1] = p->v88[1];
    v1c[2] = p->v88[2];
    v1c[3] = p->v88[3];
    f32 c0 = v1c[0] + off[0];
    f32 c1 = v1c[1] + off[1];
    f32 c2 = v1c[2] + off[2];
    f32 c3 = v1c[3] + off[3];
    f32 d0 = p->v98[0], d1 = p->v98[1], d2 = p->v98[2], d3 = p->v98[3];
    f32 e0 = p->va8[0], e1 = p->va8[1], e2 = p->va8[2], e3 = p->va8[3];
    f32 h0 = p->v174[0], h1 = p->v174[1], h2 = p->v17c[0], h3 = p->v17c[1], h4 = p->v184[0], h5 = p->v184[1];
    v4c[0] = a0; v4c[1] = a1; v4c[2] = a2;
    v58[0] = b0; v58[1] = b1; v58[2] = b2;
    v1c[0] = c0; v1c[1] = c1; v1c[2] = c2; v1c[3] = c3;
    v2c[0] = d0; v2c[1] = d1; v2c[2] = d2; v2c[3] = d3;
    v3c[0] = e0; v3c[1] = e1; v3c[2] = e2; v3c[3] = e3;
    lbl_8035B278[0] = h0; lbl_8035B278[1] = h1;
    lbl_8035B280[0] = h2; lbl_8035B280[1] = h3;
    lbl_8035B288[0] = h4; lbl_8035B288[1] = h5;
}

} /* extern "C" */
