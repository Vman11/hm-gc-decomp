// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80297350[];
extern char **lbl_8035A1D0;
extern u32 lbl_8035A1D4;
extern u32 lbl_8035ABF8;
extern const char lbl_8035E5D8[6];
extern const char lbl_8035E5E0[8];
extern const char lbl_8035E5E8[6];
extern const char lbl_8035E5F0[7];
extern const char lbl_8035E5F8[8];
extern const char lbl_8035E600[2];
extern char lbl_80357740[];
int stricmp(const char *, const char *);
void fn_800F6FBC(char *, char *);
u32 strlen(const char *);
char *strtok(char *, const char *);
u32 fn_8023C894(u8 *, char *);
int atoi(const char *);
#define U32(o) (*(u32 *)(p + (o)))
void fn_8006088C(u8 *p) {
    char *s = lbl_80297350;
    u32 i = 0;
    while (i < lbl_8035A1D4) {
        char *arg = lbl_8035A1D0[i++];
        if (stricmp(arg, lbl_8035E5D8) == 0) {
            u32 j;
            fn_800F6FBC(lbl_8035A1D0[i++], lbl_80357740);
            for (j = 0, arg = lbl_80357740; j < strlen(lbl_80357740); arg++, j++) {
                if (*arg >= 'a' && *arg <= 'z') *arg -= 32;
            }
            U32(13316) = 1;
        } else if (stricmp(arg, s + 484) == 0) U32(13964) = 0;
        else if (stricmp(arg, lbl_8035E5E0) == 0) U32(13968) = 1;
        else if (stricmp(arg, s + 496) == 0) { U32(13316) = 2; U32(13972) = 1; }
        else if (stricmp(arg, s + 508) == 0) U32(13976) = 0;
        else if (stricmp(arg, s + 520) == 0) U32(13980) = 1;
        else if (stricmp(arg, lbl_8035E5E8) == 0) U32(13984) = 1;
        else if (stricmp(arg, lbl_8035E5F0) == 0) U32(13988) = 0;
        else if (stricmp(arg, s + 532) == 0) U32(13992) = 0;
        else if (stricmp(arg, s + 544) == 0) U32(14004) = 1;
        else if (stricmp(arg, s + 180) == 0) U32(14008) = 1;
        else if (stricmp(arg, lbl_8035E5F8) == 0) U32(14012) = 1;
        else if (stricmp(arg, s + 556) == 0) U32(14036) = fn_8023C894(p + 14036, strtok(0, lbl_8035E600));
        else if (stricmp(arg, s + 132) == 0) U32(14016) = 1;
        else if (stricmp(arg, s + 144) == 0) U32(14024) = 1;
        else if (stricmp(arg, s + 168) == 0) U32(13996) = 1;
        else if (stricmp(arg, s + 568) == 0) lbl_8035ABF8 = 1;
        else if (stricmp(arg, s + 156) == 0) U32(14020) = atoi(lbl_8035A1D0[i++]);
    }
}

} /* extern "C" */
