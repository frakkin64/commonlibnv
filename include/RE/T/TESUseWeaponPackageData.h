#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESPackageData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PackageLocation;
	class PackageTarget;
	class TESForm;
	class TESObjectWEAP;

	class TESUseWeaponPackageData :
		public TESPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESUseWeaponPackageData };
		static constexpr auto VTABLE{ VTABLE::TESUseWeaponPackageData };

		// override (TESPackageData)
		virtual ~TESUseWeaponPackageData() = default;                     // 00
		virtual void Copy(TESPackageData* __formal) override;             // 01
		virtual bool Compare(TESPackageData* __formal) override;          // 02
		virtual void Save() override;                                     // 03
		virtual void InitItem(TESForm* __formal) override;                // 04
		virtual void SaveGame(BGSSaveFormBuffer* __formal) override;      // 05
		virtual void LoadGame(BGSLoadFormBuffer* __formal) override;      // 06
		virtual void InitLoadGame(BGSLoadFormBuffer* __formal) override;  // 07

		// members
		PackageTarget*   pAttackTarget;    // 04
		PackageLocation* pTargetLocation;  // 08
		bool             bAlwaysHit;       // 0C
		bool             bDoNoDamage;      // 0D
		bool             bCrouch;          // 0E
		bool             bHoldFire;        // 0F
		bool             bVolleyFire;      // 10
		bool             bRepeatFire;      // 11
		std::uint16_t    sBurstCount;      // 12
		std::uint16_t    sVolleyShotsMin;  // 14
		std::uint16_t    sVolleyShotsMax;  // 16
		float            fVolleyWaitMin;   // 18
		float            fVolleyWaitMax;   // 1C
		TESObjectWEAP*   pWeapon;          // 20
	};
	static_assert(sizeof(TESUseWeaponPackageData) == 0x24);
}
