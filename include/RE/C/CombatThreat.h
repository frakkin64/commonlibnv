#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatTimeStamp.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PathingAvoidNode.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class NiAVObject;
	class TESObjectREFR;
	class bhkRigidBody;

	class CombatThreat
	{
	public:
		CombatThreat* ctor(TESObjectREFR* apThreat, float afRadius, float afStartTime, float afEndTime, float afDamage)
		{
			using func_t = CombatThreat*(__thiscall*)(CombatThreat*, TESObjectREFR*, float, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::ctor };
			return func(this, apThreat, afRadius, afStartTime, afEndTime, afDamage);
		}

		void Initialize(TESObjectREFR* apThreat, float afRadius, float afStartTime, float a_arg4, float a_arg5, bool afEndTime)
		{
			using func_t = decltype(&CombatThreat::Initialize);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::Initialize };
			func(this, apThreat, afRadius, afStartTime, a_arg4, a_arg5, afEndTime);
		}

		float ComputeThreatScore(NiPoint3 const& arLocation, Actor* apActor, float afCompareTime, float afAdditionalRadius, float afActorHealth)
		{
			using func_t = decltype(&CombatThreat::ComputeThreatScore);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::ComputeThreatScore };
			return func(this, arLocation, apActor, afCompareTime, afAdditionalRadius, afActorHealth);
		}

		bool IsActive(float afCompareTime)
		{
			using func_t = decltype(&CombatThreat::IsActive);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::IsActive };
			return func(this, afCompareTime);
		}

		NiPoint3 GetThreatLinearVelocity()
		{
			using func_t = decltype(&CombatThreat::GetThreatLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::GetThreatLinearVelocity };
			return func(this);
		}

		PathingAvoidNode GetAvoidNode(Actor* result)
		{
			using func_t = decltype(&CombatThreat::GetAvoidNode);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::GetAvoidNode };
			return func(this, result);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatThreat::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatThreat::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		TESObjectREFR*        pThreat;                         // 00
		float                 fRadius;                         // 04
		CombatTimeStamp       fStartTime;                      // 08
		CombatTimeStamp       fEndTime;                        // 0C
		float                 fDamage;                         // 10
		NiPointer<NiAVObject> spDebugGeometry;                 // 14
		NiAVObject*           pCachedThreat3D;                 // 18
		bhkRigidBody*         pCachedRigidBody;                // 1C
		NiPoint3              CachedLinearVelocity;            // 20
		CombatTimeStamp       fCachedLinearVelocityTimeStamp;  // 2C
	};
}
