#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESRegionData.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESRegionDataImposter :
		public TESRegionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataImposter };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataImposter };

		// override (TESRegionData)
		virtual ~TESRegionDataImposter() = default;                                          // 00
		virtual void Save() override;                                                        // 01
		virtual void InitItem(TESForm* apOwner) override;                                    // 03
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2) override;  // 07

		// add
		virtual bool LoadRegionDataImposter(TESFile* apFile);  // 09

		static void SetImposterVisible(TESObjectREFR* apImposter, bool abVisible, bool abInstantly)
		{
			using func_t = decltype(&TESRegionDataImposter::SetImposterVisible);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataImposter::SetImposterVisible };
			func(apImposter, abVisible, abInstantly);
		}

	public:
		// members
		BSSimpleList<TESObjectREFR*> m_Imposters;  // 08
	};
}
