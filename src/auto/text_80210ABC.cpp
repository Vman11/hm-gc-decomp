// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Mgr80210ABC {
    u8 pad[1720];
    virtual void v0();
    virtual s32 open(char *path, u32 flags, void **out);
    virtual void v2();
    virtual void release(void *h);
};
struct Holder80210ABC {
    Mgr80210ABC *mgr;
    void *h;
    void close() {
        if (h != 0) {
            mgr->release(h);
        }
        mgr = 0;
        h = 0;
    }
};
extern void *lbl_8035B1C0;
extern const char lbl_80365840[2];
void fn_800EB764(char *dst, char *src);
char *fn_800EB4C8(char *s, s32 c);
void fn_800EB6F4(char *dst, const char *src);
Mgr80210ABC *fn_8021616C(void *a);
s32 fn_802160B8(void *a, char *path, Mgr80210ABC **out);

s32 fn_80210ABC(Holder80210ABC *self, char *src, char *ext, u32 flags) {
    Mgr80210ABC *m;
    Mgr80210ABC *tmp;
    char path[128];
    char *p;
    fn_800EB764(path, src);
    p = fn_800EB4C8(path, '\\');
    if (p == 0) {
        p = path;
    }
    if (fn_800EB4C8(p, '.') == 0) {
        fn_800EB6F4(path, lbl_80365840);
        fn_800EB6F4(path, ext);
    }
    if (flags & 1) {
        tmp = fn_8021616C(lbl_8035B1C0);
    } else if (fn_802160B8(lbl_8035B1C0, path, &tmp) != 0) {
        return 1;
    }
    m = tmp;
    if (self->h != 0) {
        self->close();
    }
    self->mgr = m;
    return self->mgr->open(path, flags, &self->h);
}

} /* extern "C" */
