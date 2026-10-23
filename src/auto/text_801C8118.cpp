// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V801C8118 {
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
    virtual s32 v17(void *self, void *a);
};
struct N801C8118 {
    V801C8118 *f0;
    s32 f4;
    N801C8118 *f8;
};
struct G801C8118 {
    u8 pad[52];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(s32 k, void *v);
};
struct B801C8118 {
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
    virtual void v81();
    virtual void v82();
};
extern "C" {
void fn_801D921C(void *self, void *a, s32 b);

s32 fn_801C8118(B801C8118 *self, void *a, s32 b) {
    u32 st = M2C_FIELD(self, u32 *, 324);
    if (st == 8 || st == 32 || st == 128 || st == 512) {
        N801C8118 *n;
        s32 fail = 0;
        for (n = M2C_FIELD(self, N801C8118 **, 136); n != 0; n = n->f8) {
            if (n->f4 != 0) {
                if (n->f0->v17(self, a) == 0) fail = 1;
            }
        }
        if (fail) return 0;
        if (M2C_FIELD(self, u32 *, 448) < M2C_FIELD(self, u32 *, 428) - 1) {
            M2C_FIELD(self, u32 *, 448) = M2C_FIELD(self, u32 *, 448) + 1;
            self->v81();
            self->v82();
        }
        if (b != 0 && M2C_FIELD(self, G801C8118 **, 112) != 0) {
            M2C_FIELD(self, G801C8118 **, 112)->v6(4, M2C_FIELD(self, void **, 104));
        }
    } else {
        fn_801D921C(self, a, b);
    }
    return 0;
}

} /* extern "C" */
