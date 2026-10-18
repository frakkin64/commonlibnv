#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ActorCause;

	class ExtraActorCause :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraActorCause };
		static constexpr auto VTABLE{ VTABLE::ExtraActorCause };

		// override (BSExtraData)
		virtual ~ExtraActorCause() = default;  // 00

		ExtraActorCause* ctor()
		{
			using func_t = ExtraActorCause*(__thiscall*)(ExtraActorCause*);
			static REL::Relocation<func_t> func{ Offsets::ExtraActorCause::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<ActorCause> spActorCause;  // 0C
	};
	static_assert(sizeof(ExtraActorCause) == 0x10);
}
