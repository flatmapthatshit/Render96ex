#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include <stdbool.h>

#define CONFIGFILE_DEFAULT "sm64config.txt"

#define MAX_BINDS  3
#define MAX_VOLUME 127

typedef struct {
    unsigned int x, y, w, h;
    bool vsync;
    bool reset;
    bool fullscreen;
    bool exiting_fullscreen;
    bool settings_changed;
} ConfigWindow;

extern ConfigWindow configWindow;
extern unsigned int configLanguage;
#ifdef TARGET_SWITCH
extern bool         configSwitchHud;
#endif
extern bool         configBillboard;
extern bool         config60FPS;
extern bool         configInternalResolutionBool;
extern unsigned int configCustomInternalResolution;
extern unsigned int configInternalResolutionWidth;
extern unsigned int configInternalResolutionHeight;
//extern unsigned int configCustomWindowResolution;
extern bool         configForce4by3;
extern unsigned int configFiltering;
extern unsigned int configMasterVolume;
extern unsigned int configMusicVolume;
extern unsigned int configSfxVolume;
extern unsigned int configEnvVolume;
extern bool         configMusicMute;
extern bool         configSfxMute;
extern bool         configEnvMute;
extern unsigned int configKeyA[];
extern unsigned int configKeyB[];
extern unsigned int configKeyStart[];
extern unsigned int configKeyL[];
extern unsigned int configKeyR[];
extern unsigned int configKeyZ[];
extern unsigned int configKeyCUp[];
extern unsigned int configKeyCDown[];
extern unsigned int configKeyCLeft[];
extern unsigned int configKeyCRight[];
extern unsigned int configKeyDUp[];
extern unsigned int configKeyDDown[];
extern unsigned int configKeyDLeft[];
extern unsigned int configKeyDRight[];
extern unsigned int configKeyStickUp[];
extern unsigned int configKeyStickDown[];
extern unsigned int configKeyStickLeft[];
extern unsigned int configKeyStickRight[];
extern unsigned int configStickDeadzone;
extern unsigned int configRumbleStrength;
extern bool         configPrecacheRes;
extern unsigned int configCameraXSens;
extern unsigned int configCameraYSens;
extern unsigned int configCameraAggr;
extern unsigned int configCameraPan;
extern unsigned int configCameraDegrade;
extern bool         configCameraInvertX;
extern bool         configCameraInvertY;
extern bool         configEnableCamera;
extern bool         configCameraMouse;
extern bool         configCameraAnalog;
extern bool         configHUD;
extern unsigned int configDrawDistance;
extern bool         configSkipIntro;
#ifdef DISCORDRPC
extern bool         configDiscordRPC;
#endif

void configfile_load(const char *filename);
void configfile_save(const char *filename);
const char *configfile_name(void);

#endif
