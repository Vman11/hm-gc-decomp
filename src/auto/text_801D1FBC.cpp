#include "common.h"
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Scr { u8 pad_[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void show(int); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void update(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void setMax(f32); virtual void v80(); virtual void setStep(f32); virtual void v82(); virtual void setRange(f32, f32); virtual f32 getPos(); virtual void setPos(f32); virtual void setPage(f32); };
struct Lis { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual void l9(); virtual void l10(); virtual void l11(); virtual void l12(); virtual void l13(); virtual void l14(); virtual void l15(); virtual void l16(); virtual void l17(); virtual void l18(); virtual void l19(); virtual void l20(); virtual void l21(); virtual void l22(); virtual void l23(); virtual void l24(); virtual void l25(); virtual void l26(); virtual void l27(); virtual void l28(); virtual void l29(); virtual void l30(); virtual void l31(); virtual void l32(); virtual void l33(); virtual void l34(); virtual void l35(); virtual void l36(); virtual void l37(); virtual void l38(); virtual void l39(); virtual void l40(); virtual void l41(); virtual void l42(); virtual void l43(); virtual void l44(); virtual void l45(); virtual void l46(); virtual void l47(); virtual void l48(); virtual void l49(); virtual void notify(Scr *, int); };
struct LNode { Lis *obj; int on; LNode *next; };
extern "C" {
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
void fn_801D25A0(u8 *, void *, f32, f32);
static inline void setState(Scr *s, int st) {
    LNode *n;
    for (n = F(s,0x88,LNode*); n; n = n->next) n->obj->notify(s, st);
    F(s,0x148,u32) = F(s,0x144,u32);
    F(s,0x144,u32) = (F(s,0x144,u32) & 0xFFFF0000) | st;
}
void fn_801D1FBC(u8 *o) {
    Scr *s;
    if (F(o,0x164,int) == 0) return;
    F(o,0x344,u32) = 0;
    F(o,0x348,f32) = lbl_80365188;
    fn_801D25A0(o, F(o,0x2ec,void*), F(o,0x48,f32) + F(o,0x338,f32), F(o,0x4c,f32));
    s = F(o,0x2e0,Scr*);
    {
        s32 vis;
        u32 cnt;
        f32 r;
        f32 d;
        vis = (F(o,0x54,f32) - F(o,0x4c,f32)) / F(o,0x334,f32);
        cnt = F(o,0x344,u32);
        d = (s32)(cnt - vis);
        if (s) {
            if (d <= lbl_80365188) {
                setState(s, 1);
                F(o,0x2e0,Scr*)->setRange(lbl_80365188, d);
                F(o,0x2e0,Scr*)->setPos(lbl_80365188);
                F(F(o,0x2e0,Scr*),0x6c,u32) &= ~2;
                F(o,0x2e0,Scr*)->show(0);
            } else {
                if (cnt != 0.0) r = (f32)vis / (f32)(s32)cnt;
                else r = lbl_8036518C;
                setState(s, 2);
                F(o,0x2e0,Scr*)->setRange(lbl_80365188, d);
                F(o,0x2e0,Scr*)->setMax(vis);
                F(o,0x2e0,Scr*)->setStep(lbl_8036518C);
                if (F(o,0x328,int)) F(o,0x2e0,Scr*)->setPage(r);
                if (F(o,0x2e0,Scr*)->getPos() > d) F(o,0x2e0,Scr*)->setPos(d);
                F(F(o,0x2e0,Scr*),0x6c,u32) |= 2;
                F(o,0x2e0,Scr*)->show(1);
                F(o,0x2e0,Scr*)->update();
            }
        }
    }
    s = F(o,0x2dc,Scr*);
    if (s) {
        f32 r, d, w, h;
        h = F(o,0x348,f32);
        w = F(o,0x50,f32) - F(o,0x48,f32);
        d = h - w;
        if (d < (r = lbl_80365188)) {
            setState(s, 1);
            F(o,0x2dc,Scr*)->setRange(lbl_80365188, d);
            F(o,0x2dc,Scr*)->setPos(lbl_80365188);
            F(F(o,0x2dc,Scr*),0x6c,u32) &= ~2;
            F(o,0x2dc,Scr*)->show(0);
        } else {
            if (h != 0.0) r = w / h;
            setState(s, 2);
            F(o,0x2dc,Scr*)->setRange(lbl_80365188, d);
            F(o,0x2dc,Scr*)->setMax((s32)(F(o,0x50,f32) - F(o,0x48,f32)));
            if (F(o,0x328,int)) F(o,0x2dc,Scr*)->setPage(r);
            if (F(o,0x2dc,Scr*)->getPos() > d) F(o,0x2dc,Scr*)->setPos(d);
            F(F(o,0x2dc,Scr*),0x6c,u32) |= 2;
            F(o,0x2dc,Scr*)->show(1);
            F(o,0x2dc,Scr*)->update();
        }
    }
    F(o,0x164,int) = 0;
}

}
