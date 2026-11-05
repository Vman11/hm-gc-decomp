#include "common.h"
extern "C" {
struct Ob { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual int ok(); };
struct Grp { u32 n; u8 pad4[20]; Grp *next; u8 pad28[4]; };
struct Set { u8 pad[28]; int ng; u8 pad32[8]; Grp *g; };
struct Key { u8 d[8]; };
struct It { Set *s; Grp *g; Grp *cur; u32 idx; int filt; Key k; };
void fn_8023BD14(Key *, void *);
int fn_8023C9FC(Set *, Key *);
Ob *fn_8023A490(Grp *, u32);
static inline Ob *get(It *it) { return it->cur ? fn_8023A490(it->cur, it->idx) : 0; }
void fn_8023C528(It *it, void *key) {
    it->idx = 0;
    it->cur = 0;
    if (key) {
        int g;
        fn_8023BD14(&it->k, key);
        it->filt = 1;
        g = fn_8023C9FC(it->s, &it->k);
        if (g == -1) return;
        it->cur = it->s->g + g;
        it->g = 0;
    } else {
        it->filt = 0;
        it->cur = it->g = it->s->g;
    }
    if (get(it) && get(it)->ok()) return;
    if (!it->cur) return;
    do {
        it->idx++;
        if (it->idx >= it->cur->n) {
            if (it->cur->next) {
                it->cur = it->cur->next;
                it->idx = 0;
            } else {
                if (!it->g) { it->cur = 0; return; }
                it->cur = it->g + 1;
                it->g = it->cur;
                if (it->filt || it->cur - it->s->g >= it->s->ng) { it->cur = 0; return; }
                it->idx = 0;
            }
        }
    } while (!get(it) || !get(it)->ok());
}
}
