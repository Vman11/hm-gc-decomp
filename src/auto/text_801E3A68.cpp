// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Obj801E3A68 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    u8 pad4[4];
    s32 m8;
    u8 pad12[28];
    void *m40;
    char s44[8];
    char s52[8];
};
extern "C" {
void fn_801EF9A0(Obj801E3A68 *o, u8 *src);
void fn_800F6E88(char *dst, u8 *src);
void *fn_800F9398(u8 *a, char *b);
void *fn_800F9788(u8 *a, char *b, char *c);

void fn_801E3A68(Obj801E3A68 *o, u8 *src) {
    if (o->m8 != 0) {
        o->v4();
    }
    fn_801EF9A0(o, src);
    fn_800F6E88(o->s44, src + 8);
    fn_800F6E88(o->s52, src + 16);
    {
        void *r;
        u8 *m = (u8 *)o->m8;
        if (o->s52 == 0 || o->s52[0] == 0) {
            r = fn_800F9398(m, o->s44);
        } else {
            r = fn_800F9788(m + 24, o->s52, o->s44);
        }
        o->m40 = r;
    }
}

} /* extern "C" */
