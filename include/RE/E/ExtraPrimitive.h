#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class BGSPrimitive;

	class ExtraPrimitive :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPrimitive };
		static constexpr auto VTABLE{ VTABLE::ExtraPrimitive };

		// override (BSExtraData)
		virtual ~ExtraPrimitive() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraPrimitive* ctor(BGSPrimitive* apPrimitive)
		{
			using func_t = ExtraPrimitive*(__thiscall*)(ExtraPrimitive*, BGSPrimitive*);
			static REL::Relocation<func_t> func{ Offsets::ExtraPrimitive::ctor };
			return func(this, apPrimitive);
		}

	public:
		// members
		BGSPrimitive* pPrimitive;  // 0C
	};
	static_assert(sizeof(ExtraPrimitive) == 0x10);
}
