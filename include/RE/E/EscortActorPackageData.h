#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPackageData.h"
#include "RE/B/BSSimpleList.h"
#include "RE/P/PTYPE.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESEscortPackageData;
	class TESObjectREFR;
	class TESPackage;

	class EscortActorPackageData :
		public ActorPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::EscortActorPackageData };
		static constexpr auto VTABLE{ VTABLE::EscortActorPackageData };

		// override (ActorPackageData)
		virtual ~EscortActorPackageData() = default;                          // 00
		virtual void HandleDeletedReference(TESObjectREFR* a_arg1) override;  // 01
		virtual PTYPE GetPackageType() override;                              // 02
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;            // 03
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;            // 04
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;        // 05

		EscortActorPackageData* ctor()
		{
			using func_t = EscortActorPackageData*(__thiscall*)(EscortActorPackageData*);
			static REL::Relocation<func_t> func{ Offsets::EscortActorPackageData::ctor };
			return func(this);
		}

	public:
		// members
		Actor*                      pActor;          // 04
		TESPackage*                 pPackage;        // 08
		const TESEscortPackageData* pPackageData;    // 0C
		BSSimpleList<Actor*>        EscortedActors;  // 10
	};
	static_assert(sizeof(EscortActorPackageData) == 0x18);
}
