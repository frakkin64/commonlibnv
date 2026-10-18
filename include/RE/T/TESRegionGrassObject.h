#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESRegionObjectBase.h"

namespace RE
{
	class NiPoint3;
	class TESGrass;
	class TESLandTexture;
	class TESWorldSpace;

	class TESRegionGrassObject :
		public TESRegionObjectBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionGrassObject };
		static constexpr auto VTABLE{ VTABLE::TESRegionGrassObject };

		class REGION_GRASS_OBJECT_FILE_DATA;

		class REGION_GRASS_OBJECT_FILE_DATA
		{
		public:
			// members
			std::uint32_t iFormID;        // 00?
			std::uint32_t iParentFormID;  // 04?
		};

		// add
		virtual ~TESRegionGrassObject() = default;                                                                    // 02
		virtual TESLandTexture* GetParentTexture();                                                                   // 03
		virtual void SetParentTexture(TESLandTexture* apLandTexture);                                                 // 04
		virtual TESRegionGrassObject* Copy(TESRegionGrassObject* a_arg1) const;                                       // 05
		virtual float GetGenerateChance(NiPoint3 const& arWorldLoc, TESWorldSpace* apWorldSpace, bool abRegionTest);  // 06

		TESRegionGrassObject* ctor(TESRegionGrassObject::REGION_GRASS_OBJECT_FILE_DATA* apObjectData)
		{
			using func_t = TESRegionGrassObject*(__thiscall*)(TESRegionGrassObject*, TESRegionGrassObject::REGION_GRASS_OBJECT_FILE_DATA*);
			static REL::Relocation<func_t> func{ Offsets::TESRegionGrassObject::ctor };
			return func(this, apObjectData);
		}

	public:
		// members
		TESGrass*       pObject;  // 04
		TESLandTexture* pParent;  // 08
	};
	static_assert(sizeof(TESRegionGrassObject) == 0xC);
}
