#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBinaryAction.h"

namespace RE
{
	class hkDashpotActionCinfo;

	class bhkDashpotAction :
		public bhkBinaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkDashpotAction };
		static constexpr auto VTABLE{ VTABLE::bhkDashpotAction };

	protected:
		void CopyCinfo(hkDashpotActionCinfo& arInfo)
		{
			using func_t = decltype(&bhkDashpotAction::CopyCinfo);
			static REL::Relocation<func_t> func{ Offsets::bhkDashpotAction::CopyCinfo };
			func(this, arInfo);
		}
	};
}
