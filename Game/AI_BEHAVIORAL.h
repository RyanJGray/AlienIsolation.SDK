#pragma once

#include "AlienIsolation.SDK.hpp"
#include "CATHODE.h"

namespace AI_BEHAVIORAL
{
	namespace WithdrawalManager
	{
		// Taken from the alien_in_vent behaviour tree.
		enum class WITHDRAW_STATE {
			NotWithdrawing,
			NeedsToWithdraw,
			Withdrawing
		};

		// Singleton instance pointer for this class.
		inline void* m_this = nullptr;

		// void request_withdraw(WithdrawlManager* _this, float initial_radius, float timed_out_radius, float time_to_force, bool permanent)
		AI_SDK_DECLARE_CLASS_FUNC(void, request_withdraw, t_request_withdraw, 0x002d0620, float initial_radius, float timed_out_radius, float time_to_force, bool permanent);

		// void set_withdraw_state(WithdrawlManager* _this, WITHDRAW_STATE state)
		AI_SDK_DECLARE_CLASS_FUNC(void, set_withdraw_state, t_set_withdraw_state, 0x0032fc20, WITHDRAW_STATE state);
	}
}
