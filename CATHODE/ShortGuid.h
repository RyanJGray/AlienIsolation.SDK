#pragma once

#include "AlienIsolation.SDK.hpp"
#include "CATHODE.h"

namespace CATHODE::ShortGuid
{
	typedef int(__thiscall* tShortGuid)(DataTypes::ShortGuid*, char*);
	inline auto ShortGuid = reinterpret_cast<tShortGuid>(AI_SDK_RELATIVE_ADDRESS(0x004bf7f0));
}
