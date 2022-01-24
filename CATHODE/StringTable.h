#pragma once

#include "CATHODE.h"

namespace CATHODE::StringTable
{
	// The global instance of StringTable.
	inline void* m_instance = nullptr;

	char* __fastcall h_string_from_offset(void* _this, void* _EDX, unsigned int offset);
	typedef char*(__thiscall* t_string_from_offset)(void*, unsigned int);
	// string_from_offset(void*, unsigned int)
	inline t_string_from_offset string_from_offset = reinterpret_cast<t_string_from_offset>(0x00932160);
}
