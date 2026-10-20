// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8021138C(void *);
void fn_80212114(void *);
void fn_80216578(void *);
void fn_80208590(void *);
void fn_80215BF4(void *);
void fn_80210828(void *);
void fn_802147DC(void *);
void fn_8021344C(void *);
void fn_8021B2F4(void *);
void fn_80211474(void *);
void fn_800FA3D4(void *);
void fn_800F931C(void *);
void fn_800F9BB4(void *);
void fn_800FB4CC(void *);
extern void *lbl_8035AA08;
extern void *lbl_8035A9F8;
extern void *lbl_8035AA00;
extern void *lbl_8035AA10;

void fn_8011A24C(void *p, u8 *q) {
    if (*(void **)(q + 24) != NULL) {
        fn_8021138C(*(void **)(q + 24));
    } else {
        fn_8021138C(*(void **)(q + 20));
    }
    if (*(void **)(q + 28) != NULL) {
        fn_80212114(*(void **)(q + 28));
    } else {
        fn_80212114(*(void **)(q + 20));
    }
    if (*(void **)(q + 32) != NULL) {
        fn_80216578(*(void **)(q + 32));
    } else {
        fn_80216578(*(void **)(q + 20));
    }
    if (*(void **)(q + 36) != NULL) {
        fn_80208590(*(void **)(q + 36));
    } else {
        fn_80208590(*(void **)(q + 20));
    }
    if (*(void **)(q + 40) != NULL) {
        fn_80215BF4(*(void **)(q + 40));
    } else {
        fn_80215BF4(*(void **)(q + 20));
    }
    if (*(void **)(q + 44) != NULL) {
        fn_80210828(*(void **)(q + 44));
        fn_802147DC(*(void **)(q + 44));
        fn_8021344C(*(void **)(q + 44));
        fn_8021B2F4(*(void **)(q + 44));
    } else {
        fn_80210828(*(void **)(q + 20));
        fn_802147DC(*(void **)(q + 20));
        fn_8021344C(*(void **)(q + 20));
        fn_8021B2F4(*(void **)(q + 20));
    }
    if (*(void **)(q + 52) != NULL) {
        fn_80211474(*(void **)(q + 52));
    } else {
        fn_80211474(*(void **)(q + 20));
    }
    if (lbl_8035AA08 == NULL) {
        if (*(void **)(q + 56) != NULL) {
            fn_800FA3D4(*(void **)(q + 56));
        } else {
            fn_800FA3D4(*(void **)(q + 20));
        }
    }
    if (lbl_8035A9F8 == NULL) {
        if (*(void **)(q + 60) != NULL) {
            fn_800F931C(*(void **)(q + 60));
        } else {
            fn_800F931C(*(void **)(q + 20));
        }
    }
    if (lbl_8035AA00 == NULL) {
        if (*(void **)(q + 64) != NULL) {
            fn_800F9BB4(*(void **)(q + 64));
        } else {
            fn_800F9BB4(*(void **)(q + 20));
        }
    }
    if (lbl_8035AA10 == NULL) {
        fn_800FB4CC(*(void **)(q + 20));
    }
}

} /* extern "C" */
