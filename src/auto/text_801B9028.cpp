// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_800FB064(void *, void *);
void fn_801C068C(u8 *, void *, u8 *, void *);
void fn_801A6EC8(u8 *, s32, void *, void *);

void fn_8002A984(void);
void fn_8009F130(void);
void fn_8009F134(void);
void fn_8009F150(void);
void fn_801A717C(void);
void fn_801A73D8(void);
void fn_801A7598(void);
void fn_801B8D28(void);
void fn_801B8D30(void);
void fn_801B8E6C(void);
void fn_801B8F88(void);
void fn_801B8FD0(void);
void fn_801B9028(u8 *p, s32 c, void *a, void *b);
void fn_801B9120(void);
void fn_801B91D8(void);
void fn_801B92B8(void);
void fn_801B93F4(void);
void fn_801B9654(void);
void fn_801B9848(void);
void fn_801B9974(void);
void fn_801B9AA0(void);
void fn_801B9BCC(void);
void fn_801B9CF8(void);
void fn_801B9DB4(void);
void fn_801B9F24(void);
void fn_801B9F64(void);
void fn_801B9FD8(void);
void fn_801B9FF8(void);
void fn_801BA0C0(void);
void fn_801BDA0C(void);
void fn_801BDA5C(void);
void fn_801BDB18(void);
void fn_801BDB4C(void);
void fn_801BDD3C(void);
void fn_801C0704(void);
void fn_801C0750(void);
void fn_801C079C(void);
void fn_801C07E8(void);
void fn_801C0834(void);
void fn_801C0A10(void);
void fn_801D6C10(void);
void fn_801D6D7C(void);
void fn_801D6F48(void);
void fn_801D7048(void);
void fn_801D7148(void);
void fn_801D7248(void);
void fn_801D7348(void);
void fn_801D7448(void);
void fn_801D7548(void);
void fn_801D7680(void);
void fn_801D791C(void);
void fn_801D7BC8(void);
void fn_801D7E1C(void);
void fn_801D7F3C(void);
void fn_801D805C(void);
void fn_801D817C(void);
void fn_801D829C(void);
void fn_801D83BC(void);
void fn_801D84DC(void);
void fn_801D85FC(void);
void fn_801D871C(void);
void fn_801D8B9C(void);
void fn_801D8CBC(void);
void fn_801D9D80(void);
void fn_801D9E80(void);
void fn_801D9F80(void);
void fn_801DA398(void);
void fn_801DA4C0(void);
void fn_801DA5E8(void);
void fn_801DAAE4(void);
void fn_801DAC0C(void);
void fn_801DAE5C(void);
void fn_801DAEE4(void);
void fn_801DB00C(void);
void fn_801DB01C(void);
void fn_801DB740(void);
void fn_801DB744(void);
void fn_801DBACC(void);
void fn_801DBF24(void);
void fn_801DC730(void);
void fn_801DD9D4(void);
void *lbl_802EB230[83] = { 0, 0, (void *)fn_801B9028, (void *)fn_801B9F64, (void *)fn_801C0A10, (void *)fn_801BDD3C, (void *)fn_801B9F24, (void *)fn_801DB744, (void *)fn_801C0834, (void *)fn_801DC730, (void *)fn_8009F150, (void *)fn_801B8FD0, (void *)fn_801DBACC, (void *)fn_801BDA5C, (void *)fn_801BDA0C, (void *)fn_801BDB4C, (void *)fn_801BDB18, (void *)fn_801C079C, (void *)fn_801C07E8, (void *)fn_801C0750, (void *)fn_801C0704, (void *)fn_801B8D28, (void *)fn_8002A984, (void *)fn_801BA0C0, (void *)fn_801DB740, (void *)fn_801DB01C, (void *)fn_801DB00C, (void *)fn_801DBF24, (void *)fn_801DAEE4, (void *)fn_801B9654, (void *)fn_801DAC0C, (void *)fn_801A717C, (void *)fn_801B93F4, (void *)fn_801DAAE4, (void *)fn_801DA5E8, (void *)fn_801DA4C0, (void *)fn_801DA398, (void *)fn_801B92B8, (void *)fn_801D9F80, (void *)fn_801D9E80, (void *)fn_801D9D80, (void *)fn_801B9BCC, (void *)fn_801B9AA0, (void *)fn_801B9974, (void *)fn_801B9848, (void *)fn_801D8CBC, (void *)fn_801D8B9C, (void *)fn_801B9CF8, (void *)fn_801B91D8, (void *)fn_801B9120, (void *)fn_801D871C, (void *)fn_801D85FC, (void *)fn_801D84DC, (void *)fn_801D83BC, (void *)fn_801D829C, (void *)fn_801D817C, (void *)fn_801D805C, (void *)fn_801D7F3C, (void *)fn_801D7E1C, (void *)fn_801B9DB4, (void *)fn_801D7BC8, (void *)fn_801D791C, (void *)fn_801D7680, (void *)fn_801D7548, (void *)fn_801D6D7C, (void *)fn_801D6C10, (void *)fn_801DAE5C, (void *)fn_801D7448, (void *)fn_801D7348, (void *)fn_801D7248, (void *)fn_801D7148, (void *)fn_801D7048, (void *)fn_801D6F48, (void *)fn_801B9FF8, (void *)fn_801B8E6C, (void *)fn_801B8D30, (void *)fn_8009F130, (void *)fn_801DD9D4, (void *)fn_8009F134, (void *)fn_801A73D8, (void *)fn_801A7598, (void *)fn_801B8F88, (void *)fn_801B9FD8 };
void fn_801B9028(u8 *p, s32 c, void *a, void *b) {
    char key[16];
    switch (c) {
    case 'a':
        fn_800FB064(b, key);
        fn_801C068C(p, a, p + 360, key);
        break;
    case 'd':
        *(u32 *)(p + 364) |= 1;
        break;
    case 'e':
        *(u32 *)(p + 364) |= 4;
        break;
    case 'h':
        *(u32 *)(p + 364) |= 32;
        break;
    case 'i':
        *(u32 *)(p + 364) |= 64;
        break;
    case 'f':
        *(u32 *)(p + 364) |= 8;
        break;
    case 'g':
        *(u32 *)(p + 364) |= 16;
        break;
    case 'j':
        *(u32 *)(p + 364) |= 128;
        break;
    default:
        fn_801A6EC8(p, c, a, b);
    }
}

} /* extern "C" */
