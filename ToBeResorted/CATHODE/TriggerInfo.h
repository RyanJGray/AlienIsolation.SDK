#pragma once

#include "CATHODE.h"

namespace CATHODE::TriggerInfo
{
	/**
	 * \brief Describes information about a trigger that is active for a CATHODE node.
	 */
	struct TriggerInfo {
		DataTypes::ShortGuid guid; /* The ShortGuid of the node that triggered us. */
		void* unk1;
		struct MemoryAllocationBase* mem_allocation_base;
		struct TriggerInfo* next_trigger; /* Appears to link to another TriggerInfo object? */
		char name; /* What exactly does this contain? I guessed it was the trigger name, from the datatype. */
		double duration; /* How long the trigger has been active for. */
		unsigned int unk2;
		int reference_count;
	};

	struct MemoryAllocationBase { /* PlaceHolder Structure */
	};
}
