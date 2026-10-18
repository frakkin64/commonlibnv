#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/P/PerkData.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"

namespace RE
{
	class BGSPerkEntry;
	class TESFile;
	class TESObjectREFR;

	class BGSPerk :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESDescription,  // 24
		public TESIcon  // 2C
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPerk };
		static constexpr auto VTABLE{ VTABLE::BGSPerk };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kPERK_ID };

		// override (TESForm)
		virtual ~BGSPerk() = default;                    // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		std::uint8_t GetNumRanks()
		{
			using func_t = decltype(&BGSPerk::GetNumRanks);
			static REL::Relocation<func_t> func{ Offsets::BGSPerk::GetNumRanks };
			return func(this);
		}

		BGSPerk* ctor()
		{
			using func_t = BGSPerk*(__thiscall*)(BGSPerk*);
			static REL::Relocation<func_t> func{ Offsets::BGSPerk::ctor };
			return func(this);
		}

		bool IsPerkAttainable(TESObjectREFR* apActionRef)
		{
			using func_t = decltype(&BGSPerk::IsPerkAttainable);
			static REL::Relocation<func_t> func{ Offsets::BGSPerk::IsPerkAttainable };
			return func(this, apActionRef);
		}

		void BuildDescriptionString(char* apOutText, std::uint32_t aiOutSize)
		{
			using func_t = decltype(&BGSPerk::BuildDescriptionString);
			static REL::Relocation<func_t> func{ Offsets::BGSPerk::BuildDescriptionString };
			func(this, apOutText, aiOutSize);
		}

		char GetLevel()
		{
			using func_t = decltype(&BGSPerk::GetLevel);
			static REL::Relocation<func_t> func{ Offsets::BGSPerk::GetLevel };
			return func(this);
		}

		bool IsPerkAvailable(TESObjectREFR* apActionRef)
		{
			using func_t = decltype(&BGSPerk::IsPerkAvailable);
			static REL::Relocation<func_t> func{ Offsets::BGSPerk::IsPerkAvailable };
			return func(this, apActionRef);
		}

	public:
		// members
		PerkData                    Data;            // 38
		std::uint8_t                pad3D[0x3];      // 3D
		TESCondition                PerkConditions;  // 40
		BSSimpleList<BGSPerkEntry*> PerkEntries;     // 48
	};
	static_assert(sizeof(BGSPerk) == 0x50);
}
