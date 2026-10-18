#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/P/PACKAGE_DATA.h"
#include "RE/P/PACKAGE_OBJECT_TYPE.h"
#include "RE/P/PACKAGE_PROCEDURE_TYPE.h"
#include "RE/P/PTYPE.h"
#include "RE/P/PackageEventAction.h"
#include "RE/P/PackageSchedule.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class Actor;
	class BGSIdleCollection;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class MobileObject;
	class PackageLocation;
	class PackageTarget;
	class TESCombatStyle;
	class TESEscortPackageData;
	class TESFile;
	class TESFollowPackageData;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESPackageData;
	class TESPatrolPackageData;
	class TESTopic;
	class TESUseWeaponPackageData;
	class TESWorldSpace;

	class TESPackage :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESPackage };
		static constexpr auto VTABLE{ VTABLE::TESPackage };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kPACK_ID };

		// override (TESForm)
		virtual ~TESPackage() = default;                                                      // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool ProcessBeforeSave() override;                                            // 06
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;              // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                    // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                  // 1D
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;            // 21
		virtual void InitItem() override;                                                     // 22
		virtual std::uint32_t GetRefCount() override;                                         // 41
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43
		virtual char* GetObjectTypeName() override;                                           // 4B

		// add
		virtual bool IsReadyToRun(MobileObject* apActor);                                                                                                   // 4E
		virtual bool IsActorAtLocation(MobileObject* apMobileObject, bool bignoredistance, float a_arg3, bool a_arg4);                                      // 4F
		virtual bool IsActorAtSecondLocation(MobileObject* apMobileObject, MobileObject* apPackageowner, bool bignoredistance, float a_arg4, bool a_arg5);  // 50
		virtual bool IsActorAtRefTarget(MobileObject* apMobileObject, std::int32_t aiExtraRadius);                                                          // 51
		virtual bool IsTargetAtLocation(MobileObject* apActor, std::int32_t aiExtraRadius);                                                                 // 52
		virtual std::uint16_t GetSaveSize();                                                                                                                // 53
		virtual void SaveGame_54();                                                                                                                         // 54
		virtual void LoadGame_55();                                                                                                                         // 55
		virtual void InitLoadGame_56();                                                                                                                     // 56
		virtual bool IsPackageOwner(MobileObject* apOwner);                                                                                                 // 57

		PTYPE GetPackType() const
		{
			using func_t = decltype(&TESPackage::GetPackType);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackType };
			return func(this);
		}

		PackageSchedule* GetPackageSchedule()
		{
			using func_t = decltype(&TESPackage::GetPackageSchedule);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageSchedule };
			return func(this);
		}

		bool GetForceUnequipWeapon()
		{
			using func_t = decltype(&TESPackage::GetForceUnequipWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetForceUnequipWeapon };
			return func(this);
		}

		PackageLocation* GetPackageLocation()
		{
			using func_t = decltype(&TESPackage::GetPackageLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageLocation };
			return func(this);
		}

		static TESPackage* CreatePackage(PTYPE aPackageType)
		{
			using func_t = decltype(&TESPackage::CreatePackage);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::CreatePackage };
			return func(aPackageType);
		}

		bool GetOncePerDay()
		{
			using func_t = decltype(&TESPackage::GetOncePerDay);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetOncePerDay };
			return func(this);
		}

		void SetPackType(PTYPE aeType)
		{
			using func_t = decltype(&TESPackage::SetPackType);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetPackType };
			func(this, aeType);
		}

		void SetDrawWeaponFlag(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetDrawWeaponFlag);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetDrawWeaponFlag };
			func(this, abVal);
		}

		PackageTarget* GetPackageTarget()
		{
			using func_t = decltype(&TESPackage::GetPackageTarget);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageTarget };
			return func(this);
		}

		void SetPackageLocation(PackageLocation* apPackLoc)
		{
			using func_t = decltype(&TESPackage::SetPackageLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetPackageLocation };
			func(this, apPackLoc);
		}

		void SetPackageSecondLocation(PackageLocation* apPackLoc)
		{
			using func_t = decltype(&TESPackage::SetPackageSecondLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetPackageSecondLocation };
			func(this, apPackLoc);
		}

		bool GetDialogueNoHeadtrack()
		{
			using func_t = decltype(&TESPackage::GetDialogueNoHeadtrack);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetDialogueNoHeadtrack };
			return func(this);
		}

		bool GetAcquireRadius(MobileObject* apActor, float& afResult)
		{
			using func_t = decltype(&TESPackage::GetAcquireRadius);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetAcquireRadius };
			return func(this, apActor, afResult);
		}

		std::int32_t GetInitialTargetCount()
		{
			using func_t = decltype(&TESPackage::GetInitialTargetCount);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetInitialTargetCount };
			return func(this);
		}

		void SetDialogueTopic(TESTopic* apTopic)
		{
			using func_t = decltype(&TESPackage::SetDialogueTopic);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetDialogueTopic };
			func(this, apTopic);
		}

		void SetDialogueDoNotControlTarget(bool abControl)
		{
			using func_t = decltype(&TESPackage::SetDialogueDoNotControlTarget);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetDialogueDoNotControlTarget };
			func(this, abControl);
		}

		TESEscortPackageData* GetOrCreateEscortPackageData()
		{
			using func_t = decltype(&TESPackage::GetOrCreateEscortPackageData);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetOrCreateEscortPackageData };
			return func(this);
		}

		PackageLocation* GetPackageSecondLocation()
		{
			using func_t = decltype(&TESPackage::GetPackageSecondLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageSecondLocation };
			return func(this);
		}

		PackageLocation* GetPackageSearchLocation()
		{
			using func_t = decltype(&TESPackage::GetPackageSearchLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageSearchLocation };
			return func(this);
		}

		void SetPackageTarget(PackageTarget* apPackTarg)
		{
			using func_t = decltype(&TESPackage::SetPackageTarget);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetPackageTarget };
			func(this, apPackTarg);
		}

		void SetPackageSchedule(PackageSchedule* apPackSched)
		{
			using func_t = decltype(&TESPackage::SetPackageSchedule);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetPackageSchedule };
			func(this, apPackSched);
		}

		void SetPackageConditions(TESCondition* apPackCond)
		{
			using func_t = decltype(&TESPackage::SetPackageConditions);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetPackageConditions };
			func(this, apPackCond);
		}

		void SetCombatStyle(TESCombatStyle* apStyle)
		{
			using func_t = decltype(&TESPackage::SetCombatStyle);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetCombatStyle };
			func(this, apStyle);
		}

		bool GetIsCreated()
		{
			using func_t = decltype(&TESPackage::GetIsCreated);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetIsCreated };
			return func(this);
		}

		void SetIsCreated(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetIsCreated);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetIsCreated };
			func(this, abVal);
		}

		void SetNeverRun(TESObjectREFR* pref, bool abVal)
		{
			using func_t = decltype(&TESPackage::SetNeverRun);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetNeverRun };
			func(this, pref, abVal);
		}

		void SetWaiting(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetWaiting);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetWaiting };
			func(this, abVal);
		}

		TESWorldSpace* GetSecondLocationWorld(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetSecondLocationWorld);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSecondLocationWorld };
			return func(this, apActor);
		}

		TESObjectCELL* GetSecondLocationCell(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetSecondLocationCell);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSecondLocationCell };
			return func(this, apActor);
		}

		const NiPoint3 GetSecondLocationCoord(MobileObject* result)
		{
			using func_t = decltype(&TESPackage::GetSecondLocationCoord);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSecondLocationCoord };
			return func(this, result);
		}

		TESObjectREFR* GetSecondLocationReference(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetSecondLocationReference);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSecondLocationReference };
			return func(this, apActor);
		}

		TESObjectCELL* GetSearchLocationCell(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetSearchLocationCell);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSearchLocationCell };
			return func(this, apActor);
		}

		const NiPoint3 GetSearchLocationCoord(MobileObject* result)
		{
			using func_t = decltype(&TESPackage::GetSearchLocationCoord);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSearchLocationCoord };
			return func(this, result);
		}

		std::uint32_t GetSearchLocationRadius(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetSearchLocationRadius);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSearchLocationRadius };
			return func(this, apActor);
		}

		TESUseWeaponPackageData const* GetUseWeaponPackageData() const
		{
			using func_t = decltype(&TESPackage::GetUseWeaponPackageData);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetUseWeaponPackageData };
			return func(this);
		}

		TESPatrolPackageData const* GetPatrolPackageData() const
		{
			using func_t = decltype(&TESPackage::GetPatrolPackageData);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPatrolPackageData };
			return func(this);
		}

		TESFollowPackageData const* GetFollowPackageData() const
		{
			using func_t = decltype(&TESPackage::GetFollowPackageData);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetFollowPackageData };
			return func(this);
		}

		TESObjectREFR* ComputeInitialTarget(MobileObject* apMob)
		{
			using func_t = decltype(&TESPackage::ComputeInitialTarget);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::ComputeInitialTarget };
			return func(this, apMob);
		}

		TESWorldSpace* GetLocationWorld(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetLocationWorld);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetLocationWorld };
			return func(this, apActor);
		}

		TESObjectCELL* GetLocationCell(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetLocationCell);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetLocationCell };
			return func(this, apActor);
		}

		const NiPoint3 GetLocationCoord(MobileObject* result)
		{
			using func_t = decltype(&TESPackage::GetLocationCoord);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetLocationCoord };
			return func(this, result);
		}

		TESObjectREFR* GetLocationReference(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetLocationReference);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetLocationReference };
			return func(this, apActor);
		}

		std::uint32_t GetLocationRadius(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::GetLocationRadius);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetLocationRadius };
			return func(this, apActor);
		}

		bool IsTargetAtSecondLocation(MobileObject* apActor, float aiRadius)
		{
			using func_t = decltype(&TESPackage::IsTargetAtSecondLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::IsTargetAtSecondLocation };
			return func(this, apActor, aiRadius);
		}

		void CalculateProcedureType(TESObjectREFR* apLinkedRef)
		{
			using func_t = decltype(&TESPackage::CalculateProcedureType);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::CalculateProcedureType };
			func(this, apLinkedRef);
		}

		TESObjectREFR* GetEscortTargetForPackage(Actor* apActor, bool abSkipExistingFollowers)
		{
			using func_t = decltype(&TESPackage::GetEscortTargetForPackage);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetEscortTargetForPackage };
			return func(this, apActor, abSkipExistingFollowers);
		}

		std::int32_t GetEscortFollowDistance()
		{
			using func_t = decltype(&TESPackage::GetEscortFollowDistance);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetEscortFollowDistance };
			return func(this);
		}

		static bool EvaluateEscortReference(TESObjectREFR* apRef, std::int32_t aiEnumData)
		{
			using func_t = decltype(&TESPackage::EvaluateEscortReference);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::EvaluateEscortReference };
			return func(apRef, aiEnumData);
		}

		bool IsInterruptPackage()
		{
			using func_t = decltype(&TESPackage::IsInterruptPackage);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::IsInterruptPackage };
			return func(this);
		}

		float GetPackageRadiusActorToLocation(MobileObject* apMobileObject, bool abSecondLoc)
		{
			using func_t = decltype(&TESPackage::GetPackageRadiusActorToLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageRadiusActorToLocation };
			return func(this, apMobileObject, abSecondLoc);
		}

		float GetPackageRadiusActorToRefTarget(MobileObject* apMobileObject, bool abSecondLoc)
		{
			using func_t = decltype(&TESPackage::GetPackageRadiusActorToRefTarget);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageRadiusActorToRefTarget };
			return func(this, apMobileObject, abSecondLoc);
		}

		std::int32_t ComparePackageSchedule(PackageSchedule* apSchedule)
		{
			using func_t = decltype(&TESPackage::ComparePackageSchedule);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::ComparePackageSchedule };
			return func(this, apSchedule);
		}

		bool GetShouldReserveTarget() const
		{
			using func_t = decltype(&TESPackage::GetShouldReserveTarget);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetShouldReserveTarget };
			return func(this);
		}

		bool IsitDayofTheWeek(bool bTestPreviousDay)
		{
			using func_t = decltype(&TESPackage::IsitDayofTheWeek);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::IsitDayofTheWeek };
			return func(this, bTestPreviousDay);
		}

		bool IsTargetAnActor(MobileObject* apActor)
		{
			using func_t = decltype(&TESPackage::IsTargetAnActor);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::IsTargetAnActor };
			return func(this, apActor);
		}

		static PACKAGE_OBJECT_TYPE GetObjectTypeFromForm(TESForm* apForm)
		{
			using func_t = decltype(&TESPackage::GetObjectTypeFromForm);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetObjectTypeFromForm };
			return func(apForm);
		}

		static bool FormMatchesPackageObjectType(TESForm* apForm, PACKAGE_OBJECT_TYPE aeType)
		{
			using func_t = decltype(&TESPackage::FormMatchesPackageObjectType);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::FormMatchesPackageObjectType };
			return func(apForm, aeType);
		}

		void CopyAllFlags(TESPackage* apCopy)
		{
			using func_t = decltype(&TESPackage::CopyAllFlags);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::CopyAllFlags };
			func(this, apCopy);
		}

		bool GetSelectiveFalloutBehavior()
		{
			using func_t = decltype(&TESPackage::GetSelectiveFalloutBehavior);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSelectiveFalloutBehavior };
			return func(this);
		}

		bool GetDefensive()
		{
			using func_t = decltype(&TESPackage::GetDefensive);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetDefensive };
			return func(this);
		}

		bool GetDrawWeaponFlag()
		{
			using func_t = decltype(&TESPackage::GetDrawWeaponFlag);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetDrawWeaponFlag };
			return func(this);
		}

		bool GetAlwaysRun()
		{
			using func_t = decltype(&TESPackage::GetAlwaysRun);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetAlwaysRun };
			return func(this);
		}

		void SetForceUnequipWeapon(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetForceUnequipWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetForceUnequipWeapon };
			func(this, abVal);
		}

		bool GetContinueDuringCombat()
		{
			using func_t = decltype(&TESPackage::GetContinueDuringCombat);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetContinueDuringCombat };
			return func(this);
		}

		void SetContinueDuringCombat(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetContinueDuringCombat);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetContinueDuringCombat };
			func(this, abVal);
		}

		bool GetCombatAlert()
		{
			using func_t = decltype(&TESPackage::GetCombatAlert);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetCombatAlert };
			return func(this);
		}

		bool GetFOEnableIdleChatterBehavior()
		{
			using func_t = decltype(&TESPackage::GetFOEnableIdleChatterBehavior);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetFOEnableIdleChatterBehavior };
			return func(this);
		}

		bool GetFOEnableAvoidRadiationBehavior()
		{
			using func_t = decltype(&TESPackage::GetFOEnableAvoidRadiationBehavior);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetFOEnableAvoidRadiationBehavior };
			return func(this);
		}

		bool GetMustComplete()
		{
			using func_t = decltype(&TESPackage::GetMustComplete);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetMustComplete };
			return func(this);
		}

		void SetMustReachLocation(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetMustReachLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetMustReachLocation };
			func(this, abVal);
		}

		void SetMustComplete(bool abVal)
		{
			using func_t = decltype(&TESPackage::SetMustComplete);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetMustComplete };
			func(this, abVal);
		}

		TESCondition* GetPackageConditions()
		{
			using func_t = decltype(&TESPackage::GetPackageConditions);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPackageConditions };
			return func(this);
		}

		bool GetServicesEnabled()
		{
			using func_t = decltype(&TESPackage::GetServicesEnabled);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetServicesEnabled };
			return func(this);
		}

		bool GetPCContinue()
		{
			using func_t = decltype(&TESPackage::GetPCContinue);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPCContinue };
			return func(this);
		}

		bool GetWaiting()
		{
			using func_t = decltype(&TESPackage::GetWaiting);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetWaiting };
			return func(this);
		}

		bool GetMustReachLocation()
		{
			using func_t = decltype(&TESPackage::GetMustReachLocation);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetMustReachLocation };
			return func(this);
		}

		PACKAGE_PROCEDURE_TYPE GetProcedureType() const
		{
			using func_t = decltype(&TESPackage::GetProcedureType);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetProcedureType };
			return func(this);
		}

		bool GetPretendInCombat()
		{
			using func_t = decltype(&TESPackage::GetPretendInCombat);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetPretendInCombat };
			return func(this);
		}

		void SetProcedureType(PACKAGE_PROCEDURE_TYPE aetype)
		{
			using func_t = decltype(&TESPackage::SetProcedureType);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SetProcedureType };
			func(this, aetype);
		}

		bool SandboxGetAllowEating()
		{
			using func_t = decltype(&TESPackage::SandboxGetAllowEating);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::SandboxGetAllowEating };
			return func(this);
		}

	protected:
		TESPackage* ctor()
		{
			using func_t = TESPackage*(__thiscall*)(TESPackage*);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::ctor };
			return func(this);
		}

		std::uint32_t GetSecondLocationRadius()
		{
			using func_t = decltype(&TESPackage::GetSecondLocationRadius);
			static REL::Relocation<func_t> func{ Offsets::TESPackage::GetSecondLocationRadius };
			return func(this);
		}

	public:
		// members
		PACKAGE_PROCEDURE_TYPE ePROCEDURE_TYPE;  // 18
		PACKAGE_DATA           PackData;         // 1C
		TESPackageData*        pPackData;        // 28
		PackageLocation*       pPackLoc;         // 2C
		PackageTarget*         pPackTarg;        // 30
		BGSIdleCollection*     pIdleCollection;  // 34
		PackageSchedule        packSched;        // 38
		TESCondition           packConditions;   // 40
		TESCombatStyle*        pCombatStyle;     // 48
		PackageEventAction     OnBegin;          // 4C
		PackageEventAction     OnEnd;            // 5C
		PackageEventAction     OnChange;         // 6C
		std::uint32_t          uiRefCount;       // 7C
	};
	static_assert(sizeof(TESPackage) == 0x80);
}
