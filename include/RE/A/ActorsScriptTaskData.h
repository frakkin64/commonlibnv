#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/M/MobileObjectTaskletData.h"

namespace RE
{
	class MobileObject;

	class ActorsScriptTaskData :
		public MobileObjectTaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorsScriptTaskData };
		static constexpr auto VTABLE{ VTABLE::ActorsScriptTaskData };

		// override (MobileObjectTaskletData)
		virtual ~ActorsScriptTaskData() = default;                       // 00
		virtual void HandleCountMessage(std::uint32_t a_arg1) override;  // 04
		virtual void HandleMobMessage(MobileObject* a_arg1) override;    // 05
		virtual void HandleEndMessage(std::uint32_t a_arg1) override;    // 06

		// members
		BSSimpleList<MobileObject*>* pprevmoblist;  // 38
		std::int32_t                 iUpdated;      // 3C
	};
}
