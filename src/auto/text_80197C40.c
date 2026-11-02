// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { f32 x, y, z; } V3;
typedef struct S { u32 flags; V3 a; V3 b; V3 *pa; V3 *pb; V3 a2; V3 b2; V3 c1; V3 c2; u8 q[0x70 - 0x54]; void *owner; } S;
typedef struct { u8 p[0xa8]; void *fa8; } O;
extern u32 lbl_80364C58;
extern O *lbl_8035AE40;
void fn_801A435C(void *, O *, S *);
static inline void cp(V3 *d, V3 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }
void fn_80197C40(O *o, S *s) {
    if (o == s->owner) return;
    if (s->flags & 8) {
        cp(&s->c1, s->pa);
        cp(&s->c2, s->pb);
        cp(&s->a2, &s->a);
        cp(&s->b2, &s->b);
        s->flags &= ~8;
        s->flags |= lbl_80364C58;
    }
    s->pa = &s->a;
    s->pb = &s->b;
    lbl_8035AE40 = o;
    fn_801A435C(o->fa8, o, s);
}
