// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *q, char *buf);
u32 fn_800F9398(u8 *tab, char *name);
u32 fn_800F9788(u8 *tab, s8 *grp, char *name);
void fn_801EB474(u8 *p, void *q);

void fn_801EB698(void);
void __dt__9C801EF5D0Fv(void);
void fn_801EF524(void);
void fn_801EF504(void);
void fn_801EF1A8(void);
void fn_801EB764(void);
void fn_801EB738(void);
void fn_801EB728(void);
void fn_801EF3A0(u8 *p, void *q, s32 id);
void *lbl_802EE738[11] = { 0, 0, (void *)fn_801EF3A0, (void *)fn_801EB698, (void *)__dt__9C801EF5D0Fv, (void *)fn_801EF524, (void *)fn_801EF504, (void *)fn_801EF1A8, (void *)fn_801EB764, (void *)fn_801EB738, (void *)fn_801EB728 };

static inline u32 find_801EF3A0(u8 *r, char *name, s8 *grp)
{
    if (grp == 0 || *grp == 0) {
        return fn_800F9398(r + 0x90, name);
    } else {
        return fn_800F9788(r + 0xa8, grp, name);
    }
}

void fn_801EF3A0(u8 *p, void *q, s32 id)
{
    char name[8];
    s8 grp[8];
    u32 r;

    switch (id) {
    case 0x53:
        fn_800FB064(q, name);
        fn_800FB064(q, (char *)grp);
        r = find_801EF3A0(*(u8 **)(*(u8 **)(p + 16) + 212), name, grp);
        *(u32 *)(p + 28) = 0;
        *(u32 *)(p + 24) = 0;
        *(u32 *)(p + 24) = r;
        break;
    case 0x55:
        fn_800FB064(q, name);
        fn_800FB064(q, (char *)grp);
        r = find_801EF3A0(*(u8 **)(*(u8 **)(p + 16) + 212), name, grp);
        *(u32 *)(p + 36) = 0;
        *(u32 *)(p + 32) = 0;
        *(u32 *)(p + 32) = r;
        break;
    case 0x45:
        *(u32 *)(p + 44) |= 1;
        break;
    case 0x46:
        *(u32 *)(p + 44) |= 2;
        break;
    case 0x47:
        *(u32 *)(p + 44) |= 4;
        break;
    default:
        fn_801EB474(p, q);
        break;
    }
}

} /* extern "C" */
