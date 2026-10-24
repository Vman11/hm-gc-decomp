// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o) (*(void **)((u8 *)(p) + (o)))
void fn_8011FC6C(void *, void *);
void fn_801554D4(void *);
void fn_80155F58(void *);
void fn_80159A9C(void *);
void fn_8015A994(void *);
void fn_8015C730(void *);
void fn_8015DED8(void *);
void fn_8015E150(void *);
void fn_80161208(void *);
void fn_8016E0D8(void *);
void fn_8016F998(void *);
void fn_80170708(void *);
void fn_80171334(void *);
void fn_80179E68(void *);
void fn_802181F0(void *);
void fn_80176908(void *);
void fn_80218750(void *);
void fn_8014D26C(void *a, u8 *p) {
    fn_8011FC6C(a, p);
    if (F(p,12)) fn_801554D4(F(p,12)); else fn_801554D4(F(p,8));
    if (F(p,168)) fn_80155F58(F(p,168)); else fn_80155F58(F(p,8));
    if (F(p,44)) fn_80159A9C(F(p,44)); else fn_80159A9C(F(p,8));
    if (F(p,48)) fn_8015A994(F(p,48)); else fn_8015A994(F(p,8));
    if (F(p,68)) fn_8015C730(F(p,68)); else fn_8015C730(F(p,8));
    if (F(p,68)) fn_8015C730(F(p,68)); else fn_8015C730(F(p,8));
    if (F(p,88)) fn_80179E68(F(p,88)); else fn_80179E68(F(p,8));
    if (F(p,100)) fn_8015DED8(F(p,100)); else fn_8015DED8(F(p,8));
    if (F(p,104)) fn_8015E150(F(p,104)); else fn_8015E150(F(p,8));
    if (F(p,108)) fn_802181F0(F(p,108)); else fn_802181F0(F(p,8));
    if (F(p,120)) fn_80161208(F(p,120)); else fn_80161208(F(p,8));
    if (F(p,148)) fn_8016E0D8(F(p,148)); else fn_8016E0D8(F(p,8));
    if (F(p,92)) fn_8016F998(F(p,92)); else fn_8016F998(F(p,8));
    if (F(p,160)) fn_80170708(F(p,160)); else fn_80170708(F(p,8));
    if (F(p,164)) fn_80171334(F(p,164)); else fn_80171334(F(p,8));
    if (F(p,184)) { fn_80176908(F(p,184)); fn_80218750(F(p,184)); } else { fn_80176908(F(p,8)); fn_80218750(F(p,8)); }
}

} /* extern "C" */
