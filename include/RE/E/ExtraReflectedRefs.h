#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class REF_REFLECTED_DATA;

	class ExtraReflectedRefs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraReflectedRefs };
		static constexpr auto VTABLE{ VTABLE::ExtraReflectedRefs };

		// override (BSExtraData)
		virtual ~ExtraReflectedRefs() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraReflectedRefs* ctor()
		{
			using func_t = ExtraReflectedRefs*(__thiscall*)(ExtraReflectedRefs*);
			static REL::Relocation<func_t> func{ Offsets::ExtraReflectedRefs::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleList<REF_REFLECTED_DATA*> RefList;  // 0C
	};
	static_assert(sizeof(ExtraReflectedRefs) == 0x14);
}
