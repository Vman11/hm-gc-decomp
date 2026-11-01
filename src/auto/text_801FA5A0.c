// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct N801FA5A0 { u32 flags; u8 pad[4]; struct N801FA5A0 *next; } N801FA5A0;
typedef struct { u8 pad[0xfc]; N801FA5A0 *head; } S801FA5A0;
void fn_801FB850(N801FA5A0 *n, f32 x);
void fn_801FA5A0(S801FA5A0 *p, f32 x) {
    N801FA5A0 **pp = &p->head;
    N801FA5A0 *n;
    for (n = *pp; n != 0; n = n->next) {
        fn_801FB850(n, x);
        if ((n->flags & 0x18) == 0) *pp = n->next;
        pp = &n->next;
    }
}
