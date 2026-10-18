#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BREADCRUMB_STATE.h"
#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class ExtraFollowerSwimBreadcrumb;

	class ExtraFollowerSwimBreadcrumbs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraFollowerSwimBreadcrumbs };
		static constexpr auto VTABLE{ VTABLE::ExtraFollowerSwimBreadcrumbs };

		// override (BSExtraData)
		virtual ~ExtraFollowerSwimBreadcrumbs() = default;  // 00

		ExtraFollowerSwimBreadcrumbs* ctor()
		{
			using func_t = ExtraFollowerSwimBreadcrumbs*(__thiscall*)(ExtraFollowerSwimBreadcrumbs*);
			static REL::Relocation<func_t> func{ Offsets::ExtraFollowerSwimBreadcrumbs::ctor };
			return func(this);
		}

	public:
		// members
		BREADCRUMB_STATE                           eLeaderState;     // 0C
		NiPoint3                                   LeaderLocation;   // 10
		std::uint32_t                              LeaderNavMeshID;  // 1C
		BSSimpleList<ExtraFollowerSwimBreadcrumb*> CrumbList;        // 20
	};
	static_assert(sizeof(ExtraFollowerSwimBreadcrumbs) == 0x28);
}
