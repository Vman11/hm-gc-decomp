// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035BDB8;
extern void *lbl_8035A074;
extern u8 *lbl_8035A1DC;
extern u8 lbl_8029484C[];
void fn_80254030(void *);
void fn_8012ACAC(void *, void *, void *, s32, s32);
void fn_8003B5F8(void *, void *);
void fn_8018182C(void *, void *, void *, s32);
void *fn_80253B70(void *, void *);
void fn_80180BA8(void *, void *);
void fn_80254990(void *, void *, void *);
void fn_80033714(void);

void fn_80033754(u8 *p) {
    fn_80254030(p);
    fn_8012ACAC(*(void **)(p + 0x10), *(void **)(p + 0x20), &lbl_8035BDB8, 1, 0);
    fn_8003B5F8(lbl_8035A074, lbl_8029484C);
    fn_8018182C(*(void **)(p + 0x14), *(void **)(p + 0x18), &lbl_8035BDB8, 1);
    *(void **)(p + 0xC) = fn_80253B70(p, *(void **)(p + 0x14));
    fn_80180BA8(*(void **)(p + 0x14), *(void **)(p + 0xC));
    fn_80180BA8(*(void **)(lbl_8035A1DC + 0x33D8), *(void **)(p + 0xC));
    fn_80180BA8(*(void **)(lbl_8035A1DC + 0x33D0), *(void **)(p + 0xC));
    fn_80254990(p, *(void **)(lbl_8035A1DC + 0x33D8), (void *)fn_80033714);
    fn_80254990(p, *(void **)(p + 0x14), (void *)fn_80033714);
}

} /* extern "C" */
