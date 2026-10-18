#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseProcess.h"
#include "RE/C/CombatTimer.h"
#include "RE/M/ModifierList.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"

namespace RE
{
	class Actor;
	class Animation;
	class BGSListForm;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BipedAnim;
	class CombatGroup;
	class FurnitureMark;
	class GuardActorPackageData;
	class MobileObject;
	class ObjectstoAcquire;
	class TESActorBase;
	class TESBoundObject;
	class TESFaction;
	class TESIdleForm;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESPackage;
	class TESTopic;
	class TESWorldSpace;

	class LowProcess :
		public BaseProcess  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LowProcess };
		static constexpr auto VTABLE{ VTABLE::LowProcess };

		// override (BaseProcess)
		virtual ~LowProcess() = default;                                                                                                                                                                                                                                                               // 00
		virtual void Update(MobileObject* apRef, float fTimeDelta) override;                                                                                                                                                                                                                           // 03
		virtual void Update(MobileObject* apRef) override;                                                                                                                                                                                                                                             // 04
		virtual void UpdateMissedPackages(MobileObject* apRef, bool abActionflag) override;                                                                                                                                                                                                            // 05
		virtual const NiPoint3 GetCurrentPackageLocation(Actor* result) override;                                                                                                                                                                                                                      // 06
		virtual bool CheckforNewPackage(Actor* apActor, bool abFlag) override;                                                                                                                                                                                                                         // 09
		virtual bool IsWandering() override;                                                                                                                                                                                                                                                           // 0A
		virtual std::int32_t GetProcessedDay() override;                                                                                                                                                                                                                                               // 0C
		virtual std::int32_t GetProcessedMonth() override;                                                                                                                                                                                                                                             // 0D
		virtual std::int32_t GetProcessedYear() override;                                                                                                                                                                                                                                              // 0E
		virtual void PerformOneRoundofCombat(Actor* apActor, std::int32_t iaRounds) override;                                                                                                                                                                                                          // 15
		virtual void ProcessSandman(Actor* apActor) override;                                                                                                                                                                                                                                          // 1F
		virtual void ProcessCannibal(Actor* apActor) override;                                                                                                                                                                                                                                         // 20
		virtual bool SetTargetForPackage(Actor* apActor) override;                                                                                                                                                                                                                                     // 23
		virtual TESObjectREFR* SetLocationForPackage(Actor* apActor, bool bSecondLoc) override;                                                                                                                                                                                                        // 24
		virtual TESObjectREFR* GetCurrentDestinationReference(Actor* apActor, bool abInterrupt) override;                                                                                                                                                                                              // 25
		virtual NiPoint3 GetCurrentDestinationCoordinate(Actor* result, bool apActor) override;                                                                                                                                                                                                        // 26
		virtual TESObjectCELL* GetCurrentDestinationCell(Actor* apActor) override;                                                                                                                                                                                                                     // 28
		virtual TESWorldSpace* GetCurrentDestinationWorldSpace(Actor* apActor) override;                                                                                                                                                                                                               // 29
		virtual void ClearDialogTarget() override;                                                                                                                                                                                                                                                     // 2C
		virtual bool CheckAndStartCombatControllerForPackage(Actor* apActor, TESPackage* apPackage, bool abCheckContinueInCombat) override;                                                                                                                                                            // 2D
		virtual void RemoveSpokenToActor(Actor* apActor) override;                                                                                                                                                                                                                                     // 31
		virtual void ProcessRemoveWorn(Actor* apActor, bool bInterateindex) override;                                                                                                                                                                                                                  // 32
		virtual void ModEssentialDownTimer() override;                                                                                                                                                                                                                                                 // 38
		virtual float GetEssentialDownTimer() override;                                                                                                                                                                                                                                                // 39
		virtual void SetEssentialDownTimer(float afvalue) override;                                                                                                                                                                                                                                    // 3A
		virtual void SetCurrentActionComplete(bool __formal) override;                                                                                                                                                                                                                                 // 46
		virtual bool GetCurrentActionComplete() override;                                                                                                                                                                                                                                              // 47
		virtual TESObjectREFR* GetTarget() override;                                                                                                                                                                                                                                                   // 4A
		virtual void SetTarget(TESObjectREFR* __formal) override;                                                                                                                                                                                                                                      // 4B
		virtual std::int32_t GetNumberOfItemsActivated() override;                                                                                                                                                                                                                                     // 56
		virtual void SetNumberOfItemsActivated(std::int32_t aiNumber) override;                                                                                                                                                                                                                        // 57
		virtual bool IsCurrentWeaponThrown() override;                                                                                                                                                                                                                                                 // 6F
		virtual Animation* GetAnimation() override;                                                                                                                                                                                                                                                    // 70
		virtual bool GetLockedLocation() override;                                                                                                                                                                                                                                                     // 71
		virtual void SetLockedLocation(bool bflag) override;                                                                                                                                                                                                                                           // 72
		virtual void SetIsAggressor(bool abflag) override;                                                                                                                                                                                                                                             // 74
		virtual void ForceWeaponDrawnSheathed(bool abDrawn, BipedAnim* apBiped, Animation* apAnim, Actor* apActor) override;                                                                                                                                                                           // 75
		virtual void SetCombatDelayTimer(float afvalue) override;                                                                                                                                                                                                                                      // 7A
		virtual bool CheckCombatDelayTimer() override;                                                                                                                                                                                                                                                 // 7B
		virtual float GetPotentialThreatDamage(Actor* apActor, Actor* apTarget) override;                                                                                                                                                                                                              // 82
		virtual bool IsPackageDone(Actor* apActor) override;                                                                                                                                                                                                                                           // 8A
		virtual void AddToProcedureIndexRunning(MobileObject* apActor, std::int32_t ainumb) override;                                                                                                                                                                                                  // A2
		virtual void ProcessFollow(Actor* apActor, bool abflag, std::int32_t emovemode, bool abpursuit) override;                                                                                                                                                                                      // A6
		virtual void ProcessPursue(Actor* apActor, bool abNewpackage, bool abInterateIndex, std::int32_t emovemode) override;                                                                                                                                                                          // A7
		virtual void ProcessFlee(Actor* apActor) override;                                                                                                                                                                                                                                             // A8
		virtual void ProcessGreet(Actor* apActor, TESTopic* aptopic, bool abForceSub, bool abStop, bool abQue, bool abSayCallBack) override;                                                                                                                                                           // A9
		virtual void SetTalkingtoPC(bool abflag) override;                                                                                                                                                                                                                                             // B8
		virtual bool GetAlert() override;                                                                                                                                                                                                                                                              // C7
		virtual void SetAlert(bool abflag) override;                                                                                                                                                                                                                                                   // C8
		virtual bool EnterCombat(Actor* apActor, Actor* apTarget, bool abCheckForAmbush, bool absendalarm, CombatGroup* apGroup, bool abfleeing, bool abForceFlee, bool abAggressor, char acTeam, bool bforcecombat, bool bIgnoreDefensivePackage, bool abCastSpell, TESPackage* apPackage) override;  // CF
		virtual bool IsAFollower() override;                                                                                                                                                                                                                                                           // D8
		virtual void SetFollower(bool abflag) override;                                                                                                                                                                                                                                                // D9
		virtual std::int32_t GetActorValue(TESActorBase* apActorBase, ActorValue_Index aiWhich, Actor* apActor) override;                                                                                                                                                                              // E6
		virtual float GetActorFloatValue(TESActorBase* apActorBase, ActorValue_Index aiWhich, Actor* apActor) override;                                                                                                                                                                                // E7
		virtual void TempModActorValue(Actor* apActor, ActorValue_Index aiWhich, float afValue) override;                                                                                                                                                                                              // E8
		virtual void TempModActorValue(Actor* apActor, ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                                                                                                                                       // E9
		virtual void DamageModActorValue(Actor* apActor, ActorValue_Index aiWhich, float afValue) override;                                                                                                                                                                                            // EA
		virtual void DamageModActorValue(Actor* apActor, ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                                                                                                                                     // EB
		virtual void ClearObjectFromAcquireList(TESObjectREFR* apRef) override;                                                                                                                                                                                                                        // 11F
		virtual void ClearObjectFromAcquireList(std::uint32_t aID) override;                                                                                                                                                                                                                           // 120
		virtual FurnitureMark* GetFurnitureMarker() override;                                                                                                                                                                                                                                          // 134
		virtual bool IsTargetActivated() override;                                                                                                                                                                                                                                                     // 13A
		virtual void SetTargetActivated(bool abflag) override;                                                                                                                                                                                                                                         // 13B
		virtual void SetLightLevelTimer(float afTimer) override;                                                                                                                                                                                                                                       // 144
		virtual TESObjectREFR* GetGenericLocation() override;                                                                                                                                                                                                                                          // 145
		virtual void SetGenericLocation(TESObjectREFR* apLoc) override;                                                                                                                                                                                                                                // 146
		virtual void SetSecondGenericLocation(TESObjectREFR* apLoc) override;                                                                                                                                                                                                                          // 148
		virtual void ClearCurrentDataforProcess(Actor* apActor) override;                                                                                                                                                                                                                              // 149
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                         // 152
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                                                                                           // 153
		virtual void SaveGame(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                                     // 154
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                           // 155
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags, MobileObject* pmob) override;                                                                                                                                                                                       // 156
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                       // 157
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags, MobileObject* pmob) override;                                                                                                                                                                                       // 158
		virtual void Revert(std::uint32_t aiFlags, MobileObject* pmob) override;                                                                                                                                                                                                                       // 15A
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                                                                                     // 15B
		virtual void ChangePackage(Actor* apActor, TESPackage* apPack) override;                                                                                                                                                                                                                       // 166
		virtual void PackageDone(Actor* apActor, TESPackage* apPack) override;                                                                                                                                                                                                                         // 167
		virtual void SetPackageDoneOnce(bool abflag) override;                                                                                                                                                                                                                                         // 16A
		virtual float GetPermanentModifier(ActorValue_Index aiWhich) override;                                                                                                                                                                                                                         // 17B
		virtual float GetDeathTime() override;                                                                                                                                                                                                                                                         // 1A6
		virtual void SetDeathTime(float afDeathTime) override;                                                                                                                                                                                                                                         // 1A7
		virtual TESIdleForm* GetCurrentProcessIdle() override;                                                                                                                                                                                                                                         // 1C4
		virtual void SetCurrentProcessIdle(TESIdleForm* apIdle) override;                                                                                                                                                                                                                              // 1C5
		virtual float GetActorLightLevel() override;                                                                                                                                                                                                                                                   // 1CB
		virtual void SetActorLightLevel(float aflight) override;                                                                                                                                                                                                                                       // 1CC

		// add
		virtual void ProcessEscort(Actor* apActor);                                                             // 1ED
		virtual void ProcessSleep(Actor* apActor);                                                              // 1EE
		virtual void ProcessEat(Actor* apActor, TESObjectREFR* apLocRef);                                       // 1EF
		virtual void ProcessCombat(Actor* apActor);                                                             // 1F0
		virtual void ProcessAlarm(Actor* apActor);                                                              // 1F1
		virtual bool ProcessActivate(Actor* apActor, bool abInterateindex);                                     // 1F2
		virtual void ProcessAccompany(Actor* apActor);                                                          // 1F3
		virtual void ProcessAcquire(Actor* apActor);                                                            // 1F4
		virtual void ProcessAmbushWait(Actor* apActor);                                                         // 1F5
		virtual bool ProcessUseItemAt(Actor* apActor);                                                          // 1F6
		virtual bool ProcessUseWeapon(Actor* apActor);                                                          // 1F7
		virtual void ProcessChooseSpell(Actor* apActor);                                                        // 1F8
		virtual void ProcessFleeNonCombat(Actor* apActor);                                                      // 1F9
		virtual void ProcessAvoidArea(Actor* apActor);                                                          // 1FA
		virtual void ProcessSandBox(Actor* apActor);                                                            // 1FB
		virtual void ProcessMovementBlocked(Actor* apActor);                                                    // 1FC
		virtual void ProcessGuard(Actor* apActor);                                                              // 1FD
		virtual void ProcessGuardStartTravelToLocation(Actor* apActor, GuardActorPackageData* apData);          // 1FE
		virtual void ProcessPatrol(Actor* apActor);                                                             // 1FF
		virtual void ProcessSummonCreatureDefend(Actor* apActor);                                               // 200
		virtual void ProcessClearMountPosition(Actor* apActor);                                                 // 201
		virtual void ProcessNotify(Actor* apActor);                                                             // 202
		virtual bool CheckIfHasObject(Actor* apActor, std::int32_t ainumb);                                     // 203
		virtual TESObjectREFR* GetTargetForPackage(Actor* apActor, TESPackage* apPackage);                      // 204
		virtual TESObjectREFR* GetLocationForPackage(Actor* apActor, TESPackage* apPackage, bool abSecondLoc);  // 205
		virtual void EvaluateOrderAcquireList(Actor* apActor);                                                  // 206

		bool GetPackageIdleDone()
		{
			using func_t = decltype(&LowProcess::GetPackageIdleDone);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::GetPackageIdleDone };
			return func(this);
		}

		LowProcess* ctor()
		{
			using func_t = LowProcess*(__thiscall*)(LowProcess*);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::ctor };
			return func(this);
		}

		void LowCopy(LowProcess* apProcess)
		{
			using func_t = decltype(&LowProcess::LowCopy);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::LowCopy };
			func(this, apProcess);
		}

		void ResetTarget()
		{
			using func_t = decltype(&LowProcess::ResetTarget);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::ResetTarget };
			func(this);
		}

		void SetPackageIdleDone(bool abFlag)
		{
			using func_t = decltype(&LowProcess::SetPackageIdleDone);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::SetPackageIdleDone };
			func(this, abFlag);
		}

		static bool EvaluateReferenceforAcquire(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&LowProcess::EvaluateReferenceforAcquire);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::EvaluateReferenceforAcquire };
			return func(apRef, aiFilterData);
		}

		static bool EvaluateGenericLocation(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&LowProcess::EvaluateGenericLocation);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::EvaluateGenericLocation };
			return func(apRef, aiFilterData);
		}

		void BuildMulitTargetObjectList(Actor* apActor, TESObjectREFR* pref, PACKAGE_OBJECT_TYPE eType)
		{
			using func_t = decltype(&LowProcess::BuildMulitTargetObjectList);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::BuildMulitTargetObjectList };
			func(this, apActor, pref, eType);
		}

	protected:
		void SetBit(bool bVal, std::uint8_t uMask)
		{
			using func_t = decltype(&LowProcess::SetBit);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::SetBit };
			func(this, bVal, uMask);
		}

		bool GetBit(std::uint8_t uMask) const
		{
			using func_t = decltype(&LowProcess::GetBit);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::GetBit };
			return func(this, uMask);
		}

		float GetTimeDelta(Actor* apActor)
		{
			using func_t = decltype(&LowProcess::GetTimeDelta);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::GetTimeDelta };
			return func(this, apActor);
		}

		bool SetCurrentPackageFromSchedule(Actor* apActor)
		{
			using func_t = decltype(&LowProcess::SetCurrentPackageFromSchedule);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::SetCurrentPackageFromSchedule };
			return func(this, apActor);
		}

		bool ShouldStopCombatControllerToFinishPackage(TESPackage* apPackage, std::int32_t aiIndex)
		{
			using func_t = decltype(&LowProcess::ShouldStopCombatControllerToFinishPackage);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::ShouldStopCombatControllerToFinishPackage };
			return func(this, apPackage, aiIndex);
		}

		bool UpdatePackageTargetForCombat(Actor* apActor, TESPackage* apPackage)
		{
			using func_t = decltype(&LowProcess::UpdatePackageTargetForCombat);
			static REL::Relocation<func_t> func{ Offsets::LowProcess::UpdatePackageTargetForCombat };
			return func(this, apActor, apPackage);
		}

	public:
		// members
		std::uint8_t                    m_uFlags;                     // 30
		std::uint8_t                    pad31[0x3];                   // 31
		TESBoundObject*                 pItemBeingUsed;               // 34
		CombatTimer                     fCombatDelayTimer;            // 38
		TESObjectREFR* const            pTarget;                      // 40
		TESObjectREFR*                  pGenericLocation;             // 44
		TESObjectREFR*                  pGenericSecondLocation;       // 48
		BGSListForm*                    pTargetFormList;              // 4C
		std::int16_t                    sFormListNumb;                // 50
		std::uint16_t                   pad52;                        // 52
		TESObjectREFR*                  pPatrolLocation;              // 54
		std::int32_t                    iNumberItemsActivate;         // 58
		BSSimpleList<ObjectstoAcquire*> ObjectList;                   // 5C
		ObjectstoAcquire*               pAcquireObject;               // 64
		ObjectstoAcquire*               pSavedAcquireObject;          // 68
		BSSimpleList<TESObjectREFR*>    GenericLocationsList;         // 6C
		BSSimpleList<ObjectstoAcquire*> TempObjectList;               // 74
		BSSimpleList<TESObjectREFR*>    TempLocList;                  // 7C
		TESBoundObject*                 pObjecttoAcquire;             // 84
		TESBoundObject*                 pObjectForLocation;           // 88
		PACKAGE_OBJECT_TYPE             eFormType;                    // 8C
		TESFaction*                     pFactiontoAquire;             // 90
		ModifierList                    pDamageModifiers;             // 94
		float                           fEssentialDownTimer;          // A4
		float                           fDeathTime;                   // A8
		float                           fTrackedDamage;               // AC
		bool                            bSkippedTimeStampForPathing;  // B0
		std::uint8_t                    padB1[0x3];                   // B1
	};
	static_assert(sizeof(LowProcess) == 0xB4);
}
