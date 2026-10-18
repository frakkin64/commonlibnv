#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"

namespace RE
{
	class REF_ACTIVATE_DATA;
	class TESObjectREFR;

	class ExtraActivateRef :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraActivateRef };
		static constexpr auto VTABLE{ VTABLE::ExtraActivateRef };

		// override (BSExtraData)
		virtual ~ExtraActivateRef() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraActivateRef* ctor()
		{
			using func_t = ExtraActivateRef*(__thiscall*)(ExtraActivateRef*);
			static REL::Relocation<func_t> func{ Offsets::ExtraActivateRef::ctor };
			return func(this);
		}

		REF_ACTIVATE_DATA* GetData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ExtraActivateRef::GetData);
			static REL::Relocation<func_t> func{ Offsets::ExtraActivateRef::GetData };
			return func(this, apRef);
		}

	public:
		// members
		BSSimpleList<REF_ACTIVATE_DATA*> ParentList;            // 0C
		std::uint8_t                     cActivateFlags;        // 14
		std::uint8_t                     pad15[0x3];            // 15
		BSStringT<char>                  ActivateTextOverride;  // 18
	};
	static_assert(sizeof(ExtraActivateRef) == 0x20);
}
