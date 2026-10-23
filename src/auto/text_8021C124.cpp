// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Q8021C124 {
    u8 pad[292];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void Skip(s32);
    virtual u32 Next();
};
struct P8021C124 {
    u32 flags;
    u8 pad[12];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void Reset();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual void OnA(Q8021C124 *);
    virtual void OnB(Q8021C124 *);
    virtual void OnC(Q8021C124 *);
    virtual void OnD(Q8021C124 *);
    virtual void OnE(Q8021C124 *);
};
void fn_800FAEF8(Q8021C124 *);
void fn_8021B9DC(P8021C124 *, Q8021C124 *);

void fn_8021C124(P8021C124 *p, Q8021C124 *q) {
    u32 t;
    if (p->flags & 1) {
        p->Reset();
    }
    fn_800FAEF8(q);
    while ((t = q->Next()) != 6) {
        switch (t) {
        case 58:
            p->OnA(q);
            break;
        case 59:
            p->OnB(q);
            break;
        case 60:
            p->OnC(q);
            break;
        case 61:
            p->OnD(q);
            break;
        case 76:
            p->OnE(q);
            break;
        case 62:
            fn_8021B9DC(p, q);
            break;
        default:
            q->Skip(30);
            break;
        }
    }
}

} /* extern "C" */
