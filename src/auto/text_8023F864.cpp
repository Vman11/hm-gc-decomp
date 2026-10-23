// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a; s32 b; char name[12]; } Entry_8023F864;
typedef struct { f32 x, y, z; } Vec_8023F864;
struct V_8023F864 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void get(Vec_8023F864 *, s32, s32, s32, s32);
};
extern u8 lbl_803286D0[];
extern const char lbl_80366138[1];
extern const u32 lbl_80366140;
extern const u32 lbl_80366148;
s32 fn_800F6CD0(char *, const char *);
void *fn_8019556C(void *);
void fn_80190604(void *, void *, char *);
void fn_801907D8(void *);
void fn_80190C98(void *);

void fn_8023F864(u8 *p, s32 idx) {
    Vec_8023F864 v;
    void **arr;
    u8 *obj;
    u8 *q;
    Entry_8023F864 e = (*(Entry_8023F864 **)(p + 268))[idx];

    arr = *(void ***)(p + 272);
    if (arr[idx] != 0) {
        if (e.b == 0) {
            if (fn_800F6CD0(e.name, lbl_80366138) == 0) {
                fn_80190604(arr[idx], fn_8019556C(*(void **)(*(u8 **)(p + 224) + 160)), e.name);
            } else {
                fn_801907D8(arr[idx]);
            }
            (*(V_8023F864 **)(p + 224))->get(&v, 0, 0, 0, 0);
            obj = (u8 *)arr[idx];
            q = *(u8 **)(obj + 48);
            if (q != 0) {
                (*(void (**)(void *, Vec_8023F864 *))(lbl_803286D0 + 12))(*(void **)(q + 16), &v);
                *(u32 *)(q + 32) |= lbl_80366140;
                fn_80190C98(obj);
            }
        }
        if (*(volatile u32 *)((u8 *)arr[idx] + 152) & 1) {
            *(u32 *)((u8 *)arr[idx] + 152) |= lbl_80366148;
        }
        arr[idx] = 0;
    }
}

} /* extern "C" */
