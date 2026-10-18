#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class REF_DECAL_DATA;
	class TESForm;

	class ExtraDecalRefs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraDecalRefs };
		static constexpr auto VTABLE{ VTABLE::ExtraDecalRefs };

		// override (BSExtraData)
		virtual ~ExtraDecalRefs() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraDecalRefs* ctor()
		{
			using func_t = ExtraDecalRefs*(__thiscall*)(ExtraDecalRefs*);
			static REL::Relocation<func_t> func{ Offsets::ExtraDecalRefs::ctor };
			return func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ExtraDecalRefs::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraDecalRefs::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		BSSimpleList<REF_DECAL_DATA*> DecalRefList;  // 0C
	};
	static_assert(sizeof(ExtraDecalRefs) == 0x14);
}
