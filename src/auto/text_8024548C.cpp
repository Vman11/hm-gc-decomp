// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 b[8]; } Name;
typedef struct {
    Name name;
    u32 key;
    s32 sub;
    Name name2;
    f32 val;
} Entry;
typedef struct {
    u8 pad[64];
    u32 count;
    Entry *entries;
} Self;
extern char lbl_80366264[4];
void fn_800F6E88(Name *, void *);

u32 fn_8024548C(Self *self, u32 key, s32 sub, u32 max, Name *names, f32 *vals, Name *names2) {
    Name *n1;
    f32 *v;
    Name *n2;
    u32 i;
    u32 count;
    u32 j;
    n1 = names;
    v = vals;
    n2 = names2;
    count = 0;
    for (i = 0; i < self->count; i++) {
        Entry *e = &self->entries[i];
        if (key == e->key && (sub == -1 || sub == e->sub)) {
            fn_800F6E88(n1, &e->name);
            if (vals) *v = self->entries[i].val;
            if (names2) fn_800F6E88(n2, &self->entries[i].name2);
            n1++;
            v++;
            n2++;
            count++;
        }
    }
    for (j = count; j < max; j++) fn_800F6E88(&names[j], lbl_80366264);
    return count;
}

} /* extern "C" */
