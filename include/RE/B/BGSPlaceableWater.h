#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPlaceableWaterData.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESWaterForm;

	class BGSPlaceableWater :
		public TESBoundObject,  // 00
		public TESModel  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPlaceableWater };
		static constexpr auto VTABLE{ VTABLE::BGSPlaceableWater };

		enum class BGSPlaceableWaterFlags : std::int32_t
		{
			kREFLECTION_ENABLED = 0x1,
			kREFLECTS_ACTORS = 0x2,
			kREFLECTS_LAND = 0x4,
			kREFLECTS_LOD_LAND = 0x8,
			kREFLECTS_LOD_BUILDINGS = 0x10,
			kREFLECTS_LOD_TREES = 0x20,
			kREFLECTS_SKY = 0x40,
			kREFLECTS_NO_REFERENCE = 0x80,
			kREFLECTS_DEAD_ACTORS = 0x100,
			kREFRACTION_ENABLED = 0x200,
			kREFRACTS_ACTORS = 0x400,
			kREFRACTS_LAND = 0x800,
			kREFRACTS_NO_REFERENCE = 0x10000,
			kREFRACTS_DEAD_ACTORS = 0x20000,
			kSILHOUETTE_REFLECTIONS = 0x40000,
			kLOD_WATER = 0x8000000,
			kENABLE_DEPTH = 0x10000000,
			kENABLE_OBJECT_TEXCOORD = 0x20000000,
			kAUTOMATIC_WATER = 0x40000000,
			kDISABLE_FOGGING_PASS = -2147483648,
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kPWAT_ID };

		// override (TESBoundObject)
		virtual ~BGSPlaceableWater() = default;                                                                                                                          // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual TESWaterForm* GetWaterType() override;                                                                                                                   // 50

		bool IsAutomaticWater()
		{
			using func_t = decltype(&BGSPlaceableWater::IsAutomaticWater);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::IsAutomaticWater };
			return func(this);
		}

		bool IsFlagSet(BGSPlaceableWater::BGSPlaceableWaterFlags aeFlag)
		{
			using func_t = decltype(&BGSPlaceableWater::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::IsFlagSet };
			return func(this, aeFlag);
		}

		bool GetRefractionEnabled()
		{
			using func_t = decltype(&BGSPlaceableWater::GetRefractionEnabled);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::GetRefractionEnabled };
			return func(this);
		}

		bool GetRefractsLand()
		{
			using func_t = decltype(&BGSPlaceableWater::GetRefractsLand);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::GetRefractsLand };
			return func(this);
		}

		bool IsLODWater()
		{
			using func_t = decltype(&BGSPlaceableWater::IsLODWater);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::IsLODWater };
			return func(this);
		}

		bool IsDepthEnabled()
		{
			using func_t = decltype(&BGSPlaceableWater::IsDepthEnabled);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::IsDepthEnabled };
			return func(this);
		}

		BGSPlaceableWater* ctor()
		{
			using func_t = BGSPlaceableWater*(__thiscall*)(BGSPlaceableWater*);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::ctor };
			return func(this);
		}

		void SetReflectsLODLand(bool abValue)
		{
			using func_t = decltype(&BGSPlaceableWater::SetReflectsLODLand);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWater::SetReflectsLODLand };
			func(this, abValue);
		}

	public:
		// members
		BGSPlaceableWaterData Data;  // 48
	};
	static_assert(sizeof(BGSPlaceableWater) == 0x50);
}
