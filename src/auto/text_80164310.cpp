// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[28]; s32 idx; u8 pad2[132]; } Elem80164310;
typedef struct { u16 count; u8 pad[6]; Elem80164310 *elems; } Entry80164310;
typedef struct { u8 pad[136]; u32 n; Entry80164310 **arr; } Table80164310;
typedef struct { u8 *obj[8]; u16 id; } Key80164310;
typedef struct { u8 pad[6844]; Table80164310 *tbl; } Self80164310;
s32 fn_8014C6F4(u8 *a, Elem80164310 *e);

Entry80164310 *fn_80164310(Self80164310 *s, Key80164310 *key) {
    Elem80164310 *e;
    Elem80164310 *end;
    u32 i;
    u16 count;
    if (s->tbl != 0) {
        for (i = 0; i < s->tbl->n; i++) {
            count = s->tbl->arr[i]->count;
            if (count != key->id) {
                continue;
            }
            e = s->tbl->arr[i]->elems;
            end = s->tbl->arr[i]->elems + count;
            for (; e < end; e++) {
                if (!fn_8014C6F4(key->obj[e->idx] + 16, e)) {
                    break;
                }
            }
            if (e >= end) {
                break;
            }
        }
        if (i < s->tbl->n) {
            return s->tbl->arr[i];
        }
    }
    return 0;
}

} /* extern "C" */
