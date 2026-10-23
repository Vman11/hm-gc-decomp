// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Item { u8 pad[12]; void *key; u8 pad2[8]; Item *next; };
struct List { u8 pad[20]; Item *heads[1]; };
struct Obj {
    u8 pad[20];
    virtual void d0();
    virtual void m();
    List *f24;
    s32 f28;
    u32 f32;
    s32 f36;
    void *f40;
    void *f44;
};
extern "C" {
void fn_801EEEBC(Obj *p) {
    s32 found;
    Item *it;
    found = 0;
    for (it = p->f24->heads[p->f28]; it != 0; it = it->next) {
        if (it->key == (p->f44 != 0 ? p->f44 : p->f40)) found = 1;
    }
    if (found && p->f36) {
        if (p->f32 & 4) p->m();
    } else if (found && !p->f36) {
        if (p->f32 & 1) p->m();
    } else if (!found && p->f36) {
        if (p->f32 & 2) p->m();
    }
    p->f36 = found;
}

} /* extern "C" */
