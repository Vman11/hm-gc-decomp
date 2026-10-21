// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Arr8013EA54 { u32 count; u32 *items; } Arr8013EA54;
typedef struct P8013EA54 { u8 pad0[0x78]; u8 f78[0x18]; u8 f90[4]; } P8013EA54;
extern void *lbl_8035AC80;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
u32 fn_800FADA8(void *);
void fn_800FB064(void *, char *);
u32 fn_800F9398(void *, char *);
u32 fn_800F9788(void *, char *, char *);
void fn_800FAEA0(void *);

static inline u32 Lookup(P8013EA54 *p, char *a, char *b) {
    if (a == 0 || a[0] == 0) return fn_800F9398(p->f78, b);
    return fn_800F9788(p->f90, a, b);
}

void fn_8013EA54(Arr8013EA54 *arr, P8013EA54 *p, void *st) {
    u32 i;
    char name1[8];
    char name2[8];
    if (arr->count != 0) {
        if (arr->items != 0) delete[] arr->items;
        arr->count = 0;
        arr->items = 0;
    }
    arr->count = fn_800FADA8(st);
    if (lbl_8035AC80 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC80);
    arr->items = new u32[arr->count];
    fn_800F7E98();
    if (arr->items == 0) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < arr->count; i++) {
        fn_800FB064(st, name1);
        fn_800FB064(st, name2);
        if (name1[0] == 0) {
            arr->items[i] = 0;
        } else {
            arr->items[i] = Lookup(p, name2, name1);
        }
    }
    fn_800FAEA0(st);
}

} /* extern "C" */
