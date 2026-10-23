// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { char name[8]; void *val; } E800F8410;
typedef struct { E800F8410 *arr; u32 n; } T800F8410;
s32 fn_800F6CD0(E800F8410 *e, const char *s);
void fn_800F87F0(T800F8410 *t, E800F8410 *e, void *val);
static inline u32 hash(const char *s) {
    u32 h;
    s32 shift;
    s32 i;
    h = s[0];
    shift = 7;
    for (i = 1; i < 8; i++) {
        if (s[i] == 0) break;
        h += s[i] << shift;
        shift = (shift + 7) & 31;
    }
    return h;
}
void fn_800F8410(T800F8410 *t, const char *s) {
    u32 h;
    E800F8410 *e;
    E800F8410 *end;
    void *v;
    h = hash(s);
    e = &t->arr[h % t->n];
    end = &t->arr[t->n];
    while (fn_800F6CD0(e, s) == 0) {
        if (e->val == 0) return;
        e++;
        if (e >= end) e = t->arr;
    }
    e->val = 0;
    e++;
    if (e >= end) e = t->arr;
    while ((v = e->val) != 0) {
        e->val = 0;
        fn_800F87F0(t, e, v);
        e++;
        if (e >= end) e = t->arr;
    }
}

} /* extern "C" */
