#pragma once

#include "CATHODE.h"

namespace CATHODE::ShortGuid
{
	int __fastcall hShortGuid(DataTypes::ShortGuid* _this, void* _EDX, char* node_name);
	typedef int(__thiscall* tShortGuid)(DataTypes::ShortGuid*, char*);
	inline tShortGuid ShortGuid = reinterpret_cast<tShortGuid>(0x008BF7F0);
}
