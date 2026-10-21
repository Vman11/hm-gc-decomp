/* AXProf.c (Dolphin SDK 2003) : 0x800C9EC4 - 0x800C9F0C of auto/text_800B2E70. = dolsdk2001 src/ax/AXProf.c
 * (AXInitProfile / AXGetProfile are not used by this program). */
#include "common.h"

typedef s64 OSTime;
typedef struct AXPROFILE {
    OSTime axFrameStart;
    OSTime auxProcessingStart;
    OSTime auxProcessingEnd;
    OSTime userCallbackStart;
    OSTime userCallbackEnd;
    OSTime axFrameEnd;
    u32 axNumVoices;
} AXPROFILE;

#define __AXGetCurrentProfile fn_800C9EC4

static AXPROFILE *__AXProfile;
static u32 __AXMaxProfiles;
static u32 __AXCurrentProfile;
static u32 __AXProfileInitialized;

AXPROFILE *__AXGetCurrentProfile(void) {
    AXPROFILE *profile;

    if (__AXProfileInitialized != 0U) {
        profile = &__AXProfile[__AXCurrentProfile];
        __AXCurrentProfile += 1;
        __AXCurrentProfile %= __AXMaxProfiles;
        return profile;
    }
    return 0;
}
