// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Name8003C778 { u32 v[2]; };
struct Key8003C778 { u32 v[2]; };
struct Mgr8003C778 {
    u8 pad[192];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void Get(Key8003C778 *k, s32 a);
    virtual void v4();
    virtual s32 Index(Key8003C778 *k);
};
struct Tbl8003C778 { u8 pad[20]; };
struct S8003C778 {
    u8 pad[740];
    Tbl8003C778 tbls[31];
    u32 *bases[31];
    u32 counts[31];
};
struct Obj8003C778 { u8 pad[140]; u8 name[8]; };
extern "C" {
extern Mgr8003C778 *lbl_8035B684;
void fn_800F6E88(Name8003C778 *dst, void *src);
u32 *fn_800F8274(Tbl8003C778 *t, Name8003C778 *name);
void fn_800F87F0(Tbl8003C778 *t, Name8003C778 *name, u32 *p);

bool fn_8003C778(S8003C778 *self, Obj8003C778 *obj, u32 **out) {
    Name8003C778 name;
    Key8003C778 key;
    s32 k;
    bool found;
    Tbl8003C778 *tbl;
    fn_800F6E88(&name, obj->name);
    *out = 0;
    lbl_8035B684->Get(&key, -1);
    k = lbl_8035B684->Index(&key);
    tbl = &self->tbls[k];
    *out = fn_800F8274(tbl, &name);
    found = (*out != 0);
    if (*out == 0) {
        *out = &self->bases[k][self->counts[k]];
        fn_800F87F0(tbl, &name, *out);
        self->counts[k]++;
    }
    return found;
}

} /* extern "C" */
