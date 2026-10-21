// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366DD4;

} /* extern "C" */

struct Item_8026BBF8 {
    u8 pad[88];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void m21(s32);
    virtual void m22(f32, s32);
};

struct List_8026BBF8 {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual Item_8026BBF8 *get1(u32);
    virtual Item_8026BBF8 *get2(u32);
};

struct O_8026BBF8 {
    u8 pad[36];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual List_8026BBF8 *list(s32);
};

extern "C" {

void fn_8026BBF8(u8 *p) {
    O_8026BBF8 *o;
    List_8026BBF8 *l;
    Item_8026BBF8 *it;
    void *v;
    u32 i;
    o = *(O_8026BBF8 **)(p + 0x18);
    if (o == 0 || *(u32 *)((u8 *)o + 0xc) == 0) {
        return;
    }
    l = o->list(0);
    for (i = 0; i < *(u32 *)(p + 0x38); i++) {
        it = l->get1(i);
        it->m22(lbl_80366DD4, 0);
        it->m21(0);
    }
    for (i = 0; i < *(u32 *)((u8 *)l + 0x18); i++) {
        v = l->get2(i);
        it = (Item_8026BBF8 *)v;
        it->m22(lbl_80366DD4, 0);
        it->m21(0);
    }
}

} /* extern "C" */
