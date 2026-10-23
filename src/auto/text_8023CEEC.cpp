// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 data[40];
} E40_8023CEEC;

typedef struct {
    u8 data[52];
} E52_8023CEEC;

typedef struct {
    u8 pad[28];
    u32 n1;
    u32 n2;
    E40_8023CEEC *arr1;
    E52_8023CEEC *arr2;
} O8023CEEC;

void fn_80103CA0(void *a, void *b);

static inline void *Get8023CEEC(O8023CEEC *o, u32 i) {
    if (i < o->n1) {
        return &o->arr1[i];
    }
    return &o->arr2[i - o->n1];
}

static inline u32 Count8023CEEC(O8023CEEC *o) {
    return o->n1 + o->n2;
}

void fn_8023CEEC(O8023CEEC *a, O8023CEEC *b) {
    u32 i;
    u32 n;
    n = Count8023CEEC(b);
    for (i = 0; i < n; i++) {
        fn_80103CA0(Get8023CEEC(a, i), Get8023CEEC(b, i));
    }
}

} /* extern "C" */
