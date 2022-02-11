#pragma once
#include <cstdint>

#define AI_SDK_DETOURS_ATTACH(original_func, detoured_func) (DetourAttach(&reinterpret_cast<PVOID&>(original_func), detoured_func))
#define AI_SDK_DETOURS_DETACH(original_func, detoured_func) (DetourDetach(&reinterpret_cast<PVOID&>(original_func), detoured_func))

// Calculates the relative address for the offset provided.
#define AI_SDK_RELATIVE_ADDRESS(offset) (AI_SDK::GameProcess::GetBaseAddress() + offset)

// Declares a function which is part of a class (not intended for use, use "AI_SDK_DECLARE_CLASS_FUNC" or "AI_SDK_DECLARE_CLASS_FUNC_WITH_THIS_TYPE" instead).
#define AI_SDK_DECLARE_CLASS_FUNC_INTERNAL(return_type, original_func_name, typedef_name, func_offset, this_type, ...) \
	typedef return_type(__thiscall* typedef_name)(this_type _this, __VA_ARGS__); \
	inline auto original_func_name = reinterpret_cast<typedef_name>(AI_SDK_RELATIVE_ADDRESS(func_offset));

// Declares a function which is part of a class (i.e. has a void* "this" pointer).
#define AI_SDK_DECLARE_CLASS_FUNC(return_type, original_func_name, typedef_name, func_offset, ...) \
	AI_SDK_DECLARE_CLASS_FUNC_INTERNAL(return_type, original_func_name, typedef_name, func_offset, void*, __VA_ARGS__);

// Declares a function which is part of a class (i.e. has a non-void* "this" pointer).
#define AI_SDK_DECLARE_CLASS_FUNC_WITH_THIS_TYPE(return_type, original_func_name, typedef_name, func_offset, this_type, ...) \
	AI_SDK_DECLARE_CLASS_FUNC_INTERNAL(return_type, original_func_name, typedef_name, func_offset, this_type, __VA_ARGS__);

// Declares a function which is not part of a class (i.e. doesn't have a "this" pointer).
#define AI_SDK_DECLARE_NONCLASS_FUNC(return_type, original_func_name, typedef_name, func_offset, ...) \
	typedef return_type(__stdcall* typedef_name)(__VA_ARGS__); \
	inline auto original_func_name = reinterpret_cast<typedef_name>(AI_SDK_RELATIVE_ADDRESS(func_offset));

namespace AI_SDK
{
	// Singleton class for dynamically fetching the game's process base address.
	class GameProcess
	{
	public:
		/*
		We can bypass the game's ASLR protection, by getting the randomised base address of the game, and applying the offset
		of the function / memory address that we are looking for.
		ASLR on Windows just randomises the image's base address, not the order in which functions appear in memory.
		*/
		inline static uintptr_t GetBaseAddress() 
		{
			static const auto address = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));

			return address;
		}
	};

	/**
	This method has been taken from the RED4ext.SDK GitHub project.
	I was going to implement something like this another way, but it would have been hacky (lots of compiler definitions).

	All credit goes to the RED4ext team for this much neater and modern method!
	*/
	template<typename T>
	class GameAddress : private GameProcess
	{
	public:
		GameAddress(uintptr_t offset)
			: m_address(reinterpret_cast<T>(GetBaseAddress() + offset));

		// Return the address.
		inline operator T() const
		{
			return m_address;
		}
	private:
		T m_address;
	};
}
