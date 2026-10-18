#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPackageData.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/P/PTYPE.h"
#include "RE/S/SANDBOX_ACTIVITY.h"
#include "RE/S/SANDBOX_PROCEDURE.h"
#include "RE/S/SandBoxChoiceListItem.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class MobileObject;
	class PackageLocation;
	class TESObjectREFR;
	class TESPackage;

	class SandBoxActorPackageData :
		public ActorPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SandBoxActorPackageData };
		static constexpr auto VTABLE{ VTABLE::SandBoxActorPackageData };

		enum class SANDBOX_STATE : std::int32_t
		{
			kSANDBOX_STATE_INIT = 0x0,
			kSANDBOX_STATE_GETTING_UP = 0x1,
			kSANDBOX_STATE_MOVING = 0x2,
			kSANDBOX_STATE_DOINGSTUFF = 0x3,
			kNUM_SANDBOX_STATES = 0x4,
		};

		// override (ActorPackageData)
		virtual ~SandBoxActorPackageData() = default;                         // 00
		virtual void HandleDeletedReference(TESObjectREFR* a_arg1) override;  // 01
		virtual PTYPE GetPackageType() override;                              // 02
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;            // 03
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;            // 04
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;        // 05

		SandBoxActorPackageData* ctor()
		{
			using func_t = SandBoxActorPackageData*(__thiscall*)(SandBoxActorPackageData*);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::ctor };
			return func(this);
		}

		void InitLocation(Actor* apActor, PackageLocation* apPackloc)
		{
			using func_t = decltype(&SandBoxActorPackageData::InitLocation);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::InitLocation };
			func(this, apActor, apPackloc);
		}

		void SetUpNextActivity()
		{
			using func_t = decltype(&SandBoxActorPackageData::SetUpNextActivity);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::SetUpNextActivity };
			func(this);
		}

		bool IsDoneWithIdleAnims(Actor* apActor, bool bfreeIfDone)
		{
			using func_t = decltype(&SandBoxActorPackageData::IsDoneWithIdleAnims);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::IsDoneWithIdleAnims };
			return func(this, apActor, bfreeIfDone);
		}

		bool ShouldPickNewProcedure(Actor* apActor)
		{
			using func_t = decltype(&SandBoxActorPackageData::ShouldPickNewProcedure);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::ShouldPickNewProcedure };
			return func(this, apActor);
		}

		void PickProcedure(Actor* apActor, TESPackage* apOriginalPackage)
		{
			using func_t = decltype(&SandBoxActorPackageData::PickProcedure);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::PickProcedure };
			func(this, apActor, apOriginalPackage);
		}

		static bool EvaluateReferenceforUse(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&SandBoxActorPackageData::EvaluateReferenceforUse);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::EvaluateReferenceforUse };
			return func(apRef, aiFilterData);
		}

		bool UpdateIsActorAtLocation(MobileObject* apMobileObject, float afRadius)
		{
			using func_t = decltype(&SandBoxActorPackageData::UpdateIsActorAtLocation);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::UpdateIsActorAtLocation };
			return func(this, apMobileObject, afRadius);
		}

	private:
		void ReleaseTargetObject()
		{
			using func_t = decltype(&SandBoxActorPackageData::ReleaseTargetObject);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::ReleaseTargetObject };
			func(this);
		}

		void ScanWorld(Actor* apActor)
		{
			using func_t = decltype(&SandBoxActorPackageData::ScanWorld);
			static REL::Relocation<func_t> func{ Offsets::SandBoxActorPackageData::ScanWorld };
			func(this, apActor);
		}

	public:
		// members
		SandBoxActorPackageData::SANDBOX_STATE     eState;                       // 04
		SANDBOX_PROCEDURE                          eProcedure;                   // 08
		float                                      fProcedureDuration;           // 0C
		TESObjectREFR*                             pLocation;                    // 10
		float                                      fLastTimeChanged;             // 14
		float                                      fTotalTime;                   // 18
		std::uint32_t                              iNextTimeToChangeLocations;   // 1C
		BSSimpleArray<SandBoxChoiceListItem, 1024> PotentialTargets;             // 20
		std::uint32_t                              iNextTimeToScanWorld;         // 30
		bool                                       bShouldPickNewProcedure;      // 34
		bool                                       bFood;                        // 35
		bool                                       bChair;                       // 36
		bool                                       bBed;                         // 37
		std::int32_t                               iIdleMarkers;                 // 38
		TESObjectREFR*                             pCurrentTargetObject;         // 3C
		std::uint8_t                               cCurrentTargetMarker;         // 40
		std::uint8_t                               pad41[0x3];                   // 41
		TESObjectREFR*                             pPrevTargetObject;            // 44
		std::uint32_t                              iPrevTargetChangedTimeStamp;  // 48
		std::uint32_t                              iActivityStartDay;            // 4C
		float                                      fActivityStartHour;           // 50
		float                                      fActivityDuration;            // 54
		SANDBOX_ACTIVITY                           eActivity;                    // 58
		std::uint8_t                               cProcedureWeight[6];          // 5C
		std::uint16_t                              pad62;                        // 62
	};
	static_assert(sizeof(SandBoxActorPackageData) == 0x64);
}
