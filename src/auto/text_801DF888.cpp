// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 b[8];
} Key_801DF888;

void fn_800FB064(void *, void *);
s32 fn_800FB33C(void *);
void *fn_800F9398(void *, Key_801DF888 *);
void *fn_800F9788(void *, char *, Key_801DF888 *);
s32 fn_800F8274(void *, Key_801DF888 *);
void *fn_8019565C(void *);
void *fn_8019556C(void *);
void fn_801EB474(u8 *, void *, s32);

static inline void *find_801DF888(u8 *obj, char *name, Key_801DF888 *key)
{
    if (name == 0 || name[0] == 0) {
        return fn_800F9398(obj + 144, key);
    }
    return fn_800F9788(obj + 168, name, key);
}

void fn_801DF888(u8 *p, void *a, s32 cmd)
{
    Key_801DF888 k1;
    Key_801DF888 k2;
    Key_801DF888 key;
    char name[8];
    void *r;

    switch (cmd) {
    case 63: {
        fn_800FB064(a, &key);
        fn_800FB064(a, name);
        r = find_801DF888(*(u8 **)(*(u8 **)(p + 16) + 212), name, &key);
        if (r != 0) {
            r = fn_8019565C(r);
        }
        r = fn_8019556C(r);
        *(s32 *)(p + 36) = 0;
        *(s32 *)(p + 32) = 0;
        *(void **)(p + 32) = r;
        break;
    }
    case 64: {
        *(s32 *)(p + 40) = fn_800FB33C(a);
        fn_800FB064(a, &k1);
        fn_800FB064(a, &k2);
        *(s32 *)(p + 44) = fn_800F8274(fn_800F9398(*(u8 **)(*(u8 **)(*(u8 **)(p + 16) + 212) + 4) + 732, &k1), &k2);
        break;
    }
    case 60:
        *(s32 *)(p + 80) = 1;
        break;
    case 61:
        *(s32 *)(p + 80) = 2;
        break;
    case 62:
        *(s32 *)(p + 80) = 3;
        break;
    default:
        fn_801EB474(p, a, cmd);
        break;
    }
}

} /* extern "C" */
