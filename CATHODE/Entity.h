#pragma once

#include "CATHODE.h"

namespace CATHODE::Entity
{
	//void __fastcall h_get_debug_name(void* _this, void* _EDX);
	typedef void(__thiscall* t_get_debug_name)(void*);
	// get_debug_name(void*)
	inline t_get_debug_name get_debug_name = reinterpret_cast<t_get_debug_name>(0x00918cd0);
}
