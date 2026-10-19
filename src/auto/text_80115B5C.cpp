/* Functions from 0x80115B5C to 0x80115C58, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_80115B5C(void) {
    return 0;
}

s32 fn_80115B64(void) {
    return 0;
}

void fn_80115B6C(s32 *arg0, u32 arg1, s32 arg2, s8 *arg3) {
 s8 *out;
 u32 word;
 s32 count;
 s32 skip = 0;
 if (*arg0 >= 0x100) {
  s32 shift = 3;
  out = arg3;
  count = 0;
  for (;;) {
   s8 ch;
   word = *arg0;
   ch = word >> (shift * 8);
   if (!ch) break;
   if (skip) skip = 0;
   else if (arg1 && ch == '%') skip = 1;
   else *out = word;
   if (shift == 0) { arg0++; count++; out++; }
   shift = (shift + 3) & 3;
  }
  arg3[count] = 0;
 } else {
  s32 ch;
  out = arg3;
  count = 0;
  while ((ch = *arg0) != 0) {
   if (skip) skip = 0;
   else if (arg1 && ch == '%') { if (arg2 > 0) skip = 1; }
   else *out = ch;
   arg0++; count++; out++;
  }
  arg3[count] = 0;
 }
}

} /* extern "C" */
