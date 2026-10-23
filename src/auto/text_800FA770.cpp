// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 strlen(const char *);

} /* extern "C" */
struct S800FA770 {
    u32 cap;
    u32 start;
    u32 end;
    virtual char Get(u32 i);
    virtual void Set(u32 i, s32 c);
};
extern "C" {

void fn_800FA770(S800FA770 *p, char *str) {
    u32 len = p->end - p->start;
    u32 n = len + strlen(str);
    u32 cnt;
    u32 i;
    if (p->start + n >= p->cap) n = p->cap - p->start;
    cnt = n - len;
    for (i = 0; i < cnt; i++) {
        p->Set(len + i, str[i]);
    }
    p->Set(n, 0);
    p->end = n;
}

} /* extern "C" */
