// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8024DC30 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual s32 m(); };
struct C8023C7CC { C8023C7CC(); ~C8023C7CC(); u8 *own; u8 *blk; u8 *cur; u32 idx; s32 flag; };
extern "C" {
    void fn_8023C720(void *, void *);
    void fn_8023C528(void *, char *);
    void fn_8023C3F4(void *);
    u8 *fn_8023A490(void *, u32);
    extern char lbl_80366440[8];
    extern char lbl_80366448[8];
    extern char lbl_80366450[8];
    extern char lbl_80366458[8];
    void fn_802501D4(void *); void fn_80250E80(void *);
}

static inline u8 *get_8024DC30(C8023C7CC *it) {
    return it->cur != 0 ? fn_8023A490(it->cur, it->idx) : 0;
}
struct O_8024DC30 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(s32); };

void fn_8024DC30(u8 *p) {
    C8023C7CC it;
    u32 i;
    for (i = 0; i < 2; i++) {
        if (i == 0 && ((V_8024DC30 *)p)->m() != 0) {
            fn_8023C720(&it, p);
        } else {
            fn_8023C720(&it, p + 76);
        }
        fn_8023C528(&it, lbl_80366440);
        while (it.cur != 0) {
            fn_802501D4(get_8024DC30(&it));
            fn_8023C3F4(&it);
        }
        fn_8023C528(&it, lbl_80366448);
        while (it.cur != 0) {
            fn_80250E80(get_8024DC30(&it));
            fn_8023C3F4(&it);
        }
        fn_8023C528(&it, lbl_80366458);
        while (it.cur != 0) {
            ((O_8024DC30 *)get_8024DC30(&it))->m(0);
            fn_8023C3F4(&it);
        }
    }
}

} /* extern "C" */
