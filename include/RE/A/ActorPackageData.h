#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PTYPE.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESObjectREFR;

	class __declspec(novtable) ActorPackageData
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorPackageData };
		static constexpr auto VTABLE{ VTABLE::ActorPackageData };

		// add
		virtual ~ActorPackageData() = default;                       // 00
		virtual void HandleDeletedReference(TESObjectREFR* a_arg1);  // 01
		virtual PTYPE GetPackageType();                              // 02
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1);            // 03
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1);            // 04
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1);        // 05

		static ActorPackageData* CreateActorPackageData(PTYPE aPackageType)
		{
			using func_t = decltype(&ActorPackageData::CreateActorPackageData);
			static REL::Relocation<func_t> func{ Offsets::ActorPackageData::CreateActorPackageData };
			return func(aPackageType);
		}

	protected:
		ActorPackageData* ctor()
		{
			using func_t = ActorPackageData*(__thiscall*)(ActorPackageData*);
			static REL::Relocation<func_t> func{ Offsets::ActorPackageData::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(ActorPackageData) == 0x4);
}
