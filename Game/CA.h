#pragma once

#include "AlienIsolation.SDK.hpp"
#include "CATHODE.h"

namespace CATHODE::CA
{
	/**
	 * \brief Holds two CATHODE::Vector objects for position and rotation.
	 */
	struct Position
	{
		DataTypes::Vector pos;
		DataTypes::Vector rot;
	};

	namespace FILE_HASHES
	{
		// void verify_integrity(char* package_file_name, unsigned* param_2, unsigned param_3)
		AI_SDK_DECLARE_NONCLASS_FUNC(void, verify_integrity, t_verify_integrity, 0x00374ca0, char* package_file_name, unsigned* unk1, unsigned unk2);
	}
}
