// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct C8015D9A4 { u8 pad[300]; } C8015D9A4;
void *__ct__9C8015D9A4Fv(void *p);
void *__dt__9C8015D9A4Fv(void *p, s16 f);
void *__register_global_object(void *obj, void *dtor, void *chain);

static u8 chain1[12];
static C8015D9A4 obj1;
static u8 chain2[12];
static C8015D9A4 obj2;

void fn_8015BF34(void) {
    __register_global_object(__ct__9C8015D9A4Fv(&obj1), (void *)__dt__9C8015D9A4Fv, chain1);
    __register_global_object(__ct__9C8015D9A4Fv(&obj2), (void *)__dt__9C8015D9A4Fv, chain2);
}

__declspec(section ".ctors") static void (*const ctor_8015BF34)(void) = fn_8015BF34;

} /* extern "C" */
