#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class BSPackedTask;
	class BSPackedTaskQueue;
	class DISMEMBER_DATA;
	class HitData;
	class NiAVObject;
	class NiNode;
	class NiPoint3;
	class TESObjectREFR;
	class TESObjectWEAP;

	class TaskQueueInterface
	{
	public:
		[[nodiscard]] static TaskQueueInterface* GetSingleton() noexcept
		{
			static REL::Relocation<TaskQueueInterface**> singleton{ Offsets::TaskQueueInterface::pInstance };
			return *singleton;
		}

		static TaskQueueInterface* GetInstance()
		{
			using func_t = decltype(&TaskQueueInterface::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::GetInstance };
			return func();
		}

		void ThreadBeginInput()
		{
			using func_t = decltype(&TaskQueueInterface::ThreadBeginInput);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::ThreadBeginInput };
			func(this);
		}

		void ThreadEndInput()
		{
			using func_t = decltype(&TaskQueueInterface::ThreadEndInput);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::ThreadEndInput };
			func(this);
		}

		void ProcessQueue()
		{
			using func_t = decltype(&TaskQueueInterface::ProcessQueue);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::ProcessQueue };
			func(this);
		}

		void ProcessSecondaryQueue()
		{
			using func_t = decltype(&TaskQueueInterface::ProcessSecondaryQueue);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::ProcessSecondaryQueue };
			func(this);
		}

		void QueueScriptFunctionCall(std::uint32_t aeFunc, TESObjectREFR* apRefObject, ...)
		{
			using func_t = void(__cdecl*)(TaskQueueInterface*, std::uint32_t, TESObjectREFR*, ...);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueScriptFunctionCall };
			func(this, aeFunc, apRefObject);
		}

		void QueueMorphControllerUpdate(NiNode* apNode)
		{
			using func_t = decltype(&TaskQueueInterface::QueueMorphControllerUpdate);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueMorphControllerUpdate };
			func(this, apNode);
		}

		void QueueNodeAttach(NiAVObject* apChildNode, NiNode* apNewParetNode, bool abFirstAvailable, bool abUpdateProperties)
		{
			using func_t = decltype(&TaskQueueInterface::QueueNodeAttach);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueNodeAttach };
			func(this, apChildNode, apNewParetNode, abFirstAvailable, abUpdateProperties);
		}

		void QueueBiped3DDetach(NiAVObject* apObject)
		{
			using func_t = decltype(&TaskQueueInterface::QueueBiped3DDetach);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueBiped3DDetach };
			func(this, apObject);
		}

		void QueueSSNRemoveObject(NiAVObject* apObject, std::int32_t aiIndex)
		{
			using func_t = decltype(&TaskQueueInterface::QueueSSNRemoveObject);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueSSNRemoveObject };
			func(this, apObject, aiIndex);
		}

		void QueueObjectUpdate(NiAVObject* apObject)
		{
			using func_t = decltype(&TaskQueueInterface::QueueObjectUpdate);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueObjectUpdate };
			func(this, apObject);
		}

		void QueueActorCreateBlood(Actor* apTarget, HitData* apHitData)
		{
			using func_t = decltype(&TaskQueueInterface::QueueActorCreateBlood);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueActorCreateBlood };
			func(this, apTarget, apHitData);
		}

		void QueueActorHitMe(Actor* apTarget, HitData* apHitData)
		{
			using func_t = decltype(&TaskQueueInterface::QueueActorHitMe);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueActorHitMe };
			func(this, apTarget, apHitData);
		}

		void QueueUpdateDestructibleObject(TESObjectREFR* apObject, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&TaskQueueInterface::QueueUpdateDestructibleObject);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueUpdateDestructibleObject };
			func(this, apObject, a_arg2, a_arg3);
		}

		void QueueActorKill(Actor* apActor, float* afDamage, DISMEMBER_DATA* apDismemberData)
		{
			using func_t = decltype(&TaskQueueInterface::QueueActorKill);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueActorKill };
			func(this, apActor, afDamage, apDismemberData);
		}

		void QueueHavokAdd(NiAVObject* ap3D)
		{
			using func_t = decltype(&TaskQueueInterface::QueueHavokAdd);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueHavokAdd };
			func(this, ap3D);
		}

		void QueueHavokRemove(NiAVObject* ap3D)
		{
			using func_t = decltype(&TaskQueueInterface::QueueHavokRemove);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueHavokRemove };
			func(this, ap3D);
		}

		void QueueActorMoveCharController(Actor* apActor)
		{
			using func_t = decltype(&TaskQueueInterface::QueueActorMoveCharController);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueActorMoveCharController };
			func(this, apActor);
		}

		void QueueHavokMotionChange(NiAVObject* ap3D, std::int32_t aiType)
		{
			using func_t = decltype(&TaskQueueInterface::QueueHavokMotionChange);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueHavokMotionChange };
			func(this, ap3D, aiType);
		}

		void QueueHavokDetach(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TaskQueueInterface::QueueHavokDetach);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueHavokDetach };
			func(this, apRef);
		}

		void QueueHavokAdjustForceAddCount(NiAVObject* ap3D, bool abIncrement, bool abRecurse, bool abForce)
		{
			using func_t = decltype(&TaskQueueInterface::QueueHavokAdjustForceAddCount);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueHavokAdjustForceAddCount };
			func(this, ap3D, abIncrement, abRecurse, abForce);
		}

		void QueueAttachWeapon(Actor* apActor, TESObjectWEAP* apWeapon)
		{
			using func_t = decltype(&TaskQueueInterface::QueueAttachWeapon);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueAttachWeapon };
			func(this, apActor, apWeapon);
		}

		void QueueWaterObjectForAdd(TESObjectREFR* apWaterRef, TESObjectREFR* apObjectRef, float afWaterHeight)
		{
			using func_t = decltype(&TaskQueueInterface::QueueWaterObjectForAdd);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueWaterObjectForAdd };
			func(this, apWaterRef, apObjectRef, afWaterHeight);
		}

		void QueueWaterObjectForRemove(TESObjectREFR* apWaterRef, TESObjectREFR* apObjectRef, float afWaterHeight)
		{
			using func_t = decltype(&TaskQueueInterface::QueueWaterObjectForRemove);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueWaterObjectForRemove };
			func(this, apWaterRef, apObjectRef, afWaterHeight);
		}

		void QueueActorSetPosition(Actor* apActor, NiPoint3 const& aLocation)
		{
			using func_t = decltype(&TaskQueueInterface::QueueActorSetPosition);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueActorSetPosition };
			func(this, apActor, aLocation);
		}

		void QueueAddRipple(float a_arg1, NiPoint3 const& a_arg2)
		{
			using func_t = decltype(&TaskQueueInterface::QueueAddRipple);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueAddRipple };
			func(this, a_arg1, a_arg2);
		}

		static void TaskUnpackFunc(BSPackedTask const& arTask)
		{
			using func_t = decltype(&TaskQueueInterface::TaskUnpackFunc);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::TaskUnpackFunc };
			func(arTask);
		}

	private:
		void QueueIfActive(BSPackedTask const& arTask)
		{
			using func_t = decltype(&TaskQueueInterface::QueueIfActive);
			static REL::Relocation<func_t> func{ Offsets::TaskQueueInterface::QueueIfActive };
			func(this, arTask);
		}

	public:
		// members
		BSPackedTaskQueue* pQueue;             // 00
		BSPackedTaskQueue* pSecondaryQueue;    // 04
		BSPackedTaskQueue* pActiveQueue;       // 08
		std::uint32_t      iProcessingThread;  // 0C
	};
}
