#pragma once

#include "AlienIsolation.SDK.hpp"
#include "CATHODE.h"

namespace CATHODE::EntityInterface
{
	// Stores an EntityInterface pointer that we've stolen from the game calling an EntityInterface member function.
	//static void* g_thisPtr;

	//typedef void(__cdecl* t_call_triggers)(const DataTypes::MemoryPtr& entity, const DataTypes::ShortGuid& shortguid, const DataTypes::MemoryRefPtr& trigger_info, double unk);
	//inline auto call_triggers = reinterpret_cast<t_call_triggers>(DEVTOOLS_RELATIVE_ADDRESS(0x004bd920));

	/**
	 * \brief Finds and returns the parameter attached to a CATHODE::Entity object, when passed the parameter's ShortGuid.
	 * \param _this This pointer, must point to an instance of EntityInterface.
	 * \param entity_ptr Pointer to the CATHODE::Entity object that you want a parameter value from.
	 * \param shortguid_ptr Pointer to the parameter's ShortGuid.
	 * \param output_ptr Pointer to the variable that you want the parameter's value to be stored inside.
	 * \return False if the parameter cannot be found, True if the parameter can be found.
	 * \remark Prototype: bool CATHODE::EntityInterface::find_parameter<CATHODE::String>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::String&) const
	 */
	AI_SDK_DECLARE_CLASS_FUNC(bool, find_parameter<DataTypes::String>, t_find_parameter<DataTypes::String>, 0x001991a0, const DataTypes::MemoryPtr& entity_ptr, const DataTypes::ShortGuid& shortguid_ptr, DataTypes::String& output_ptr);

	/**
	 * \brief Finds and returns the parameter attached to a CATHODE::Entity object, when passed the parameter's ShortGuid.
	 * \param _this This pointer, must point to an instance of EntityInterface.
	 * \param entity_ptr Pointer to the CATHODE::Entity object that you want a parameter value from.
	 * \param shortguid_ptr Pointer to the parameter's ShortGuid.
	 * \param output_ptr Pointer to the variable that you want the parameter's value to be stored inside.
	 * \return False if the parameter cannot be found, True if the parameter can be found.
	 * \remark Prototype: bool CATHODE::EntityInterface::find_parameter<bool>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, bool&) const
	 */
	AI_SDK_DECLARE_CLASS_FUNC(bool, find_parameter<bool>, t_find_parameter<bool>, 0x00230590, const DataTypes::MemoryPtr& entity_ptr, const DataTypes::ShortGuid& shortguid_ptr, bool& output_ptr);

	/**
	 * \brief Finds and returns the parameter attached to a CATHODE::Entity object, when passed the parameter's ShortGuid.
	 * \param _this This pointer, must point to an instance of EntityInterface.
	 * \param entity_ptr Pointer to the CATHODE::Entity object that you want a parameter value from.
	 * \param shortguid_ptr Pointer to the parameter's ShortGuid.
	 * \param output_ptr Pointer to the variable that you want the parameter's value to be stored inside.
	 * \return False if the parameter cannot be found, True if the parameter can be found.
	 * \remark Prototype: bool CATHODE::EntityInterface::find_parameter<CA::Vector>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CA::Vector&) const
	 */
	AI_SDK_DECLARE_CLASS_FUNC(bool, find_parameter<DataTypes::Vector>, t_find_parameter<DataTypes::Vector>, 0x004d63c0, const DataTypes::MemoryPtr& entity_ptr, const DataTypes::ShortGuid& shortguid_ptr, DataTypes::Vector& output_ptr);

	/**
	 * \brief Finds and returns the parameter attached to a CATHODE::Entity object, when passed the parameter's ShortGuid.
	 * \param _this This pointer, must point to an instance of EntityInterface.
	 * \param entity_ptr Pointer to the CATHODE::Entity object that you want a parameter value from.
	 * \param shortguid_ptr Pointer to the parameter's ShortGuid.
	 * \param output_ptr Pointer to the variable that you want the parameter's value to be stored inside.
	 * \return False if the parameter cannot be found, True if the parameter can be found.
	 * \remark Prototype: bool CATHODE::EntityInterface::find_parameter<float>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, float&) const
	 */
	AI_SDK_DECLARE_CLASS_FUNC(bool, find_parameter<float>, t_find_parameter<float>, 0x004d6510, const DataTypes::MemoryPtr& entity_ptr, const DataTypes::ShortGuid& shortguid_ptr, float& output_ptr);

	/**
	 * \brief Finds and returns the parameter attached to a CATHODE::Entity object, when passed the parameter's ShortGuid.
	 * \param _this This pointer, must point to an instance of EntityInterface.
	 * \param entity_ptr Pointer to the CATHODE::Entity object that you want a parameter value from.
	 * \param shortguid_ptr Pointer to the parameter's ShortGuid.
	 * \param output_ptr Pointer to the variable that you want the parameter's value to be stored inside.
	 * \return False if the parameter cannot be found, True if the parameter can be found.
	 * \remark Prototype: bool CATHODE::EntityInterface::find_parameter<CATHODE::Enum>(CATHODE::MemoryPtr<CATHODE::Entity> const&, CATHODE::ShortGuid const&, CATHODE::Enum&) const
	 */
	AI_SDK_DECLARE_CLASS_FUNC(bool, find_parameter<DataTypes::Enum>, t_find_parameter<DataTypes::Enum>, 0x004d6620, const DataTypes::MemoryPtr& entity_ptr, const DataTypes::ShortGuid& shortguid_ptr, DataTypes::Enum& output_ptr);
}
