#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSImpactDataSet_IMPACT_MATERIAL_TYPE.h"
#include "RE/B/BGSPreloadable.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSImpactData;
	class ImpactSwap;
	class TESFile;

	class BGSImpactDataSet :
		public TESForm,  // 00
		public BGSPreloadable  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSImpactDataSet };
		static constexpr auto VTABLE{ VTABLE::BGSImpactDataSet };

		using IMPACT_MATERIAL_TYPE = BGSImpactDataSet_IMPACT_MATERIAL_TYPE;

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kIPDS_ID };

		// override (TESForm)
		virtual ~BGSImpactDataSet() = default;           // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSImpactData* GetImpactData(MATERIAL_TYPE aeHkType)
		{
			using func_t = BGSImpactData* (BGSImpactDataSet::*)(MATERIAL_TYPE);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactDataSet::GetImpactData };
			return func(this, aeHkType);
		}

		BGSImpactDataSet* ctor()
		{
			using func_t = BGSImpactDataSet*(__thiscall*)(BGSImpactDataSet*);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactDataSet::ctor };
			return func(this);
		}

		BGSImpactData* GetImpactData(BGSImpactDataSet_IMPACT_MATERIAL_TYPE aeType)
		{
			using func_t = BGSImpactData* (BGSImpactDataSet::*)(BGSImpactDataSet_IMPACT_MATERIAL_TYPE);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactDataSet::GetImpactData_1 };
			return func(this, aeType);
		}

		static void CreateDefaultImpactDataSet()
		{
			using func_t = decltype(&BGSImpactDataSet::CreateDefaultImpactDataSet);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactDataSet::CreateDefaultImpactDataSet };
			func();
		}

		static void ApplyImpactSwap(ImpactSwap* apSwap)
		{
			using func_t = decltype(&BGSImpactDataSet::ApplyImpactSwap);
			static REL::Relocation<func_t> func{ Offsets::BGSImpactDataSet::ApplyImpactSwap };
			func(apSwap);
		}

	public:
		// members
		BGSImpactData* ppImpactData[12];  // 1C
	};
	static_assert(sizeof(BGSImpactDataSet) == 0x4C);
}
