#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/P/PackageNS_CRIME_TYPE.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class TESBoundObject;
	class TESFaction;
	class TESForm;
	class TESObjectREFR;

	class Crime
	{
	public:
		Crime* ctor(PackageNS_CRIME_TYPE aeCrime, TESObjectREFR* apTarget, Actor* apActor, TESBoundObject* apObject, std::int32_t ainumb, TESForm* apownership)
		{
			using func_t = Crime*(__thiscall*)(Crime*, PackageNS_CRIME_TYPE, TESObjectREFR*, Actor*, TESBoundObject*, std::int32_t, TESForm*);
			static REL::Relocation<func_t> func{ Offsets::Crime::ctor };
			return func(this, aeCrime, apTarget, apActor, apObject, ainumb, apownership);
		}

		bool ShouldCrimeBeRemoved()
		{
			using func_t = decltype(&Crime::ShouldCrimeBeRemoved);
			static REL::Relocation<func_t> func{ Offsets::Crime::ShouldCrimeBeRemoved };
			return func(this);
		}

		void AddtoActorKnowList(Actor* apActor)
		{
			using func_t = decltype(&Crime::AddtoActorKnowList);
			static REL::Relocation<func_t> func{ Offsets::Crime::AddtoActorKnowList };
			func(this, apActor);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&Crime::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::Crime::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = void (Crime::*)();
			static REL::Relocation<func_t> func{ Offsets::Crime::SaveGame };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void (Crime::*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Crime::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Crime::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::Crime::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Crime::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::Crime::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::int32_t               iRefCount;             // 00
		PackageNS_CRIME_TYPE       ecrime;                // 04
		TESObjectREFR*             pcrimetarget;          // 08
		Actor*                     pcriminal;             // 0C
		bool                       breported;             // 10
		std::uint8_t               pad11[0x3];            // 11
		TESBoundObject*            pObjectStolen;         // 14
		std::int32_t               inumberstolen;         // 18
		BSSimpleList<Actor*>       pActorsknowofCrime;    // 1C
		TESForm*                   pOwnership;            // 24
		std::int32_t               iCrimeNumber;          // 28
		bool                       bguardrespond;         // 2C
		std::uint8_t               pad2D[0x3];            // 2D
		std::int32_t               iCrimeStamp;           // 30
		CombatTimeStamp            fCrimeTimeStamp;       // 34
		BSSimpleList<TESFaction*>* pListofEnemyFactions;  // 38
	};
}
