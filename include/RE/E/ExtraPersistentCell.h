#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectCELL;

	class ExtraPersistentCell :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPersistentCell };
		static constexpr auto VTABLE{ VTABLE::ExtraPersistentCell };

		// override (BSExtraData)
		virtual ~ExtraPersistentCell() = default;  // 00

		// members
		TESObjectCELL* pPersistentCell;  // 0C
	};
	static_assert(sizeof(ExtraPersistentCell) == 0x10);
}
