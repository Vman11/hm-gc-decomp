// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C802449C4 {
    u8 d[64];
    C802449C4();
    ~C802449C4();
};
struct V8007D04C {
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
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void set(const char *s, s32 a, s32 b, s32 c, s32 d);
};
extern const char lbl_8035F920[8];
void *fn_80242144(u8 *self, s32 n);
void fn_802448C8(C802449C4 *it, void *p);
void fn_80244750(C802449C4 *it, s32 n);
void *fn_8024457C(C802449C4 *it);
void fn_80244594(C802449C4 *it);
s32 fn_80244584(C802449C4 *it);
void fn_8007D140(u8 *self, s32 a, u32 i);

void fn_8007D04C(u8 *self) {
    u32 i;
    (*(V8007D04C **)(self + 228))->set(lbl_8035F920, 0, 0, 0, 0);
    C802449C4 it;
    fn_802448C8(&it, fn_80242144(self, 0));
    fn_80244750(&it, 0);
    for (i = 0; fn_80244584(&it) == 0 && i < *(u32 *)(self + 384); i++) {
        if (fn_8024457C(&it) == *(void **)(self + 228)) {
            fn_8007D140(self, 1, i);
            return;
        }
        fn_80244594(&it);
    }
}

} /* extern "C" */
