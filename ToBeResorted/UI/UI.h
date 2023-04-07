#pragma once

namespace UI
{
	namespace GAME_MENU
	{
		void __fastcall h_load_level(void* _this, void* _EDX, char* level_string);
		typedef void(__thiscall* t_load_level)(void*, char*);
		inline t_load_level load_level = reinterpret_cast<t_load_level>(0x0079a650);
	}

	namespace LAYERMANAGER
	{
		//void __fastcall h_CreateLayer_TriggerableDebugText(void* _this, void* _EDX, char* gfx_file, 
	}
}