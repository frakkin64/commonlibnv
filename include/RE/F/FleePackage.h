#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint3.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BaseProcess;
	class PathingAvoidNodeArray;
	class TESObjectCELL;
	class TESObjectREFR;

	class FleePackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FleePackage };
		static constexpr auto VTABLE{ VTABLE::FleePackage };

		// override (TESPackage)
		virtual ~FleePackage() = default;                                         // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;      // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;      // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 19
		virtual std::uint16_t GetSaveSize() override;                             // 53
		virtual void SaveGame_54() override;                                      // 54
		virtual void LoadGame_55() override;                                      // 55
		virtual void InitLoadGame_56() override;                                  // 56

		void SetRefFleeTo(TESObjectREFR* apref)
		{
			using func_t = decltype(&FleePackage::SetRefFleeTo);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::SetRefFleeTo };
			func(this, apref);
		}

		FleePackage* ctor(TESObjectREFR* apActor, TESObjectCELL* pcell, TESObjectREFR* apRef)
		{
			using func_t = FleePackage*(__thiscall*)(FleePackage*, TESObjectREFR*, TESObjectCELL*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::ctor };
			return func(this, apActor, pcell, apRef);
		}

		bool FindTeleportDoor(Actor* apActor, TESObjectREFR* apThreat)
		{
			using func_t = decltype(&FleePackage::FindTeleportDoor);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::FindTeleportDoor };
			return func(this, apActor, apThreat);
		}

		TESObjectREFR* GetClosestAvoidedRef(TESObjectREFR* apFromRef)
		{
			using func_t = decltype(&FleePackage::GetClosestAvoidedRef);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::GetClosestAvoidedRef };
			return func(this, apFromRef);
		}

		void AddAvoidedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&FleePackage::AddAvoidedRef);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::AddAvoidedRef };
			func(this, apRef);
		}

		void RemoveAvoidedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&FleePackage::RemoveAvoidedRef);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::RemoveAvoidedRef };
			func(this, apRef);
		}

		PathingAvoidNodeArray* CreateAvoidNodeArray()
		{
			using func_t = decltype(&FleePackage::CreateAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::CreateAvoidNodeArray };
			return func(this);
		}

		static bool EvaluateReferenceforTeleportDoor(TESObjectREFR* apRef, std::int32_t aiFilterData)
		{
			using func_t = decltype(&FleePackage::EvaluateReferenceforTeleportDoor);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::EvaluateReferenceforTeleportDoor };
			return func(apRef, aiFilterData);
		}

		void UpdateAvoidedRefList(BaseProcess* apProcess)
		{
			using func_t = decltype(&FleePackage::UpdateAvoidedRefList);
			static REL::Relocation<func_t> func{ Offsets::FleePackage::UpdateAvoidedRefList };
			func(this, apProcess);
		}

	public:
		// members
		bool                         bEvaluatePoint;  // 80
		bool                         bCombatMode;     // 81
		std::uint16_t                pad82;           // 82
		NiPoint3                     pFleePoint;      // 84
		float                        fFleeTimer;      // 90
		bool                         bFleeSucceeded;  // 94
		std::uint8_t                 pad95[0x3];      // 95
		BSSimpleList<TESObjectREFR*> pAvoidRefList;   // 98
		TESObjectREFR*               pTeleportDoor;   // A0
		TESObjectREFR*               pRefFleeTo;      // A4
		bool                         bknowstarget;    // A8
		bool                         busehorse;       // A9
		std::uint16_t                padAA;           // AA
	};
	static_assert(sizeof(FleePackage) == 0xAC);
}
