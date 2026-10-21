// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[28]; } Slot8015D624;
typedef struct {
    u8 pad0[20];
    void *f14;
    u8 pad18[4];
    u32 *f1c;
    u8 pad20[40];
    Slot8015D624 slots[4];
} Obj8015D624;

void fn_801636DC(u32 *);
void fn_801637C8(u32 *, Obj8015D624 *);
void fn_8015D11C(Obj8015D624 *, u32);
void fn_80163A18(u32 *);
void fn_8015CC48(Obj8015D624 *, u32, u32, s32);
void fn_8016F1B0(Slot8015D624 *, u32 *, u8 *);
void fn_8016F45C(Slot8015D624 *, u32 *);

void fn_8015D624(Obj8015D624 *o, void *param_2, u32 idx) {
    u32 id;
    u32 *p;
    p = (u32 *)param_2;
    id = *p;
    fn_801636DC(p);
    fn_801637C8(p, o);
    if (idx == 0) {
        fn_8015D11C(o, id);
    }
    if (o->f14 == 0) {
        fn_80163A18(p);
        if (o->f1c != 0) {
            fn_8015CC48(o, id, *o->f1c, 0);
        } else {
            fn_8015CC48(o, id, 0, 0);
        }
    } else if (M2C_FIELD(id, s32 *, 10144) != 0 && idx == 0) {
        fn_8016F1B0(o->slots, p, (u8 *)id + 10148);
    } else {
        fn_8016F45C(&o->slots[idx], p);
    }
}

} /* extern "C" */
