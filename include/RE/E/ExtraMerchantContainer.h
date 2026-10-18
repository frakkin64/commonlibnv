#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraMerchantContainer :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraMerchantContainer };
		static constexpr auto VTABLE{ VTABLE::ExtraMerchantContainer };

		// override (BSExtraData)
		virtual ~ExtraMerchantContainer() = default;            // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraMerchantContainer* ctor()
		{
			using func_t = ExtraMerchantContainer*(__thiscall*)(ExtraMerchantContainer*);
			static REL::Relocation<func_t> func{ Offsets::ExtraMerchantContainer::ctor };
			return func(this);
		}

	public:
		// members
		TESObjectREFR* pContainer;  // 0C
	};
	static_assert(sizeof(ExtraMerchantContainer) == 0x10);
}
