// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 strlen(const char *);
char *strchr(const char *, s32);
void strcpy(void *, void *);
s32 strcmp(void *, void *);

BOOL fn_80210D54(char *a, char *b, char *c) {
    char buf[20];
    char *s;
    if (strlen(a) == 0 || strlen(b) == 0) {
        return FALSE;
    }
    strcpy(buf, a);
    s = strchr(buf, 46);
    if (s != NULL) {
        *s = 0;
        s++;
    } else {
        s = buf + strlen(buf);
    }
    if (strcmp(c, s) != 0 && *c != 42) {
        return FALSE;
    }
    if (strcmp(b, buf) != 0 && *b != 42) {
        return FALSE;
    }
    return TRUE;
}

} /* extern "C" */
