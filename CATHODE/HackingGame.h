#pragma once

#include "CATHODE.h"

namespace CATHODE::HackingGame
{
	int __fastcall h_on_custom_method(void* _this, void* _EDX, const DataTypes::ShortGuid& entity, bool& param_2, DataTypes::MemoryPtr& memory_ptr, const DataTypes::MemoryRefPtr& trigger_info);
	typedef int(__thiscall* t_on_custom_method)(void*, const DataTypes::ShortGuid&, bool&, DataTypes::MemoryPtr&, const DataTypes::MemoryRefPtr&);
	// on_custom_method(void*, const ShortGuid&, bool&, MemoryPtr&, const MemoryRefPtr&)
	inline t_on_custom_method on_custom_method = reinterpret_cast<t_on_custom_method>(0x00918cd0);
}
