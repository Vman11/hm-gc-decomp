// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 strlen(const char *s);
char *strchr(const char *s, int c);
void strcpy(char *dst, const char *src);
s32 strncmp(const char *a, const char *b, s32 n);

s32 fn_802121C4(void *self, char *path, char *name, char *ext) {
    char buf[24];
    char *dot;
    char *e;
    if (strlen(path) == 0 || strlen(name) == 0) {
        return 0;
    }
    strcpy(buf, path);
    dot = strchr(buf, '.');
    if (dot != 0) {
        *dot = 0;
        e = dot + 1;
    } else {
        e = buf + strlen(buf);
    }
    if (strncmp(ext, e, 4) != 0 && ext[0] != '*') {
        return 0;
    }
    if (strncmp(name, buf, 8) != 0 && name[0] != '*') {
        return 0;
    }
    return 1;
}

} /* extern "C" */
