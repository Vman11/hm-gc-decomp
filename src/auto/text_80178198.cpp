// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801781F8[];
void __dl__FPv(int);
void __dt__9C8013BDBCFv(int, int);

extern "C" {
extern u8 lbl_802E8400[];
void fn_8013BDBC(int, int);
}
struct C8013BDBC { char pad[0x18]; ~C8013BDBC(); };
struct C801781F8 : C8013BDBC { ~C801781F8(); virtual void vfx(); };

C801781F8::~C801781F8() {

}

} /* extern "C" */
