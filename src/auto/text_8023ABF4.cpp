// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VB { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void lock(void *owner, s32 n, void *dst);
    virtual void unlock(s32 n);
    virtual void a7(); virtual void a8();
    virtual void lockIdx(s32 n, u16 **buf);
    virtual void unlockIdx(s32 n);
    virtual void drawIdx(void *a, u32 b, s32 c, u8 *d);
    virtual void draw(void *a, u32 b, s32 c, u8 *d); };
struct VR { u8 pad[0x1930]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66();  virtual u32 get67(); virtual u32 get68(); virtual void set69(u32 a, u32 b); };
extern volatile f32 lbl_80366000;
extern volatile f32 lbl_80366004;
void fn_801044C4(u32 a, u32 b, u32 c);
static inline u32 wA_zero(void) { return 0; }

void fn_8023ABF4(u8 *p, u32 unused, f32 *pos, int n, u16 *idx, s32 nIdx, f32 *uv, f32 *nrm) {
    static u32 s = wA_zero();
    u8 c;
    u16 *buf;
    f32 *a;
    f32 *b;
    f32 *t;
    s32 i;

    buf = 0;
    (*(VB **)(p + 0x1C))->lock(p, n, p + 0x20);
    if (idx != 0) {
        (*(VB **)(p + 0x1C))->lockIdx(nIdx, &buf);
    }
    a = pos;
    b = nrm;
    t = uv;
    for (i = 0; i < n; i++) {
        ((f32 *)*(u8 **)(p + 0x20))[0] = a[0];
        ((f32 *)*(u8 **)(p + 0x20))[1] = a[1];
        ((f32 *)*(u8 **)(p + 0x20))[2] = a[2];
        *(u8 **)(p + 0x20) += *(s32 *)(p + 0x24);
        if (nrm != 0) {
            ((f32 *)*(u8 **)(p + 0x38))[0] = b[0];
            ((f32 *)*(u8 **)(p + 0x38))[1] = b[1];
            ((f32 *)*(u8 **)(p + 0x38))[2] = b[2];
            *(u8 **)(p + 0x38) += *(s32 *)(p + 0x3C);
        } else {
            ((f32 *)*(u8 **)(p + 0x38))[0] = lbl_80366000;
            ((f32 *)*(u8 **)(p + 0x38))[1] = lbl_80366004;
            ((f32 *)*(u8 **)(p + 0x38))[2] = lbl_80366004;
            *(u8 **)(p + 0x38) += *(s32 *)(p + 0x3C);
        }
        if (uv != 0) {
            ((f32 *)*(u8 **)(p + 0x50))[0] = t[0];
            ((f32 *)*(u8 **)(p + 0x50))[1] = t[1];
            *(u8 **)(p + 0x50) += *(s32 *)(p + 0x70);
        } else {
            ((f32 *)*(u8 **)(p + 0x50))[0] = lbl_80366004;
            ((f32 *)*(u8 **)(p + 0x50))[1] = lbl_80366004;
            *(u8 **)(p + 0x50) += *(s32 *)(p + 0x70);
        }
        a += 3;
        b += 3;
        t += 2;
    }
    if (idx != 0) {
        for (i = 0; i < nIdx; i++) {
            buf[i] = idx[i];
        }
    }
    (*(VB **)(p + 0x1C))->unlock(n);
    if (idx != 0) {
        (*(VB **)(p + 0x1C))->unlockIdx(nIdx);
    }
    *(u32 *)(p + 0x94) = (*(VR **)(p + 0x90))->get67();
    if (*(void **)(p + 0x9C) != 0) {
        fn_801044C4(*(u32 *)(p + 0x9C), *(u32 *)(p + 0x94), (*(VR **)(p + 0x90))->get68());
        (*(VR **)(p + 0x90))->set69(s, *(u32 *)(*(u8 **)(p + 0x9C) + 0x14));
    } else {
        (*(VR **)(p + 0x90))->set69(s, *(u32 *)(p + 0x94));
    }
    c = s;
    if (idx != 0) {
        (*(VB **)(p + 0x1C))->drawIdx(*(void **)(p + 0x90), *(u32 *)(p + 0x98), 1, &c);
    } else {
        (*(VB **)(p + 0x1C))->draw(*(void **)(p + 0x90), *(u32 *)(p + 0x98), 1, &c);
    }
}

} /* extern "C" */
