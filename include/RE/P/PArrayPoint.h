#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;

	class PArrayPoint :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PArrayPoint };
		static constexpr auto VTABLE{ VTABLE::PArrayPoint };

		// override (NiExtraData)
		virtual ~PArrayPoint() = default;                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12
	};
	static_assert(sizeof(PArrayPoint) == 0xC);
}
