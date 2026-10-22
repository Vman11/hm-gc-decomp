// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Obj8026F698 { u8 pad[140]; u8 name[40]; u32 flags; };
struct Name8026F698 { u32 v[2]; };
extern "C" Obj8026F698 *fn_8023A490(void *cur, u32 idx);
struct It8026F698 {
    u8 pad[8]; void *cur; u32 idx;
    bool Valid() { return cur != 0; }
    Obj8026F698 *Get() { return cur ? fn_8023A490(cur, idx) : 0; }
};
struct S8026F698 { u8 pad[8]; u32 count; u8 pad2[248]; It8026F698 *it; };
extern "C" {
void fn_8023C528(It8026F698 *it, void *p);
void fn_8023C3F4(It8026F698 *it);
void fn_800F6E88(Name8026F698 *dst, void *src);
s32 fn_800F6CD0(void *key, Name8026F698 *name);

Obj8026F698 *fn_8026F698(S8026F698 *self, void *key, void *p3) {
    Obj8026F698 *obj;
    Name8026F698 name;
    if (self->count == 0) {
        return 0;
    }
    for (fn_8023C528(self->it, p3); self->it->Valid(); fn_8023C3F4(self->it)) {
        obj = self->it->Get();
        fn_800F6E88(&name, obj->name);
        if (!(obj->flags & 2) && fn_800F6CD0(key, &name) != 0) {
            return obj;
        }
    }
    return 0;
}

} /* extern "C" */
