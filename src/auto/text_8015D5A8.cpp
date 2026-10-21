// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8015CC48(u32, u32, u32, u32);
void fn_8015D11C(u32, u32);
void fn_801636DC(void *);
void fn_80163A18(void *);

void fn_8015D5A8(u32 param_1, void *param_2, u32 param_3) {
    u32 id;
    u32 *p;

    p = (u32 *)param_2;
    id = *p;
    fn_801636DC(p);
    fn_80163A18(p);
    fn_8015D11C(param_1, id);
    fn_8015CC48(param_1, id, param_3, 0);
}

} /* extern "C" */
