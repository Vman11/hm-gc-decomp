// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N1C2 {
    u8 pad[0x6c]; u32 f6c; u8 pad70[0x80 - 0x70];
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
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void upd(f32);
    u8 pad84[0x134 - 0x84]; N1C2 *f134; N1C2 *f138;
};
inline N1C2 *fn_801C1758(N1C2 *n) { return n->f138; }
inline s32 fn_801C1760(N1C2 *n) { return (n->f6c & 2) != 0; }
inline N1C2 *fn_801C176C(N1C2 *n) { return n->f134; }

void fn_801C2BB0(void *p, N1C2 *n, f32 dt) {
    if (!n) return;
    fn_801C2BB0(p, fn_801C176C(n), dt);
    fn_801C2BB0(p, fn_801C1758(n), dt);
    if (fn_801C1760(n)) n->upd(dt);
}

} /* extern "C" */
