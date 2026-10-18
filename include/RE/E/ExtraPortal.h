#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSPortal;

	class ExtraPortal :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPortal };
		static constexpr auto VTABLE{ VTABLE::ExtraPortal };

		// override (BSExtraData)
		virtual ~ExtraPortal() = default;  // 00

		ExtraPortal* ctor()
		{
			using func_t = ExtraPortal*(__thiscall*)(ExtraPortal*);
			static REL::Relocation<func_t> func{ Offsets::ExtraPortal::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<BSPortal> spPortal;  // 0C
	};
	static_assert(sizeof(ExtraPortal) == 0x10);
}
