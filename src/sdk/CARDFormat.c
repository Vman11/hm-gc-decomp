#include "common.h"
extern u8 lbl_80323560[];
s32 fn_800CDBD8(s32 chan, void *out);
extern void *memset(void *, int, unsigned long);
extern void *memcpy(void *, const void *, unsigned long);
extern u8 lbl_80323560[];
s32 fn_800CDEF8(s32 chan);
void fn_800CCC7C(s32 chan, s32 result);
s32 fn_800CDBD8(s32 chan, void *out);
s32 fn_800CDB98(void);
s32 fn_800D16CC(s32, s32, void *);
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
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
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
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
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
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
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
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WBT_DirCheck
#define WBT_DirCheck
#ifndef WBT_WBDirCheck_v2
#define WBT_WBDirCheck_v2
typedef struct WBDirCheck_v2 {
    u8 padding0[58];
    s16 checkCode;
    u16 checkSum;
    u16 checkSumInv;
} WBDirCheck_v2;
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
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
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
typedef struct WBCardID_v2 {
    u8 serial[32];
    u16 deviceID;
    u16 size;
    u16 encode;
    u8 padding[470];
    u16 checkSum;
    u16 checkSumInv;
} WBCardID_v2;
#endif
#endif
#ifndef WBT_SramEx
#define WBT_SramEx
#ifndef WBT_WBSramEx_v2
#define WBT_WBSramEx_v2
typedef struct WBSramEx_v2 {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u16 _padding1;
} WBSramEx_v2;
#endif
#endif
#ifndef WB_CKSUM
#define WB_CKSUM
#endif
#ifndef WBT_DirCheck
#define WBT_DirCheck
#ifndef WBT_WBDirCheck_v2
#define WBT_WBDirCheck_v2
typedef struct WBDirCheck_v2 {
    u8 padding0[58];
    s16 checkCode;
    u16 checkSum;
    u16 checkSumInv;
} WBDirCheck_v2;
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



/* ==== functions 800d1588-800d1d78 ==== */
#pragma auto_inline off
void fn_800D1588(s32 chan, s32 result) {
    s32 fn_800CDA0C(s32 chan, u32 addr, WBCardCB callback);
    s32 fn_800CF45C(s32 chan, u32 addr, s32 length, void *dst, WBCardCB callback);
    void *memcpy(void *, const void *, unsigned long);
    s32 fn_800CDC90(WBCard *card, s32 result);
    extern u8 lbl_80323560[];
    WBCard *card;
    WBCardCB callback;
    card = &WB_CARDBLK[chan];
    if (result < 0) {
        goto error;
    }
    ++card->formatStep;
    if (card->formatStep < 5) {
        result = fn_800CDA0C(chan, (u32)card->sectorSize * card->formatStep, fn_800D1588);
        if (result >= 0) {
            return;
        }
    } else if (card->formatStep < 2 * 5) {
        int step = card->formatStep - 5;
        result = fn_800CF45C(chan, (u32)card->sectorSize * step, 0x2000, (u8 *)card->workArea + (0x2000 * step), fn_800D1588);
        if (result >= 0) {
            return;
        }
    } else {
        card->currentDir = (WBCardDir *)((u8 *)card->workArea + 1 * 0x2000);
        memcpy(card->currentDir, (u8 *)card->workArea + 2 * 0x2000, 0x2000);
        card->currentFat = (u16 *)((u8 *)card->workArea + 3 * 0x2000);
        memcpy(card->currentFat, (u8 *)card->workArea + 4 * 0x2000, 0x2000);
    }
error:
    callback = card->apiCallback;
    card->apiCallback = 0;
    fn_800CDC90(card, result);
    callback(chan, result);
}

s32 fn_800D16CC(s32 chan, s32 encode, void *callback) {
    s32 fn_800CDBD8(s32 chan, void *out);
    s32 fn_800CDC90(WBCard *card, s32 result);
    void *memset(void *, int, unsigned long);
    void *__OSLockSram(void);
    s32 __OSUnlockSram(s32 commit);
    void *__OSLockSramEx(void);
    s32 __OSUnlockSramEx(s32 commit);
    s64 OSGetTime(void);
    void fn_800CFB28(void *ptr, int length, u16 *checksum, u16 *checksumInv);
    void fn_800B48F4(void *, u32);
    void fn_800CCC78(s32 chan, s32 result);
    void fn_800D1588(s32 chan, s32 result);
    s32 fn_800CDA0C(s32 chan, u32 addr, WBCardCB callback);
    WBCard *card;
    WBCardID_v2 *id;
    WBCardDir *dir;
    u16 *fat;
    s16 i;
    s32 result;
    u8 *sram;
    WBSramEx_v2 *sramEx;
    u16 viDTVStatus;
    s64 time;
    s64 rand;
    result = fn_800CDBD8(chan, &card);
    if (result < 0) {
        return result;
    }
    id = (WBCardID_v2 *)card->workArea;
    memset(id, 0xff, 0x2000);
    viDTVStatus = *(volatile u16 *)(0xCC002000 + 55 * 2);
    id->encode = encode;
    sram = __OSLockSram();
    *(u32 *)&id->serial[20] = *(u32 *)(sram + 12);
    *(u32 *)&id->serial[24] = sram[18];
    __OSUnlockSram(0);
    rand = time = OSGetTime();
    sramEx = __OSLockSramEx();
    for (i = 0; i < 12; i++) {
        rand = (rand * 1103515245 + 12345) >> 16;
        id->serial[i] = (u8)(sramEx->flashID[chan][i] + rand);
        rand = ((rand * 1103515245 + 12345) >> 16) & 0x7FFF;
    }
    __OSUnlockSramEx(0);
    *(u32 *)&id->serial[28] = viDTVStatus;
    *(s64 *)&id->serial[12] = time;
    id->deviceID = 0;
    id->size = card->size;
    fn_800CFB28(id, sizeof(WBCardID_v2) - sizeof(u32), &id->checkSum, &id->checkSumInv);
    for (i = 0; i < 2; i++) {
        WBDirCheck_v2 *check;
        dir = (WBCardDir *)((u8 *)card->workArea + (1 + i) * 0x2000);
        memset(dir, 0xff, 0x2000);
        check = (WBDirCheck_v2 *)((u8 *)dir + 0x1FC0);
        check->checkCode = i;
        fn_800CFB28(dir, 0x2000 - sizeof(u32), &check->checkSum, &check->checkSumInv);
    }
    for (i = 0; i < 2; i++) {
        fat = (u16 *)((u8 *)card->workArea + (3 + i) * 0x2000);
        memset(fat, 0x00, 0x2000);
        fat[2] = (u16)i;
        fat[3] = (u16)(card->cBlock - 5);
        fat[4] = 5 - 1;
        fn_800CFB28(&fat[2], 0x2000 - sizeof(u32), &fat[0], &fat[1]);
    }
    card->apiCallback = callback ? (WBCardCB)callback : fn_800CCC78;
    fn_800B48F4(card->workArea, 0xA000);
    card->formatStep = 0;
    result = fn_800CDA0C(chan, (u32)card->sectorSize * card->formatStep, fn_800D1588);
    if (result < 0) {
        fn_800CDC90(card, result);
    }
    return result;
}

s32 fn_800D1D24(s32 chan) {
    s32 result = fn_800D16CC(chan, fn_800CDB98(), fn_800CCC7C);
    if (result < 0) return result;
    return fn_800CDEF8(chan);
}
