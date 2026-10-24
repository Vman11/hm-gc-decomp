// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct DirEnt { s32 ent; s32 isDir; char *name; };
struct Dir { u8 pad[12]; };
struct Info { u8 pad[52]; u32 len; u8 pad2[4]; };
struct C8020F398 { u8 pad[20]; C8020F398(); };
extern char lbl_802A69C8[];
extern char lbl_803657E0[2];
extern char lbl_803657E4[2];
extern u32 lbl_8035A9F4;
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
char *strstr(const char *, const char *);
u32 strlen(const char *);
char *fn_80207CB4(char *);
void fn_80210CFC(char *, char *);
s32 fn_800BD900(char *, Dir *);
s32 fn_800BD9C0(Dir *, DirEnt *);
s32 fn_800BDA64(Dir *);
s32 fn_80210D54(char *, char *, char *);
void fn_80060568(char *, s32, s32, s32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
void fn_8020EFE4(C8020F398 *, u32, u32);
void fn_8020EA90(C8020F398 *, u32, char *);
void fn_8020EBB0(C8020F398 *, u32, s32);
void fn_8020EC24(C8020F398 *, u32, char *);
s32 fn_800BD338(s32, Info *);
void fn_8020ED44(C8020F398 *, u32, u32);
s32 fn_800BD474(Info *);
void fn_8020EDB8(C8020F398 *, u32, s32);
void __dt__9C8020F398Fv(C8020F398 *, s32);

C8020F398 *fn_8020A250(char *name, char *filter) {
    char *str = lbl_802A69C8;
    Dir dir;
    DirEnt e;
    Info info;
    char buf[32];
    char path[256];
    char path2[256];
    u32 nf, nd;
    C8020F398 *obj;
    strcpy(path, name);
    strcat(path, fn_80207CB4(name));
    fn_80210CFC(path2, path);
    if (fn_800BD900(path2, &dir)) {
    if (filter == 0) {
        strcpy(buf, lbl_803657E0);
        filter = buf;
    } else {
        char *p;
        strcpy(buf, filter);
        p = strstr(filter, lbl_803657E4);
        if (p == 0) {
            filter = buf + strlen(buf);
        } else {
            *p = 0;
            filter = p + 1;
        }
    }
    nf = 0;
    nd = 0;
    while (fn_800BD9C0(&dir, &e)) {
        if (fn_80210D54(e.name, buf, filter)) {
            if (e.isDir) nd++;
            else nf++;
        }
    }
    if (!fn_800BDA64(&dir)) {
        fn_80060568(str + 172, 0, 0, 0);
        return 0;
    }
    if (!fn_800BD900(path2, &dir)) {
        fn_80060568(str + 264, 0, 0, 0);
        return 0;
    }
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    obj = new C8020F398;
    fn_800F7E98();
    if (obj == 0) fn_800604C4(-4, 0, 0, 0);
    fn_8020EFE4(obj, nf, nd);
    nf = 0;
    nd = nf;
    while (fn_800BD9C0(&dir, &e)) {
        if (fn_80210D54(e.name, buf, filter)) {
            if (e.isDir) {
                fn_8020EA90(obj, nd, e.name);
                fn_8020EBB0(obj, nd, 1);
                nd++;
            } else {
                fn_8020EC24(obj, nf, e.name);
                if (!fn_800BD338(e.ent, &info)) {
                    fn_80060568(str + 352, 0, 0, 0);
                    __dt__9C8020F398Fv(obj, 1);
                    return 0;
                }
                fn_8020ED44(obj, nf, info.len);
                if (!fn_800BD474(&info)) {
                    fn_80060568(str + 448, 0, 0, 0);
                    __dt__9C8020F398Fv(obj, 1);
                    return 0;
                }
                fn_8020EDB8(obj, nf, 0);
                nf++;
            }
        }
    }
    if (!fn_800BDA64(&dir)) {
        fn_80060568(str + 172, 0, 0, 0);
        __dt__9C8020F398Fv(obj, 1);
        obj = 0;
    }
    return obj;
    }
    fn_80060568(str + 264, 0, 0, 0);
    return 0;
}
}

} /* extern "C" */
