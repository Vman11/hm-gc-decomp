// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct E800F5C4C {
    u32 key;
    char *str;
};
struct B800F5C4C {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32 code);
};
struct S800F5C4C : B800F5C4C {
    u8 pad2[360 - 296];
    E800F5C4C *table;
    u32 count;
};
extern "C" {

void fn_800F9FE0(void *f, s32 c);

void fn_800F5C4C(S800F5C4C *self, u32 key) {
    u32 i;
    char *s;
    if (self->table == 0) {
        self->v4(33);
    }
    for (i = 0; i < self->count; i++) {
        if (key == self->table[i].key) {
            for (s = self->table[i].str; *s != 0; s++) {
                fn_800F9FE0(M2C_FIELD(self, void **, 0), *s);
            }
            M2C_FIELD(self, u32 *, 8) = key;
            return;
        }
    }
    self->v4(33);
}

} /* extern "C" */
