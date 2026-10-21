// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct EntObj {
    u8 pad_vt[4];
    virtual void vf0();
    virtual void notify(struct Ent *e);
};
struct Ent { u32 flags; u8 pad4[8]; EntObj *obj; u8 pad10[32]; u32 f48; u8 pad34[8]; };
struct Owner { u8 pad[176]; Ent *ents; };
struct Self { u8 pad[112]; Owner *owner; void *f116; s32 f120; u8 pad2[40]; s32 idx; };
extern u32 lbl_80364F20;
extern u32 lbl_80364F24;
extern u32 lbl_80364F28;
void fn_80103BB4(Ent *e, void *o);

void fn_801B3764(Self *p) {
    Ent *e;
    u32 *fl;
    if ((p->owner->ents->flags & 0x10) && p->f116 != 0) {
        e = &p->owner->ents[p->idx];
        fn_80103BB4(e, p->f116);
        e->flags |= lbl_80364F20;
        if (e->obj != 0) {
            e->obj->notify(e);
        }
        e->f48 |= lbl_80364F24;
        fl = &p->owner->ents[p->idx].flags;
        if (p->f120 != 0) {
            *fl |= lbl_80364F28;
        } else {
            *fl &= ~4;
        }
    }
}

} /* extern "C" */
