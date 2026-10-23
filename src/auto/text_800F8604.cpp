// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern const char lbl_8029CAB8[];
typedef struct { u8 pad[8]; u32 f8; } E800F8604;
typedef struct { E800F8604 *arr; u32 n; } T800F8604;
s32 fn_800F6CD0(E800F8604 *e, const s8 *key);
void fn_800F6E40(char *buf, const s8 *key);
char *strcat(char *, const char *);
void fn_80060568(char *, s32, s32, s32);
void fn_800F8FF4(T800F8604 *t);
void fn_800F6E88(E800F8604 *e, const s8 *key);

#pragma auto_inline off
void fn_800F8604(T800F8604 *t, const s8 *key, u32 val, u32 *out) {
    char buf[40];
    s32 h;
    u32 shift;
    s32 i;
    s32 start;
    u32 idx;
    h = key[0];
    shift = 7;
    for (i = 1; i < 8; i++) {
        if (key[i] == 0) break;
        h += key[i] << shift;
        shift = (shift + 7) & 31;
    }
    start = (u32)h % t->n;
    idx = start;
    while (t->arr[idx].f8 != 0) {
        if (fn_800F6CD0(&t->arr[idx], key)) {
            fn_800F6E40(buf, key);
            buf[8] = 0;
            strcat(buf, lbl_8029CAB8);
            fn_80060568(buf, 0, 0, 0);
        }
        idx++;
        if (idx >= t->n) idx = 0;
        if (idx == start) {
            fn_800F8FF4(t);
            fn_800F8604(t, key, val, out);
            return;
        }
    }
    fn_800F6E88(&t->arr[idx], key);
    if (out) *out = idx;
    t->arr[idx].f8 = val;
}
#pragma auto_inline reset

} /* extern "C" */
