// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Node { u8 pad[0x80]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();  virtual void draw(f32 x, f32 y, s32 a); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void w33(); virtual void w34();  virtual void on(s32 a); virtual void off(s32 a); };
#define FLAGS(n) (*(u32 *)((u8 *)(n) + 0x6C))
#define NEXT(n) (*(Node **)((u8 *)(n) + 0x134))
#define CHILD(n) (*(Node **)((u8 *)(n) + 0x138))
s32 fn_801BDAD0(f32 x, f32 y, Node *n);
Node *fn_801C1758(Node *n) { return CHILD(n); }
BOOL fn_801C1760(Node *n) { return FLAGS(n) & 2; }
Node *fn_801C176C(Node *n) { return NEXT(n); }

void fn_801C197C(f32 x, f32 y, s32 a, s32 b, Node *n) {
    for (; n != 0; n = fn_801C176C(n)) {
        n->draw(x, y, b);
        if (fn_801C1760(n)) {
            if (fn_801C1758(n) != 0) {
                fn_801C197C(x, y, a, b, fn_801C1758(n));
            }
            if (fn_801BDAD0(x, y, n)) {
                n->on(b);
            } else {
                n->off(b);
            }
        }
    }
}

} /* extern "C" */
