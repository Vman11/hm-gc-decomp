// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct {
    u8 pad[44];
} E80243FD8;
typedef struct {
    u8 pad[24];
    E80243FD8 *arr;
    s32 count;
} S80243FD8;
typedef struct {
    u32 f0;
    u32 f4;
} R80243FD8;
extern void *lbl_8035B308;
void fn_800FB000(R80243FD8 *r, s32 tok);
void fn_800FAFA8(R80243FD8 *r);
s32 fn_800FB33C(R80243FD8 *r);
void fn_800FAF50(R80243FD8 *r);
void fn_800FB064(R80243FD8 *r, char *buf);
E80243FD8 *fn_800F8274(S80243FD8 *s, char *name);
void fn_8024360C(E80243FD8 *e, void *a, R80243FD8 *r);
s32 fn_800FADA8(R80243FD8 *r);
void fn_800FAEA0(R80243FD8 *r);
static inline s32 idx80243FD8(S80243FD8 *s, E80243FD8 *e) {
    s32 i;
    for (i = 0; i < s->count; i++) {
        if (&s->arr[i] == e) return i;
    }
    return -1;
}
s32 fn_80243FD8(S80243FD8 *s, R80243FD8 *r) {
    s32 n2;
    s32 n1;
    s32 count;
    s32 i;
    s32 j;
    s32 k;
    s32 idx;
    char buf8[8];
    char buf16[16];
    fn_800FB000(r, 57);
    fn_800FAFA8(r);
    count = fn_800FB33C(r);
    fn_800FAF50(r);
    for (i = 0; i < count; i++) {
        fn_800FB000(r, 57);
        fn_800FB064(r, buf16);
        idx = idx80243FD8(s, fn_800F8274(s, buf16));
        r->f4 = 1;
        if (idx != -1) {
            fn_8024360C(&s->arr[idx], lbl_8035B308, r);
        } else {
            fn_800FB064(r, buf8);
            n1 = fn_800FADA8(r);
            for (j = 0; j < n1; j++) {
                fn_800FB000(r, 58);
                fn_800FB064(r, buf8);
                n2 = fn_800FADA8(r);
                if (n2 != 0) {
                    for (k = 0; k < n2; k++) {
                        fn_800FB064(r, buf8);
                    }
                }
                fn_800FAEA0(r);
            }
            fn_800FAEA0(r);
        }
    }
    return 0;
}

} /* extern "C" */
