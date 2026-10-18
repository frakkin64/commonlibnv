#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MobileObjectTaskletData.h"

namespace RE
{
	class MobileObject;

	class AnimationTaskData :
		public MobileObjectTaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AnimationTaskData };
		static constexpr auto VTABLE{ VTABLE::AnimationTaskData };

		// override (MobileObjectTaskletData)
		virtual ~AnimationTaskData() = default;                          // 00
		virtual void HandleCountMessage(std::uint32_t a_arg1) override;  // 04
		virtual void HandleMobMessage(MobileObject* a_arg1) override;    // 05
		virtual void HandleEndMessage(std::uint32_t a_arg1) override;    // 06
	};
}
