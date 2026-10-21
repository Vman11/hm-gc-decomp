// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A0270[];
extern char lbl_80364504[8];
extern char lbl_8036450C[7];
int fn_800E8F6C(char *buf, const char *fmt, ...);
void fn_800FA5D8(void *out, char *s);

void fn_8014D7E8(void *unused, s32 key, void *out) {
    char buf[64];
    switch (key & ~0x0FFFFFFF) {
    case 0x30000000:
        fn_800E8F6C(buf, lbl_802A0270, key - 0x30000000);
        break;
    case 0x40000000:
        fn_800E8F6C(buf, lbl_80364504, key - 0x40000000);
        break;
    case 0x50000000:
        fn_800E8F6C(buf, lbl_8036450C, key - 0x50000000);
        break;
    }
    fn_800FA5D8(out, buf);
}

} /* extern "C" */
