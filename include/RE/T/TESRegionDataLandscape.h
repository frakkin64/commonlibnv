#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/TESRegionData.h"

namespace RE
{
	class NiTexturingProperty;
	class TESFile;
	class TESTexture;

	class TESRegionDataLandscape :
		public TESRegionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataLandscape };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataLandscape };

		// override (TESRegionData)
		virtual ~TESRegionDataLandscape() = default;                                         // 00
		virtual void Save() override;                                                        // 01
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2) override;  // 07

		// add
		virtual bool LoadRegionDataLandscape(TESFile* apFile);                             // 09
		virtual void GetCanopyShadowTexture(BSStringT<char>* a_arg1) const;                // 0A
		virtual bool SetCanopyShadowTexture(BSStringT<char> const& aCanopyShadowTexture);  // 0B

		TESRegionDataLandscape* ctor()
		{
			using func_t = TESRegionDataLandscape*(__thiscall*)(TESRegionDataLandscape*);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataLandscape::ctor };
			return func(this);
		}

		static NiTexturingProperty* GetDefaultFullMaskTextureProp()
		{
			using func_t = decltype(&TESRegionDataLandscape::GetDefaultFullMaskTextureProp);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataLandscape::GetDefaultFullMaskTextureProp };
			return func();
		}

	public:
		// members
		TESTexture* pCanopyShadowTexture;  // 08
	};
	static_assert(sizeof(TESRegionDataLandscape) == 0xC);
}
