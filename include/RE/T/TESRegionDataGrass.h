#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESRegionData.h"

namespace RE
{
	class TESFile;
	class TESRegionGrassObjectList;

	class TESRegionDataGrass :
		public TESRegionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataGrass };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataGrass };

		// override (TESRegionData)
		virtual ~TESRegionDataGrass() = default;                                             // 00
		virtual void Save() override;                                                        // 01
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2) override;  // 07

		// add
		virtual bool LoadRegionDataGrass(TESFile* apFile);  // 09
		virtual TESRegionGrassObjectList* GetObjectList();  // 0A

		// members
		TESRegionGrassObjectList* pObjects;  // 08
	};
	static_assert(sizeof(TESRegionDataGrass) == 0xC);
}
