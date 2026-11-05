#include "common.h"

extern "C" {

extern "C" { char *strcpy(char *, const char *); unsigned long strlen(const char *); char *strchr(const char *, int); }
extern u8 lbl_802E07C8[256];
struct A { u8 pad[4]; u8 f4[32]; u8 *f36; u8 *f40; u32 f44; u32 f48; int f52; };
int fn_8021263C(void *, char *);
u8 *fn_8021B0C8(A *a, const char *path, u32 *on, u32 *om) {
    char *cur;
    u8 *ent;
    u32 n;
    u32 m;
    int found;
    char buf[276];
    found = 0;
    if (!path || !*path) {
        *on = a->f48;
        *om = a->f44;
        return a->f40;
    }
    strcpy(buf, path);
    u32 len = strlen(path);
    char *p = buf;
    for (u32 i = 0; i < len; i++) {
        int c = *p;
        *p = (c == -1) ? -1 : lbl_802E07C8[(u8)c];
        p++;
    }
    ent = a->f40;
    cur = buf;
    n = a->f48;
    m = a->f44;
    while (strlen(cur)) {
        char *sep = strchr(cur, '\\');
        if (sep) *sep = 0;
        int h = fn_8021263C(a->f4, cur);
        if (h < 0) return 0;
        if (sep == 0) *cur = 0;
        else cur = sep + 1;
        found = 0;
        for (u32 j = 0; j < n; j++) {
            u32 w0 = ent[0] + (ent[1] << 8) + (ent[2] << 16) + (ent[3] << 24);
            u32 w1 = ent[4] + (ent[5] << 8) + (ent[6] << 16) + (ent[7] << 24);
            int fl = a->f52;
            ent += 8;
            u32 hs = fl ? (w0 & 0xFFF) : (w0 & 0xFFF);
            if (hs == h) {
                found = 1;
                n = fl ? w0 >> 21 : (w0 >> 12) & 0x1FF;
                m = fl ? (w0 >> 12) & 0x1FF : w0 >> 21;
                ent = a->f36 + w1;
                break;
            }
        }
    }
    if (found) {
        if (on) *on = n;
        if (om) *om = m;
        return ent;
    }
    return 0;
}

} /* extern "C" */
