// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    u8 *a224;
    u8 *a228;
    u8 pad232[48];
    char *s280;
    char *s284;
};
extern char lbl_8035CAA0[];
extern char lbl_8035CAA8[];
extern char lbl_8035CAB0[];
extern char lbl_8035CAB8[];
extern char lbl_8035CAC0[];
void *lbl_802B3850[160] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035CAA0, (void *)&lbl_8035CAA8, (void *)&lbl_8035CAB0, (void *)&lbl_8035CAB8, (void *)&lbl_8035CAC0, (void *)&lbl_8035CAA0, (void *)0x0, (void *)0x1, (void *)&lbl_8035CAA8, (void *)0x1, (void *)0x1, (void *)&lbl_8035CAB0, (void *)0x2, (void *)0x1, (void *)&lbl_8035CAB8, (void *)0x3, (void *)0x1, (void *)&lbl_8035CAC0, (void *)0x4, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4 };
static s32 tA[5] = { 0, 1, 2, 3, 4 };
static s32 tB[5] = { 1, 1, 1, 1, 1 };
static s32 tC[5] = { 0, 0, 1, 0, 2 };
extern char lbl_80295660[], lbl_8029566C[];
extern char lbl_8035CAC8[8], lbl_8035CAD0[8], lbl_8035CAD8[8], lbl_8035CAE0[8], lbl_8035CAE8[8], lbl_8035CAF0[8], lbl_8035CAF8[8], lbl_8035CB00[8], lbl_8035CB08[8];
void fn_80240B50(P *, char *, int);
void fn_800F6E88(char *, u8 *);
int fn_800F6CD0(char *, char *);

void fn_800448DC(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        return;
    case 1:
        if (p->s280) fn_80240B50(p, p->s280, 1);
        break;
    case 2:
        if (p->a228) {
            char b[8];
            char a[8];
            fn_800F6E88(a, p->a224 + 140);
            fn_800F6E88(b, p->a228 + 140);
            if (fn_800F6CD0(a, lbl_80295660) || fn_800F6CD0(a, lbl_8035CAC8) || fn_800F6CD0(a, lbl_8035CAD0) ||
                fn_800F6CD0(a, lbl_8035CAD8) || fn_800F6CD0(a, lbl_8029566C)) {
                if (fn_800F6CD0(b, lbl_8035CAE0)) {
                    fn_80240B50(p, lbl_8035CAE8, 0);
                    break;
                }
                if (fn_800F6CD0(b, lbl_8035CAF0) || fn_800F6CD0(b, lbl_8035CAF8) || fn_800F6CD0(b, lbl_8035CB00)) {
                    fn_80240B50(p, lbl_8035CB08, 0);
                    break;
                }
            }
        }
        if (p->s284) fn_80240B50(p, p->s284, 0);
        break;
    case 3:
        return;
    }
}

} /* extern "C" */
