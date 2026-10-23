// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VN {
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
    virtual int Check(u8 *, u32);
};
struct VL { u8 pad[128];
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
    virtual void Notify(u8 *);
};
struct VB { u32 f0, f4, f8;
    virtual void v0(); virtual void v1();
    virtual void SetRange(u32, u32);
    virtual void Set(u32);
    virtual void v4(); virtual void v5();
    virtual s32 GetI();
    virtual f32 GetF();
};
struct Node { VN *obj; s32 flag; Node *next; };
void fn_801B1D54(u8 *, u32);
#define U32(o) (*(u32 *)(p + (o)))
#define VAL (*(u8 **)(*(u8 **)(p + 392) + 40))
static inline void Refresh(u8 *p) {
    s32 m = *(s32 *)(p + 408);
    if (m == 5) {
        if (*(VL **)(p + 284)) (*(VL **)(p + 284))->Notify(p);
    } else if (m == 2) {
        s32 old = *(s32 *)(VAL + 12);
        s32 v = (*(VB **)(p + 396))->GetI();
        if (old != v) {
            *(s32 *)(VAL + 12) = v;
            if (*(VL **)(p + 284)) (*(VL **)(p + 284))->Notify(p);
        }
    } else if (m == 3) {
        f32 old = *(f32 *)(VAL + 12);
        f32 v = (*(VB **)(p + 396))->GetF();
        if (old != v) {
            *(f32 *)(VAL + 12) = v;
            if (*(VL **)(p + 284)) (*(VL **)(p + 284))->Notify(p);
        }
    }
}
int fn_801AFFF0(u8 *p, u32 a) {
    Node *n;
    u32 cur;
    int bad = 0;
    for (n = *(Node **)(p + 136); n; n = n->next) {
        if (n->flag && n->obj->Check(p, a) == 0) bad = 1;
    }
    if (bad) return 0;
    switch (*(s32 *)(p + 324)) {
    case 32: {
        cur = U32(368);
        if (cur != U32(372)) {
            if (cur < U32(372)) {
                fn_801B1D54(p, U32(372));
                U32(372) = cur;
            }
            (*(VB **)(p + 396))->SetRange(U32(372), U32(368) - 1);
            U32(388) = 0;
            Refresh(p);
            fn_801B1D54(p, U32(372));
        } else {
            VB *o = *(VB **)(p + 396);
            if (cur != o->f8 - o->f4) {
                o->Set(cur);
                U32(388) = 0;
                Refresh(p);
                fn_801B1D54(p, U32(372));
            }
        }
        break;
    }
    }
    return 0;
}

} /* extern "C" */
