#include "common.h"
extern "C" {
void *fn_800FA9A8(void);
void fn_800FA9B0(u32 *param_1, u32 param_2);
void fn_800FAAA8(u32 *param_1, u32 param_2);
int fn_800FB398(int a);
void fn_800FB39C(void* arg0);
s32 __dt__9C800FB424Fv(s32 param_1, s16 param_2);
void *lbl_802E1FF8[45] = { 0, 0, (void *)__dt__9C800FB424Fv, (void *)fn_800FB39C, (void *)fn_800FB398, (void *)fn_800FAAA8, (void *)fn_800FA9B0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (void *)fn_800FA9A8 };
}
namespace m800FA974 {
/* Functions from 0x800FA974 to 0x800FA9B0, found by decomp-toolkit. */

extern "C" {

extern u8 lbl_802E1FD0[];
void fn_800FA974(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 4) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

void fn_800FA988(s32* arg0) {
    arg0[3] = (s32)lbl_802E1FD0;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
}

extern u8 lbl_803636E0;
void *fn_800FA9A8(void) {
    extern u8 lbl_803636E0;
    return &lbl_803636E0;
}

} /* extern "C" */

} /* namespace m800FA974 */

namespace m800FA9B0 {

extern "C" {

extern char lbl_803636E4[0x8];
extern char lbl_803636EC[0x4];
void fn_80060568(char *, s32, s32, s32);
void strncat(char *, void *, s32);
void strcat(char *, char *);
void strncpy(char *, char *, s32);
char *fn_800FAB98(void *, u32);
void fn_800FBB6C(u32, char *);
u32 strlen(char *);

void fn_800FA9B0(u32 *param_1, u32 param_2) {
    u32 len;
    char *s;
    char buf[128];

    if (param_1[0x47] != 0 && *param_1 != 0) {
        strncpy(buf, (char *)param_1[0x47], 0x3f);
        buf[0x3f] = 0;
        len = strlen(buf);
        strncat(buf + len, param_1 + 0x48, 4);
        len = strlen(buf);
        strcat(buf + len, lbl_803636E4); /* ": line " */
        len = strlen(buf);
        fn_800FBB6C(*(u32 *)(*param_1 + 0x14), buf + len);
        strcat(buf, lbl_803636EC);
    }
    s = fn_800FAB98(param_1, param_2);
    strcat(buf, s);
    fn_80060568(buf, 0, 0, 0);
}

} /* extern "C" */

} /* namespace m800FA9B0 */

namespace m800FAAA8 {

extern "C" {

extern char lbl_803636E4[0x8];
extern char lbl_803636EC[0x4];
extern char lbl_803636F0[0x2];
void strncat(char *, void *, s32);
void strcat(char *, char *);
void strncpy(char *, char *, s32);
char *fn_800FAB98(void *, u32);
void fn_800FBB6C(u32, char *);
u32 strlen(char *);

void fn_800FAAA8(u32 *param_1, u32 param_2) {
    u32 len;
    char *s;
    char buf[0x90];

    if (param_1[0x47] != 0 && *param_1 != 0) {
        strncpy(buf, (char *)param_1[0x47], 0x3f);
        buf[0x3f] = 0;
        len = strlen(buf);
        strncat(buf + len, param_1 + 0x48, 4);
        len = strlen(buf);
        strcat(buf + len, lbl_803636E4); /* ": line " */
        len = strlen(buf);
        fn_800FBB6C(*(u32 *)(*param_1 + 0x14), buf + len);
        strcat(buf, lbl_803636EC);
    }
    s = fn_800FAB98(param_1, param_2);
    strcat(buf, s);
    strcat(buf, lbl_803636F0);
}

} /* extern "C" */

} /* namespace m800FAAA8 */

namespace m800FAB98 {
extern "C" {
/* Functions from 0x800FAB98 to 0x800FADA8, found by decomp-toolkit. */


#pragma readonly_strings on
char* fn_800FAB98(void* arg0, s32 arg1) {
    switch (arg1) {
    case 0: return "syntax error";
    case 1: return "parse error";
    case 2: return "numeric too long";
    case 3: return "expected string";
    case 4: return "expected real";
    case 5: return "expected int";
    case 6: return "expected left curly";
    case 7: return "expected right curly";
    case 8: return "expected left bracket";
    case 9: return "expected right bracket";
    case 10: return "expected comma";
    case 11: return "expected semi-colon";
    case 12: return "expected colon";
    case 13: return "expected exclamation";
    case 14: return "expected percent";
    case 15: return "expected caret";
    case 16: return "expected ampersand";
    case 17: return "expected times";
    case 18: return "expected left parenthesis";
    case 19: return "expected righ parenthesis";
    case 20: return "expected minus";
    case 21: return "expected plus";
    case 22: return "expected divide";
    case 23: return "expected equals";
    case 24: return "expected less than";
    case 25: return "expected greater than";
    case 26: return "expected or sign";
    case 27: return "expected question mark";
    case 28: return "expected at sign";
    case 29: return "expected at tilde";
    case 30: return "expected keyword";
    case 31: return "expected string or left curly";
    case 32: return "expected EOF";
    case 33: return "invalid keyword";
    case 34: return "invalid string";
    case 35: return "invalid value";
    case 36: return "duplicate name";
    case 37: return "unknown name";
    case 38: return "unsupported";
    case 39: return "unexpected keyword";
    default: return "unknown error";
    }
}
extern char lbl_8029CB28[];

void fn_800FAD08(void *arg0, void *arg1) {
    s32 i;
    s8 *src = (s8 *)arg0 + 0x14;
    s8 *dst = (s8 *)arg1;
    for (i = 0; i < 8; i++) {
        dst[i] = src[i];
        if (src[i] == 0) {
            break;
        }
    }
}

} /* extern "C" (c unit) */
} /* namespace m800FAB98 */

namespace m800FADA8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FADA8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FADA8_2 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_3 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FADA8_4 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_5 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FADA8_6 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_7 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

u32 fn_800FADA8(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FADA8_0 *)(param_1))->m();
    if (iVar1 != 7) {
        ((VCall_fn_800FADA8_1 *)(param_1))->m((u32)(8));
    }
    iVar1 = ((VCall_fn_800FADA8_2 *)(param_1))->m();
    if (iVar1 != 4) {
        ((VCall_fn_800FADA8_3 *)(param_1))->m((u32)(5));
    }
    iVar1 = ((VCall_fn_800FADA8_4 *)(param_1))->m();
    if (iVar1 != 8) {
        ((VCall_fn_800FADA8_5 *)(param_1))->m((u32)(9));
    }
    iVar1 = ((VCall_fn_800FADA8_6 *)(param_1))->m();
    if (iVar1 != 5) {
        ((VCall_fn_800FADA8_7 *)(param_1))->m((u32)(6));
    }
    return *(u32 *)(param_1 + 0xc);
}
}

} /* namespace m800FADA8 */

namespace m800FAEA0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FAEA0_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FAEA0_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FAEA0(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FAEA0_0 *)(param_1))->m();
    if (iVar1 != 6) {
        ((VCall_fn_800FAEA0_1 *)(param_1))->m((u32)(7));
    }
}
}

} /* namespace m800FAEA0 */

namespace m800FAEF8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FAEF8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FAEF8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FAEF8(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FAEF8_0 *)(param_1))->m();
    if (iVar1 != 5) {
        ((VCall_fn_800FAEF8_1 *)(param_1))->m((u32)(6));
    }
}
}

} /* namespace m800FAEF8 */

namespace m800FAF50 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FAF50_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FAF50_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FAF50(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FAF50_0 *)(param_1))->m();
    if (iVar1 != 8) {
        ((VCall_fn_800FAF50_1 *)(param_1))->m((u32)(9));
    }
}
}

} /* namespace m800FAF50 */

namespace m800FAFA8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FAFA8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FAFA8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FAFA8(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FAFA8_0 *)(param_1))->m();
    if (iVar1 != 7) {
        ((VCall_fn_800FAFA8_1 *)(param_1))->m((u32)(8));
    }
}
}

} /* namespace m800FAFA8 */

namespace m800FB000 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB000_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB000_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FB000(u32 param_1, u32 param_2) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB000_0 *)(param_1))->m();
    if (param_2 != iVar1) {
        ((VCall_fn_800FB000_1 *)(param_1))->m((u32)(0x1e));
    }
}
}

} /* namespace m800FB000 */

namespace m800FB064 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800F6FBC(int, int);
struct VCall_fn_800FB064_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB064_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FB064_2 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FB064(u32 param_1, u32 param_2) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB064_0 *)(param_1))->m();
    if (iVar1 != 2) {
        ((VCall_fn_800FB064_1 *)(param_1))->m((u32)(3));
    }
    if (8 < *(u32 *)(param_1 + 0x114)) {
        ((VCall_fn_800FB064_2 *)(param_1))->m((u32)(0x22));
    }
    fn_800F6FBC((int)(param_1 + 0x14), (int)(param_2));
}
}

} /* namespace m800FB064 */

namespace m800FB0F8 {

extern "C" {

extern u32 lbl_8035AA10;
void *memcpy(void *, const void *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
u32 strlen(char *);
struct V800FB0F8 { u8 pad0[0x14]; char name[0x110]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void SetState(s32); virtual u32 GetState(); };

void fn_800FB0F8(V800FB0F8 *p, char **out) {
    u32 len;

    if (p->GetState() != 2) {
        p->SetState(3);
    }
    len = strlen(p->name) + 1;
    if (lbl_8035AA10 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA10);
    *out = new char[len];
    fn_800F7E98();
    if (*out == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (*out == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    memcpy(*out, p->name, len);
}

} /* extern "C" */

} /* namespace m800FB0F8 */

namespace m800FB1F8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB1F8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB1F8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FB1F8_2 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

u32 fn_800FB1F8(u32 param_1, u32 param_2) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB1F8_0 *)(param_1))->m();
    if (2 != iVar1) {
        ((VCall_fn_800FB1F8_1 *)(param_1))->m((u32)(3));
    }
    if (*(u32 *)(param_1 + 0x114) > param_2) {
        ((VCall_fn_800FB1F8_2 *)(param_1))->m((u32)(0x22));
    }
    return param_1 + 0x14;
}
}

} /* namespace m800FB1F8 */

namespace m800FB284 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB284_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB284_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

u32 fn_800FB284(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB284_0 *)(param_1))->m();
    if (iVar1 != 2) {
        ((VCall_fn_800FB284_1 *)(param_1))->m((u32)(3));
    }
    return param_1 + 0x14;
}
}

} /* namespace m800FB284 */

namespace m800FB2E0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB2E0_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB2E0_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

f64 fn_800FB2E0(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB2E0_0 *)(param_1))->m();
    if (iVar1 != 3) {
        ((VCall_fn_800FB2E0_1 *)(param_1))->m((u32)(4));
    }
    return (f64)*(f32 *)(param_1 + 0x10);
}
}

} /* namespace m800FB2E0 */

namespace m800FB33C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB33C_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FB33C_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

u32 fn_800FB33C(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FB33C_0 *)(param_1))->m();
    if (iVar1 != 4) {
        ((VCall_fn_800FB33C_1 *)(param_1))->m((u32)(5));
    }
    return *(u32 *)(param_1 + 0xc);
}
}

} /* namespace m800FB33C */

namespace m800FB398 {
extern "C" {
/* Functions from 0x800FB398 to 0x800FB3D0, found by decomp-toolkit. */

extern f32 lbl_803636F4;

int fn_800FB398(int a) { return a; }

void fn_800FB39C(void* arg0) {
    *(s32*)((u8*)arg0 + 0x0) = 0;
    *(s32*)((u8*)arg0 + 0x4) = 0;
    *(s32*)((u8*)arg0 + 0x8) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(f32*)((u8*)arg0 + 0x10) = lbl_803636F4;
    *(u8*)((u8*)arg0 + 0x14) = 0;
    *(s32*)((u8*)arg0 + 0x114) = 0;
    *(s32*)((u8*)arg0 + 0x11C) = 0;
    *(u8*)((u8*)arg0 + 0x120) = 0;
    *(s32*)((u8*)arg0 + 0x118) = 0;
}


} /* extern "C" (c unit) */
} /* namespace m800FB398 */

namespace m800FB3D0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB3D0_0 { char vptr_pad[0x124]; virtual void p0(); virtual void m(); };

void fn_800FB3D0(u32 *param_1, u32 param_2) {
    if (*param_1 != 0) {
        ((VCall_fn_800FB3D0_0 *)(param_1))->m();
    }
    *param_1 = param_2;
}
}

} /* namespace m800FB3D0 */

namespace m800FB424 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void __dl__FPv(int);
struct VCall_fn_800FB424_0 { char vptr_pad[0x124]; virtual void p0(); virtual void m(); };

s32 __dt__9C800FB424Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x124) = (u8 *)lbl_802E1FF8;
        ((VCall_fn_800FB424_0 *)(param_1))->m();
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m800FB424 */
