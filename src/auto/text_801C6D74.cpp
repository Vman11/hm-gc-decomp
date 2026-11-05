// Code of main that had no source file yet: decomp.wtf gave it this one.
// fn_801C6D74 matches (100%); unit NonMatching: its int->float magic lbl_80365018 is shared with 801CA1C4/801CA9E0 (TU merge pending).
#include "common.h"

extern "C" {

struct Obj;

struct Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual s32 accept(struct Obj *o, struct Obj *a);
};

struct Node { Item *f0; s32 f4; Node *f8; };
struct Ent { u8 pad[4]; s32 f4; u8 pad8[0x14 - 8]; };

struct ObjB {
    u8 pad0[0x48];
    f32 f48;
    f32 f4c;
    f32 f50;
    f32 f54;
    u8 pad58[0x80 - 0x58];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void setState(s32 s);
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void refresh();
    virtual void getRange(f32 *lo, f32 *hi);
    virtual void v83();
    virtual f32 getVal();
};

struct Obj : ObjB {
    u8 pad84[4];
    Node *f88;
    u8 pad8c[0x170 - 0x8c];
    Obj *f170;
    Obj *f174;
    u8 pad178[4];
    Obj **f17c;
    u8 pad180[0x198 - 0x180];
    u8 *f198;
    u8 pad19c[0x1a4 - 0x19c];
    Ent **f1a4;
    Ent *f1a8;
    u32 f1ac;
    u32 f1b0;
    u8 pad1b4[0x1c4 - 0x1b4];
    u32 f1c4;
    f32 *f1c8;
    u8 pad1cc[4];
    f32 f1d0;
    f32 f1d4;
    f32 f1d8;
    f32 f1dc;
    u8 pad1e0[0x1e8 - 0x1e0];
    u32 f1e8;
    u8 pad1ec[4];
    u32 f1f0;
    u8 pad1f4[0x238 - 0x1f4];
    s32 f238;
};

extern volatile f32 lbl_80365010;
void fn_8010EA74(u8 **p, s32 k, void **a, void *d, s32 e);

static inline f32 rat(Obj *o, f32 r) { return o->getVal() / r; }
static inline f32 rat2(Obj *o, f32 r) { f32 t = o->getVal(); return t / r; }

s32 fn_801C6D74(Obj *self, Obj *a) {
    f32 lo, hi;
    Node *n;
    s32 busy;
    u32 i, k;
    f32 sum;

    n = self->f88;
    busy = 0;
    while (n) {
        if (n->f4 != 0) {
            if (n->f0->accept(self, a) == 0) busy = 1;
        }
        n = n->f8;
    }
    if (busy) return 0;
    sum = lbl_80365010;
    if (a == self->f170) {
        self->f170->getRange(&lo, &hi);
        if (self->f238) {
            u32 cnt;
            f32 h, l;
            if (self->f1e8 && (h = hi, l = lo, h != l)) {
                f32 t = self->f170->getVal();
                cnt = (s32)((f32)(self->f1ac - self->f1e8) * (t / (h - l)));
                cnt += self->f1e8;
            } else {
                cnt = (s32)((f32)self->f1ac * rat2(self->f170, hi - lo));
            }
            if (cnt >= self->f1ac - 1) cnt = self->f1ac - 1;
            for (i = 0; i < cnt; i++) sum += self->f1c8[i];
            self->f1d0 = sum;
        } else {
            self->f1d0 = self->f1d8 - (self->f50 - self->f48);
            f32 h, l;
            if (self->f1d0 > lbl_80365010 && (h = hi, l = lo, h != l)) {
                f32 t = self->f170->getVal();
                self->f1d0 = self->f1d0 * t / (h - l);
            } else {
                self->f1d0 = lbl_80365010;
            }
        }
        self->refresh();
    } else if (a == self->f174) {
        self->f1d4 = self->f1dc - (self->f54 - self->f4c);
        self->f174->getRange(&lo, &hi);
        f32 h, l;
        if (self->f1d4 > lbl_80365010 && (h = hi, l = lo, h != l)) {
            f32 t = self->f174->getVal();
            self->f1d4 = self->f1d4 * t / (h - l);
        } else {
            self->f1d4 = lbl_80365010;
        }
        self->refresh();
    } else {
        for (i = 0; i < self->f1f0; i++) {
            if (self->f17c[i] == a) {
                self->f1b0++;
                if (self->f1b0 != 0) {
                    for (k = self->f1b0 - 1; k != 0; k--) self->f1a4[k] = self->f1a4[k - 1];
                }
                if (self->f1b0 > self->f1ac) self->f1b0 = self->f1ac;
                if (self->f1b0 > 9) self->f1b0 = 9;
                self->f1a4[0] = &self->f1a8[i];
                if (self->f1c4 == i) {
                    Ent *e = self->f1a4[0];
                    e->f4 = !e->f4;
                }
                if (self->f1a4[0]->f4) self->f17c[i]->setState(3);
                else self->f17c[i]->setState(2);
                fn_8010EA74(&self->f198, self->f1b0, (void **)self->f1a4, 0, -1);
                self->f1c4 = i;
                {
                    u32 j;
                    Obj **pp;
                    for (j = 0; j < self->f1ac; j++) {
                        if (j != self->f1c4) self->f17c[j]->setState(1);
                    }
                }
                break;
            }
        }
    }
    return 0;
}

}
