// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct L36 { u8 d[0x40]; };
struct T36 { u8 pad[0x174]; void (*f174)(L36 *l, s32 x); };
extern T36 lbl_803286D0;
extern volatile s32 lbl_8035ACE8;
void __ct__9C80152B64Fv(L36 *l);
void fn_8011B250(void);
void fn_800D6700(void);
void fn_8015B0D8(void *p);
void fn_800D9DF8(L36 *l, s32 n);
void fn_800D9E48(L36 *l, s32 n);
void fn_8016C7BC(u8 *p) {
    if (*(u32 *)(p + 0x344) == 1) {
        if (*(s32 *)(p + 0x3b4) == 0) {
            fn_8011B250();
            while (lbl_8035ACE8 != 0) {}
        }
    } else if (*(s32 *)(p + 0x279d4) != 0) {
        fn_8011B250();
        fn_800D6700();
        fn_8015B0D8(p + 0x348);
        *(s32 *)(p + 0x279d4) = 0;
    }
    {
        s32 x = *(s32 *)(p + 0x2a78);
        L36 a;
        __ct__9C80152B64Fv(&a);
        lbl_803286D0.f174(&a, x);
        fn_800D9DF8(&a, 3);
        *(s32 *)(p + 0x1fbc) = x;
    }
    {
        s32 x = *(s32 *)(p + 0x2a78);
        L36 b;
        __ct__9C80152B64Fv(&b);
        lbl_803286D0.f174(&b, x);
        fn_800D9E48(&b, 3);
        *(s32 *)(p + 0x21bc) = x;
    }
    *(s32 *)(p + 0x3f0c) = 0;
    *(s32 *)(p + 0x23fc4) = 0;
    *(s32 *)(p + 0x23fbc) = 0;
    *(s32 *)(p + 0x23fc0) = 0;
    *(s32 *)(p + 0x279c8) = 0;
}

} /* extern "C" */
