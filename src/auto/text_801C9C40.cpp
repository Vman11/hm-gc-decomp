// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365010;

} /* extern "C" */

struct V_801C9C40 {
    u8 pad[128];
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
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void m81();
    virtual void v82();
    virtual void m83();
};

extern "C" {

#pragma opt_propagation off
void fn_801C9C40(u8 *p) {
    f32 x0, y0, x1, y1;
    f32 t;
    f32 dx;
    f32 dy;
    u8 *o;
    u32 nb;
    u32 na;
    dx = lbl_80365010;
    dy = dx;
    o = *(u8 **)(p + 0x178);
    if (o == 0) {
        return;
    }
    na = *(u32 *)(p + 0x1c0);
    nb = *(u32 *)(p + 0x1e8);
    if (na >= nb) {
        x0 = *(f32 *)(p + 0x204);
        y0 = *(f32 *)(p + 0x208);
        x1 = *(f32 *)(p + 0x20c);
        y1 = *(f32 *)(p + 0x210);
    } else {
        x0 = *(f32 *)(p + 0x48);
        y0 = *(f32 *)(p + 0x4c);
        x1 = *(f32 *)(p + 0x50);
        y1 = *(f32 *)(p + 0x54);
    }
    if (*(u32 *)(o + 0x70) != 0) {
        if (*(f32 *)(o + 0x48) < x0) {
            dx += *(f32 *)(o + 0x48) - *(f32 *)(p + 0x48);
            if (na >= nb) {
                dx -= *(f32 *)(p + 0x1ec);
            }
        } else if ((t = *(f32 *)(o + 0x50)) > x1) {
            dx += t - *(f32 *)(p + 0x50);
            if (*(f32 *)(o + 0x48) - dx < x0) {
                dx -= x0 - (*(f32 *)(o + 0x48) - dx);
            }
        }
        if (*(f32 *)(o + 0x4c) < y0) {
            dy += *(f32 *)(o + 0x4c) - *(f32 *)(p + 0x4c);
        } else if (*(f32 *)(o + 0x54) > y1) {
            dy += *(f32 *)(o + 0x54) - *(f32 *)(p + 0x54);
        }
    }
    *(f32 *)(p + 0x1d0) += dx;
    *(f32 *)(p + 0x1d4) += dy;
    ((V_801C9C40 *)p)->m81();
    ((V_801C9C40 *)p)->m83();
}
#pragma opt_propagation reset

} /* extern "C" */
