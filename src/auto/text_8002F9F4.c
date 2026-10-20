// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E2558[];
extern u8 lbl_802AF7D0[];
extern u8 lbl_802AF7E0[];
extern u8 lbl_802EB7B0[];
extern u8 lbl_802B01C4[];
extern u8 lbl_802B00F0[];
extern void *lbl_80359F2C;
void fn_8002FAE4(void);
void __ct__9C8002FAE0Fv(void);
void fn_8002FADC(void);
void fn_8003C604(void *);
void __ct__9C8023D65CFv(void *);
void fn_8002F120(void *);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C8002F9F4Fv(u8 *p) {
    *(void * *)(p + 0) = lbl_802E2558;
    *(void * *)(p + 0) = lbl_802AF7D0;
    __construct_array(p + 12, (void *)fn_8002FAE4, 0, 24, 6);
    fn_8003C604(p + 156);
    *(void * *)(p + 164) = lbl_802AF7E0;
    *(void * *)(p + 164) = lbl_802EB7B0;
    *(void * *)(p + 164) = lbl_802B01C4;
    *(void * *)(p + 168) = lbl_802AF7E0;
    *(void * *)(p + 168) = lbl_802B00F0;
    __ct__9C8023D65CFv(p + 696);
    __construct_array(p + 772, (void *)__ct__9C8002FAE0Fv, 0, 12, 3);
    __construct_array(p + 808, (void *)fn_8002FADC, 0, 16, 3);
    lbl_80359F2C = p;
    fn_8002F120(p);
    return p;
}
