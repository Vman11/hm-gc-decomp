// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct GXC { u8 r, g, b, a; };
struct Q {
    u8 pad[1132];
    bool on;
    u8 pad1133[4];
    GXC c;
    u8 pad1141[3];
    s32 mode;
    u32 a1148;
    u32 a1152;
    u32 a1156;
};
struct X { u8 pad[4]; u8 r, g, b; u8 pad7[37]; u32 fl44; };
struct E { u8 pad[16]; u32 fl; };
void fn_801576A0(Q *);
void fn_800D7CA4(int, bool, int, s32, u32, u32, u32);
void fn_800D7B78(int, GXC *);

static inline void apply(Q *q) {
    if (q->on && !q->a1148) fn_801576A0(q);
    fn_800D7CA4(0, q->on, 0, q->mode, q->a1148, q->a1152, q->a1156);
}
static inline void stop(Q *q) {
    if (!q->on) return;
    q->on = false;
    if (!q->a1148) fn_801576A0(q);
    fn_800D7CA4(0, q->on, 0, q->mode, q->a1148, q->a1152, q->a1156);
}
static inline void set(Q *q, bool on, s32 mode) {
    if ((on ? q->on : !q->on) && q->mode == mode) return;
    q->on = on;
    q->mode = mode;
    apply(q);
}

void fn_8015C998(X *x, Q *q, E *e) {
    u32 fl;
    bool v;
    u32 b;
    if (!e) {
        stop(q);
        return;
    }
    fl = e->fl;
    b = fl & 0x800;
    v = b ? 1 : ((fl >> 13) & 1) == 0;
    if (v == 0 || (x->fl44 & 0x4000)) {
        stop(q);
        return;
    }
    if (fl & 0x2000) set(q, true, 1);
    else if (b) set(q, true, 0);
    else set(q, false, 0);
    if (q->c.r != x->r || q->c.g != x->g || q->c.b != x->b) {
        GXC c;
        q->c.r = x->r;
        q->c.g = x->g;
        q->c.b = x->b;
        q->c.a = 255;
        *(u32 *)&c = *(u32 *)&q->c;
        fn_800D7B78(0, &c);
    }
}

} /* extern "C" */
