#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSReadWriteLock.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class Actor;
	class BGSExplosion;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class CombatThreat;
	class PathingAvoidNodeArray;
	class Projectile;
	class TESForm;
	class TESObjectREFR;

	class CombatThreatMap :
		public NiTMap<std::uint32_t, CombatThreat*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatThreatMap };
		static constexpr auto VTABLE{ VTABLE::CombatThreatMap };

		// override (NiTMap<std::uint32_t, CombatThreat*>)
		virtual ~CombatThreatMap() = default;  // 00

		CombatThreatMap* ctor()
		{
			using func_t = CombatThreatMap*(__thiscall*)(CombatThreatMap*);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::ctor };
			return func(this);
		}

		void UpdateThreats()
		{
			using func_t = decltype(&CombatThreatMap::UpdateThreats);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::UpdateThreats };
			func(this);
		}

		void RemoveThreat(TESForm* apForm)
		{
			using func_t = decltype(&CombatThreatMap::RemoveThreat);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::RemoveThreat };
			func(this, apForm);
		}

		void AddThreat(Projectile* apProjectile)
		{
			using func_t = void (CombatThreatMap::*)(Projectile*);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::AddThreat };
			func(this, apProjectile);
		}

		void AddThreat(TESObjectREFR* apRef, BGSExplosion* apExplosion, float afTime)
		{
			using func_t = void (CombatThreatMap::*)(TESObjectREFR*, BGSExplosion*, float);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::AddThreat_1 };
			func(this, apRef, apExplosion, afTime);
		}

		float ComputeThreatScore(NiPoint3 apActor, Actor* a_arg2, float afTime, float a_arg4, CombatTimeStamp afSkipOlderThreats, float afAdditionalRadius)
		{
			using func_t = decltype(&CombatThreatMap::ComputeThreatScore);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::ComputeThreatScore };
			return func(this, apActor, a_arg2, afTime, a_arg4, afSkipOlderThreats, afAdditionalRadius);
		}

		PathingAvoidNodeArray* CreateAvoidNodeArray(NiPoint3 const& arLocation, Actor* apActor, float afTime)
		{
			using func_t = decltype(&CombatThreatMap::CreateAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::CreateAvoidNodeArray };
			return func(this, arLocation, apActor, afTime);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatThreatMap::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatThreatMap::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::LoadGame };
			func(this, apLoadGameBuffer);
		}

	protected:
		void AddThreat(TESObjectREFR* apThreat, float afRadius, float afStartTime, float afEndTime, float afDamage)
		{
			using func_t = void (CombatThreatMap::*)(TESObjectREFR*, float, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::CombatThreatMap::AddThreat_2 };
			func(this, apThreat, afRadius, afStartTime, afEndTime, afDamage);
		}

	public:
		// members
		BSReadWriteLock Lock;  // 10
	};
	static_assert(sizeof(CombatThreatMap) == 0x18);
}
