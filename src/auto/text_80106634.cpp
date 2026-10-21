// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S80 {
    u8 pad0[8];
    struct S80 *link;
    u8 pad1[36];
    f32 a[4];
    f32 b[4];
} S80;

void fn_80106120(S80 *);
void fn_80105F54(S80 *);
void fn_801003A8(f32 *, f32 *, f32 *);

void fn_80106634(void *p) {
    S80 *it;
    S80 *end;
    S80 *base;
    f32 q[4];

    fn_80106120(M2C_FIELD(p, S80 **, 40));
    it = M2C_FIELD(p, S80 **, 40);
    end = it + M2C_FIELD(p, s32 *, 36);
    for (; it < end; it++) {
        fn_80105F54(it);
    }
    base = M2C_FIELD(p, S80 **, 40);
    base->a[0] = base->b[0];
    base->a[1] = base->b[1];
    base->a[2] = base->b[2];
    base->a[3] = base->b[3];
    for (it = M2C_FIELD(p, S80 **, 40) + 1; it < end; it++) {
        S80 *l = it->link;
        q[0] = -l->b[0];
        q[1] = -l->b[1];
        q[2] = -l->b[2];
        q[3] = l->b[3];
        fn_801003A8(it->a, it->b, q);
    }
}

} /* extern "C" */
