// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B58 { u8 pad[0x58]; };
struct O40 : B58 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); };
struct O40d { s32 f0; u8 p4[0x50 - 4]; s32 f50; };
struct S40 { O40 *obj; u32 key; };
struct P40 { u8 pad[0x48]; S40 s[40]; u32 cur; };
static inline s32 Find(P40 *p, s32 *idx) {
    u32 start = p->cur;
    u32 i;
    for (i = (start + 1) % 40; i != start; i = (i + 1) % 40) {
        if (p->s[i].key == 0) {
            O40 *o = p->s[i].obj;
            if ((((O40d *)o)->f0 & 1) == 1) o->a8();
            *idx = i;
            p->cur = i;
            return 1;
        }
    }
    return 0;
}
void fn_8026ABCC(P40 *p, u32 k, s32 *idx, s32 v) {
    if (p->s[*idx].key != k) {
        if (Find(p, idx)) p->s[*idx].key = k;
    }
    if (p->s[*idx].key == k) ((O40d *)p->s[*idx].obj)->f50 = v;
}

} /* extern "C" */
