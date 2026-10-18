#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpUnaryAction.h"

namespace RE
{
	class hkStepInfo;
	class hkpEntity;
	class hkpRigidBody;

	class alignas(16) hkpMouseSpringAction :
		public hkpUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMouseSpringAction };
		static constexpr auto VTABLE{ VTABLE::hkpMouseSpringAction };

		// override (hkpUnaryAction)
		virtual ~hkpMouseSpringAction() = default;                       // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;     // 03
		virtual void entityRemovedCallback(hkpEntity* a_arg1) override;  // 06

		hkpMouseSpringAction* ctor(hkpRigidBody* rb)
		{
			using func_t = hkpMouseSpringAction*(__thiscall*)(hkpMouseSpringAction*, hkpRigidBody*);
			static REL::Relocation<func_t> func{ Offsets::hkpMouseSpringAction::ctor };
			return func(this, rb);
		}

		hkpMouseSpringAction* ctor(hkVector4 const& positionInRbLocal, hkVector4 const& mousePositionInWorld, float springDamping, float springElasticity, float a_arg5, hkpRigidBody* objectDamping, hkArray<void*, hkContainerHeapAllocator> const* rb)
		{
			using func_t = hkpMouseSpringAction*(__thiscall*)(hkpMouseSpringAction*, hkVector4 const&, hkVector4 const&, float, float, float, hkpRigidBody*, hkArray<void*, hkContainerHeapAllocator> const*);
			static REL::Relocation<func_t> func{ Offsets::hkpMouseSpringAction::ctor_1 };
			return func(this, positionInRbLocal, mousePositionInWorld, springDamping, springElasticity, a_arg5, objectDamping, rb);
		}

	public:
		// members
		std::uint32_t                            pad1C;                   // 1C
		hkVector4                                m_positionInRbLocal;     // 20?
		hkVector4                                m_mousePositionInWorld;  // 30?
		float                                    m_springDamping;         // 40?
		float                                    m_springElasticity;      // 44?
		float                                    m_maxRelativeForce;      // 48?
		float                                    m_objectDamping;         // 4C?
		std::uint32_t                            m_shapeKey;              // 50?
		hkArray<void*, hkContainerHeapAllocator> m_applyCallbacks;        // 54?
	};
}
