// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V80165BF0 {
    u8 pad[12];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
void fn_8016CBB8(void *a, void *b);
void fn_80135B08(void *p);
void fn_8012163C(void *p);
void *memset(void *p, s32 c, u32 n);

void fn_80165BF0(u8 *p) {
    ((V80165BF0 *)(p + 6464))->v4();
    if (M2C_FIELD(p, void **, 0) != 0) fn_8016CBB8(M2C_FIELD(p, void **, 6452), p);
    fn_80135B08(p);
    M2C_FIELD(p, s32 *, 6452) = 0;
    M2C_FIELD(p, s32 *, 6456) = 0;
    M2C_FIELD(p, s32 *, 6908) = 0;
    M2C_FIELD(p, s32 *, 6460) = 0;
    M2C_FIELD(p, s32 *, 6568) = 2;
    M2C_FIELD(p, s32 *, 6572) = 2;
    fn_8012163C(p + 6576);
    M2C_FIELD(p, s32 *, 6840) = 0;
    M2C_FIELD(p, s32 *, 6844) = 0;
    memset(p + 6580, 0, 96);
    memset(p + 6676, 0, 96);
    M2C_FIELD(p, s32 *, 6804) = 0;
    memset(p + 6808, 0, 32);
    M2C_FIELD(p, s32 *, 6848) = 0;
    M2C_FIELD(p, s32 *, 6852) = 0;
    M2C_FIELD(p, s32 *, 6856) = 0;
    M2C_FIELD(p, s32 *, 6860) = 0;
    M2C_FIELD(p, s32 *, 6868) = 0;
    M2C_FIELD(p, s32 *, 6872) = 0;
    M2C_FIELD(p, s32 *, 6876) = 0;
    M2C_FIELD(p, s32 *, 6880) = 0;
    M2C_FIELD(p, s32 *, 6884) = 0;
    M2C_FIELD(p, s32 *, 6888) = 0;
    M2C_FIELD(p, s32 *, 6892) = 0;
    M2C_FIELD(p, s32 *, 6896) = 0;
    M2C_FIELD(p, s32 *, 6900) = 0;
    M2C_FIELD(p, s32 *, 6904) = 0;
}

} /* extern "C" */
