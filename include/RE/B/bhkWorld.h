#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/bhkSerializable.h"
#include "RE/C/ColorPair.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpMotion_MotionType.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class ahkpWorld;
	class bhkAction;
	class bhkEntityListener;
	class bhkTrapListener;
	class bhkWaterListener;
	class bhkWorldObject;
	class hkVisualDebugger;
	class hkpAction;
	class hkpConstraintInstance;
	class hkpContactListener;
	class hkpEntity;
	class hkpPhantom;
	class hkpWorld;

	class alignas(16) bhkWorld :
		public bhkSerializable  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWorld };
		static constexpr auto VTABLE{ VTABLE::bhkWorld };

		// add
		virtual void Unk_31();  // 31
		virtual void Unk_32();  // 32
		virtual void Unk_33();  // 33
		virtual void Unk_34();  // 34
		virtual void Unk_35();  // 35
		virtual void Unk_36();  // 36

		void SetEnabled(bool abTF)
		{
			using func_t = decltype(&bhkWorld::SetEnabled);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::SetEnabled };
			func(this, abTF);
		}

		static bool IsHavokDebug()
		{
			using func_t = decltype(&bhkWorld::IsHavokDebug);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::IsHavokDebug };
			return func();
		}

		bool QDebugDisplay() const
		{
			using func_t = decltype(&bhkWorld::QDebugDisplay);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::QDebugDisplay };
			return func(this);
		}

		bool Remove(bhkSerializable* apObj)
		{
			using func_t = decltype(&bhkWorld::Remove);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::Remove };
			return func(this, apObj);
		}

		ahkpWorld* operator_call() const
		{
			using func_t = decltype(&bhkWorld::operator_call);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::operator_call };
			return func(this);
		}

		static void* operator_new(std::uint32_t blocksize)
		{
			using func_t = decltype(&bhkWorld::operator_new);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::operator_new };
			return func(blocksize);
		}

		void UnMarkForWrite()
		{
			using func_t = decltype(&bhkWorld::UnMarkForWrite);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::UnMarkForWrite };
			func(this);
		}

		void AddEntityListener(bhkEntityListener* apListener)
		{
			using func_t = decltype(&bhkWorld::AddEntityListener);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::AddEntityListener };
			func(this, apListener);
		}

		void AddContactListener(hkpContactListener* apListener)
		{
			using func_t = decltype(&bhkWorld::AddContactListener);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::AddContactListener };
			func(this, apListener);
		}

		void AddTrapListener(bhkTrapListener* apListener)
		{
			using func_t = decltype(&bhkWorld::AddTrapListener);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::AddTrapListener };
			func(this, apListener);
		}

		void AddAcousticSpaceListener(bhkEntityListener* apListener)
		{
			using func_t = decltype(&bhkWorld::AddAcousticSpaceListener);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::AddAcousticSpaceListener };
			func(this, apListener);
		}

		bool Add(bhkSerializable* apObj)
		{
			using func_t = decltype(&bhkWorld::Add);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::Add };
			return func(this, apObj);
		}

		static bhkWorld* Getbhk(hkpWorld const* apWorld)
		{
			using func_t = decltype(&bhkWorld::Getbhk);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::Getbhk };
			return func(apWorld);
		}

		static bool QPickCountOverride()
		{
			using func_t = decltype(&bhkWorld::QPickCountOverride);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::QPickCountOverride };
			return func();
		}

		static void SetPickCountOverride(bool abVal)
		{
			using func_t = decltype(&bhkWorld::SetPickCountOverride);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::SetPickCountOverride };
			func(abVal);
		}

		void StartBatchingAdds()
		{
			using func_t = decltype(&bhkWorld::StartBatchingAdds);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::StartBatchingAdds };
			func(this);
		}

		static void InitSystem()
		{
			using func_t = decltype(&bhkWorld::InitSystem);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::InitSystem };
			func();
		}

		void SetDebugObjectColor(bhkWorldObject const* apObject, std::uint32_t aiColor)
		{
			using func_t = decltype(&bhkWorld::SetDebugObjectColor);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::SetDebugObjectColor };
			func(this, apObject, aiColor);
		}

		static bool RemoveObjects(NiAVObject* apObject, bool abRecurse, bool abForce)
		{
			using func_t = decltype(&bhkWorld::RemoveObjects);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::RemoveObjects };
			return func(apObject, abRecurse, abForce);
		}

		static bool UpdatePosition(NiAVObject* apObject, bool abRecurse, bool abForce)
		{
			using func_t = decltype(&bhkWorld::UpdatePosition);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::UpdatePosition };
			return func(apObject, abRecurse, abForce);
		}

		static bool EnableCollision(NiAVObject* apObject, bool abEnable, bool abRecurse, bool abForce)
		{
			using func_t = decltype(&bhkWorld::EnableCollision);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::EnableCollision };
			return func(apObject, abEnable, abRecurse, abForce);
		}

		static bool Activate(NiAVObject* apObject, bool abActivate, bool abRecurse, bool abForce)
		{
			using func_t = decltype(&bhkWorld::Activate);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::Activate };
			return func(apObject, abActivate, abRecurse, abForce);
		}

		static bool SetMotion(NiAVObject* apObject, hkpMotion_MotionType aeType, bool abRecurse, bool abForce, bool abAllowActivate)
		{
			using func_t = decltype(&bhkWorld::SetMotion);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::SetMotion };
			return func(apObject, aeType, abRecurse, abForce, abAllowActivate);
		}

		static bool SetGroup(NiAVObject* apObject, std::uint32_t aiGroup, bool abRecurse, bool abForce)
		{
			using func_t = decltype(&bhkWorld::SetGroup);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::SetGroup };
			return func(apObject, aiGroup, abRecurse, abForce);
		}

		void SetVisualDebugger(bool abTF)
		{
			using func_t = decltype(&bhkWorld::SetVisualDebugger);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::SetVisualDebugger };
			func(this, abTF);
		}

		void StopBatchingAdds(bool abAllowPartial)
		{
			using func_t = decltype(&bhkWorld::StopBatchingAdds);
			static REL::Relocation<func_t> func{ Offsets::bhkWorld::StopBatchingAdds };
			func(this, abAllowPartial);
		}

	public:
		// members
		hkVisualDebugger*                                     pDebugger;                      // 10
		bool                                                  bAdded;                         // 14
		bool                                                  bEnabled;                       // 15
		bool                                                  bDebugDisplay;                  // 16
		std::uint8_t                                          pad17;                          // 17
		std::uint32_t                                         iBatchAdd;                      // 18
		std::uint32_t                                         iBatchRemove;                   // 1C
		bhkTrapListener*                                      pTrapListener;                  // 20
		bhkWaterListener*                                     pWaterListener;                 // 24
		bhkEntityListener*                                    pAcousticSpaceListener;         // 28
		hkpEntity**                                           pEntityBatch;                   // 2C
		std::uint32_t                                         iEntityBatchCount;              // 30
		hkpPhantom**                                          pPhantomBatch;                  // 34
		std::uint32_t                                         iPhantomBatchCount;             // 38
		hkpAction**                                           pActionBatch;                   // 3C
		std::uint32_t                                         iActionBatchCount;              // 40
		hkpConstraintInstance**                               pConstraintInstanceBatch;       // 44
		std::uint32_t                                         iConstraintInstanceBatchCount;  // 48
		hkpEntity**                                           pEntityRemoveBatch;             // 4C
		std::uint32_t                                         iEntityRemoveBatchCount;        // 50
		std::uint8_t                                          pad54[0xC];                     // 54
		hkVector4                                             Origin;                         // 60
		hkArray<bhkEntityListener*, hkContainerHeapAllocator> pEntityListenerA;               // 70
		hkArray<ColorPair, hkContainerHeapAllocator>          DebugColorA;                    // 7C
		float                                                 fOriginalTau;                   // 88
		float                                                 fOriginalDamping;               // 8C
		BSSimpleList<NiPointer<bhkAction>>                    ActionList;                     // 90
		std::uint8_t                                          pad98[0x8];                     // 98
	};
	static_assert(sizeof(bhkWorld) == 0xA0);
}
