#pragma once

#include "AlienIsolation.SDK.hpp"
#include "CATHODE.h"

namespace CATHODE
{
	struct StringTable
	{
		StringTable();
		// CA didn't define a destructor.
		~StringTable() = default;

		//StringTable* create_instance();

		// Singleton instance.
		static StringTable* m_instance = AI_SDK_RELATIVE_ADDRESS(0x0134ef78);
		
		// Not a CATHODE provided function, just a helper that I've added.
		static StringTable* get_instance();
		// char* string_from_offset(void* _this, unsigned int offset)
		static char* string_from_offset(int offset);

		void* table_base;  // 0
		long table_length; // 8
		long table_size;   // 16
		long entry_count;  // 24
		void* table_array; // 32
	}
}

inline StringTable* CATHODE::StringTable::get_instance()
{
	return this->m_instance;
}

inline char* CATHODE::StringTable::string_from_offset(int offset)
{
	using func_t = StringTable* (StringTable*, int);
	AI_SDK::GameAddress::GameAddress<func_t> func(0x00532160);

	return func(this, offset);
}
