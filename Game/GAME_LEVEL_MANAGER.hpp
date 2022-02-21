#pragma once

#include "AlienIsolation.SDK.hpp"

struct GAME_LEVEL_MANAGER
{
	//GAME_LEVEL_MANAGER();
	~GAME_LEVEL_MANAGER() = default;
	
	// The global instance of GAME_LEVEL_MANAGER.
	static GAME_LEVEL_MANAGER* m_instance = AI_SDK_RELATIVE_ADDRESS(0x012f0cc3);
	
	// void queue_level(GAME_LEVEL_MANAGER* this, int level)
	static void queue_level(int level);
	// int get_level_from_name(GAME_LEVEL_MANAGER* this, char* level_name)
	static int get_level_from_name(char* level_name);
	// void request_next_level(GAME_LEVEL_MANAGER* this, bool is_part_of_playlist)
	static void request_next_level(bool is_part_of_playlist);
	
	char unk0[136]; // Skip unknown values in the struct.
	int current_index; // Current level index.
	unsigned int unk1;
};

inline void GAME_LEVEL_MANAGER::queue_level(int level)
{
	using func_t = GAME_LEVEL_MANAGER* (GAME_LEVEL_MANAGER*, int);
	AI_SDK::GameAddress::GameAddress<func_t> func(0x0037b320);
	
	func(this, level);
}

inline int GAME_LEVEL_MANAGER::get_level_from_name(char* level_name)
{
	using func_t = GAME_LEVEL_MANAGER* (GAME_LEVEL_MANAGER*, char*);
	AI_SDK::GameAddress::GameAddress<func_t> func(0x0037b340);
	
	return func(this, level_name);
}

inline void GAME_LEVEL_MANAGER::request_next_level(bool is_part_of_playlist)
{
	using func_t = GAME_LEVEL_MANAGER* (GAME_LEVEL_MANAGER*, bool);
	AI_SDK::GameAddress::GameAddress<func_t> func(0x0039a650);
	
	func(this, is_part_of_playlist);
}
