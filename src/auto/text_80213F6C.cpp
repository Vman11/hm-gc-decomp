// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E07C8[];
void fn_800EB764(char *dst, char *src);
u32 strlen(const char *s);
char *strchr(const char *s, s32 c);
s32 fn_8021263C(u8 *tab, char *name);
u8 *fn_80212998(u8 *node, s32 idx, u32 x);

static inline s32 tolower_80213F6C(s32 c)
{
    return (c == -1) ? -1 : lbl_802E07C8[(u8)c];
}
static inline u8 *lookup_80213F6C(u8 *p, char *name)
{
    char *sep;
    u8 *node;
    s32 idx;

    node = p + 40;
    while (strlen(name) != 0) {
        sep = strchr(name, '\\');
        if (sep != 0) {
            *sep = 0;
        }
        idx = fn_8021263C(p + 4, name);
        if (idx < 0) {
            return 0;
        }
        node = fn_80212998(node, idx, *(u32 *)(*(u8 **)(p + 28) + 1764));
        if (node == 0) {
            return 0;
        }
        if (sep == 0) {
            *name = 0;
        } else {
            name = sep + 1;
        }
    }
    return node;
}

static inline u8 *find_80213F6C(u8 *p, char *name)
{
    char buf[280];
    char *t;
    u32 i;
    u32 n;

    if (name == 0) {
        return p + 40;
    }
    fn_800EB764(buf, name);
    n = strlen(name);
    t = buf;
    for (i = 0; i < n; i++) {
        *t = tolower_80213F6C(*t);
        t++;
    }
    return lookup_80213F6C(p, buf);
}

s32 fn_80213F6C(u8 *p, char *name)
{
    return find_80213F6C(p, name) == 0 ? 1 : 0;
}

} /* extern "C" */
