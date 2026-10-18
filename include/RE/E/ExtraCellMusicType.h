#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class BGSMusicType;

	class ExtraCellMusicType :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCellMusicType };
		static constexpr auto VTABLE{ VTABLE::ExtraCellMusicType };

		// override (BSExtraData)
		virtual ~ExtraCellMusicType() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraCellMusicType* ctor(BGSMusicType* apType)
		{
			using func_t = ExtraCellMusicType*(__thiscall*)(ExtraCellMusicType*, BGSMusicType*);
			static REL::Relocation<func_t> func{ Offsets::ExtraCellMusicType::ctor };
			return func(this, apType);
		}

	public:
		// members
		BGSMusicType* pType;  // 0C
	};
	static_assert(sizeof(ExtraCellMusicType) == 0x10);
}
