#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSExplosionData.h"
#include "RE/B/BGSPreloadable.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESEnchantableForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESImageSpaceModifiableForm.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class BGSExplosion :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModel,  // 3C
		public TESEnchantableForm,  // 54
		public BGSPreloadable,  // 64
		public TESImageSpaceModifiableForm  // 68
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSExplosion };
		static constexpr auto VTABLE{ VTABLE::BGSExplosion };

		enum class BGSExplosionFlags : std::int32_t
		{
			kRADIUS_IN_BSUNITS = 0x1,
			kUSE_WORLD_ORIENTATION = 0x2,
			kKNOCKS_DOWN_ACTORS_ALWAYS = 0x4,
			kKNOCKS_DOWN_ACTORS_FORMULA = 0x8,
			kIGNORE_LOS = 0x10,
			kPUSH_EXPLODED_REF_ONLY = 0x20,
			kIGNORE_ISSWAP = 0x40,
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kEXPL_ID };

		// override (TESBoundObject)
		virtual ~BGSExplosion() = default;                                               // 04
		virtual void ClearData() override;                                               // 05
		virtual bool Load(TESFile* apFile) override;                                     // 08
		virtual void Save() override;                                                    // 0B
		virtual void InitItem() override;                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                  // 43
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy) override;  // 53
		virtual void UnClone3D(TESObjectREFR* apRequester) override;                     // 54

		float GetRadiusBSUnits()
		{
			using func_t = decltype(&BGSExplosion::GetRadiusBSUnits);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosion::GetRadiusBSUnits };
			return func(this);
		}

		bool IsFlagSet(BGSExplosion::BGSExplosionFlags aeFlag)
		{
			using func_t = decltype(&BGSExplosion::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosion::IsFlagSet };
			return func(this, aeFlag);
		}

		BGSExplosion* ctor()
		{
			using func_t = BGSExplosion*(__thiscall*)(BGSExplosion*);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosion::ctor };
			return func(this);
		}

		std::int32_t GetSoundLevelValue()
		{
			using func_t = decltype(&BGSExplosion::GetSoundLevelValue);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosion::GetSoundLevelValue };
			return func(this);
		}

		float GetImageSpaceRadiusBSUnits()
		{
			using func_t = decltype(&BGSExplosion::GetImageSpaceRadiusBSUnits);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosion::GetImageSpaceRadiusBSUnits };
			return func(this);
		}

		float GetRadiationRadiusBSUnits()
		{
			using func_t = decltype(&BGSExplosion::GetRadiationRadiusBSUnits);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosion::GetRadiationRadiusBSUnits };
			return func(this);
		}

	public:
		// members
		TESBoundObject*  pImpactPlacedObject;  // 70
		BGSExplosionData Data;                 // 74
	};
	static_assert(sizeof(BGSExplosion) == 0xA8);
}
