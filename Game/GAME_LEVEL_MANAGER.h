#pragma once

#include "AlienIsolation.SDK.hpp"

namespace GAME_LEVEL_MANAGER
{
	struct Instance {
		char unk0[136]; // Skip unknown values in the struct.
		int current_index; // Current level index.
		unsigned int unk1;
	};

	// The global instance of GAME_LEVEL_MANAGER.
	inline Instance* m_instance = nullptr;

	// int get_level_from_name(Instance* _this, char* level_name)
	AI_SDK_DECLARE_CLASS_FUNC_WITH_THIS_TYPE(int, get_level_from_name, t_get_level_from_name, 0x0037b340, Instance*, char* level_name);

	// void queue_level(Instance* _this, int level)
	AI_SDK_DECLARE_CLASS_FUNC_WITH_THIS_TYPE(void, queue_level, t_queue_level, 0x0037b320, Instance*, int level);

	// void request_next_level(Instance* _this, bool is_part_of_playlist)
	AI_SDK_DECLARE_CLASS_FUNC_WITH_THIS_TYPE(void, request_next_level, t_request_next_level, 0x0039a650, Instance*, bool is_part_of_playlist);
}
