// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct C800FA3DC {
    u8 pad[4];
    u32 start;
    u32 end;
    virtual u16 GetChar(u32 i) const;
    u32 Length() const { return end - start; }
};
extern "C" {
void fn_800FA3DC(const C800FA3DC *self, u16 *buf, u32 size) {
    u32 i = 0;
    u32 n = self->Length();
    if (size <= n) n = size - 1;
    for (; i < n; i++) {
        buf[i] = self->GetChar(i);
    }
    buf[i] = 0;
}

} /* extern "C" */
