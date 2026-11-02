// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O1 { int f0; u8 pad[0x54]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
 virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(int, f32); virtual void v23(f32, int); virtual void v24(); virtual void v25(int);
 virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(f32); virtual void v32(f32); virtual void v33(); virtual void v34(int); };
struct E1 { O1 *obj; u32 key; };
struct P1 { u8 pad[0x20]; f32 *scale; u8 pad2[0x24]; E1 ent[40]; u32 cur; };
static inline int find1(P1 *p, u32 *idx) {
    u32 start = p->cur;
    u32 i;
    for (i = (start + 1) % 40; i != start; i = (i + 1) % 40) {
        if (p->ent[i].key == 0) {
            O1 *o = p->ent[i].obj;
            if ((o->f0 & 1) == 1) o->v8();
            *idx = i;
            p->cur = i;
            return 1;
        }
    }
    return 0;
}
extern "C" void fn_8026A820(P1 *p, u32 v, u32 *idx, int a) {
    if (p->ent[*idx].key != v) {
        if (find1(p, idx)) p->ent[*idx].key = v;
    }
    if (p->ent[*idx].key == v) p->ent[*idx].obj->v25(a);
}
extern "C" {

} /* extern "C" */
