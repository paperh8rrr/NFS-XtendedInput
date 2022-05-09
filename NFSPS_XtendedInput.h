#pragma once
#define NO_QUIT_BUTTON
#define GAMEFLOWMANAGER_STATUS_ADDR 0x00ABB510
#define UTL_ILIST_CONSTRUCTOR_ADDR 0x004613C0
#define PLAYER_ILISTABLE_ADDR 0x00ACE444
#define PLAYER_GETHUD_VTABLE_OFFSET 0x20
#define FENGHUD_ISVISIBLE_VTABLE_OFFSET 0x1C

#define CFENG_INSTANCE_ADDR 0x00AB27D8
#define CFENG_FINDPACKAGE_ADDR 0x005B4D00
#define CFENG_ISPACKAGEINCONTROL_ADDR 0x0058EDD0

#define GAME_HWND_ADDR 0x00AC6ED8

#define FEMOUSECURSOR_ISHIDDEN_ADDR 0x00AB286D
#define FEMOUSECURSOR_X_ADDR 0x00ACDD2C
#define FEMOUSECURSOR_Y_ADDR 0x00ACDD30
#define FEMOUSECURSOR_BUTTONPRESS_ADDR 0x00ABA300
#define FEMOUSECURSOR_BUTTONPRESS2_ADDR 0x00ABA301
#define FEMOUSECURSOR_BUTTONPRESS3_ADDR 0x00ABA302

#define FEMOUSECURSOR_BUTTON2PRESS_ADDR 0x00ABA2DC
#define FEMOUSECURSOR_BUTTON2PRESS2_ADDR 0x00ABA2DD
#define FEMOUSECURSOR_BUTTON2PRESS3_ADDR 0x00ABA2DE

#define FEMOUSECURSOR_BUTTON3PRESS_ADDR 0x00ABA308
#define FEMOUSECURSOR_BUTTON3PRESS2_ADDR 0x00ABA309
#define FEMOUSECURSOR_BUTTON3PRESS3_ADDR 0x00ABA30A

#define FEMOUSEWHEEL_ADDR 0x00ACDD44

#define FEMOUSECURSOR_CARORBIT_X_ADDR 0x00ACDD3C
#define FEMOUSECURSOR_CARORBIT_Y_ADDR 0x00ACDD40

#define SHOWCURSOR_HOOK_ADDR1 0x007012B5
#define SHOWCURSOR_HOOK_ADDR2 0x007012C7

//#define FE_SENDKEY_ADDR 0x00711F70

#define GLOBAL_FASTMEM_ADDR 0x00ABB060
#define FASTMEM_ALLOC_ADDR 0x00463E90
#define INIT_LIST_ALLOC_SIZE 0x28

#define WNDPROC_POINTER_ADDR 0x70E2B4

#define FE_ANALOGZOOM_JMP_FROM 0x007D9C55
#define FE_ANALOGZOOM_JMP_TO 0x007D9C5D

#define CARGUYSCAMERA_ADDR 0x00BFBC6F

#define FENG_FINDOBJECT_ADDR 0x005BD520
#define FENG_SETOBJECTVISIBILITY_ADDR 0x0058DBE0

#define FEPACKAGE_FORALLOBJ_ADDR 0x00625070
#define FEPACKAGE_FINDOBJBYHASH_ADDR 0x00629140
#define FENGINE_PROCESSPADSFORPACKAGE_ADDR 0x0062F920
#define FENGINE_PROCESSPADSFORPACKAGE_CALL_ADDR 0x0063296C

#define CFENG_SERVICE_ADDR 0x006328A0
#define CFENG_SERVICE_CALL_ADDR 0x005EEEAB
#define FE_STRING_PRINTF_ADDRESS 0x005CE430


#define CREATERESOURCEFILE_ADDR 0x006D6DE0
#define RESFILE_BEGINLOADING_ADDR 0x006D9430
#define SERVICERESOURCELOADING_ADDR 0x006D9E70

#define FENG_HIDEPCOBJ_VT_ADDR 0x00973948

#define CFENG_RENDEROBJ_NOP_ADDR 0x005D216D
#define CFENG_RENDEROBJ_NOP2_ADDR 0x005D2179
#define CFENG_RENDEOBJ_NOP_AMOUNT 6
#define CFENG_RENDEROBJ_FLAG_ADDR 0x005D2169
#define FENG_SHOWCASECAM_JMP_FROM 0x007D9B37
#define FENG_SHOWCASECAM_JMP_TO 0x007D9B60
#define WIN32_MOUSEHIDE_JMP_FROM 0x0070E3FD
#define WIN32_MOUSEHIDE_JMP_TO 0x0070E40D
#define FEMOUSE_RENDER_JMP_FROM 0x005A0B66
#define FEMOUSE_RENDER_JMP_TO 0x005A0CFA
#define FEMOUSE_WHEEL_UPDATE_ADDR 0x0070E688
#define REGISTERCLASSHOOK_CALL_ADDR 0x0070E2F3
#define FEMOUSE_UPDATE_CALL_ADDR 0x0070E560
#define DINPUT_KILL_ADDR 0x006B6B91

#define DEADZONE_FLOAT_POINTER_ADDR 0x6C9767
#define SMALL_FLOAT_ADDR 0x0096B090
#define FE_DEADZONE_POINTER_ADDR 0x5BD25D

#define INPUTMAPPING_CONSTRUCTOR_CALL_ADDR 0x006CA180
#define INPUTDEVICE_FACTORY_INITIALIZER_ADDR 0x95B22D

#define FENGHUD_JOYHANDLER_JMP_FROM 0x00612D0F
#define FENGHUD_JOYHANDLER_JMP_TO 0x00612A2C

#define GETLOCALIZEDSTRING_ADDR 0x005B8410

#define FE_SHOWCASE_FNG_NAME "FePhotoMode.fng"
#define SELECTCAR_SETHROTATESPEED_ADDR 0x00647010
#define SELECTCAR_SETVROTATESPEED_ADDR 0x00646FE0
#define SELECTCAR_SETZOOMSPEED_ADDR 0x00647040
#define FEGARAGEMAIN_ZOOMCAMERAVIEW_ADDR 0x007CB7C0
#define SELECTCAROBJ_OFFSET 0xD0

#define FEPHOTOMODE_HANDLESCREENTICK_HOOK_ADDR 0x005A791C
#define FEPHOTOMODE_HANDLELTRIGGER_HOOK_ADDR 0x00977E5C
#define FEPHOTOMODE_HANDLERTRIGGER_HOOK_ADDR 0x00977E7C

#define PRESS_START_HOOK_ADDR 0x007E2CA0

#define DEBUGWORLDCAMERAMOVER_UPDATE_VT_ADDR 0x009817BC
unsigned int DebugWorldCameraMover_Update_Addr = 0x00651BA0;

#define DEBUGWORLDCAMERAMOVER_CAVE1_ENTRY 0x00651DFA
#define DEBUGWORLDCAMERAMOVER_CAVE1_EXIT 0x00651E27
#define DEBUGWORLDCAMERAMOVER_CAVE1_FULLEXIT 0x652052

#define DEBUGWORLDCAMERAMOVER_CAVE2_ENTRY 0x00651E9C
#define DEBUGWORLDCAMERAMOVER_CAVE2_EXIT 0x00651EA7

#define DEBUGWORLDCAMERAMOVER_CONSTRUCTOR_ADDR 0x00646640
#define DEBUGWORLDCAMERAMOVER_CONSTRUCTOR_HOOK_ADDR 0x0064F212

#define DEBUGWORLDCAMERAMOVER_DESTRUCTOR_ADDR 0x6467A0
#define DEBUGWORLDCAMERAMOVER_DESTRUCTOR_HOOK_ADDR 0x0064CC83

#define DEBUGWORLDCAMERAMOVER_XSPEED_OFFSET 0xA0
#define DEBUGWORLDCAMERAMOVER_YSPEED_OFFSET 0xA2

#define DEBUGWORLDCAMERAMOVER_STACK_OFFSET 0x18
#define DEBUGWORLDCAMERAMOVER_STACK_OFFSET2 0x1C

#define DEBUGWORLDCAMERAMOVER_FSTP

// REBINDABLE ACTIONS -- these will change textures based on bindings
// all FE action definitions will be changeable
// CROSS
#define FE_ACCEPT_TEX_HASH NFS_HASH("CROSS")
// TRIANGLE
#define FE_CANCEL_TEX_HASH NFS_HASH("TRIANGLE")
// SQUARE
#define FE_BUTTON4_TEX_HASH NFS_HASH("SQUARE")
// CIRCLE
#define FE_BUTTON5_TEX_HASH NFS_HASH("CIRCLE")
// L1
#define FE_LTRIGGER_TEX_HASH NFS_HASH("L1")
// R1
#define FE_RTRIGGER_TEX_HASH NFS_HASH("R1")
// SELECT
#define FE_SELECT_TEX_HASH NFS_HASH("SELECT")
// START
#define FE_START_TEX_HASH NFS_HASH("START")
// R2 -- used as LB in Carbon...
#define FE_BUTTON0_TEX_HASH NFS_HASH("R2")
// L2
#define FE_BUTTON1_TEX_HASH NFS_HASH("L2")
// R3
#define FE_BUTTON2_TEX_HASH NFS_HASH("R3")
// L3
#define FE_BUTTON3_TEX_HASH NFS_HASH("L3")
// all actions below here will only be changeable UNLESS stated otherwise
// RIGHT_ANALOG -- will only read FRONTENDACTION_RUP for its binding
#define FE_RANALOG_TEX_HASH NFS_HASH("RIGHT_ANALOG")
// RIGHT_ANALOG_UP -- will read GAMEACTION_SHIFTUP (but since it's based on PS2 this MIGHT have to be GAMEACTION_GAS)
#define FE_RANALOG_UP_TEX_HASH NFS_HASH("RIGHT_ANALOG_UP")
// RIGHT_ANALOG_UP_SWEDISH
#define FE_RANALOG_UP_SWEDISH_TEX_HASH NFS_HASH("RIGHT_ANALOG_UP_SWEDISH")
// RIGHT_ANALOG_UP_FRENCH
#define FE_RANALOG_UP_FRENCH_TEX_HASH NFS_HASH("RIGHT_ANALOG_UP_FRENCH")
// RIGHT_ANALOG_DOWN -- will read GAMEACTION_SHIFTDOWN (but since it's based on PS2 this MIGHT have to be GAMEACTION_BRAKE)
#define FE_RANALOG_DOWN_TEX_HASH NFS_HASH("RIGHT_ANALOG_DOWN")
// RIGHT_ANALOG_DOWN_SWEDISH
#define FE_RANALOG_DOWN_SWEDISH_TEX_HASH NFS_HASH("RIGHT_ANALOG_DOWN_SWEDISH")
// RIGHT_ANALOG_DOWN_FRENCH
#define FE_RANALOG_DOWN_FRENCH_TEX_HASH NFS_HASH("RIGHT_ANALOG_DOWN_FRENCH")
// LEFT_ANALOG
#define FE_LANALOG_TEX_HASH NFS_HASH("LEFT_ANALOG")
// LEFT_ANALOG_UP
#define FE_LANALOG_UP_TEX_HASH NFS_HASH("LEFT_ANALOG_UP")
// LEFT_ANALOG_UP_SWEDISH
#define FE_LANALOG_UP_SWEDISH_TEX_HASH NFS_HASH("LEFT_ANALOG_UP_SWEDISH")
// LEFT_ANALOG_UP_FRENCH
#define FE_LANALOG_UP_FRENCH_TEX_HASH NFS_HASH("LEFT_ANALOG_UP_FRENCH")
// LEFT_ANALOG_DOWN
#define FE_LANALOG_DOWN_TEX_HASH NFS_HASH("LEFT_ANALOG_DOWN")
// LEFT_ANALOG_DOWN_SWEDISH
#define FE_LANALOG_DOWN_SWEDISH_TEX_HASH NFS_HASH("LEFT_ANALOG_DOWN_SWEDISH")
// LEFT_ANALOG_DOWN_FRENCH
#define FE_LANALOG_DOWN_FRENCH_TEX_HASH NFS_HASH("LEFT_ANALOG_DOWN_FRENCH")
// DPAD -- will only read FRONTENDACTION_UP
#define FE_DPAD_TEX_HASH NFS_HASH("DPAD")
// DPAD_UPDOWN -- will only read FRONTENDACTION_UP
#define FE_DPAD_UPDOWN_TEX_HASH NFS_HASH("DPAD_UPDOWN")
// DPAD_LEFTRIGHT -- will only read FRONTENDACTION_LEFT
#define FE_DPAD_LEFTRIGHT_TEX_HASH NFS_HASH("DPAD_LEFTRIGHT")
// DPAD_UP -- will read FRONTENDACTION_UP
#define FE_DPAD_UP_TEX_HASH NFS_HASH("DPAD_UP")
// DPAD_DOWN -- will read FRONTENDACTION_DOWN
#define FE_DPAD_DOWN_TEX_HASH NFS_HASH("DPAD_DOWN")
// DPAD_LEFT -- will read FRONTENDACTION_LEFT
#define FE_DPAD_LEFT_TEX_HASH NFS_HASH("DPAD_LEFT")
// DPAD_RIGHT -- will read FRONTENDACTION_RIGHT
#define FE_DPAD_RIGHT_TEX_HASH NFS_HASH("DPAD_RIGHT")

enum FEButtonTex
{
	FE_NULL_TEX,
	FE_ACCEPT_TEX,
	FE_CANCEL_TEX,
	FE_BUTTON4_TEX,
	FE_BUTTON5_TEX,
	FE_LTRIGGER_TEX,
	FE_RTRIGGER_TEX,
	FE_BUTTON0_TEX,
	FE_START_TEX,
	FE_SELECT_TEX,
	FE_BUTTON1_TEX,
	FE_BUTTON2_TEX,
	FE_BUTTON3_TEX,
	FE_RANALOG_TEX,
	FE_RANALOG_UP_TEX,
	FE_RANALOG_UP_SWEDISH_TEX,
	FE_RANALOG_UP_FRENCH_TEX,
	FE_RANALOG_DOWN_TEX,
	FE_RANALOG_DOWN_SWEDISH_TEX,
	FE_RANALOG_DOWN_FRENCH_TEX,
	FE_LANALOG_TEX,
	FE_LANALOG_UP_TEX,
	FE_LANALOG_UP_SWEDISH_TEX,
	FE_LANALOG_UP_FRENCH_TEX,
	FE_LANALOG_DOWN_TEX,
	FE_LANALOG_DOWN_SWEDISH_TEX,
	FE_LANALOG_DOWN_FRENCH_TEX,
	FE_DPAD_TEX,
	FE_DPAD_UPDOWN_TEX,
	FE_DPAD_LEFTRIGHT_TEX,
	FE_DPAD_UP_TEX,
	FE_DPAD_DOWN_TEX,
	FE_DPAD_LEFT_TEX,
	FE_DPAD_RIGHT_TEX,
	FE_TEX_HASH_COUNT
};

unsigned int FE_DefaultButtonTexHashes[FE_TEX_HASH_COUNT] =
{
	0,
	FE_ACCEPT_TEX_HASH,
	FE_CANCEL_TEX_HASH,
	FE_BUTTON4_TEX_HASH,
	FE_BUTTON5_TEX_HASH,
	FE_LTRIGGER_TEX_HASH,
	FE_RTRIGGER_TEX_HASH ,
	FE_BUTTON0_TEX_HASH ,
	FE_START_TEX_HASH ,
	FE_SELECT_TEX_HASH ,
	FE_BUTTON1_TEX_HASH ,
	FE_BUTTON2_TEX_HASH ,
	FE_BUTTON3_TEX_HASH ,
	FE_RANALOG_TEX_HASH ,
	FE_RANALOG_UP_TEX_HASH ,
	FE_RANALOG_UP_SWEDISH_TEX_HASH ,
	FE_RANALOG_UP_FRENCH_TEX_HASH ,
	FE_RANALOG_DOWN_TEX_HASH ,
	FE_RANALOG_DOWN_SWEDISH_TEX_HASH ,
	FE_RANALOG_DOWN_FRENCH_TEX_HASH ,
	FE_LANALOG_TEX_HASH ,
	FE_LANALOG_UP_TEX_HASH ,
	FE_LANALOG_UP_SWEDISH_TEX_HASH ,
	FE_LANALOG_UP_FRENCH_TEX_HASH ,
	FE_LANALOG_DOWN_TEX_HASH ,
	FE_LANALOG_DOWN_SWEDISH_TEX_HASH ,
	FE_LANALOG_DOWN_FRENCH_TEX_HASH ,
	FE_DPAD_TEX_HASH ,
	FE_DPAD_UPDOWN_TEX_HASH ,
	FE_DPAD_LEFTRIGHT_TEX_HASH ,
	FE_DPAD_UP_TEX_HASH ,
	FE_DPAD_DOWN_TEX_HASH ,
	FE_DPAD_LEFT_TEX_HASH ,
	FE_DPAD_RIGHT_TEX_HASH,
};

bool cFEng_IsPackageInControl_Fast(unsigned int pkg_name_hash);
int(*FE_String_Printf)(void* FEObject, const char* fmt, ...) = (int(*)(void*, const char*, ...))FE_STRING_PRINTF_ADDRESS;
void* (*FEngFindObject_Title)(char* pkg_name, unsigned int obj_hash) = (void* (*)(char*, unsigned int))FENG_FINDOBJECT_ADDR;

char* SplashPkgName = "Splash.fng";


void SetTitleScreenText()
{
	int obj_hash = 0xC4DF3FF2;
	char* pkg_name = SplashPkgName;
	char* splash_txt = FE_SPLASH_TEXT_PC;

	if (LastControlledDevice == LASTCONTROLLED_CONTROLLER)
	{
		switch (ControllerIconMode)
		{
		case CONTROLLERICON_PS3:
			splash_txt = FE_SPLASH_TEXT_PS3;
			break;
		case CONTROLLERICON_XBOX360:
			splash_txt = FE_SPLASH_TEXT_XBOX360;
			break;
		case CONTROLLERICON_PS4:
			splash_txt = FE_SPLASH_TEXT_PS4;
			break;
		case CONTROLLERICON_XBOXONE:
		default:
			splash_txt = FE_SPLASH_TEXT_XBOX;
			break;
		}
	}

	FE_String_Printf(FEngFindObject_Title(pkg_name, obj_hash), splash_txt);
}

void(*InitProfileSettings)() = (void(*)())0x006A56C0;
