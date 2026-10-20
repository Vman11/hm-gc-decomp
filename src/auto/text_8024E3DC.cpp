// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8024E3DC { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual s32 m(); };
struct C8023C7CC { C8023C7CC(); ~C8023C7CC(); u8 *own; u8 *blk; u8 *cur; u32 idx; s32 flag; u8 x[16]; };
extern "C" {
    void fn_8023C720(void *, void *);
    void fn_8023C528(void *, char *);
    void fn_8023C3F4(void *);
    u8 *fn_8023A490(void *, u32);
    extern char lbl_80366440[8];
    extern char lbl_80366448[8];
    extern char lbl_80366450[8];
    extern char lbl_80366458[8];
    void fn_800F6E88(void *, void *); s32 fn_800F6F00(void *, void *);
}

static inline u8 *get_8024E3DC(C8023C7CC *it) {
    return it->cur != 0 ? fn_8023A490(it->cur, it->idx) : 0;
}

u8 *fn_8024E3DC(u8 *p, char *name, u32 *out) {
    char buf[8];
    C8023C7CC it;
    u32 i;
    u8 *o;
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            if (((V_8024E3DC *)p)->m() == 0) {
                continue;
            }
            fn_8023C720(&it, p);
        } else {
            fn_8023C720(&it, p + 76);
        }
        fn_8023C528(&it, lbl_80366450);
        while (it.cur != 0) {
            o = get_8024E3DC(&it);
            fn_800F6E88(buf, o + 20);
            if (fn_800F6F00(name, buf) == 0) {
                *out = i != 0;
                return o;
            }
            fn_8023C3F4(&it);
        }
        fn_8023C528(&it, lbl_80366458);
        while (it.cur != 0) {
            o = get_8024E3DC(&it);
            fn_800F6E88(buf, o + 20);
            if (fn_800F6F00(name, buf) == 0) {
                *out = i != 0;
                return o;
            }
            fn_8023C3F4(&it);
        }
    }
    return 0;
}

} /* extern "C" */
