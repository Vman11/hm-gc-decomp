// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct E80191DBC {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32 code);
};
extern "C" {

typedef struct {
    u8 pad[48];
    void *f48;
    void *f52;
} S80191DBC;

void *fn_80193B68(void *src, E80191DBC *err);
void *fn_80193A98(void *src, E80191DBC *err);

void fn_80191DBC(S80191DBC *self, void *src, E80191DBC *err, s32 type) {
    switch (type) {
    case 58:
        if (self->f48 != 0) {
            err->v4(39);
        }
        self->f48 = fn_80193B68(src, err);
        break;
    case 60:
        if (self->f52 != 0) {
            err->v4(39);
        }
        self->f52 = fn_80193A98(src, err);
        break;
    default:
        err->v4(30);
        break;
    }
}

} /* extern "C" */
