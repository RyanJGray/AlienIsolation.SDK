#pragma once

namespace CATHODE::Scaleform
{
	namespace Callback::GameMenu
	{
		void __fastcall hLoadLevel(void* _this, void* _EDX, char* level_name);
		typedef void(__thiscall* tLoadLevel)(void*, char*);
		inline tLoadLevel LoadLevel = reinterpret_cast<tLoadLevel>(0x008139c0);
	}

	namespace UI
	{
		void __fastcall hLoadLevelUnknownFunc1(int param_1);
		typedef void(__fastcall* tLoadLevelUnknownFunc1)(int);
		inline tLoadLevelUnknownFunc1 LoadLevelUnknownFunc1 = reinterpret_cast<tLoadLevelUnknownFunc1>(0x007bcd40);

		unsigned __fastcall hLoadLevelUnknownFunc2(void* _this, void* _EDX, char* level_name);
		typedef unsigned(__thiscall* tLoadLevelUnknownFunc2)(void*, char*);
		inline tLoadLevelUnknownFunc2 LoadLevelUnknownFunc2 = reinterpret_cast<tLoadLevelUnknownFunc2>(0x007a86c0);
		
		void __fastcall hDispatchRequestToNodeHandler(void* _this, void* _EDX, unsigned* param_1);
		typedef void(__thiscall* tDispatchRequestToNodeHandler)(void*, unsigned*);
		inline tDispatchRequestToNodeHandler DispatchRequestToNodeHandler = reinterpret_cast<tDispatchRequestToNodeHandler>(0x009c8bd0);
	}
}
