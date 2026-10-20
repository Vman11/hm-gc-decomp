// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 b[68]; } T68;
typedef struct { u8 pad[6996]; u32 idx[255]; T68 arr[1]; } S;
void fn_801F59BC(void *);
void __dla__FPv(void *);
void fn_801F4430(void *);
void fn_801F59C0(void *, void *, void *);

void fn_8013D4CC(u8 *p, void *a, void *b) {
    u32 i;
    u8 *t;
    if (*(void **)(p + 4) != NULL) {
        fn_801F59BC(p);
        if (*(void **)(p + 44) != NULL) {
            __dla__FPv(*(void **)(p + 44));
    *(s32 *)(p + 44) = 0;
        }
        if (*(void **)(p + 26384) != NULL) {
            for (t = p, i = 0; i < *(u32 *)(p + 26408); t += 4, i++) {
                fn_801F4430(&((S *)p)->arr[*(u32 *)(t + 6996)]);
            }
        }
    }
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 25356) = 0;
    *(s32 *)(p + 26384) = 0;
    *(u16 *)(p + 6976) = 0;
    *(s32 *)(p + 6980) = 0;
    *(s32 *)(p + 6984) = 192;
    *(s32 *)(p + 6988) = 0;
    *(s32 *)(p + 6992) = 0;
    *(s32 *)(p + 25360) = 0;
    *(s32 *)(p + 26384) = 0;
    *(s32 *)(p + 26388) = 0;
    *(s32 *)(p + 26392) = 0;
    *(s32 *)(p + 26396) = 0;
    *(s32 *)(p + 26400) = 0;
    *(s32 *)(p + 26404) = 0;
    *(s32 *)(p + 26408) = 0;
    fn_801F59C0(p, a, b);
}
