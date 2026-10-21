// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029D318[];
extern char lbl_80363A58[8];
extern char lbl_80363A60[7];
int fn_800E8F6C(char *buf, const char *fmt, ...);
void fn_800FA5D8(void *out, char *s);

void fn_80116D04(void *self, u32 code, void *out) {
    char buf[64];
    s32 type = code & 0xF0000000;
    buf[0] = 0;
    switch (type) {
    case 0x30000000:
        fn_800E8F6C(buf, lbl_8029D318, code - 0x30000000);
        break;
    case 0x40000000:
        fn_800E8F6C(buf, lbl_80363A58, code - 0x40000000);
        break;
    case 0x50000000:
        fn_800E8F6C(buf, lbl_80363A60, code - 0x50000000);
        break;
    }
    fn_800FA5D8(out, buf);
}

} /* extern "C" */
