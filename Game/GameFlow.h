#pragma once

#include "CATHODE.h"

namespace GameFlow
{
	void __fastcall h_start_gameplay(void* _this, void* _EDX, int play_mode, const char* level_name);
	typedef void(__thiscall* t_start_gameplay)(void*, int, const char*);
	inline t_start_gameplay start_gameplay = reinterpret_cast<t_start_gameplay>(0x007BCB00);
}
