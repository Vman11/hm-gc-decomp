// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct OV { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual u32 s5(int); };
extern char lbl_802A8858[];
#pragma opt_propagation off
OV **fn_8010FEDC(void *, void *, const char *, int);
void fn_800F6FBC(u32, u8 *);
void fn_80239024(u8 *);
#define F(o, t) (*(t *)(p + (o)))
static inline u32 get(u8 *p, const char *n) { return (*fn_8010FEDC(F(12, void *), F(16, void *), n, 1))->s5(0); }

void fn_802349DC(u8 *p) {
    char *str = lbl_802A8858;
    F(996, u32) = get(p, (str + 164));
    F(1000, u32) = get(p, (str + 180));
    F(1004, u32) = get(p, (str + 196));
    F(1008, u32) = get(p, (str + 216));
    F(1024, u32) = get(p, (str + 228));
    F(1028, u32) = get(p, (str + 244));
    F(1012, u32) = get(p, (str + 264));
    F(1016, u32) = get(p, (str + 284));
    F(1068, u32) = *F(1016, u32 *);
    fn_800F6FBC(get(p, (str + 296)), p + 1036);
    fn_800F6FBC(get(p, (str + 312)), p + 1044);
    F(1020, u32) = get(p, (str + 328));
    F(1032, u32) = get(p, (str + 348));
    F(1060, f32) = *F(1004, f32 *);
    F(180, u32) |= 4;
    fn_80239024(p);
}

} /* extern "C" */
