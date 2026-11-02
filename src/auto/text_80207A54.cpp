// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {
char *strcpy(char *, const char *);
char *strrchr(const char *, int);
unsigned long strlen(const char *);
extern const char lbl_803657B0[8];
extern const char lbl_803657AF[1];
}
struct PathObj_80207A54 {
    u8 pad[128];
    u8 buf[536];
    u8 paths[8][128];
    s32 count;
};

void fn_80207A54(PathObj_80207A54 *o, char *path) {
    s32 i;
    char *s;
    u32 len;

    strcpy((char *)o->buf, path);
    for (i = 0; path[i] != 0; i++) {
        if (path[i] == '/') {
            o->buf[i] = '\\';
        }
    }
    s = strrchr((char *)o->buf, '\\');
    if (s != NULL) {
        *s = 0;
        if (o->count < 7) {
            len = strlen((char *)o->buf);
            o->count++;
            strcpy((char *)o->paths[o->count], (char *)o->buf);
            if (len != 0 && o->buf[len - 1] != '\\') {
                o->paths[o->count][len] = '\\';
                o->paths[o->count][len + 1] = 0;
            }
        }
    } else if (o->count < 7) {
        len = strlen(lbl_803657B0);
        o->count++;
        strcpy((char *)o->paths[o->count], lbl_803657B0);
        if (len != 0 && lbl_803657AF[len] != '\\') {
            o->paths[o->count][len] = '\\';
            o->paths[o->count][len + 1] = 0;
        }
    }
}

} /* extern "C" */
