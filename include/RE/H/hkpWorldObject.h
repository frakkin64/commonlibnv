#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkMultiThreadCheck.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkWorldOperation_Result.h"
#include "RE/H/hkpLinkedCollidable.h"
#include "RE/H/hkpProperty.h"

namespace RE
{
	class hkMotionState;
	class hkpShape;
	class hkpWorld;

	class hkpWorldObject :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldObject };
		static constexpr auto VTABLE{ VTABLE::hkpWorldObject };

		enum class BroadPhaseType : std::int32_t
		{
			kBROAD_PHASE_INVALID = 0x0,
			kBROAD_PHASE_ENTITY = 0x1,
			kBROAD_PHASE_PHANTOM = 0x2,
			kBROAD_PHASE_MAX_ID = 0x3,
		};

		// override (hkReferencedObject)
		virtual ~hkpWorldObject() = default;  // 00

		// add
		virtual hkWorldOperation_Result setShape(hkpShape const* shape);  // 03
		virtual hkMotionState* getMotionState();                          // 04

		void copyProperties(hkpWorldObject const* otherObj)
		{
			using func_t = decltype(&hkpWorldObject::copyProperties);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldObject::copyProperties };
			func(this, otherObj);
		}

		hkpWorldObject* ctor(hkFinishLoadedObjectFlag flag)
		{
			using func_t = hkpWorldObject*(__thiscall*)(hkpWorldObject*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldObject::ctor };
			return func(this, flag);
		}

	protected:
		hkpWorldObject* ctor(hkpShape const* shape, hkpWorldObject::BroadPhaseType type)
		{
			using func_t = hkpWorldObject*(__thiscall*)(hkpWorldObject*, hkpShape const*, hkpWorldObject::BroadPhaseType);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldObject::ctor_1 };
			return func(this, shape, type);
		}

	public:
		// members
		hkpWorld*                                      m_world;             // 08
		std::uint32_t                                  m_userData;          // 0C?
		hkpLinkedCollidable                            m_collidable;        // 10?
		hkMultiThreadCheck                             m_multiThreadCheck;  // 6C?
		hkStringPtr                                    m_name;              // 74?
		hkArray<hkpProperty, hkContainerHeapAllocator> m_properties;        // 78?
		hkReferencedObject*                            m_aiData;            // 84?
		void*                                          m_treeData;          // 88?
	};
}
