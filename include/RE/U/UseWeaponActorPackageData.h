#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPackageData.h"
#include "RE/P/PTYPE.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectREFR;

	class UseWeaponActorPackageData :
		public ActorPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::UseWeaponActorPackageData };
		static constexpr auto VTABLE{ VTABLE::UseWeaponActorPackageData };

		// override (ActorPackageData)
		virtual ~UseWeaponActorPackageData() = default;                       // 00
		virtual void HandleDeletedReference(TESObjectREFR* a_arg1) override;  // 01
		virtual PTYPE GetPackageType() override;                              // 02
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;            // 03
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;            // 04
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;        // 05

		UseWeaponActorPackageData* ctor()
		{
			using func_t = UseWeaponActorPackageData*(__thiscall*)(UseWeaponActorPackageData*);
			static REL::Relocation<func_t> func{ Offsets::UseWeaponActorPackageData::ctor };
			return func(this);
		}

	public:
		// members
		TESObjectREFR* pAttackTarget;  // 04
	};
	static_assert(sizeof(UseWeaponActorPackageData) == 0x8);
}
