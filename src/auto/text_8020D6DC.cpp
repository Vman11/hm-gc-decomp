// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V8020D6DC {
    u8 pad[1720];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual s32 v14();
    virtual u8 *v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void *v20();
};
void fn_802148D4(void *);

s32 fn_8020D6DC(u8 *p) {
    u8 *q;
    s32 ret;
    if (((V8020D6DC *)p)->v20() != NULL) {
        if (((V8020D6DC *)p)->v14() != 0) {
            *(s32 *)(p + 2176) = -1;
            *(s32 *)(p + 2180) = -1;
            fn_802148D4(p + 1728);
            return 0;
        }
        q = ((V8020D6DC *)p)->v15();
        ret = 12;
        if (*(u32 *)(q + 8) & 2) {
            ret = 11;
        }
        return ret;
    }
    return 0;
}

} /* extern "C" */
