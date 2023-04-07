#pragma once

namespace GAME_LEVEL_MANAGER
{
	struct GAME_LEVEL_MANAGER_Instance {
		char unk0[136]; // Skip unknown values in the struct.
		int current_index; // Current level index.
		unsigned int unk1;
	};

	// The global instance of GAME_LEVEL_MANAGER.
	inline GAME_LEVEL_MANAGER_Instance* m_instance = nullptr;

	int __fastcall h_get_level_from_name(GAME_LEVEL_MANAGER_Instance* _this, void* _EDX, char* level_name);
	typedef int(__thiscall* t_get_level_from_name)(GAME_LEVEL_MANAGER_Instance*, char*);
	// get_level_from_name(GAME_LEVEL_MANAGER_Instance* _this, char* level_name)
	inline t_get_level_from_name get_level_from_name = reinterpret_cast<t_get_level_from_name>(0x0077b340);

	void __fastcall h_queue_level(GAME_LEVEL_MANAGER_Instance* _this, void* _EDX, int level);
	typedef void(__thiscall* t_queue_level)(GAME_LEVEL_MANAGER_Instance*, int);
	// queue_level(GAME_LEVEL_MANAGER_Instance* _this, int level)
	inline t_queue_level queue_level = reinterpret_cast<t_queue_level>(0x0077b320);

	void __fastcall h_request_next_level(GAME_LEVEL_MANAGER_Instance* _this, void* _EDX, bool is_part_of_playlist);
	typedef void(__thiscall* t_request_next_level)(GAME_LEVEL_MANAGER_Instance*, bool);
	// request_next_level(GAME_LEVEL_MANAGER_Instance* _this, bool is_part_of_playlist)
	inline t_request_next_level request_next_level = reinterpret_cast<t_request_next_level>(0x0079a650);
}

namespace GameFlow
{
	void __fastcall h_start_gameplay(void* _this, void* _EDX, int play_mode, const char* level_name);
	typedef void(__thiscall* t_start_gameplay)(void*, int, const char*);
	inline t_start_gameplay start_gameplay = reinterpret_cast<t_start_gameplay>(0x007BCB00);
}
