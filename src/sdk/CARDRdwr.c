#include "common.h"
extern u8 lbl_80323560[];
extern u8 lbl_80323560[];
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



/* ==== functions 800cf240-800cf4c0 ==== */
#pragma auto_inline off
void fn_800CF240(s32 chan, s32 result) {
    s32 fn_800CD7BC(s32 chan, WBCardCB callback);
    s32 fn_800CDC90(WBCard *card, s32 result);
    extern u8 lbl_80323560[];
    WBCard *card;
    WBCardCB callback;
    card = &WB_CARDBLK[chan];
    if (result >= 0) {
        card->xferred += 512;
        card->addr += 512;
        card->buffer = (u8 *)card->buffer + 512;
        if (--card->repeat > 0) {
            result = fn_800CD7BC(chan, fn_800CF240);
            if (result >= 0) {
                return;
            }
        }
    }
    if (!card->apiCallback) {
        fn_800CDC90(card, result);
    }
    callback = card->xferCallback;
    if (callback) {
        card->xferCallback = 0;
        callback(chan, result);
    }
}

#pragma auto_inline off
s32 fn_800CF31C(s32 chan, u32 addr, s32 length, void *dst, WBCardCB callback) {
    s32 fn_800CD7BC(s32 chan, WBCardCB callback);
    void fn_800CF240(s32 chan, s32 result);
    extern u8 lbl_80323560[];
    WBCard *card;
    card = &WB_CARDBLK[chan];
    if (card->attached == 0) {
        return -3;
    }
    card->xferCallback = callback;
    card->repeat = (length / 512u);
    card->addr = addr;
    card->buffer = dst;
    return fn_800CD7BC(chan, fn_800CF240);
}

#pragma auto_inline off
void fn_800CF380(s32 chan, s32 result) {
    s32 fn_800CD8F0(s32 chan, WBCardCB callback);
    s32 fn_800CDC90(WBCard *card, s32 result);
    extern u8 lbl_80323560[];
    WBCard *card;
    WBCardCB callback;
    card = &WB_CARDBLK[chan];
    if (result >= 0) {
        card->xferred += 128;
        card->addr += 128;
        card->buffer = (u8 *)card->buffer + 128;
        if (--card->repeat > 0) {
            result = fn_800CD8F0(chan, fn_800CF380);
            if (result >= 0) {
                return;
            }
        }
    }
    if (!card->apiCallback) {
        fn_800CDC90(card, result);
    }
    callback = card->xferCallback;
    if (callback) {
        card->xferCallback = 0;
        callback(chan, result);
    }
}

#pragma auto_inline off
s32 fn_800CF45C(s32 chan, u32 addr, s32 length, void *dst, WBCardCB callback) {
    s32 fn_800CD8F0(s32 chan, WBCardCB callback);
    void fn_800CF380(s32 chan, s32 result);
    extern u8 lbl_80323560[];
    WBCard *card;
    card = &WB_CARDBLK[chan];
    if (card->attached == 0) {
        return -3;
    }
    card->xferCallback = callback;
    card->repeat = (length / 128u);
    card->addr = addr;
    card->buffer = dst;
    return fn_800CD8F0(chan, fn_800CF380);
}
