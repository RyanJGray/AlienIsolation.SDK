#pragma once

#include "AlienIsolation.SDK.hpp"
#include "CATHODE.h"

namespace CATHODE::FLOAT_MODULATE_RANDOM
{
	// bool get_requires_state(FLOAT_MODULATE_RANDOM* _this, const MemoryPtr& trigger_info_ptr)
	AI_SDK_DECLARE_CLASS_FUNC(bool, get_requires_state, t_get_requires_state, 0x0019b450, const DataTypes::MemoryPtr& trigger_info_ptr);

	// void save_values(FLOAT_MODULATE_RANDOM* _this, bool hasOnThinkParameter, bool hasResultParameter, int behaviourAnimEnumValue, float behaviourFrequency, float behaviourFrequencyVariance)
	AI_SDK_DECLARE_CLASS_FUNC(void, save_values, t_save_values, 0x0019b5f0, bool hasOnThinkParameter, bool hasResultParameter, int behaviourAnimEnumValue, float behaviourFrequency, float behaviourFrequencyVariance);
}
