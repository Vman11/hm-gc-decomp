// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Item_801A9540 {
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
    virtual int check(void *o, void *arg);
};
struct Obj2_801A9540 {
    u8 pad[128];
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
    virtual void f88(int);
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
    virtual void f200(void *);
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
    virtual void f244(void *, int);
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
    virtual void f296(int);
};

struct Node_801A9540 { Item_801A9540 *item; s32 enabled; Node_801A9540 *next; };
inline u32 &flags2_801A9540(Obj2_801A9540 *p) { return *(u32 *)((u8 *)p + 108); }
inline s32 type2_801A9540(Obj2_801A9540 *p) { return *(s32 *)((u8 *)p + 324); }
struct Obj_801A9540 {
    u8 pad0[108];
    u32 flags;
    u8 pad70[136 - 112];
    Node_801A9540 *list;
    u8 pad8C[324 - 140];
    s32 type;
    u8 pad148[368 - 328];
    Obj2_801A9540 *o2;
};
static inline int isA_801A9540(u16 t) {
    if (t == 16 || t == 32 || t == 64 || t == 128) {
        return 1;
    }
    return 0;
}
static inline int bit1_801A9540(Obj2_801A9540 *p) {
    return (flags2_801A9540(p) >> 1) & 1;
}
static inline bool isB_801A9540(u16 t) {
    bool r = false;
    if (t == 8 || t == 4 || t == 32 || t == 128 || t == 512) {
        r = true;
    }
    return r;
}
int fn_801A9540(Obj_801A9540 *o, void *arg) {
    Node_801A9540 *n;
    int fail = 0;
    for (n = o->list; n != NULL; n = n->next) {
        if (n->enabled != 0 && n->item->check(o, arg) == 0) {
            fail = 1;
        }
    }
    if (fail) {
        return 0;
    }
    if (!(o->flags & 2)) {
        return 0;
    }
    switch (o->type) {
    case 8:
    case 32:
    case 64:
    case 128:
        if (!(flags2_801A9540(o->o2) & 1)) {
            o->o2->f88(1);
        }
        {
            int v = bit1_801A9540(o->o2);
            if (!v) {
                flags2_801A9540(o->o2) |= 2;
            }
        }
        if (!isA_801A9540(type2_801A9540(o->o2))) {
            o->o2->f244(arg, 1);
        }
        {
            bool v2 = isB_801A9540(type2_801A9540(o->o2));
            if (!v2) {
                o->o2->f296(1);
            }
        }
        o->o2->f200(arg);
        break;
    }
    return 0;
}

} /* extern "C" */
