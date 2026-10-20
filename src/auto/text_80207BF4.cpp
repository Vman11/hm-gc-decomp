// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[664]; char names[7][128]; u8 pad2[0x698 - 664 - 896]; s32 n; } T_80207BF4;
u32 strlen(const char *);
void fn_800EB764(void *, void *);

void fn_80207BF4(T_80207BF4 *p, char *s) {
    if (p->n < 7) {
        u32 len = strlen(s);
        p->n++;
        fn_800EB764(p->names[p->n], s);
        if (len != 0 && s[len - 1] != 92) {
            p->names[p->n][len] = 92;
            p->names[p->n][len + 1] = 0;
        }
    }
}

} /* extern "C" */
