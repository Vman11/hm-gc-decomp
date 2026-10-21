/* dvdFatal.c (Dolphin SDK 2003) : 0x800C05F0 - 0x800C071C of auto/text_800B2E70. */
#include "common.h"

typedef struct GXColor {
    u8 r, g, b, a;
} GXColor;

u32 VIGetTvFormat(void);
u16 fn_800B6B0C(void); /* OSGetFontEncode */
u8 fn_800B92DC(void);  /* OSGetLanguage */
void fn_800B6024(GXColor fg, GXColor bg, const char *msg); /* OSFatal */
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
#define OSGetFontEncode fn_800B6B0C
#define OSGetLanguage fn_800B92DC
#define OSFatal fn_800B6024
#define ShowMessage fn_800C05F0
#define DVDSetAutoFatalMessaging fn_800C067C
#define __DVDPrintFatalMessage fn_800C06EC

static void (*FatalFunc)(void) = NULL;

const char *Japanese = "\n\n\n\203G\203\211\201[\202\252\224\255\220\266\202\265\202\334\202\265\202\275\201B\n\n\226{\221\314\202\314\203p\203\217\201[\203{\203^\203\223\202\360\211\237\202\265\202\304\223d\214\271\202\360OFF\202\311\202\265\201A\n\226{\221\314\202\314\216\346\210\265\220\340\226\276\217\221\202\314\216w\216\246\202\311\217]\202\301\202\304\202\255\202\276\202\263\202\242\201B";
const char *English = "\n\n\nAn error has occurred.\nTurn the power off and refer to the\nNintendo GameCube Instruction Booklet\nfor further instructions.";
const char *const Europe[] = {
    "\n\n\nAn error has occurred.\nTurn the power off and refer to the\nNintendo GameCube\231 Instruction Booklet\nfor further instructions.",
    "\n\n\nEin Fehler ist aufgetreten.\nBitte schalten Sie den NINTENDO GAMECUBE\naus und lesen Sie die Bedienungsanleitung,\num weitere Informationen zu erhalten.",
    "\n\n\nUne erreur est survenue.\nEteignez la console et r\351f\351rez-vous au\nmanuel d'instructions NINTENDO GAMECUBE\npour de plus amples informations.",
    "\n\n\nSe ha producido un error.\nApaga la consola y consulta el manual\nde instrucciones de NINTENDO GAMECUBE\npara obtener m\341s informaci\363n.",
    "\n\n\nSi \350 verificato un errore.\nSpegni (OFF) e controlla il manuale\nd'istruzioni del NINTENDO GAMECUBE\nper ulteriori indicazioni.",
    "\n\n\nEr is een fout opgetreden.\nZet de NINTENDO GAMECUBE uit en\nraadpleeg de handleiding van de\nNintendo GameCube voor nadere\ninstructies.",
};

void ShowMessage(void) {
    const char *message;
    GXColor bg = {0, 0, 0, 0};
    GXColor fg = {255, 255, 255, 0};

    if (VIGetTvFormat() == 0) {
        if (OSGetFontEncode() == 1) {
            message = Japanese;
        } else {
            message = English;
        }
    } else {
        message = Europe[OSGetLanguage()];
    }
    OSFatal(fg, bg, message);
}

BOOL DVDSetAutoFatalMessaging(BOOL enable) {
    BOOL enabled;
    BOOL prev;

    enabled = OSDisableInterrupts();
    prev = FatalFunc ? TRUE : FALSE;
    FatalFunc = enable ? ShowMessage : NULL;
    OSRestoreInterrupts(enabled);
    return prev;
}

void __DVDPrintFatalMessage(void) {
    if (!FatalFunc) {
        return;
    }
    FatalFunc();
}
