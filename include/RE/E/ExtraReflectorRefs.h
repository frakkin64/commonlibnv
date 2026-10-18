#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class REF_REFLECTOR_DATA;
	class TESForm;

	class ExtraReflectorRefs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraReflectorRefs };
		static constexpr auto VTABLE{ VTABLE::ExtraReflectorRefs };

		// override (BSExtraData)
		virtual ~ExtraReflectorRefs() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ExtraReflectorRefs::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraReflectorRefs::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		BSSimpleList<REF_REFLECTOR_DATA*> RefList;  // 0C
	};
	static_assert(sizeof(ExtraReflectorRefs) == 0x14);
}
