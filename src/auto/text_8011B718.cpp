// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c; } T12;
typedef struct { u32 a, b; } T8;
void fn_8011CF70(void *);
void fn_8011CA98(void *, void *, u32, u32, u32);
void fn_8011C804(void *, void *, u32, u32);

void fn_8011B718(u8 *p, void *a, u8 *b) {
    u32 i;
    fn_8011CF70(p + 4);
    for (i = 0; i < *(u32 *)(p + 100); i++) {
        T12 *e = &(*(T12 **)(p + 84))[i];
        fn_8011CA98(p + 4, a, e->a, e->c, e->b);
    }
    for (i = 0; i < *(u32 *)(p + 104); i++) {
        T8 *e = &(*(T8 **)(p + 88))[i];
        fn_8011C804(p + 4, a, e->a, e->b);
    }
    *(u8 **)(p + 24) = b + 216;
}

} /* extern "C" */
