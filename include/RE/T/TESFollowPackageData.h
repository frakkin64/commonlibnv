#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESPackageData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PackageLocation;
	class TESForm;

	class TESFollowPackageData :
		public TESPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESFollowPackageData };
		static constexpr auto VTABLE{ VTABLE::TESFollowPackageData };

		// override (TESPackageData)
		virtual ~TESFollowPackageData() = default;                        // 00
		virtual void Copy(TESPackageData* __formal) override;             // 01
		virtual bool Compare(TESPackageData* __formal) override;          // 02
		virtual void Save() override;                                     // 03
		virtual void InitItem(TESForm* __formal) override;                // 04
		virtual void SaveGame(BGSSaveFormBuffer* __formal) override;      // 05
		virtual void LoadGame(BGSLoadFormBuffer* __formal) override;      // 06
		virtual void InitLoadGame(BGSLoadFormBuffer* __formal) override;  // 07

		TESFollowPackageData* ctor()
		{
			using func_t = TESFollowPackageData*(__thiscall*)(TESFollowPackageData*);
			static REL::Relocation<func_t> func{ Offsets::TESFollowPackageData::ctor };
			return func(this);
		}

	public:
		// members
		PackageLocation* pStartLocation;  // 04
		float            fTriggerRadius;  // 08
	};
	static_assert(sizeof(TESFollowPackageData) == 0xC);
}
