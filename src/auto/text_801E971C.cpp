// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad0[12];
    s32 type;
    u8 pad10[40 - 16];
    s8 name[8];
    void *b1;
    void *b0;
    u8 data[12];
    void *a1;
    void *a0;
} S801E971C;
typedef struct { u8 pad[168]; void *x; } G801E971C;
G801E971C *fn_8019556C(void *a);
void fn_80191360(void *a, void *b, void *c);
void *fn_8010511C(void *a, void *b);
void fn_801911DC(void *a, void *b);

static inline void *getA(S801E971C *p) { return p->a0 ? p->a0 : p->a1; }
static inline void *getB(S801E971C *p) { return p->b0 ? p->b0 : p->b1; }

void fn_801E971C(S801E971C *p) {
    if (p->type != 23) {
        if (*(u32 *)getA(p) & 0x400) {
            if (p->name[0] == 0) {
                fn_80191360(getA(p), getB(p), p->data);
            } else {
                void *x = fn_8019556C(getB(p))->x;
                fn_801911DC(getA(p), fn_8010511C(x, p->name));
            }
        }
    }
}

} /* extern "C" */
