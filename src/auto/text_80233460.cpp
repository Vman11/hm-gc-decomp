// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Obj80233460 { u8 pad[140]; u8 name[480]; s32 f620; u8 pad2[92]; u32 f716; };
struct Name80233460 { u32 v[2]; };
struct G80233460 { u8 pad[12]; u32 f12; };
extern "C" Obj80233460 *fn_8023A490(void *cur, u32 idx);
struct It80233460 {
    u8 pad[8]; void *cur; u32 idx;
    bool Valid() { return cur != 0; }
    Obj80233460 *Get() { return cur ? fn_8023A490(cur, idx) : 0; }
};
struct S80233460 { u8 pad[20]; It80233460 *it; };
extern "C" {
extern G80233460 *lbl_8035B488;
void fn_8023C528(It80233460 *it, void *p);
void fn_8023C3F4(It80233460 *it);
void fn_800F6E88(Name80233460 *dst, void *src);
s32 fn_800F6CD0(void *key, Name80233460 *name);

Obj80233460 *fn_80233460(S80233460 *self, void *key, void *p3) {
    Obj80233460 *best = 0;
    Obj80233460 *obj;
    Name80233460 name;
    for (fn_8023C528(self->it, p3); self->it->Valid(); fn_8023C3F4(self->it)) {
        obj = self->it->Get();
        fn_800F6E88(&name, obj->name);
        if (obj->f620 == 0 && fn_800F6CD0(key, &name) != 0) {
            if (best == 0 || obj->f716 < best->f716) {
                best = obj;
            }
        }
    }
    if (best != 0) {
        best->f716 = lbl_8035B488->f12;
    }
    return best;
}

} /* extern "C" */
