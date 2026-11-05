#include "common.h"

// NonMatching draft (wA_80200C24): sibling of fn_8020FAA8. SDIFF 2 / DIFF 148: target has a dead 'lwz 0x34(self); cmpwi'
// before the fn_8021272C call (3rd arg 0; '?0:0' gives neg/or/srawi instead), and name/v callee regs r27/r28 swapped.

struct C8020F398 { u32 x0, x4, nb, na; u8 pad[16]; C8020F398(); ~C8020F398(); };
extern "C" {
extern char lbl_803658F0[4];
extern u8 lbl_802E07C8[];
u8 *fn_8021B0C8(void *, u32, u32 *, u32 *);
void fn_8020EFE4(void *, u32, u32);
void *memset(void *, int, u32);
char *strcpy(char *, const char *);
u32 strlen(const char *);
char *strchr(const char *, int);
int fn_8021272C(void *, u32, u32, char *);
void fn_8020EBB0(void *, u32, u32);
void fn_8020EA90(void *, u32, const char *);
void fn_8020EDB8(void *, u32, u32);
void fn_8020EC24(void *, u32, const char *);
void fn_8020ED44(void *, u32, u32);
const char *fn_8020EE54(void *, u32);
const char *fn_8020EEC8(void *, u32);
u32 fn_8020EE2C(void *, u32);
u32 fn_8020EE78(void *, u32);
u32 fn_8020EEA0(void *, u32);
int fn_802121C4(void *, const char *, char *, char *);
void fn_8020EEEC(void *);
void fn_8021A510(u8 *self, u32 id, const char *name, C8020F398 *out) {
    u8 *sf = self;
    C8020F398 t;
    u32 na, nb;
    char buf[16];
    char s[16];
    u32 i;
    u8 *p;
    p = fn_8021B0C8(sf, id, &na, &nb);
    if (!p) {
        fn_8020EFE4(out, 0, 0);
        return;
    }
    fn_8020EFE4(&t, nb, na);
    for (id = 0; id < na; id++) {
        u32 v = p[0] + (p[1] << 8) + (p[2] << 16) + (p[3] << 24);
        p += 8;
        memset(buf, 0, 16);
        if (!fn_8021272C(sf + 4, v & 0xfff, *(s32 *)(sf + 0x34) != 0 && 0, buf)) strcpy(buf, lbl_803658F0);
        fn_8020EBB0(&t, id, 3);
        fn_8020EA90(&t, id, buf);
    }
    for (u32 i2 = 0; i2 < nb; i2++) {
        u32 a = p[0] + (p[1] << 8);
        u32 b = p[2];
        u32 c = p[8] + (p[9] << 8) + (p[10] << 16) + (p[11] << 24);
        p += 12;
        memset(buf, 0, 16);
        if (!fn_8021272C(sf + 4, a, b, buf)) strcpy(buf, lbl_803658F0);
        fn_8020EDB8(&t, i2, 2);
        fn_8020EC24(&t, i2, buf);
        fn_8020ED44(&t, i2, c);
    }
    strcpy(s, name);
    {
        u32 n = strlen(s);
        char *q = s;
        for (i = 0; i < n; i++, q++) { int c = *q; *q = (c == -1) ? -1 : lbl_802E07C8[c & 0xff]; }
    }
    p = (u8 *)strchr(s, '.');
    if (!p) p = (u8 *)s + strlen(s);
    else { *p = 0; p++; }
    na = 0;
    for (i = 0; i < t.na; i++) if (fn_802121C4(sf, fn_8020EE54(&t, i), s, (char *)p)) na++;
    nb = 0;
    for (i = 0; i < t.nb; i++) if (fn_802121C4(sf, fn_8020EEC8(&t, i), s, (char *)p)) nb++;
    fn_8020EFE4(out, nb, na);
    na = 0;
    for (i = 0; i < t.na; i++) {
        if (fn_802121C4(sf, fn_8020EE54(&t, i), s, (char *)p)) {
            fn_8020EBB0(out, na, fn_8020EE2C(&t, i));
            fn_8020EA90(out, na, fn_8020EE54(&t, i));
            na++;
        }
    }
    nb = 0;
    for (i = 0; i < t.nb; i++) {
        if (fn_802121C4(sf, fn_8020EEC8(&t, i), s, (char *)p)) {
            fn_8020EDB8(out, nb, fn_8020EE78(&t, i));
            fn_8020EC24(out, nb, fn_8020EEC8(&t, i));
            fn_8020ED44(out, nb, fn_8020EEA0(&t, i));
            nb++;
        }
    }
    fn_8020EEEC(&t);
}

}
