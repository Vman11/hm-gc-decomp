// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct Mgr { u8 pad[0x34c]; s32 *tab; };
extern "C" Mgr *lbl_8035B594;
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6();
    u8 pad4[0x18]; u32 f1c; s32 f20; s32 f24; u8 pad28[8]; s32 f30;
};
extern "C" void fn_8024B828(Obj *p) { if (p->f24 != 0 && (p->f20 != 0 || lbl_8035B594->tab[p->f30] != 0)) return; if (p->f1c == 0) p->v6(); }
extern "C" {

} /* extern "C" */
