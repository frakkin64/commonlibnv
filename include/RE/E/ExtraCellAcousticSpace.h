#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class BGSAcousticSpace;

	class ExtraCellAcousticSpace :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellAcousticSpace };
		static constexpr auto VTABLE{ VTABLE::ExtraCellAcousticSpace };

		// override (BSExtraData)
		virtual ~ExtraCellAcousticSpace() = default;            // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		BGSAcousticSpace* pSpace;  // 0C
	};
	static_assert(sizeof(ExtraCellAcousticSpace) == 0x10);
}
