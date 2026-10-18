#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSMultiBoundRoom;

	class ExtraRoom :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRoom };
		static constexpr auto VTABLE{ VTABLE::ExtraRoom };

		// override (BSExtraData)
		virtual ~ExtraRoom() = default;  // 00

		ExtraRoom* ctor()
		{
			using func_t = ExtraRoom*(__thiscall*)(ExtraRoom*);
			static REL::Relocation<func_t> func{ Offsets::ExtraRoom::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<BSMultiBoundRoom> spRoom;  // 0C
	};
	static_assert(sizeof(ExtraRoom) == 0x10);
}
