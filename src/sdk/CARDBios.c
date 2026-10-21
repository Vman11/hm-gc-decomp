#include "common.h"
s32 fn_800CDBD8(s32 chan, void *out);
void OSRegisterResetFunction(void *);
void fn_800CC160(void);
void fn_800CDBA0(u32 arg);
void OSRegisterVersion(const char*);
extern u16 fn_800B6B0C();
void fn_800BA3B4(void* arg0);
extern int OSDisableInterrupts(void);
extern int OSRestoreInterrupts(int level);
u16 fn_800B6B0C(void);
void OSRegisterVersion(const char*);
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
int OSRestoreInterrupts(int level);
s32 fn_800CDEF8(s32 chan);
void fn_800CCC7C(s32 chan, s32 result);
void fn_800F2540(s32, s32);
void fn_800B3EF8(void *);
s32 fn_800CDBD8(s32 chan, void *out);
s32 fn_800F2730(s32 chan);
s32 fn_800CDB98(void);
s32 fn_800CDEF8(s32);
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA
#define WB_GXDATA
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_WBDspTask
#define WBT_WBDspTask
#endif
#ifndef WBT_WBDecParam
#define WBT_WBDecParam
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_WBFifoObj_v2
#define WBT_WBFifoObj_v2
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_WBCardStat
#define WBT_WBCardStat
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_WBCardStat
#define WBT_WBCardStat
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
#endif
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WBT_DirCheck
#define WBT_DirCheck
#ifndef WBT_WBDirCheck_v2
#define WBT_WBDirCheck_v2
#endif
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_CardID
#define WBT_CardID
#ifndef WBT_WBCardID_v2
#define WBT_WBCardID_v2
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WBT_DirCheck
#define WBT_DirCheck
#ifndef WBT_WBDirCheck_v2
#define WBT_WBDirCheck_v2
#endif
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_MEMCTR
#define WB_MEMCTR
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_SerId
#define WBT_SerId
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_NUMXFB
#define WB_NUMXFB
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_DSPTask
#define WBT_DSPTask
#ifndef WBT_WBDSPTask_v2
#define WBT_WBDSPTask_v2
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
#endif
#define WB_DSPREGS WBDSPRegs
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_DSPTask
#define WBT_DSPTask
#ifndef WBT_WBDSPTask_v2
#define WBT_WBDSPTask_v2
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
#endif
#define WB_DSPREGS WBDSPRegs
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_DSPTask
#define WBT_DSPTask
#ifndef WBT_WBDSPTask_v2
#define WBT_WBDSPTask_v2
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
#endif
#define WB_DSPREGS WBDSPRegs
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_DSPTaskInfo
#define WBT_DSPTaskInfo
#ifndef WBT_WBDSPTaskInfo_v2
#define WBT_WBDSPTaskInfo_v2
#endif
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_DSPTaskInfo
#define WBT_DSPTaskInfo
#ifndef WBT_WBDSPTaskInfo_v2
#define WBT_WBDSPTaskInfo_v2
#endif
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_DSPTaskInfo
#define WBT_DSPTaskInfo
#ifndef WBT_WBDSPTaskInfo_v2
#define WBT_WBDSPTaskInfo_v2
#endif
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WB_DSPREGS_D
#define WB_DSPREGS_D
#endif
#ifndef WB_PRELUDE
#define WB_PRELUDE
#define WB_PHYS(x) (((u32)(x)) & 0x3FFFFFFF)
#define WB_SET(reg, size, shift, val) ((reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)))
#define WB_GET(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_GXDATA2
#define WB_GXDATA2
#define WB_RI(reg, val, sh, mb, me) ((reg) = __rlwimi((reg), (val), (sh), (mb), (me)))
#endif
#ifndef WB_RAS
#define WB_RAS
#define WB_RASW(v) do { WBWG.u8 = 0x61; WBWG.u32 = (v); } while (0)
#define WB_XFW(a, v) do { WBWG.u8 = 0x10; WBWG.u32 = 0x1000 + (a); WBWG.u32 = (v); } while (0)
#endif
#ifndef WB_TEXOBJ
#define WB_TEXOBJ
#endif
#ifndef WB_FIFOP
#define WB_FIFOP
#define WB_CPUF (*(WBFifo **)&lbl_8035A920)
#define WB_GPF (*(WBFifo **)&lbl_8035A924)
#endif
#ifndef WB_CARD
#define WB_CARD
typedef void (*WBCardCB)(s32 chan, s32 result);
typedef struct WBCardFileInfo { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; } WBCardFileInfo;
typedef struct WBCardDir {
    u8 gameName[4]; u8 company[2]; u8 _padding0; u8 bannerFormat; u8 fileName[32];
    u32 time; u32 iconAddr; u16 iconFormat; u16 iconSpeed; u8 permission; u8 copyTimes;
    u16 startBlock; u16 length; u8 _padding1[2]; u32 commentAddr;
} WBCardDir;
typedef struct WBCard {
    s32 attached; s32 result; u16 size; u16 pageSize; s32 sectorSize; u16 cBlock; u16 vendorID; s32 latency;
    u8 id[12]; s32 mountStep; s32 formatStep; u32 scramble; u8 task[0x50]; void *workArea;
    WBCardDir *currentDir; u16 *currentFat; u8 threadQueue[8]; u8 cmd[9]; s32 cmdlen; volatile u32 mode;
    s32 retry; s32 repeat; u32 addr; void *buffer; s32 xferred; u16 freeNo; u16 startBlock;
    WBCardFileInfo *fileInfo; WBCardCB extCallback; WBCardCB txCallback; WBCardCB exiCallback;
    WBCardCB apiCallback; WBCardCB xferCallback; WBCardCB eraseCallback; WBCardCB unlockCallback;
    u8 alarm[0x28]; u32 cid; const void *diskID;
} WBCard;
#define WB_CARDBLK ((WBCard *)lbl_80323560)
#endif
#ifndef WBT_PanTab
#define WBT_PanTab
#ifndef WBT_WBPanTab_v2
#define WBT_WBPanTab_v2
#endif
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif
#ifndef TRK_PRIV_H
#endif

s32 fn_800CDF90(s32 final);
const char *lbl_80359600 = "<< Dolphin SDK - CARD\trelease build: Apr 17 2003 12:34:19 (0x2301) >>";
struct { void *func; u32 priority; void *next; void *prev; } lbl_802DF308[1] = { { fn_800CDF90, 127, 0, 0 } };
u8 lbl_80323780[0x20];
u8 lbl_80323560[0x220];
u16 lbl_8035A8F0;

#pragma auto_inline off
inline void wbSetupTimeoutAlarm(WBCard *card) {
    void fn_800B3EF8(void *alarm);
    void OSSetAlarm(void *alarm, s64 tick, void *handler);
    void fn_800CD228(void *alarm, void *context);
    s32 EXISelect(s32, s32, s32);
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    s32 EXILock(s32, s32, void *);
    s32 fn_800F2120(s32 chan, void *buf, s32 len, s32 mode);
    s32 EXIDma(s32 chan, void *buf, s32 len, u32 type, void *cb);
    void fn_800CCEA0(s32 chan, void *context);
    void fn_800CCF48(s32 chan, void *context);
    fn_800B3EF8(card->alarm);
    switch (card->cmd[0]) {
    case 0xF2:
        OSSetAlarm(card->alarm, (s64)(((*(u32 *)0x800000F8 / 4) / 1000) * 100), fn_800CD228);
        break;
    case 0xF3:
        break;
    case 0xF4:
    case 0xF1:
        OSSetAlarm(card->alarm, (s64)2 * (*(u32 *)0x800000F8 / 4) * (card->sectorSize / 0x2000), fn_800CD228);
        break;
    }
}

#pragma auto_inline off
inline s32 wbPutControlBlock(WBCard *card, s32 result) {
    s32 fn_800CDBD8(s32 chan, void *pcard);
    u16 *fn_800CF4C0(WBCard *card);
    WBCardDir *fn_800CF8C4(WBCard *card);
    int enabled;
    enabled = OSDisableInterrupts();
    if (card->attached) {
        card->result = result;
    } else if (card->result == -1) {
        card->result = result;
    }
    OSRestoreInterrupts(enabled);
    return result;
}

#pragma auto_inline off
static inline s32 wbCARDGetResultCode(s32 chan, WBCard *card) {
    void fn_800BA2C8(void *);
    if (chan < 0 || chan >= 2) {
        return -128;
    }
    return card->result;
}

/* ==== functions 800ccc78-800cdfe0 ==== */
void fn_800CCC78(void) {

}

void fn_800CCC7C(s32 chan, s32 result) {
    void fn_800BA3B4(void *queue);
    WBCard *card;

    card = &WB_CARDBLK[chan];
    fn_800BA3B4(card->threadQueue);
}


#pragma auto_inline off
void fn_800CCCB0(s32 chan, void *context) {
    void fn_800F2540(s32 chan, void *cb);
    void fn_800B3EF8(void *alarm);
    WBCard *card;
    WBCardCB callback;
    card = &WB_CARDBLK[chan];
    if (card->attached) {
        card->attached = 0;
        fn_800F2540(chan, 0);
        fn_800B3EF8(card->alarm);
        callback = card->exiCallback;
        if (callback) {
            card->exiCallback = 0;
            callback(chan, -3);
        }
        if (card->result != -1) {
            card->result = -3;
        }
        callback = card->extCallback;
        if (callback && 7 <= card->mountStep) {
            card->extCallback = 0;
            callback(chan, -3);
        }
    }
}

#pragma auto_inline off
void fn_800CCD88(s32 chan, void *context) {
    void fn_800B3EF8(void *alarm);
    s32 EXILock(s32, s32, void *);
    s32 EXIUnlock(s32);
    s32 fn_800CD08C(s32 chan, u8 *status);
    s32 fn_800CD17C(s32 chan);
    s32 fn_800CD2CC(s32 chan);
    WBCard *card;
    WBCardCB callback;
    u8 status;
    s32 result;
    card = &WB_CARDBLK[chan];
    fn_800B3EF8(card->alarm);
    if (!card->attached) {
        return;
    }
    if (!EXILock(chan, 0, 0)) {
        result = -128;
        goto fatal;
    }
    if ((result = fn_800CD08C(chan, &status)) < 0 || (result = fn_800CD17C(chan)) < 0) {
        goto error;
    }
    if ((result = (status & 0x18) ? -5 : 0) == -5 && --card->retry > 0) {
        result = fn_800CD2CC(chan);
        if (result >= 0) {
            return;
        }
        goto fatal;
    }
error:
    EXIUnlock(chan);
fatal:
    callback = card->exiCallback;
    if (callback) {
        card->exiCallback = 0;
        callback(chan, result);
    }
}

#pragma auto_inline off
void fn_800CCEA0(s32 chan, void *context) {
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    s32 fn_800F2730(s32 chan);
    WBCard *card;
    WBCardCB callback;
    s32 err;
    card = &WB_CARDBLK[chan];
    err = !EXIDeselect(chan);
    EXIUnlock(chan);
    callback = card->txCallback;
    if (callback) {
        card->txCallback = 0;
        callback(chan, (!err && fn_800F2730(chan)) ? 0 : -3);
    }
}

#pragma auto_inline off
void fn_800CCF48(s32 chan, void *context) {
    s32 fn_800F2730(s32 chan);
    WBCard *card;
    WBCardCB callback;
    card = &WB_CARDBLK[chan];
    callback = card->unlockCallback;
    if (callback) {
        card->unlockCallback = 0;
        callback(chan, fn_800F2730(chan) ? 1 : -3);
    }
}

s32 fn_800CCFCC(s32 chan, s32 enable) {
    s32 EXISelect(s32, s32, s32);
    s32 EXIImm(s32, void *, s32, s32, void *);
    s32 EXISync(s32);
    s32 EXIDeselect(s32);
    u32 cmd;
    s32 err;
    if (!EXISelect(chan, 0, 4)) return -3;
    cmd = enable ? 0x81010000 : 0x81000000;
    err = !EXIImm(chan, &cmd, 2, 1, 0);
    err |= !EXISync(chan);
    err |= !EXIDeselect(chan);
    if (err) return -3;
    return 0;
}

#pragma auto_inline off
s32 fn_800CD08C(s32 chan, u8 *status) {
    s32 EXISelect(s32, s32, s32);
    s32 EXIImm(s32, void *, s32, s32, void *);
    s32 EXISync(s32);
    s32 EXIDeselect(s32);
    s32 err;
    u32 cmd;
    if (!EXISelect(chan, 0, 4)) {
        return -3;
    }
    cmd = 0x83000000;
    err = !EXIImm(chan, &cmd, 2, 1, 0);
    err |= !EXISync(chan);
    err |= !EXIImm(chan, status, 1, 0, 0);
    err |= !EXISync(chan);
    err |= !EXIDeselect(chan);
    if (err) {
        return -3;
    }
    return 0;
}

s32 fn_800CD17C(s32 chan) {
    s32 EXISelect(s32, s32, s32);
    s32 EXIImm(s32, void *, s32, s32, void *);
    s32 EXISync(s32);
    s32 EXIDeselect(s32);
    u32 cmd;
    s32 err;
    if (!EXISelect(chan, 0, 4)) return -3;
    cmd = 0x89000000;
    err = !EXIImm(chan, &cmd, 1, 1, 0);
    err |= !EXISync(chan);
    err |= !EXIDeselect(chan);
    if (err) return -3;
    return 0;
}

#pragma auto_inline off
void fn_800CD228(void *alarm, void *context) {
    void fn_800F2540(s32 chan, void *cb);
    s32 chan;
    WBCard *card;
    WBCardCB callback;
    for (chan = 0; chan < 2; ++chan) {
        card = &WB_CARDBLK[chan];
        if (alarm == card->alarm) {
            break;
        }
    }
    if (!card->attached) {
        return;
    }
    fn_800F2540(chan, 0);
    callback = card->exiCallback;
    if (callback) {
        card->exiCallback = 0;
        callback(chan, -5);
    }
}

s32 fn_800CD2CC(s32 chan) {
    void fn_800B3EF8(void *alarm);
    void OSSetAlarm(void *alarm, s64 tick, void *handler);
    void fn_800CD228(void *alarm, void *context);
    s32 EXISelect(s32, s32, s32);
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    s32 EXILock(s32, s32, void *);
    s32 fn_800F2120(s32 chan, void *buf, s32 len, s32 mode);
    s32 EXIDma(s32 chan, void *buf, s32 len, u32 type, void *cb);
    void fn_800CCEA0(s32 chan, void *context);
    void fn_800CCF48(s32 chan, void *context);
    WBCard *card;
    card = &WB_CARDBLK[chan];
    if (!EXISelect(chan, 0, 4)) {
        EXIUnlock(chan);
        return -3;
    }
    wbSetupTimeoutAlarm(card);
    if (!fn_800F2120(chan, card->cmd, card->cmdlen, 1)) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    if (card->cmd[0] == 0x52 && !fn_800F2120(chan, (u8 *)card->workArea + 512, card->latency, 1)) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    if (card->mode == 0xFFFFFFFF) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return 0;
    }
    if (!EXIDma(chan, card->buffer, (s32)((card->cmd[0] == 0x52) ? 512 : 128), card->mode, fn_800CCEA0)) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    return 0;
}

#pragma auto_inline off
void fn_800CD4F8(s32 chan, s32 result) {
    s32 EXILock(s32, s32, void *);
    void fn_800CCF48(s32 chan, void *context);
    s32 fn_800CD2CC(s32 chan);
    WBCardCB callback;
    WBCard *card;
    card = &WB_CARDBLK[chan];
    if (result >= 0) {
        card->unlockCallback = fn_800CD4F8;
        if (!EXILock(chan, 0, fn_800CCF48)) {
            result = 0;
        } else {
            card->unlockCallback = 0;
            result = fn_800CD2CC(chan);
        }
    }
    if (result < 0) {
        switch (card->cmd[0]) {
        case 0x52:
            callback = card->txCallback;
            if (callback) {
                card->txCallback = 0;
                callback(chan, result);
            }
            break;
        case 0xF2:
        case 0xF4:
        case 0xF1:
            callback = card->exiCallback;
            if (callback) {
                card->exiCallback = 0;
                callback(chan, result);
            }
            break;
        }
    }
}

s32 fn_800CD608(s32 chan, WBCardCB txCallback, WBCardCB exiCallback) {
    s32 EXILock(s32, s32, void *);
    s32 EXISelect(s32, s32, s32);
    s32 EXIUnlock(s32);
    void fn_800CD4F8(s32 chan, s32 result);
    void fn_800CCF48(s32 chan, void *context);
    BOOL enabled;
    WBCard *card;
    s32 result;

    enabled = OSDisableInterrupts();
    card = &WB_CARDBLK[chan];
    if (!card->attached) {
        result = -3;
    } else {
        if (txCallback) {
            card->txCallback = txCallback;
        }
        if (exiCallback) {
            card->exiCallback = exiCallback;
        }
        card->unlockCallback = fn_800CD4F8;
        if (!EXILock(chan, 0, fn_800CCF48)) {
            result = -1;
        } else {
            card->unlockCallback = 0;
            if (!EXISelect(chan, 0, 4)) {
                EXIUnlock(chan);
                result = -3;
            } else {
                wbSetupTimeoutAlarm(card);
                result = 0;
            }
        }
    }
    OSRestoreInterrupts(enabled);
    return result;
}


#pragma auto_inline off
s32 fn_800CD7BC(s32 chan, WBCardCB callback) {
    s32 fn_800CD608(s32 chan, WBCardCB txCallback, WBCardCB exiCallback);
    s32 fn_800F2120(s32 chan, void *buf, s32 len, s32 mode);
    s32 EXIDma(s32 chan, void *buf, s32 len, u32 type, void *cb);
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    void fn_800CCEA0(s32 chan, void *context);
    WBCard *card;
    s32 result;
    card = &WB_CARDBLK[chan];
    card->cmd[0] = 0x52;
    card->cmd[1] = (u8)((card->addr >> 17) & 0x7f);
    card->cmd[2] = (u8)((card->addr >> 9) & 0xff);
    card->cmd[3] = (u8)((card->addr >> 7) & 0x03);
    card->cmd[4] = (u8)(card->addr & 0x7f);
    card->cmdlen = 5;
    card->mode = 0;
    card->retry = 0;
    result = fn_800CD608(chan, callback, 0);
    if (result == -1) {
        return 0;
    }
    if (result < 0) {
        goto end;
    }
    if (!fn_800F2120(chan, card->cmd, card->cmdlen, 1) ||
        !fn_800F2120(chan, (u8 *)card->workArea + 512, card->latency, 1) ||
        !EXIDma(chan, card->buffer, 512, card->mode, fn_800CCEA0)) {
        card->txCallback = 0;
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    result = 0;
end:
    return result;
}

#pragma auto_inline off
s32 fn_800CD8F0(s32 chan, WBCardCB callback) {
    s32 fn_800CD608(s32 chan, WBCardCB txCallback, WBCardCB exiCallback);
    s32 fn_800F2120(s32 chan, void *buf, s32 len, s32 mode);
    s32 EXIDma(s32 chan, void *buf, s32 len, u32 type, void *cb);
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    void fn_800CCEA0(s32 chan, void *context);
    WBCard *card;
    s32 result;
    card = &WB_CARDBLK[chan];
    card->cmd[0] = 0xF2;
    card->cmd[1] = (u8)((card->addr >> 17) & 0x7f);
    card->cmd[2] = (u8)((card->addr >> 9) & 0xff);
    card->cmd[3] = (u8)((card->addr >> 7) & 0x03);
    card->cmd[4] = (u8)(card->addr & 0x7f);
    card->cmdlen = 5;
    card->mode = 1;
    card->retry = 3;
    result = fn_800CD608(chan, 0, callback);
    if (result == -1) {
        return 0;
    }
    if (result < 0) {
        goto end;
    }
    if (!fn_800F2120(chan, card->cmd, card->cmdlen, 1) ||
        !EXIDma(chan, card->buffer, 128, card->mode, fn_800CCEA0)) {
        card->exiCallback = 0;
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    result = 0;
end:
    return result;
}

#pragma auto_inline off
s32 fn_800CDA0C(s32 chan, u32 addr, WBCardCB callback) {
    s32 fn_800CD608(s32 chan, WBCardCB txCallback, WBCardCB exiCallback);
    s32 fn_800F2120(s32 chan, void *buf, s32 len, s32 type);
    s32 EXIDeselect(s32);
    s32 EXIUnlock(s32);
    WBCard *card;
    s32 result;
    card = &WB_CARDBLK[chan];
    card->cmd[0] = 0xf1;
    card->cmd[1] = (u8)((addr >> 17) & 0x7f);
    card->cmd[2] = (u8)((addr >> 9) & 0xff);
    card->cmdlen = 3;
    card->mode = -1;
    card->retry = 3;
    result = fn_800CD608(chan, 0, callback);
    if (result == -1) {
        result = 0;
    } else if (result >= 0) {
        if (!fn_800F2120(chan, card->cmd, card->cmdlen, 1)) {
            card->exiCallback = 0;
            result = -3;
        } else {
            result = 0;
        }
        EXIDeselect(chan);
        EXIUnlock(chan);
    }
    return result;
}

#pragma push
#pragma dont_inline on
void fn_800CDAEC(void) {
    int i;
    if (WB_CARDBLK[0].diskID && WB_CARDBLK[1].diskID) {
        return;
    }
    lbl_8035A8F0 = fn_800B6B0C();
    OSRegisterVersion(lbl_80359600);
    fn_800CC160();
    OSInitAlarm();
    for (i = 0; i < 2; i++) {
        WBCard *card = &WB_CARDBLK[i];
        card->result = -3;
        OSInitThreadQueue(card->threadQueue);
        OSCreateAlarm((s32 *)card->alarm);
    }
    fn_800CDBA0(0x80000000);
    OSRegisterResetFunction(lbl_802DF308);
}
#pragma pop

s32 fn_800CDB98(void) {
    return lbl_8035A8F0;
}

void fn_800CDBA0(u32 arg) {
    u8 *p = lbl_80323560;
    *(u32 *)(p + 0x10c) = arg ? arg : (u32)(p + 0x220);
    *(u32 *)(p + 0x21c) = arg ? arg : (u32)(p + 0x220);
}

#pragma auto_inline off
s32 fn_800CDBD8(s32 chan, void *pcard) {
    int enabled;
    s32 result;
    WBCard *card = &WB_CARDBLK[chan];
    if (chan < 0 || chan >= 2 || !card->diskID) {
        return -128;
    }
    enabled = OSDisableInterrupts();
    if (!card->attached) {
        result = -3;
    } else if (card->result == -1) {
        result = -1;
    } else {
        card->result = -1;
        result = 0;
        card->apiCallback = 0;
        *(WBCard **)pcard = card;
    }
    OSRestoreInterrupts(enabled);
    return result;
}

#pragma auto_inline off
s32 fn_800CDC90(WBCard *card, s32 result) {
    int enabled;
    enabled = OSDisableInterrupts();
    if (card->attached) {
        card->result = result;
    } else if (card->result == -1) {
        card->result = result;
    }
    OSRestoreInterrupts(enabled);
    return result;
}

int fn_800CDCF4(int chan) {
    if (chan < 0 || chan >= 2) {
        return -128;
    }
    return *(int *)(lbl_80323560 + chan * 0x110 + 4);
}

s32 fn_800CDD24(s32 chan, s32 *byteNotUsed, s32 *filesNotUsed) {
    s32 fn_800CDBD8(s32 chan, void *pcard);
    u16 *fn_800CF4C0(WBCard *card);
    WBCardDir *fn_800CF8C4(WBCard *card);
    WBCard *card;
    s32 result;
    u16 *fat;
    WBCardDir *dir;
    WBCardDir *ent;
    u16 fileNo;
    result = fn_800CDBD8(chan, &card);
    if (result < 0) {
        return result;
    }
    fat = fn_800CF4C0(card);
    dir = fn_800CF8C4(card);
    if (fat == 0 || dir == 0) {
        return wbPutControlBlock(card, -6);
    }
    if (byteNotUsed) {
        *byteNotUsed = (s32)(card->sectorSize * fat[3]);
    }
    if (filesNotUsed) {
        *filesNotUsed = 0;
        for (fileNo = 0; fileNo < 127; fileNo++) {
            ent = &dir[fileNo];
            if (ent->fileName[0] == 0xff) {
                ++*filesNotUsed;
            }
        }
    }
    return wbPutControlBlock(card, 0);
}

s32 fn_800CDE74(s32 chan, s32 *arg1) {
    u8 *card;
    s32 result = fn_800CDBD8(chan, &card);
    int enabled;
    s32 *p;
    if (result < 0) {
        return result;
    }
    *arg1 = *(s32 *)(card + 0xC);
    p = (s32 *)card;
    enabled = OSDisableInterrupts();
    if (p[0] != 0) {
        p[1] = 0;
    } else if (p[1] == -1) {
        p[1] = 0;
    }
    OSRestoreInterrupts(enabled);
    return 0;
}

s32 fn_800CDEF8(s32 chan) {
    void fn_800BA2C8(void *);
    WBCard *block;
    s32 result;
    int enabled;
    block = &WB_CARDBLK[chan];
    enabled = OSDisableInterrupts();
    while ((result = wbCARDGetResultCode(chan, block)) == -1) {
        fn_800BA2C8(block->threadQueue);
    }
    OSRestoreInterrupts(enabled);
    return result;
}

s32 fn_800CDF90(s32 arg0) {
    extern s32 fn_800D14DC(s32);
    if (arg0 == 0 && (fn_800D14DC(0) == -1 || fn_800D14DC(1) == -1)) {
        return 0;
    }
    return 1;
}
