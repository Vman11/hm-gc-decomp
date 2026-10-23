// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern const u32 lbl_80365688;
extern const u32 lbl_8036568C;
extern const u32 lbl_80365690;
extern const u32 lbl_80365694;
extern const u32 lbl_80365698;
extern const u32 lbl_8036569C;
extern const u32 lbl_803656A0;
extern const u32 lbl_803656A4;
extern const u32 lbl_803656A8;
extern const u32 lbl_803656AC;
void fn_800F6E88(void *, void *);
void fn_800FAEF8(void *);
} /* extern "C" */

struct T801FD52C {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Skip(s32);
    virtual u32 Next();
};

extern "C" {
struct S801FD52C {
    u8 pad[8];
    u32 f8;
};

void fn_801FD52C(S801FD52C *p, T801FD52C *t, void *a) {
    u32 tok;
    fn_800F6E88(p, a);
    fn_800FAEF8(t);
    while ((tok = t->Next()) != 6) {
        switch (tok) {
        case 59:
            p->f8 |= lbl_8036568C;
            break;
        case 60:
            p->f8 |= lbl_80365688;
            break;
        case 61:
            p->f8 |= lbl_80365690;
            break;
        case 65:
            p->f8 |= lbl_80365694;
            break;
        case 66:
            p->f8 |= lbl_80365698;
            break;
        case 67:
            p->f8 |= lbl_803656A0;
            break;
        case 62:
            p->f8 |= lbl_8036569C;
            break;
        case 63:
            p->f8 |= lbl_803656A8;
            break;
        case 64:
            p->f8 |= lbl_803656AC;
            break;
        default:
            t->Skip(30);
            break;
        }
    }
    p->f8 |= lbl_803656A4;
}

} /* extern "C" */
