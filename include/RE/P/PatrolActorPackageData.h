#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPackageData.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/P/PTYPE.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiPoint3;
	class TESObjectREFR;
	class TESPackage;
	class TESPatrolPackageData;

	class PatrolActorPackageData :
		public ActorPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PatrolActorPackageData };
		static constexpr auto VTABLE{ VTABLE::PatrolActorPackageData };

		enum class PATROL_STATE : std::int32_t
		{
			kPATROL_STATE_INIT = 0x0,
			kPATROL_STATE_TRAVELING_TO_NEXT_REF = 0x1,
			kPATROL_STATE_AT_REF = 0x2,
			kPATROL_STATE_DEBUG_ACTOR_DELETED = 0x3,
			kPATROL_STATE_DEBUG_DESTRUCTED = 0x4,
		};

		// override (ActorPackageData)
		virtual ~PatrolActorPackageData() = default;                          // 00
		virtual void HandleDeletedReference(TESObjectREFR* a_arg1) override;  // 01
		virtual PTYPE GetPackageType() override;                              // 02
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;            // 03
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;            // 04
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;        // 05

		PatrolActorPackageData* ctor()
		{
			using func_t = PatrolActorPackageData*(__thiscall*)(PatrolActorPackageData*);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::ctor };
			return func(this);
		}

		bool Init(Actor* apActor, TESPackage* apPackage)
		{
			using func_t = decltype(&PatrolActorPackageData::Init);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::Init };
			return func(this, apActor, apPackage);
		}

		static TESObjectREFR* GetInitialReferenceForSetup(Actor* apActor, TESPackage* apPack)
		{
			using func_t = decltype(&PatrolActorPackageData::GetInitialReferenceForSetup);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::GetInitialReferenceForSetup };
			return func(apActor, apPack);
		}

		bool SetNextReferenceForPatrol(bool abWaitForOccupiedPoints)
		{
			using func_t = decltype(&PatrolActorPackageData::SetNextReferenceForPatrol);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::SetNextReferenceForPatrol };
			return func(this, abWaitForOccupiedPoints);
		}

		TESObjectREFR* GetCurrentReference()
		{
			using func_t = decltype(&PatrolActorPackageData::GetCurrentReference);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::GetCurrentReference };
			return func(this);
		}

	protected:
		void ClearReservedPatrolRef()
		{
			using func_t = decltype(&PatrolActorPackageData::ClearReservedPatrolRef);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::ClearReservedPatrolRef };
			func(this);
		}

		bool BuildReferenceArray()
		{
			using func_t = decltype(&PatrolActorPackageData::BuildReferenceArray);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::BuildReferenceArray };
			return func(this);
		}

		bool SetCurrentReference(std::uint32_t aiRefIndex)
		{
			using func_t = decltype(&PatrolActorPackageData::SetCurrentReference);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::SetCurrentReference };
			return func(this, aiRefIndex);
		}

		void ResumeRepeatablePatrol(NiPoint3 const& aActorPos)
		{
			using func_t = decltype(&PatrolActorPackageData::ResumeRepeatablePatrol);
			static REL::Relocation<func_t> func{ Offsets::PatrolActorPackageData::ResumeRepeatablePatrol };
			func(this, aActorPos);
		}

	public:
		// members
		PatrolActorPackageData::PATROL_STATE eState;                   // 04
		float                                fCurrentTimeAtReference;  // 08
		bool                                 bPatrolDirection;         // 0C
		std::uint8_t                         pad0D[0x3];               // 0D
		Actor*                               pActor;                   // 10
		TESPackage*                          pPackage;                 // 14
		const TESPatrolPackageData*          pPackageData;             // 18
		BSSimpleArray<TESObjectREFR*, 1024>  References;               // 1C
		bool                                 bCircularArray;           // 2C
		std::uint8_t                         pad2D[0x3];               // 2D
		std::uint32_t                        iLoopAroundIndex;         // 30
		std::uint32_t                        iCurrentReference;        // 34
	};
	static_assert(sizeof(PatrolActorPackageData) == 0x38);
}
