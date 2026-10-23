// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Reader800FA074 {
    u8 pad[12];
    u8 *cur;
    u8 *end;
    s32 line;
    virtual void v0();
    virtual s32 Refill();
};
extern "C" {

s32 fn_800FA074(Reader800FA074 *r) {
    do {
        while (r->cur < r->end) {
            u8 c = *r->cur;
            if (c == '\n') {
                r->line++;
            } else if (c != ' ' && c != '\t' && c != '\r') {
                return 1;
            }
            r->cur++;
        }
    } while (r->Refill());
    return 0;
}

} /* extern "C" */
