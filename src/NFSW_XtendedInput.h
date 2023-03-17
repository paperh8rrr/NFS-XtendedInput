/*
// clang-format off
// 
//    MIT License
//    Need for Speed (Black Box, MW & newer) - Xtended Input plugin
//    Bringing native XInput to NFS
//    
//    Copyright (c) 2022�2023 Lovro Plese (Xan/Tenjoin)
//    Copyright (c) 2023 Berkay Yigit <mail@berkay.link>
//
// clang-format on
*/

#pragma once
unsigned int MainBase;

#define NO_FENG
#define NO_PROFILE_SETTINGS
#define NO_QUIT_BUTTON

#define GAMEFLOWMANAGER_STATUS_ADDR (0x00CFC730 + MainBase)
#define UTL_ILIST_CONSTRUCTOR_ADDR (0x00753940 + MainBase)

#define GAME_HWND_ADDR (0x00D06504 + MainBase)

// memory allocators work differently in World
//#define GLOBAL_FASTMEM_ADDR 0xC8178C + MainBase
//#define FASTMEM_ALLOC_ADDR 0x0060BA70 + MainBase
#define MANAGED_ALLOCATOR_ADDR (0x006D4660 + MainBase)
#define INIT_LIST_ALLOC_SIZE 0x28

#define DINPUT_KILL_ADDR (0x0075C16B + MainBase)

#define DEADZONE_FLOAT_POINTER_ADDR (0x75E26D + MainBase)
float smallfloat = 0.000001;
#define SMALL_FLOAT_ADDR &smallfloat

#define INPUTMAPPING_CONSTRUCTOR_CALL_ADDR (0x0075EB43 + MainBase)
#define INPUTDEVICE_FACTORY_INITIALIZER_ADDR (0xB10F9D + MainBase)

#define DEBUGWORLDCAMERAMOVER_UPDATE_VT_ADDR (0x00BD3DC0 + MainBase)
unsigned int DebugWorldCameraMover_Update_Addr;
unsigned int DebugWorldCameraMover_Update_VT_Addr;

#define DEBUGWORLDCAMERAMOVER_CAVE1_ENTRY (0x007DBC92 + MainBase)
#define DEBUGWORLDCAMERAMOVER_CAVE1_EXIT (0x007DBCF1 + MainBase)
#define DEBUGWORLDCAMERAMOVER_CAVE1_FULLEXIT (0x7DBE1F + MainBase)

#define DEBUGWORLDCAMERAMOVER_CAVE2_ENTRY (0x007DBD07+ MainBase)
#define DEBUGWORLDCAMERAMOVER_CAVE2_EXIT (0x007DBD1B+ MainBase)

#define DEBUGWORLDCAMERAMOVER_CONSTRUCTOR_ADDR (0x007D0080 + MainBase)
#define DEBUGWORLDCAMERAMOVER_CONSTRUCTOR_HOOK_ADDR (0x007DE398 + MainBase)

#define DEBUGWORLDCAMERAMOVER_DESTRUCTOR_ADDR (0x007D0250 + MainBase)
#define DEBUGWORLDCAMERAMOVER_DESTRUCTOR_HOOK_ADDR (0x007D7516 + MainBase)

#define DEBUGWORLDCAMERAMOVER_XSPEED_OFFSET 0xA4
#define DEBUGWORLDCAMERAMOVER_YSPEED_OFFSET 0xA6

#define DEBUGWORLDCAMERAMOVER_STACK_OFFSET 0x1C
#define DEBUGWORLDCAMERAMOVER_STACK_OFFSET2 0x1C

#define DEBUGWORLDCAMERAMOVER_MMX
