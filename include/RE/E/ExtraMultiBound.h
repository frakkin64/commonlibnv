#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSMultiBound;

	class ExtraMultiBound :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraMultiBound };
		static constexpr auto VTABLE{ VTABLE::ExtraMultiBound };

		// override (BSExtraData)
		virtual ~ExtraMultiBound() = default;  // 00

		ExtraMultiBound* ctor()
		{
			using func_t = ExtraMultiBound*(__thiscall*)(ExtraMultiBound*);
			static REL::Relocation<func_t> func{ Offsets::ExtraMultiBound::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<BSMultiBound> spBound;  // 0C
	};
	static_assert(sizeof(ExtraMultiBound) == 0x10);
}
