#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, int a, int b, int c, int d); virtual void w14(); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
typedef struct { f32 x, y, z; } V3;
struct VG { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *a, void *b, void *c, void *d, int e); virtual void setPos(void *a, void *b, void *c, void *d, int e); };
extern u32 lbl_8035B308;
extern f32 lbl_8035D090, lbl_8035D094, lbl_8035D0A0;
extern f64 lbl_8035D0A8, lbl_8035D0B0;
extern u8 lbl_8035CF7C[4];
extern char lbl_8035D098[8], lbl_8035D0B8[7], lbl_8035D0C0[8], lbl_8035D0C8[7];
extern char lbl_8035D0D0[8], lbl_8035D0D8[8], lbl_8035D0E0[8], lbl_8035D0E8[8];
extern char lbl_8035D0F0[8], lbl_8035D0F8[8], lbl_8035D100[8], lbl_8035D108[8], lbl_8035D110[8], lbl_8035D118[8];
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void *fn_800F8274(int, char *);
void fn_80107244(void *, void *);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_8024125C(int, int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(f32, int, int, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

static inline V3 vsub(const V3 &a, const V3 &b) { V3 t; t.x = a.x - b.x; t.y = a.y - b.y; t.z = a.z - b.z; return t; }
static inline f32 Sq(f32 x) {
    if (x > lbl_8035D090) {
        const f64 _half = lbl_8035D0A8;
        const f64 _three = lbl_8035D0B0;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}

static inline f32 SqV(f32 x) {
    if (x > *(volatile f32 *)&lbl_8035D090) {
        const f64 _half = lbl_8035D0A8;
        const f64 _three = lbl_8035D0B0;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline void walkPlayer(int p, char *name) {
    fn_802494A4(p, 4);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
}

extern "C" {
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_800477E4();
void fn_80047870();
void fn_800478FC();
void fn_800479DC();
void fn_80047A20();
void fn_80047ABC();
void fn_80047C80();
void fn_80047CD0();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802959A0[];
extern char lbl_802959AC[];
extern char lbl_802959B8[];
extern char lbl_802959C4[];
extern char lbl_802959D0[];
extern char lbl_802959DC[];
extern char lbl_802959E8[];
extern char lbl_802959F4[];
extern char lbl_80295A00[];
extern char lbl_80295A0C[];
extern char lbl_80295A18[];
extern char lbl_80295A24[];
extern char lbl_80295A30[];
extern char lbl_80295A3C[];
extern char lbl_80295A48[];
extern char lbl_80295A54[];
extern char lbl_8035CF20[];
extern char lbl_8035CF28[];
extern char lbl_8035CF30[];
extern char lbl_8035CF38[];
extern char lbl_8035CF40[];
extern char lbl_8035CF44[];
extern char lbl_8035CF4C[];
extern char lbl_8035CF54[];
extern char lbl_8035CF5C[];
extern char lbl_8035CF64[];
extern char lbl_8035CF6C[];
extern char lbl_8035CF74[];
extern char lbl_8035CF80[];
extern char lbl_8035CF88[];
extern char lbl_8035CF90[];
extern char lbl_8035CF98[];
extern char lbl_8035CFA0[];
extern char lbl_8035CFA8[];
extern char lbl_8035CFB0[];
extern char lbl_8035CFB8[];
extern char lbl_8035CFC0[];
extern char lbl_8035CFC8[];
extern char lbl_8035CFD0[];
extern char lbl_8035CFD8[];
extern char lbl_8035CFE0[];
extern char lbl_8035CFE8[];
extern char lbl_8035CFF0[];
extern char lbl_8035CFF8[];
extern char lbl_8035D000[];
extern char lbl_8035D008[];
extern char lbl_8035D010[];
extern char lbl_8035D018[];
extern char lbl_8035D020[];
extern char lbl_8035D028[];
extern char lbl_8035D030[];
extern char lbl_8035D038[];
extern char lbl_8035D040[];
extern char lbl_8035D048[];
extern char lbl_8035D050[];
extern char lbl_8035D058[];
extern char lbl_8035D060[];
extern char lbl_8035D068[];
extern char lbl_8035D070[];
extern char lbl_8035D078[];
extern char lbl_8035D080[];
extern char lbl_8035D088[];
}
void fn_80046F4C(int p, int st);
void *lbl_802B5020[380] = {
    (void *)0x00000000, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449,
    (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52,
    (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F,
    (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C,
    (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x00000000, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944,
    (void *)0x00000000, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952,
    (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454,
    (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C,
    (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x40000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x3F800000, (void *)0x00000000, (void *)0xBF800000, (void *)0x3F800000, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x3F800000, (void *)0xBF800000, (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F,
    (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C,
    (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000040,
    (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C, (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E,
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)(char *)lbl_802959A0,
    (void *)(char *)lbl_8035CF20, (void *)(char *)lbl_8035CF28, (void *)(char *)lbl_8035CF30, (void *)(char *)lbl_802959AC, (void *)(char *)lbl_8035CF38, (void *)(char *)lbl_8035CF40, (void *)(char *)lbl_8035CF44, (void *)(char *)lbl_8035CF44,
    (void *)(char *)lbl_8035CF4C, (void *)(char *)lbl_8035CF54, (void *)(char *)lbl_8035CF54, (void *)(char *)lbl_8035CF5C, (void *)(char *)lbl_802959B8, (void *)(char *)lbl_802959B8, (void *)(char *)lbl_8035CF64, (void *)(char *)lbl_8035CF6C,
    (void *)0x00000000, (void *)(char *)lbl_8035CF74, (void *)(char *)lbl_8035CF74, (void *)(char *)&lbl_8035CF7C, (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_8035CF88, (void *)(char *)&lbl_8035CF7C,
    (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_802959C4, (void *)(char *)&lbl_8035CF7C, (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_802959D0, (void *)(char *)&lbl_8035CF7C,
    (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_802959DC, (void *)(char *)&lbl_8035CF7C, (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_802959E8, (void *)(char *)&lbl_8035CF7C,
    (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_802959F4, (void *)(char *)&lbl_8035CF7C, (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_8035CF90, (void *)(char *)&lbl_8035CF7C,
    (void *)(char *)&lbl_8035CF7C, (void *)(char *)lbl_8035CF80, (void *)(char *)lbl_80295A00, (void *)(char *)&lbl_8035CF7C, (void *)(char *)&lbl_8035CF7C, (void *)(char *)&lbl_8035CF7C, (void *)0x40C00000, (void *)0x00000000,
    (void *)0x00000000, (void *)(char *)lbl_8035CF98, (void *)0x40800000, (void *)0x00000000, (void *)0x00000000, (void *)(char *)lbl_8035CFA0, (void *)0x40400000, (void *)0x00000000,
    (void *)0x00000000, (void *)(char *)lbl_8035CFA8, (void *)(char *)lbl_80295A0C, (void *)0x00000000, (void *)0x626F6E65, (void *)0x30520000, (void *)0x00000000, (void *)(char *)lbl_8035CFB0,
    (void *)0x00000001, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)(char *)lbl_8035CFB8, (void *)0x00000001, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000000, (void *)(char *)lbl_8035CFC0, (void *)0x00000001, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)(char *)lbl_8035CFC8, (void *)0x00000001,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)(char *)lbl_8035CFD0, (void *)0x00000001, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000,
    (void *)(char *)lbl_8035CFD8, (void *)(char *)lbl_8035CFE0, (void *)(char *)lbl_8035CFE8, (void *)(char *)lbl_8035CF4C, (void *)(char *)lbl_8035CFF0, (void *)(char *)lbl_8035CFF8, (void *)(char *)lbl_8035CFD8, (void *)(char *)lbl_8035D000,
    (void *)(char *)lbl_80295A18, (void *)(char *)lbl_80295A24, (void *)(char *)lbl_80295A24, (void *)(char *)lbl_8035CF4C, (void *)(char *)lbl_8035D008, (void *)(char *)lbl_80295A30, (void *)(char *)lbl_80295A3C, (void *)(char *)lbl_80295A48,
    (void *)(char *)lbl_8035CF98, (void *)(char *)lbl_8035D010, (void *)(char *)lbl_8035D018, (void *)(char *)lbl_8035CFA8, (void *)(char *)lbl_8035D020, (void *)(char *)lbl_80295A54, (void *)(char *)lbl_8035D028, (void *)(char *)lbl_8035D030,
    (void *)(char *)lbl_8035D038, (void *)(char *)lbl_8035D040, (void *)(char *)lbl_8035D048, (void *)(char *)lbl_8035D050, (void *)(char *)lbl_8035D058, (void *)(char *)lbl_8035D060, (void *)(char *)lbl_8035D068, (void *)(char *)lbl_8035D070,
    (void *)(char *)lbl_8035D078, (void *)(char *)lbl_8035D080, (void *)(char *)lbl_8035D088, (void *)(char *)lbl_8035CFD8, (void *)0x00000000, (void *)0x00000001, (void *)(char *)lbl_8035D000, (void *)0x00000001,
    (void *)0x00000001, (void *)(char *)lbl_80295A18, (void *)0x00000002, (void *)0x00000001, (void *)(char *)lbl_80295A24, (void *)0x00000003, (void *)0x00000002, (void *)(char *)lbl_8035CF4C,
    (void *)0x00000005, (void *)0x00000001, (void *)(char *)lbl_8035D008, (void *)0x00000006, (void *)0x00000001, (void *)(char *)lbl_80295A30, (void *)0x00000007, (void *)0x00000001,
    (void *)(char *)lbl_80295A3C, (void *)0x00000008, (void *)0x00000001, (void *)(char *)lbl_80295A48, (void *)0x00000009, (void *)0x00000001, (void *)(char *)lbl_8035CF98, (void *)0x0000000A,
    (void *)0x00000001, (void *)(char *)lbl_8035D010, (void *)0x0000000B, (void *)0x00000001, (void *)(char *)lbl_8035D018, (void *)0x0000000C, (void *)0x00000001, (void *)(char *)lbl_8035CFA8,
    (void *)0x0000000D, (void *)0x00000001, (void *)(char *)lbl_8035D020, (void *)0x0000000E, (void *)0x00000001, (void *)(char *)lbl_80295A54, (void *)0x0000000F, (void *)0x00000001,
    (void *)(char *)lbl_8035D028, (void *)0x00000010, (void *)0x00000001, (void *)(char *)lbl_8035D030, (void *)0x00000011, (void *)0x00000001, (void *)(char *)lbl_8035D038, (void *)0x00000012,
    (void *)0x00000001, (void *)(char *)lbl_8035D040, (void *)0x00000013, (void *)0x00000001, (void *)(char *)lbl_8035D048, (void *)0x00000014, (void *)0x00000001, (void *)(char *)lbl_8035D050,
    (void *)0x00000015, (void *)0x00000001, (void *)(char *)lbl_8035D058, (void *)0x00000016, (void *)0x00000001, (void *)(char *)lbl_8035D060, (void *)0x00000017, (void *)0x00000001,
    (void *)(char *)lbl_8035D068, (void *)0x00000018, (void *)0x00000001, (void *)(char *)lbl_8035D070, (void *)0x00000019, (void *)0x00000001, (void *)(char *)lbl_8035D078, (void *)0x0000001A,
    (void *)0x00000001, (void *)(char *)lbl_8035D080, (void *)0x0000001B, (void *)0x00000001, (void *)(char *)lbl_8035D088, (void *)0x0000001C, (void *)0x00000001, (void *)0x00000000,
    (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004, (void *)0x00000005, (void *)0x00000006, (void *)0x00000007, (void *)0x00000008,
    (void *)0x00000009, (void *)0x0000000A, (void *)0x0000000B, (void *)0x0000000C, (void *)0x0000000D, (void *)0x0000000E, (void *)0x0000000F, (void *)0x00000010,
    (void *)0x00000011, (void *)0x00000012, (void *)0x00000013, (void *)0x00000014, (void *)0x00000015, (void *)0x00000016, (void *)0x00000017, (void *)0x00000018,
    (void *)0x00000019, (void *)0x0000001A, (void *)0x0000001B, (void *)0x0000001C
};
static s32 tA[29] = {
    (s32)0x00000000, (s32)0x00000006, (s32)0x00000008, (s32)0x0000000B, (s32)0x0000000F, (s32)0x00000013, (s32)0x00000017, (s32)0x00000019,
    (s32)0x0000001B, (s32)0x0000001E, (s32)0x00000020, (s32)0x00000024, (s32)0x00000025, (s32)0x00000028, (s32)0x0000002B, (s32)0x0000002C,
    (s32)0x0000002F, (s32)0x00000030, (s32)0x00000031, (s32)0x00000032, (s32)0x00000033, (s32)0x00000034, (s32)0x00000035, (s32)0x00000036,
    (s32)0x00000037, (s32)0x00000038, (s32)0x00000039, (s32)0x0000003A, (s32)0x0000003E
};
static s32 tB[66] = {
    (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000005, (s32)0x00000001,
    (s32)0x00000001, (s32)0x00000001, (s32)0x00000004, (s32)0x00000001, (s32)0x00000002, (s32)0x00000002, (s32)0x00000001, (s32)0x00000001,
    (s32)0x00000002, (s32)0x00000002, (s32)0x00000001, (s32)0x00000001, (s32)0x00000002, (s32)0x00000002, (s32)0x00000001, (s32)0x00000001,
    (s32)0x00000005, (s32)0x00000001, (s32)0x00000005, (s32)0x00000002, (s32)0x00000001, (s32)0x00000003, (s32)0x00000005, (s32)0x00000001,
    (s32)0x00000002, (s32)0x00000001, (s32)0x00000002, (s32)0x00000001, (s32)0x00000006, (s32)0x00000001, (s32)0x00000001, (s32)0x00000004,
    (s32)0x00000003, (s32)0x00000001, (s32)0x00000002, (s32)0x00000006, (s32)0x00000004, (s32)0x00000001, (s32)0x00000001, (s32)0x00000006,
    (s32)0x00000006, (s32)0x00000006, (s32)0x00000006, (s32)0x00000006, (s32)0x00000006, (s32)0x00000006, (s32)0x00000006, (s32)0x00000006,
    (s32)0x00000006, (s32)0x00000006, (s32)0x00000001, (s32)0x00000003, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000003,
    (s32)0x00000001, (s32)0x00000001
};
static s32 tC[66] = {
    (s32)0x00000000, (s32)0x00000001, (s32)0x00000002, (s32)0x00000003, (s32)0x00000004, (s32)0x00000005, (s32)0x00000006, (s32)0x00000007,
    (s32)0x00000006, (s32)0x00000008, (s32)0x00000006, (s32)0x00000006, (s32)0x00000009, (s32)0x00000006, (s32)0x00000009, (s32)0x00000006,
    (s32)0x0000000A, (s32)0x00000006, (s32)0x0000000A, (s32)0x00000006, (s32)0x00000009, (s32)0x00000006, (s32)0x00000009, (s32)0x0000000B,
    (s32)0x00000006, (s32)0x0000000C, (s32)0x00000006, (s32)0x0000000D, (s32)0x0000000E, (s32)0x0000000D, (s32)0x0000000F, (s32)0x00000010,
    (s32)0x00000006, (s32)0x00000009, (s32)0x00000006, (s32)0x00000009, (s32)0x00000006, (s32)0x00000006, (s32)0x00000011, (s32)0x00000006,
    (s32)0x00000006, (s32)0x00000012, (s32)0x00000006, (s32)0x00000013, (s32)0x00000006, (s32)0x00000014, (s32)0x00000006, (s32)0x00000015,
    (s32)0x00000016, (s32)0x00000017, (s32)0x00000018, (s32)0x00000019, (s32)0x0000001A, (s32)0x0000001B, (s32)0x0000001C, (s32)0x0000001D,
    (s32)0x0000001E, (s32)0x0000001F, (s32)0x00000006, (s32)0x00000020, (s32)0x00000006, (s32)0x00000020, (s32)0x00000006, (s32)0x00000021,
    (s32)0x00000006, (s32)0x00000021
};
void *lbl_802B5894[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_80047ABC, (void *)fn_80249AC4, (void *)fn_80047A20, (void *)fn_80242210, (void *)fn_800479DC, (void *)fn_8023D198,
    (void *)fn_80047C80, (void *)fn_80046F4C, (void *)fn_80241D80, (void *)fn_8003F140, (void *)fn_8003F18C, (void *)fn_800478FC, (void *)fn_800477E4, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_80047CD0, (void *)fn_80047870
};

void fn_80046F4C(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    u8 d[16];
    u8 c[12];
    V3 b;
    V3 e;
    V3 a;
    V3 a3;
    V3 b3;
    volatile f32 dmg;
    VO *o;

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        break;
    case 1: {
        int g = *(int *)(p + 0xe0);
        *(f32 *)(g + 0x13c) = lbl_8035D090;
        *(f32 *)(g + 0x140) = lbl_8035D090;
        *(f32 *)(g + 0x144) = lbl_8035D094;
        if (*(VG **)(p + 0xe4) != 0) {
            void *bone;
            (*(VG **)(p + 0xe4))->getPos(&a, &b, c, d, 0);
            e = a;
            b.x = -b.x;
            b.y = -b.y;
            b.z = -b.z;
            bone = *(void **)(*(int *)(p + 0xe4) + 0xa0);
            if (bone != 0 && (bone = fn_800F8274(*(int *)((int)bone + 0xa8), lbl_8035D098)) != 0) {
                fn_80107244(bone, &e);
                e.z = a.z;
                (*(VG **)(p + 0xe0))->setPos(&e, &b, c, d, 0);
            }
        }
        fn_80241628(p, 4, 0);
        fn_80241588(p, 2, 0, lbl_8035D0A0);
        break;
    }
    case 2:
        if (*(int *)(p + 0x130) != 0) {
            fn_802494A4(p, 5);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035D0A0);
            fn_80242168(lbl_8035D094, p);
            fn_8023F9C8(p, 0);
            fn_802490E0(p, 0, **(f32 **)(p + 0x124));
        }
        break;
    case 3: {
        VO *tg;
        f32 len, r;
        fn_80241628(p, 0, 0);
        fn_802401A0(p);
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        fn_8023F9C8(p, 3);
        fn_8023F9C8(p, 4);
        fn_8023F9C8(p, 5);
        tg = *(VO **)(p + 0x118);
        (*(VO **)(p + 0xe0))->getPos(&a3, 0, 0, 0, 0);
        tg->getPos(&b3, 0, 0, 0, 0);
        { f32 dz, dy, dx;
        dx = b3.x - a3.x;
        dy = b3.y - a3.y;
        dz = b3.z - a3.z;
        { f32 xx = dx * dx, yy = dy * dy, zz = dz * dz;
        *(volatile f32 *)&b3.x = dx; *(volatile f32 *)&b3.y = dy; *(volatile f32 *)&b3.z = dz;
        len = SqV(xx + yy + zz); } }
        r = **(f32 **)(p + 0x120);
        {
            f32 dm = (len > r) ? lbl_8035D090 : **(f32 **)(p + 0x11c) * ((r - len) / r);
            dmg = dm;
            if (dm > *(volatile f32 *)&lbl_8035D090) {
                dmg = -dm;
                (*(VO **)(p + 0x118))->send(lbl_8035D0B8, 0, 0, (void *)&dmg, 0);
            }
        }
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_8035D0C0, lbl_8035CF7C);
        fn_80241588(p, 1, 0, lbl_8035D0A0);
        fn_8024125C(p, 0);
        fn_802491DC(p, 2);
        break;
    }
    case 4:
        fn_80241628(p, 5, 0);
        fn_80241588(p, 0, 0, lbl_8035D0A0);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 5:
        *(u32 *)(p + 0x134) = 1;
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035D0A0);
        fn_80242168(lbl_8035D094, p);
        break;
    case 6:
        return;
    case 7:
        *(u32 *)(p + 0x134) = 0;
        break;
    case 8:
        fn_802494A4(p, 2);
        break;
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        fn_802405B8(p);
        break;
    case 11:
        *(u32 *)(p + 0x128) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x12c) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 1);
        break;
    case 12:
        fn_802494A4(p, 1);
        break;
    case 13:
        *(u32 *)(p + 0x130) = 1;
        break;
    case 14:
        *(u32 *)(p + 0x130) = 1;
        fn_802494A4(p, 5);
        break;
    case 15:
        *(u32 *)(p + 0x130) = 0;
        break;
    case 16:
        *(u32 *)(p + 0x130) = 0;
        fn_802494A4(p, 2);
        break;
    case 17:
        fn_802494A4(p, 2);
        break;
    case 18:
        fn_802402E0(p);
        o = *(VO **)(p + 0x128);
        if (o) o->send(lbl_8035D0C8, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x12c), 0);
        break;
    case 19:
        fn_802494A4(p, 4);
        fn_802402E0(p);
        break;
    case 20:
        fn_802494A4(p, 2);
        fn_802401D0(p);
        break;
    case 21: walkPlayer(p, lbl_8035D0D0); break;
    case 22: walkPlayer(p, lbl_8035D0D8); break;
    case 23: walkPlayer(p, lbl_8035D0E0); break;
    case 24: walkPlayer(p, lbl_8035D0E8); break;
    case 25: walkPlayer(p, lbl_8035D0F0); break;
    case 26: walkPlayer(p, lbl_8035D0F8); break;
    case 27: walkPlayer(p, lbl_8035D100); break;
    case 28: walkPlayer(p, lbl_8035D108); break;
    case 29: walkPlayer(p, lbl_8035D110); break;
    case 30: walkPlayer(p, lbl_8035D118); break;
    case 31:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(lbl_8035D0A0, p, *(int *)(p + 0xf0), 0, 1, *(int *)(p + 0xec));
        break;
    case 32:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        fn_8023F864(p, 2);
        fn_8023F864(p, 3);
        fn_8023F864(p, 4);
        fn_8023F864(p, 5);
        break;
    case 33:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
    case 34:
        break;
    }
}
}
