// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern s32 lbl_8035AE8C;
extern const u32 lbl_80364A68;
void fn_8021EFD8(void);
void fn_8021EDC4(void *, void *);

void fn_8018B830(void *p, void *q) {
    u32 old;
    u32 count;
    u8 **link;
    u8 *it;
    u8 *end;
    count = 0;
    link = (u8 **)((u8 *)p + 60);
    it = F(p, u8 *, 52);
    end = it + F(p, s32, 20) * 152;
    for (; it < end; it += 152) {
        lbl_8035AE8C++;
        old = F(it, u32, 132);
        fn_8021EFD8();
        fn_8021EDC4(q, it);
        if (F(it, u32, 132) != 0 && old == 0) {
            *link = it;
            link = (u8 **)(it + 148);
            F(it, u8 *, 148) = 0;
        }
        if (F(it, u32, 132) >= F(it, u32, 116)) {
            count++;
        }
    }
    if (count == F(p, u32, 20)) {
        F(p, u32, 24) |= lbl_80364A68;
    }
}

} /* extern "C" */
