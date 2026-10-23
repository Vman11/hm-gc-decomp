// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 data[40];
} E8010511C;

typedef struct {
    u8 pad[28];
    u32 count;
    u8 pad2[4];
    E8010511C *arr;
} O8010511C;

extern char lbl_8029CEA8[47];
E8010511C *fn_800F8274(O8010511C *o, char *name);
void *memcpy(void *dst, const void *src, u32 n);
char *strcat(char *dst, const char *src);
void fn_80060568(char *msg, s32 a, s32 b, s32 c);

E8010511C *fn_8010511C(O8010511C *o, char *name) {
    E8010511C *r;
    char buf[64];
    r = fn_800F8274(o, name);
    if (r == 0) {
        return 0;
    }
    if (r < o->arr || r >= &o->arr[o->count]) {
        memcpy(buf, name, 8);
        buf[8] = 0;
        strcat(buf, lbl_8029CEA8);
        fn_80060568(buf, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
