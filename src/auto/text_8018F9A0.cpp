// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V8018F9A0 {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32 code);
};
extern u32 lbl_80364B18;
void fn_800FB064(V8018F9A0 *r, char *buf);
void *fn_800F9398(void *a, char *b);
void *fn_800F9788(void *a, char *b, char *c);
void fn_80191484(void **p, u8 *q, V8018F9A0 *r);

void fn_8018F9A0(void **p, u8 *q, V8018F9A0 *r, s32 cmd) {
    char name[8];
    char path[16];
    void *res;
    switch (cmd) {
    case 106:
        M2C_FIELD(p, u32 *, 0) |= lbl_80364B18;
        break;
    case 107:
        M2C_FIELD(p, u32 *, 0) &= ~0x800;
        break;
    case 62:
        fn_800FB064(r, path);
        fn_800FB064(r, name);
        if (name == 0 || name[0] == 0) {
            res = fn_800F9398(q + 204, path);
        } else {
            res = fn_800F9788(q + 228, name, path);
        }
        p[27] = res;
        if (p[27] == 0) r->v4(37);
        break;
    default:
        fn_80191484(p, q, r);
        break;
    }
}

} /* extern "C" */
