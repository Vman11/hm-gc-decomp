// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct Key { u32 a, b; };
struct Item { u8 pad[484]; char *name; };
struct Node { u8 pad[60]; u16 nItems; u8 pad2[2]; u16 nChildren; };
struct Obj;
extern char lbl_80366100[3];
extern char lbl_80366104[3];
extern char lbl_80366108[3];
extern char lbl_8036610C[3];
char *strcpy(char *, const char *);
char *strstr(const char *, const char *);
char *strrchr(const char *, int);
Node *fn_801AAF74(Node *, u32);
Item *fn_801AAF84(Node *, u32);
void fn_800F6FBC(char *, Key *);
void fn_800F8410(Obj *, Key *);

inline char *fn_8023E0E0(char *s, int c) { return strrchr(s, c); }
inline char *fn_8023E100(char *s, char *t) { return strstr(s, t); }
inline char *fn_8023E120(Item *it) { return it->name; }
inline u32 fn_8023E128(Node *n) { return n->nItems; }
inline u32 fn_8023E130(Node *n) { return n->nChildren; }
inline void fn_8023E6BC(Obj *o, Key *k, Item *it) {
    char buf[256];
    char *p;
    strcpy(buf, fn_8023E120(it));
    if ((p = fn_8023E100(buf, lbl_80366100)) != 0 || (p = fn_8023E100(buf, lbl_80366104)) != 0 ||
        (p = fn_8023E100(buf, lbl_80366108)) != 0 || (p = fn_8023E100(buf, lbl_8036610C)) != 0) {
        *p = 0;
    }
    p = fn_8023E0E0(buf, '\\');
    if (p) fn_800F6FBC(p + 1, k);
    else fn_800F6FBC(buf, k);
}
inline void fn_8023E138(Obj *o, Item *it) {
    Key k;
    fn_8023E6BC(o, &k, it);
    fn_800F8410(o, &k);
}

void fn_8023DD14(Obj *o, Node *n) {
    u32 i;
    for (i = 0; i < fn_8023E130(n); i++) fn_8023DD14(o, fn_801AAF74(n, i));
    for (i = 0; i < fn_8023E128(n); i++) fn_8023E138(o, fn_801AAF84(n, i));
}
}

} /* extern "C" */
