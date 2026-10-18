#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSmallArray.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkpConstraintInstance_CloningMode.h"
#include "RE/H/hkpConstraintInstance_ConstraintPriority.h"

namespace RE
{
	class hkConstraintInternal;
	class hkpConstraintData;
	class hkpConstraintListener;
	class hkpConstraintOwner;
	class hkpEntity;
	class hkpModifierConstraintAtom;

	class hkpConstraintInstance :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintInstance };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintInstance };

		using CloningMode = hkpConstraintInstance_CloningMode;
		using ConstraintPriority = hkpConstraintInstance_ConstraintPriority;

		enum class InstanceType : std::int32_t
		{
			kTYPE_BLEND = 0x0,
			kTYPE_MORPH = 0x1,
			kTYPE_CROSSFADE = 0x2,
			kTYPE_CHAIN = 0x3,
			kTYPE_DEFAULT_SYNC = 0x4,
			kTYPE_DEFAULT_NONSYNC = 0x5,
			kTYPE_DEFAULT_INVALID = 0x6,
		};

		enum class OnDestructionRemapInfo : std::int32_t
		{
			kON_DESTRUCTION_REMAP = 0x0,
			kON_DESTRUCTION_REMOVE = 0x1,
			kON_DESTRUCTION_RESET_REMOVE = 0x2,
		};

		// override (hkReferencedObject)
		virtual ~hkpConstraintInstance() = default;  // 00

		// add
		virtual void entityAddedCallback(hkpEntity* entity);    // 03
		virtual void entityRemovedCallback(hkpEntity* entity);  // 04
		virtual void entityDeletedCallback(hkpEntity* entity);  // 05
		virtual hkpConstraintInstance::InstanceType getType();  // 06

		hkpConstraintInstance* ctor(hkpEntity* entityA, hkpEntity* entityB, hkpConstraintData* data, hkpConstraintInstance_ConstraintPriority priority)
		{
			using func_t = hkpConstraintInstance*(__thiscall*)(hkpConstraintInstance*, hkpEntity*, hkpEntity*, hkpConstraintData*, hkpConstraintInstance_ConstraintPriority);
			static REL::Relocation<func_t> func{ Offsets::hkpConstraintInstance::ctor };
			return func(this, entityA, entityB, data, priority);
		}

	public:
		// members
		hkpConstraintOwner*                                                 m_owner;                 // 08
		hkpConstraintData*                                                  m_data;                  // 0C
		hkpModifierConstraintAtom*                                          m_constraintModifiers;   // 10?
		hkpEntity*                                                          m_entities[2];           // 14?
		hkEnum<hkpConstraintInstance_ConstraintPriority, std::uint8_t>      m_priority;              // 1C?
		hkBool                                                              m_wantRuntime;           // 1D?
		std::uint16_t                                                       pad1E;                   // 1E
		hkEnum<hkpConstraintInstance::OnDestructionRemapInfo, std::uint8_t> m_destructionRemapInfo;  // 20?
		std::uint8_t                                                        pad21[0x3];              // 21
		hkSmallArray<hkpConstraintListener*>                                m_listeners;             // 24?
		hkStringPtr                                                         m_name;                  // 2C?
		std::uint32_t                                                       m_userData;              // 30?
		hkConstraintInternal*                                               m_internal;              // 34?
		std::uint32_t                                                       m_uid;                   // 38?
	};
}
