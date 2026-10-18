#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESPackageData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PackageLocation;
	class TESForm;

	class TESEatPackageData :
		public TESPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESEatPackageData };
		static constexpr auto VTABLE{ VTABLE::TESEatPackageData };

		// override (TESPackageData)
		virtual ~TESEatPackageData() = default;                           // 00
		virtual void Copy(TESPackageData* __formal) override;             // 01
		virtual bool Compare(TESPackageData* __formal) override;          // 02
		virtual void Save() override;                                     // 03
		virtual void InitItem(TESForm* __formal) override;                // 04
		virtual void SaveGame(BGSSaveFormBuffer* __formal) override;      // 05
		virtual void LoadGame(BGSLoadFormBuffer* __formal) override;      // 06
		virtual void InitLoadGame(BGSLoadFormBuffer* __formal) override;  // 07

		TESEatPackageData* ctor()
		{
			using func_t = TESEatPackageData*(__thiscall*)(TESEatPackageData*);
			static REL::Relocation<func_t> func{ Offsets::TESEatPackageData::ctor };
			return func(this);
		}

	public:
		// members
		PackageLocation* pSearchLocation;  // 04
	};
	static_assert(sizeof(TESEatPackageData) == 0x8);
}
