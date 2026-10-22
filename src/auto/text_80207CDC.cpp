// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S80207CDC {
    u8 pad0[664];
    char names[8][128];
    s32 cur;
} S80207CDC;
u32 strlen(const char *s);
char *strcpy(char *d, const char *s);
char *strcat(char *d, const char *s);

s32 fn_80207CDC(S80207CDC *p, char *dst, u32 size, char *s) {
    u32 len;
    dst[0] = len = 0;
    if (s != 0) {
        len = strlen(s);
    }
    if (p->cur == -1) {
        if (len < size) {
            if (len != 0) {
                strcpy(dst, s);
            }
            return 1;
        }
        return 0;
    }
    if (len + strlen(p->names[p->cur]) < size) {
        strcpy(dst, p->names[p->cur]);
        strcat(dst, s);
        return 1;
    }
    return 0;
}

} /* extern "C" */
