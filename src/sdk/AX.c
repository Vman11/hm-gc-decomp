/* AX.c (Dolphin SDK 2003) : 0x800C6EC8 - 0x800C6F6C of auto/text_800B2E70. Based on dolsdk2001 src/ax/AX.c. */
#include "common.h"

void OSRegisterVersion(const char *id);
void fn_800C6FF8(void); /* __AXAllocInit */
void fn_800C70AC(void); /* __AXAllocQuit */
void fn_800C9744(void); /* __AXVPBInit */
void fn_800C9944(void); /* __AXVPBQuit */
void fn_800C8C68(void); /* __AXSPBInit */
void fn_800C8C94(void); /* __AXSPBQuit */
void fn_800C74DC(void); /* __AXAuxInit */
void fn_800C75C0(void); /* __AXAuxQuit */
void fn_800C8058(void); /* __AXClInit */
void fn_800C807C(void); /* __AXClQuit */
void fn_800C8464(u32 outputBufferMode); /* __AXOutInit */
void fn_800C8804(void); /* __AXOutQuit */
#define __AXAllocInit fn_800C6FF8
#define __AXAllocQuit fn_800C70AC
#define __AXVPBInit fn_800C9744
#define __AXVPBQuit fn_800C9944
#define __AXSPBInit fn_800C8C68
#define __AXSPBQuit fn_800C8C94
#define __AXAuxInit fn_800C74DC
#define __AXAuxQuit fn_800C75C0
#define __AXClInit fn_800C8058
#define __AXClQuit fn_800C807C
#define __AXOutInit fn_800C8464
#define __AXOutQuit fn_800C8804
#define AXInit fn_800C6EC8
#define AXInitEx fn_800C6EEC
#define AXQuit fn_800C6F38

char *__AXVersion = "<< Dolphin SDK - AX\trelease build: Apr 17 2003 12:33:57 (0x2301) >>";

void AXInitEx(u32 outputBufferMode);

void AXInit(void) {
    AXInitEx(0);
}

void AXInitEx(u32 outputBufferMode) {
    OSRegisterVersion(__AXVersion);
    __AXAllocInit();
    __AXVPBInit();
    __AXSPBInit();
    __AXAuxInit();
    __AXClInit();
    __AXOutInit(outputBufferMode);
}

void AXQuit(void) {
    __AXAllocQuit();
    __AXVPBQuit();
    __AXSPBQuit();
    __AXAuxQuit();
    __AXClQuit();
    __AXOutQuit();
}
