/* Functions from 0x8002F118 to 0x8002F3C8, found by decomp-toolkit. */
#include "common.h"

s32 fn_8002F118(s32 arg0) {
    return arg0 + 0xC;
}

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern f32 lbl_8035B99C;
typedef struct { u8 pad[512]; u32 arr[10]; } TA;
typedef struct { u32 a; f32 x, y, z; u32 c; f32 t; } E6;
typedef struct { u8 pad[12]; E6 e[6]; } T6;
void fn_8002F120(u8 *o) {
    u8 i;
    u32 j;
    u32 z = 0;
    F(o,8,u32) = z;
    F(o,364,u32) = z;
    F(o,360,f32) = lbl_8035B99C;
    F(o,372,u32) = z;
    F(o,368,f32) = lbl_8035B99C;
    F(o,4,u32) = z;
    F(o,648,u32) = z;
    F(o,172,u32) = z;
    F(o,176,u32) = z;
    F(o,184,u32) = z;
    F(o,188,u32) = z;
    F(o,192,u32) = z;
    F(o,180,u32) = z;
    F(o,200,u32) = z;
    F(o,196,u32) = z;
    F(o,692,u32) = z;
    F(o,380,u32) = z;
    F(o,384,u32) = z;
    F(o,388,u32) = z;
    F(o,560,u32) = z;
    F(o,568,u32) = z;
    F(o,564,u32) = z;
    F(o,580,u32) = z;
    F(o,572,u32) = z;
    F(o,576,u32) = z;
    F(o,676,u32) = z;
    F(o,680,f32) = lbl_8035B99C;
    F(o,684,f32) = lbl_8035B99C;
    F(o,688,u32) = z;
    F(o,592,f32) = lbl_8035B99C;
    F(o,608,f32) = lbl_8035B99C;
    F(o,604,f32) = lbl_8035B99C;
    F(o,612,f32) = lbl_8035B99C;
    F(o,552,u32) = z;
    F(o,556,u32) = z;
    F(o,620,u32) = z;
    F(o,624,u32) = z;
    F(o,628,u32) = z;
    F(o,632,u32) = z;
    F(o,636,f32) = lbl_8035B99C;
    F(o,640,f32) = lbl_8035B99C;
    F(o,204,u32) = z;
    F(o,644,u32) = z;
    F(o,756,f32) = lbl_8035B99C;
    F(o,496,u32) = z;
    F(o,500,u32) = z;
    F(o,656,u32) = z;
    F(o,660,f32) = lbl_8035B99C;
    F(o,664,f32) = lbl_8035B99C;
    F(o,668,f32) = lbl_8035B99C;
    F(o,672,f32) = lbl_8035B99C;
    F(o,652,u32) = z;
    F(o,392,u32) = z;
    F(o,400,u32) = z;
    F(o,396,u32) = z;
    F(o,408,u32) = z;
    F(o,416,u32) = z;
    F(o,420,u32) = z;
    F(o,412,u32) = z;
    F(o,460,u32) = z;
    F(o,464,u32) = z;
    F(o,504,u32) = z;
    F(o,508,u32) = z;
    F(o,436,u32) = z;
    F(o,440,u32) = z;
    F(o,476,u32) = z;
    F(o,480,u32) = z;
    F(o,484,u32) = z;
    F(o,444,u32) = z;
    F(o,456,u32) = z;
    F(o,448,u32) = z;
    F(o,452,u32) = z;
    F(o,472,u32) = z;
    F(o,488,u32) = z;
    F(o,492,u32) = z;
    for (j = 0; j < 6; j++) {
        E6 *e = &((T6 *)o)->e[j];
        e->c = z; e->x = lbl_8035B99C; e->y = lbl_8035B99C; e->z = lbl_8035B99C; e->a = z; e->t = lbl_8035B99C;
    }
    for (i = 0; i < 10; i++) { u32 *a = ((TA *)o)->arr; a[i] = z; }
    F(o,376,u32) = 0;
    F(o,616,f32) = lbl_8035B99C;
}
