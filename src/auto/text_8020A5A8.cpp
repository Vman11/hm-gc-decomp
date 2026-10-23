// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct I8020A5A8 { u32 a, b, c; } I8020A5A8;
typedef struct E8020A5A8 { u32 entry; s32 isDir; char *name; } E8020A5A8;
extern char lbl_803657D8[2];
extern char lbl_803657DC[4];
extern const u32 lbl_803657E8;
extern char lbl_802A69C8[];
extern char lbl_802A6A20[];
void fn_80207E5C(u8 *p);
void fn_80210CFC(char *dst, u8 *src);
s32 fn_800BD044(char *path);
s32 fn_800BD900(char *dir, I8020A5A8 *it);
s32 fn_800BD9C0(I8020A5A8 *it, E8020A5A8 *e);
s32 fn_800BDA64(I8020A5A8 *it);
void fn_80060568(char *msg, s32 a, s32 b, s32 c);
char *strcpy(char *, const char *);
char *strstr(const char *, const char *);
int strcmp(const char *, const char *);

static inline s32 isdir8020A5A8(char *dir, char *name) {
    I8020A5A8 it;
    E8020A5A8 ent;
    if (fn_800BD900(dir, &it)) {
        while (fn_800BD9C0(&it, &ent)) {
            if (strcmp(ent.name, name) == 0) return ent.isDir;
        }
        if (!fn_800BDA64(&it)) fn_80060568(lbl_802A69C8, 0, 0, 0);
    } else {
        fn_80060568(lbl_802A6A20, 0, 0, 0);
    }
    return 0;
}

s32 fn_8020A5A8(u8 *p, s32 a, u32 *out) {
    char path[256];
    char buf[256];
    char *name;
    char *dir;
    char *r;
    *out = 0;
    fn_80207E5C(p);
    fn_80210CFC(path, p + 128);
    if (fn_800BD044(path) == -1) return 1;
    strcpy(buf, path);
    dir = buf;
    r = strstr(dir, lbl_803657D8);
    name = r;
    if (r == 0) {
        name = dir;
        dir = lbl_803657DC;
    } else {
        while ((r = strstr(name + 1, lbl_803657D8)) != 0) name = r;
        *name = 0;
        name++;
    }
    if (isdir8020A5A8(dir, name)) *out |= lbl_803657E8;
    return 0;
}

} /* extern "C" */
