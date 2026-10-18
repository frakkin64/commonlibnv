#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraReferencePointer :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraReferencePointer };
		static constexpr auto VTABLE{ VTABLE::ExtraReferencePointer };

		// override (BSExtraData)
		virtual ~ExtraReferencePointer() = default;  // 00

		ExtraReferencePointer* ctor(TESObjectREFR* apRef)
		{
			using func_t = ExtraReferencePointer*(__thiscall*)(ExtraReferencePointer*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraReferencePointer::ctor };
			return func(this, apRef);
		}

	public:
		// members
		TESObjectREFR* pRef;  // 0C
	};
	static_assert(sizeof(ExtraReferencePointer) == 0x10);
}
