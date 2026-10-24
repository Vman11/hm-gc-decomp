// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct Key { u32 a, b; };
struct Obj {
    u8 pad[20]; char name[16]; s32 i36; s32 i40; u8 pad2[4]; s32 i48; s32 i52; u8 pad3[4];
    char s60[8]; char s68[8]; f32 f76; u8 pad4[8]; u32 n; Key *keys; s32 *types; f32 *vals; s32 *a104; void **objs;
};
extern char lbl_80366398[4];
extern u32 lbl_8035B570;
extern void *lbl_8035B594;
void fn_800F6E88(char *d, char *s);
s32 fn_800F6CD0(char *a, char *b);
s32 fn_800FB33C(void *r);
void fn_800FB000(void *r, s32 c);
u32 fn_800FADA8(void *r);
void fn_800FB064(void *r, Key *k);
f32 fn_800FB2E0(void *r);
void fn_800FAEA0(void *r);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
void *fn_8024E69C(void *m, Key *k);
void *fn_8024E57C(void *m, Key *k);
void *fn_8024E3DC(void *m, Key *k, u32 *out);
void fn_8023D1BC(Obj *o);

void fn_8024BB70(Obj *o, void *r, char *name, s32 a, f32 f, char *s1, char *s2, s32 b) {
    u32 i;
    fn_800F6E88(o->name, name);
    o->f76 = f;
    o->i36 = a;
    fn_800F6E88(o->s60, s1);
    fn_800F6E88(o->s68, s2);
    if (fn_800F6CD0(o->s60, lbl_80366398)) {
        o->i52 = 0;
    } else {
        o->i52 = 1;
    }
    o->i48 = b;
    o->i40 = 1;
    if (fn_800FB33C(r) == 0) o->i40 = 0;
    fn_800FB000(r, 58);
    o->n = fn_800FADA8(r);
    if (o->n) {
        if (lbl_8035B570 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        o->keys = new Key[o->n];
        fn_800F7E98();
        if (o->keys == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035B570 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        o->types = new s32[o->n];
        fn_800F7E98();
        if (o->types == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035B570 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        o->objs = new void *[o->n];
        fn_800F7E98();
        if (o->objs == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035B570 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        o->vals = new f32[o->n];
        fn_800F7E98();
        if (o->vals == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035B570 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B570);
        o->a104 = new s32[o->n];
        fn_800F7E98();
        if (o->a104 == 0) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < o->n; i++) {
            fn_800FB064(r, &o->keys[i]);
            o->types[i] = fn_800FB33C(r);
            o->vals[i] = fn_800FB2E0(r);
            switch (o->types[i]) {
            case 1:
                o->objs[i] = fn_8024E69C(lbl_8035B594, &o->keys[i]);
                break;
            case 2:
                o->objs[i] = fn_8024E57C(lbl_8035B594, &o->keys[i]);
                break;
            case 3: {
                u32 tmp;
                o->objs[i] = fn_8024E3DC(lbl_8035B594, &o->keys[i], &tmp);
                break;
            }
            }
        }
    }
    fn_800FAEA0(r);
    fn_8023D1BC(o);
}
}

} /* extern "C" */
