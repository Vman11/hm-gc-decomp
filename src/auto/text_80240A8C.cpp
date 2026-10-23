// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80366190[6];
extern char lbl_802A8E10[9];
void fn_800F6FBC(void *obj, char *buf);
s32 fn_800F6F00(char *a, char *b);
void *fn_80247AD4(void *a, void *b);
void fn_802635C0(void *o, void *x);
void fn_80263528(void *o, void *y);

typedef struct P80240A8C {
    u8 pad[128];
    s32 count;
    u8 pad2[192 - 132];
    u32 *objs;
    void **names;
    u8 pad3[256 - 200];
    void *f256;
    void *f260;
} P80240A8C;
void fn_80240A8C(P80240A8C *p, void *x, void *y) {
    void *o;
    s32 i;
    char buf[16];
    p->f260 = x;
    for (i = 0; i < p->count; i++) {
        fn_800F6FBC(p->names[i], buf);
        if (fn_800F6F00(buf, lbl_80366190) == 0 || fn_800F6F00(buf, lbl_802A8E10) == 0) {
            if (p->objs[i] != 0) {
                o = (void *)p->objs[i];
                fn_802635C0(o, fn_80247AD4(p->f256, p->f260));
                fn_80263528(o, y);
            }
        }
    }
}

} /* extern "C" */
