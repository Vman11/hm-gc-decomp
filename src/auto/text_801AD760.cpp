// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Def801AD760 { u8 pad[8]; s32 type; };
struct Obj801AD760 {
    Def801AD760 *def;
    u32 f4;
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4_();
    virtual void *Get(s32);
};
extern char lbl_80364EB8[3];
extern char lbl_80364EBC[3];
void fn_800E8F6C(char *, const char *, ...);

void fn_801AD760(u8 *p) {
    Obj801AD760 *o = *(Obj801AD760 **)(p + 40);
    switch (o->def->type) {
    case 2: {
        s32 v = *(s32 *)o->Get(0);
        if ((*(Obj801AD760 **)(p + 40))->def != 0) {
            fn_800E8F6C((char *)(p + 60), lbl_80364EB8, v);
        } else {
            fn_800E8F6C((char *)(p + 60), lbl_80364EB8, v);
        }
        break;
    }
    case 3: {
        f32 v = *(f32 *)o->Get(0);
        if ((*(Obj801AD760 **)(p + 40))->def != 0) {
            fn_800E8F6C((char *)(p + 60), lbl_80364EBC, v);
        } else {
            fn_800E8F6C((char *)(p + 60), lbl_80364EBC, v);
        }
        break;
    }
    }
}

} /* extern "C" */
