// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
extern char lbl_802AF8B8[][8];
s32 fn_800F6CD0(const char *, const char *);
u32 fn_8002FDFC(void *self, const char *name) {
    u32 i;
    for (i = 0; i < 31; i++) {
        if (fn_800F6CD0(name, lbl_802AF8B8[i])) return i;
    }
    return 0;
}
