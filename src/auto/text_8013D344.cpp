// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 b[68]; } T68;
typedef struct { u8 pad[6996]; u32 idx[255]; T68 arr[1]; } S;
s32 fn_8013CFCC(void *);
void fn_801F37B0(void *);
void fn_801F3A88(void *, void *);
void fn_801F3990(void *, void *, void *, void *);
void fn_801F384C(void *, void *, void *, void *, void *, void *);

BOOL fn_8013D344(u8 *p) {
    u32 i2;
    u8 *t2;
    u8 *t;
    u32 i;
    while (fn_8013CFCC(p) != 0) {
    }
    if (*(s32 *)(p + 56) != 0) {
        return FALSE;
    }
    if (*(void **)(p + 26384) != NULL) {
        if (*(s32 *)(p + 6980) != 0) {
            for (t = p, i = 0; i < *(u32 *)(p + 26408); t += 4, i++) {
                fn_801F37B0(&((S *)p)->arr[*(u32 *)(t + 6996)]);
                fn_801F3A88(&((S *)p)->arr[*(u32 *)(t + 6996)], p);
            }
        } else {
            for (t2 = p, i2 = 0; i2 < *(u32 *)(p + 26408); t2 += 4, i2++) {
                fn_801F3A88(&((S *)p)->arr[*(u32 *)(t2 + 6996)], p);
            }
        }
        switch (*(s32 *)(p + 26408)) {
        case 3:
            fn_801F384C(&((S *)p)->arr[((S *)p)->idx[0]], &((S *)p)->arr[((S *)p)->idx[1]], &((S *)p)->arr[((S *)p)->idx[2]], *(void **)(p + 44), *(void **)(p + 52), *(void **)(p + 48));
            break;
        case 1:
            fn_801F3990(&((S *)p)->arr[((S *)p)->idx[0]], *(void **)(p + 44), *(void **)(p + 52), *(void **)(p + 48));
            break;
        case 2:
            break;
        }
    }
    return TRUE;
}

} /* extern "C" */
