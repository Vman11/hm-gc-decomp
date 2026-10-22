// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 entryNum; u32 location; u32 next; } Dir8020A71C;
typedef struct { u32 entryNum; s32 isDir; char *name; } Ent8020A71C;
extern char lbl_803657D8[2];
extern char lbl_803657DC[1];
extern char lbl_802A69C8[];
extern char lbl_802A6A20[];
void fn_80207E5C(void);
void fn_80210CFC(char *dst, u8 *src);
s32 fn_800BD044(char *path);
void strcpy(char *dst, char *src);
char *strstr(char *s, char *t);
s32 fn_800BD900(char *path, Dir8020A71C *d);
s32 fn_800BD9C0(Dir8020A71C *d, Ent8020A71C *e);
s32 fn_800BDA64(Dir8020A71C *d);
s32 strcmp(char *a, char *b);
void fn_80060568(char *fmt, s32 a, s32 b, s32 c);

s32 fn_8020A71C(u8 *p) {
    char path[264];
    char buf[256];
    Ent8020A71C ent;
    Dir8020A71C d;
    char *name;
    char *dir;
    char *next;
    s32 isDir;
    s32 ret;
    fn_80207E5C();
    fn_80210CFC(path, p + 128);
    if (fn_800BD044(path) >= 0) {
        strcpy(buf, path);
        dir = buf;
        next = strstr(dir, lbl_803657D8);
        name = next;
        if (next == 0) {
            name = dir;
            dir = lbl_803657DC;
        } else {
            while ((next = strstr(name + 1, lbl_803657D8)) != 0) name = next;
            *name = 0;
            name++;
        }
        if (fn_800BD900(dir, &d)) {
            while (fn_800BD9C0(&d, &ent)) {
                if (strcmp(ent.name, name) == 0) {
                    isDir = ent.isDir;
                    goto done;
                }
            }
            if (!fn_800BDA64(&d)) fn_80060568(lbl_802A69C8, 0, 0, 0);
        } else {
            fn_80060568(lbl_802A6A20, 0, 0, 0);
        }
        isDir = 0;
    done:
        ret = 0;
        if (isDir) ret = 3;
    } else {
        ret = 1;
    }
    return ret;
}

} /* extern "C" */
