// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_80299840[];
extern char lbl_80360B70[4];
extern char lbl_80360C40[7];
extern char lbl_80360C48[8];

typedef struct Self_80092CF4 {
    u8 pad[280];
    void *f280; void *f284; void *f288; void *f292; void *f296; void *f300; void *f304; void *f308; void *f312;
    void *f316; void *f320;
} Self_80092CF4;

void *fn_8023F52C(Self_80092CF4 *, char *, char *, char *, s32, s32);
void *fn_80248EAC(char *, char *, char *);
void fn_8023F214(Self_80092CF4 *);

#pragma opt_propagation off
void fn_80092CF4(Self_80092CF4 *self) {
    char *str = lbl_80299840;
    self->f280 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 180, 1, 0);
    self->f284 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 192, 1, 0);
    self->f288 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 212, 1, 0);
    self->f292 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 224, 1, 0);
    self->f296 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 240, 1, 0);
    self->f300 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 256, 1, 0);
    self->f304 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 268, 1, 0);
    self->f308 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 280, 1, 0);
    self->f312 = fn_8023F52C(self, lbl_80360B70, lbl_80360B70, str + 292, 1, 0);
    self->f316 = fn_80248EAC(lbl_80360C40, lbl_80360B70, str + 312);
    self->f320 = fn_80248EAC(lbl_80360C40, lbl_80360B70, lbl_80360C48);
    fn_8023F214(self);
}
#pragma opt_propagation reset

} /* extern "C" */
