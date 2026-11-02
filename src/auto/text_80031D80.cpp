// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N {
    u8 pad[124];
    u16 c124;
    u8 pad126[28];
    u16 c154;
    u8 pad156[8];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void *item(u32);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual N *child(u32);
};
struct Q { u8 pad[36]; u32 v36; };
void *fn_800F8274(void *, char *);
inline u32 fn_80032098(N *n) { return n->c124; }
inline u32 fn_80032068(N *n) { return n->c154; }
inline void fn_80032070(void *q, u32 v) { ((Q *)q)->v36 = v; }
inline void *fn_80032078(void *o, char *s) { return fn_800F8274(o, s); }

void fn_80031D80(void *self, N *n, char *name, u32 v) {
    if (n) {
        u32 cnt = fn_80032098(n);
        u32 i;
        for (i = 0; i < cnt; i++) {
            void *o = n->item(i);
            if (o) {
                void *q = fn_80032078(o, name);
                if (q) fn_80032070(q, v);
            }
        }
        cnt = fn_80032068(n);
        for (i = 0; i < cnt; i++) fn_80031D80(self, n->child(i), name, v);
    }
}

} /* extern "C" */
