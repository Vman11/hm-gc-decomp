/* Functions from 0x80210E48 to 0x80210F20, found by decomp-toolkit. */
#include "common.h"

char *fn_80210E48(u32 arg0) {
 struct StringData { char first[12]; char rest[0x244]; };
 extern struct StringData lbl_802A6ED0;
 struct StringData *base = &lbl_802A6ED0;
 switch (arg0) {
 case 0: return base->first;
 case 1: return (char *)base + 0xc;
 case 2: return (char *)base + 0x28;
 case 3: return (char *)base + 0x4c;
 case 4: return (char *)base + 0x5c;
 case 5: return (char *)base + 0x70;
 case 6: return (char *)base + 0x88;
 case 7: return (char *)base + 0xac;
 case 8: return (char *)base + 0xd0;
 case 9: return (char *)base + 0xf0;
 case 10: return (char *)base + 0x104;
 case 11: return (char *)base + 0x128;
 case 12: return (char *)base + 0x154;
 case 13: return (char *)base + 0x170;
 case 14: return (char *)base + 0x1a4;
 case 15: return (char *)base + 0x1bc;
 case 16: return (char *)base + 0x1d0;
 case 17: return (char *)base + 0x1e0;
 case 18: return (char *)base + 0x1f4;
 case 19: return (char *)base + 0x208;
 case 20: return (char *)base + 0x224;
 case 21:
 default: return (char *)base + 0x23c;
 }
}
