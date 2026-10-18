#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/I/IO_TASK_PRIORITY.h"

namespace RE
{
	class BGSDebris;
	class BGSExplosion;
	class DestructibleObjectData;
	class NiAVObject;
	class NiNode;
	class QueuedFile;
	class TESBoundObject;
	class TESForm;
	class TESObjectREFR;

	class BGSDestructibleObjectForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDestructibleObjectForm };
		static constexpr auto VTABLE{ VTABLE::BGSDestructibleObjectForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSDestructibleObjectForm* ctor()
		{
			using func_t = BGSDestructibleObjectForm*(__thiscall*)(BGSDestructibleObjectForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSDestructibleObjectForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::dtor };
			func(this);
		}

		static bool IsDestructible(TESForm* apForm)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::IsDestructible);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::IsDestructible };
			return func(apForm);
		}

		static BGSDestructibleObjectForm* GetDestructionForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::GetDestructionForm);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::GetDestructionForm };
			return func(apForm);
		}

		std::uint32_t GetMaxHealth(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::GetMaxHealth);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::GetMaxHealth };
			return func(this, apRef);
		}

		void DamageObject(TESObjectREFR* apRef, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::DamageObject);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::DamageObject };
			func(this, apRef, a_arg2, a_arg3);
		}

		std::uint32_t SpawnExplosionsAtBlastNodes(NiAVObject* apRoot, BGSExplosion* apExplosion, std::uint32_t aiStageIndex, TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::SpawnExplosionsAtBlastNodes);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::SpawnExplosionsAtBlastNodes };
			return func(this, apRoot, apExplosion, aiStageIndex, apRef);
		}

		std::uint32_t SpawnDebrisAtDebrisNodes(NiAVObject* apRoot, BGSDebris* apDebris, std::uint32_t aiStageIndex, TESObjectREFR* apRef, std::uint32_t aiNumParticles)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::SpawnDebrisAtDebrisNodes);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::SpawnDebrisAtDebrisNodes };
			return func(this, apRoot, apDebris, aiStageIndex, apRef, aiNumParticles);
		}

		static void UpdateDamageStageNodes(NiAVObject* apRoot, std::uint32_t aiStageIndex)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::UpdateDamageStageNodes);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::UpdateDamageStageNodes };
			func(apRoot, aiStageIndex);
		}

		bool UpdateCurrentDamageStage(TESObjectREFR* apRef, bool abForceUpdate)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::UpdateCurrentDamageStage);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::UpdateCurrentDamageStage };
			return func(this, apRef, abForceUpdate);
		}

		void ApplyTerminalDamage(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::ApplyTerminalDamage);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::ApplyTerminalDamage };
			func(this, apRef);
		}

		void FindModelSwapNodes(NiAVObject* apRoot, BSSimpleArray<NiNode*, 1024>& arNodeArray)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::FindModelSwapNodes);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::FindModelSwapNodes };
			func(this, apRoot, arNodeArray);
		}

		static void UpdateDestructibleObjects()
		{
			using func_t = decltype(&BGSDestructibleObjectForm::UpdateDestructibleObjects);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::UpdateDestructibleObjects };
			func();
		}

		static std::int32_t CalcDestructionStage(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::CalcDestructionStage);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::CalcDestructionStage };
			return func(apRef);
		}

		static bool HideSmallDebris(NiAVObject* ap3D)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::HideSmallDebris);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::HideSmallDebris };
			return func(ap3D);
		}

		void QueueFiles(TESBoundObject* apObject, IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::QueueFiles);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::QueueFiles };
			func(this, apObject, aePriority, apParent);
		}

		static std::uint32_t GetSelfDamage(TESObjectREFR* apRef, float afHealth)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::GetSelfDamage);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::GetSelfDamage };
			return func(apRef, afHealth);
		}

		static void ClearDestruction(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::ClearDestruction);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::ClearDestruction };
			func(apRef);
		}

		void Save()
		{
			using func_t = decltype(&BGSDestructibleObjectForm::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSDestructibleObjectForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSDestructibleObjectForm::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		DestructibleObjectData* pData;  // 04
	};
}
