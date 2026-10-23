// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C801FA224 {
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27(s32);
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
};

void fn_80101124(void *, void *);
f32 fn_800FB2E0(void *);
void fn_801FBCC4(C801FA224 *, void *, void *);

void fn_801FA224(C801FA224 *p, void *a, void *b, s32 cmd)
{
    switch (cmd) {
    case 0x42:
        fn_80101124((u8 *)p + 92, b);
        break;
    case 0x43:
        fn_80101124((u8 *)p + 104, b);
        break;
    case 0x44:
        p->v27(1);
        break;
    case 0x45:
        p->v27(0);
        break;
    case 0x46:
        fn_80101124((u8 *)p + 116, b);
        break;
    case 0x47:
        *(f32 *)((u8 *)p + 128) = fn_800FB2E0(b);
        *(f32 *)((u8 *)p + 132) = fn_800FB2E0(b);
        break;
    case 0x48:
        fn_800FB2E0(b);
        p->v30();
        break;
    case 0x49:
        fn_800FB2E0(b);
        p->v31();
        break;
    case 0x4a:
        fn_800FB2E0(b);
        p->v32();
        break;
    default:
        fn_801FBCC4(p, a, b);
        break;
    }
}

} /* extern "C" */
