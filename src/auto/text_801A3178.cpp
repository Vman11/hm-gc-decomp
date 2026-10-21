// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801FC7F8(void *);
void fn_801FD4BC(void *);
void fn_801FDB5C(void *);
void fn_801FB640(void *);
void fn_800F931C(void *);
void fn_800F9BB4(void *);
extern void *lbl_8035A9F8;
extern void *lbl_8035AA00;

void fn_801A3178(void *p, void **q) {
    if (q[5] != 0) {
        fn_801FC7F8(q[5]);
    } else {
        fn_801FC7F8(q[1]);
    }
    if (q[9] != 0) {
        fn_801FD4BC(q[9]);
    } else {
        fn_801FD4BC(q[1]);
    }
    if (q[8] != 0) {
        fn_801FDB5C(q[8]);
    } else {
        fn_801FDB5C(q[1]);
    }
    if (q[7] != 0) {
        fn_801FB640(q[7]);
    } else {
        fn_801FB640(q[1]);
    }
    if (lbl_8035A9F8 == 0) {
        if (q[10] != 0) {
            fn_800F931C(q[10]);
        } else {
            fn_800F931C(q[1]);
        }
    }
    if (lbl_8035AA00 == 0) {
        if (q[11] != 0) {
            fn_800F9BB4(q[11]);
        } else {
            fn_800F9BB4(q[1]);
        }
    }
}

} /* extern "C" */
