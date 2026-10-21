// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Elem800FC9FC {
    u8 pad0[116];
    u32 f74;
    u8 pad78[12];
    u32 f84;
    struct Elem800FC9FC *next;
    u8 pad8c[4];
} Elem800FC9FC;

typedef struct {
    u8 pad0[4];
    Elem800FC9FC *arr;
    u8 pad8[12];
    u32 count;
    u32 flags;
    Elem800FC9FC *head;
} Mgr800FC9FC;

extern const u32 lbl_80363710;
void fn_8021EFD8(void);
void fn_8021EDC4(void *, Elem800FC9FC *);

void fn_800FC9FC(Mgr800FC9FC *m, void *arg) {
    u32 prev;
    u32 n = 0;
    Elem800FC9FC **tail = &m->head;
    Elem800FC9FC *e = m->arr;
    Elem800FC9FC *end = e + m->count;
    for (; e < end; e++) {
        prev = e->f84;
        fn_8021EFD8();
        fn_8021EDC4(arg, e);
        if (e->f84 != 0 && prev == 0) {
            *tail = e;
            tail = &e->next;
            e->next = 0;
        }
        if (e->f84 >= e->f74) n++;
    }
    if (n == m->count) m->flags |= lbl_80363710;
}

} /* extern "C" */
