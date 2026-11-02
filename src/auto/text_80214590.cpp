// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { char *strcpy(char *, const char *); unsigned long strlen(const char *); char *strchr(const char *, int); char *strrchr(const char *, int); }
extern u8 lbl_802E07C8[256];
struct R { u8 pad[4]; int f4; };
struct H28 { u8 pad[1764]; void *f1764; };
struct A { u8 pad[4]; u8 f4[24]; H28 *f28; u8 pad32[8]; u8 f40[4]; };
int fn_80212548(void *, char *);
int fn_8021263C(void *, char *);
void *fn_80212998(void *, int, void *);
void fn_80212DA4(void *, void *);
R *fn_80212910(void *, int, int);
static inline void lower2(char *p, u32 len);
static inline void lower(char *s) {
    u32 len = strlen(s);
    for (u32 i = 0; i < len; i++) {
        int c = s[i];
        s[i] = (c == -1) ? -1 : lbl_802E07C8[(u8)c];
    }
}
static inline void lower2(char *p, u32 len) {
    for (u32 i = 0; i < len; i++) {
        int c = *p;
        *p = (c == -1) ? -1 : lbl_802E07C8[(u8)c];
        p++;
    }
}
int fn_80214590(A *a, const char *path) {
    char buf[268];
    char dir[268];
    void *dp;
    char *d;
    char *cur;
    char *name;
    strcpy(buf, path);
    char *s = strrchr(buf, '\\');
    if (s) {
        name = s + 1;
        *s = 0;
        d = buf;
    } else {
        name = buf;
        d = 0;
    }
    if (!name) return -1;
    lower(name);
    int h;
    int e;
    char *ext = strchr(name, '.');
    if (ext) {
        *ext = 0;
        e = fn_80212548(a->f4, ext + 1);
    } else {
        e = 0;
    }
    h = fn_8021263C(a->f4, name);
    if (h < 0 || e < 0) return -1;
    if (!d) {
        dp = a->f40;
    } else {
        strcpy(dir, d);
        lower2(dir, strlen(d));
        cur = dir;
        dp = a->f40;
        while (strlen(cur)) {
            char *sep = strchr(cur, '\\');
            if (sep) *sep = 0;
            int k = fn_8021263C(a->f4, cur);
            if (k < 0) {
                dp = 0;
                break;
            }
            dp = fn_80212998(dp, k, a->f28->f1764);
            if (!dp) {
                dp = 0;
                break;
            }
            if (!sep) *cur = 0;
            else cur = sep + 1;
        }
    }
    if (!dp) return -1;
    fn_80212DA4(dp, a->f28->f1764);
    R *r = fn_80212910(dp, h, e);
    if (r == 0) return -1;
    else return r->f4;
}

} /* extern "C" */
