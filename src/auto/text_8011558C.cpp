// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Sub8011558C { u8 pad[16]; virtual void v0(); virtual void v1(); };
struct Obj8011558C {
    u8 pad0[2080];
    void *arr[2000];
    s32 f10080;
    s32 f10084;
    s32 f10088;
    s32 f10092;
    s32 f10096;
    void *f10100;
    s32 f10104;
    Sub8011558C sub;
    s32 f10128;
    s32 f10132;
    s32 f10136;
    s32 f10140;
    s32 f10144;
    s32 f10148;
    s32 f10152;
};
extern "C" {
void fn_80115090(void *a, void *b);
void *memset(void *d, int c, u32 n);
extern s32 lbl_8035AB00;
void fn_8011558C(Obj8011558C *p) {
    u32 i;
    if (p->f10148 != 0) {
        p->sub.v1();
        for (i = 0; i < 2000; i++) {
            if (p->arr[i] != 0) {
                fn_80115090(p->f10100, p->arr[i]);
            }
        }
        p->f10148 = 0;
        lbl_8035AB00 = 0;
        p->f10096 = 0;
        p->f10128 = 0;
        p->f10100 = 0;
        p->f10080 = 0;
        p->f10088 = 0;
        p->f10092 = 0;
        p->f10136 = 0;
        p->f10140 = 4;
        p->f10104 = 0;
        p->f10152 = 0;
        p->f10132 = 0;
        memset(p, 0, 1120);
        { u32 j; for (j = 0; j < 2000; j++) {
            p->arr[j] = 0;
        } }
    }
}

} /* extern "C" */
