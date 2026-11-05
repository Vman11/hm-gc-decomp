#include "common.h"
extern "C" {
struct M;
struct Dev {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void lockV(M *, s32, u8 **); virtual void unlockV(s32); virtual void v7(); virtual void v8();
    virtual void lockI(s32, u16 **); virtual void unlockI(s32); virtual void draw(void *, void *, s32, u8 *);
};
struct M { u8 pad[28]; Dev *dev; u8 *pos; s32 pstride; u8 pad2[16]; u8 *nrm; s32 nstride; u8 pad3[16]; u8 *uv; u8 pad4[28]; s32 uvstride; };
struct I6 { u32 v[6]; };
struct Obj { u8 pad[6448]; Obj *vt_dummy; };
struct OV { u8 pad[6448];
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
  virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
  virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
  virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void *get67(); virtual void v68(); virtual void set69(s32, void *); };
extern f32 lbl_80366000;
extern f32 lbl_80366004;
extern u8 lbl_802A8C10[];

static inline void nrm(M *m) {
    ((f32 *)m->nrm)[0] = lbl_80366000;
    ((f32 *)m->nrm)[1] = lbl_80366004;
    ((f32 *)m->nrm)[2] = lbl_80366004;
    m->nrm += m->nstride;
}

static inline void setp(u8 *p, f32 x, f32 y, f32 z) { ((f32 *)p)[0] = x; ((f32 *)p)[1] = y; ((f32 *)p)[2] = z; }
void fn_8023A8AC(M *m, f32 *r, void *p5, OV *o, f32 z) {
    I6 idx;
    u16 *ib;
    u8 *uv;
    u8 *p;
    u8 flag;
    o->set69(0, o->get67());
    m->dev->lockV(m, 4, &m->pos);
    p = m->pos;
    uv = m->uv;
    nrm(m);
    setp(p, r[0], r[1], z);
    ((f32 *)uv)[0] = lbl_80366004; ((f32 *)uv)[1] = lbl_80366004;
    p += m->pstride; uv += m->uvstride;
    nrm(m);
    setp(p, r[2], r[1], z);
    ((f32 *)uv)[0] = lbl_80366000; ((f32 *)uv)[1] = lbl_80366004;
    p += m->pstride; uv += m->uvstride;
    nrm(m);
    setp(p, r[0], r[3], z);
    ((f32 *)uv)[0] = lbl_80366004; ((f32 *)uv)[1] = lbl_80366000;
    p += m->pstride; uv += m->uvstride;
    nrm(m);
    setp(p, r[2], r[3], z);
    ((f32 *)uv)[0] = lbl_80366000; ((f32 *)uv)[1] = lbl_80366000;
    m->dev->unlockV(4);
    ib = 0;
    idx = *(I6 *)lbl_802A8C10;
    m->dev->lockI(6, &ib);
    ib[0] = idx.v[0];
    ib[1] = idx.v[1];
    ib[2] = idx.v[2];
    ib[3] = idx.v[3];
    ib[4] = idx.v[4];
    ib[5] = idx.v[5];
    m->dev->unlockI(6);
    flag = 0;
    m->dev->draw(o, p5, 1, &flag);
}
}
