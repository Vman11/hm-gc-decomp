// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void __dl__FPv(void *);
extern void __dla__FPv(void *);

typedef struct {
    void *obj;
    u32 count;
    void *arr;
} E_801B8A54;

void fn_801B8A54(void *p) {
    u32 i;
    if (M2C_FIELD(p, E_801B8A54 **, 444) != NULL) {
        for (i = 0; i < M2C_FIELD(p, u32 *, 392); i++) {
            if (M2C_FIELD(p, E_801B8A54 **, 444)[i].arr != NULL) {
                __dl__FPv(M2C_FIELD(p, E_801B8A54 **, 444)[i].obj);
                __dla__FPv(M2C_FIELD(p, E_801B8A54 **, 444)[i].arr);
                M2C_FIELD(p, E_801B8A54 **, 444)[i].obj = NULL;
                M2C_FIELD(p, E_801B8A54 **, 444)[i].arr = NULL;
            }
        }
    }
}

} /* extern "C" */
