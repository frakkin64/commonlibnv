#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class bhkEntity;
	class bhkRigidBody;
	class hkpEntity;
	class hkpRootCdPoint;

	class bhkEntityListener :
		public hkpEntityListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkEntityListener };
		static constexpr auto VTABLE{ VTABLE::bhkEntityListener };

		// override (hkpEntityListener)
		virtual ~bhkEntityListener() = default;                          // 00
		virtual void entityAddedCallback(hkpEntity* entity) override;    // 01
		virtual void entityRemovedCallback(hkpEntity* entity) override;  // 02
		virtual void entityDeletedCallback(hkpEntity* entity) override;  // 05

		// add
		virtual void Update(float a_arg1);                                   // 06
		virtual bool contactPointAddedCallback(hkpRootCdPoint& __formal);    // 07
		virtual bool contactPointRemovedCallback(hkpRootCdPoint& __formal);  // 08
		virtual bhkRigidBody* GetRB(hkpEntity* apEntity);                    // 09

		bhkEntityListener* ctor(std::uint32_t aiFlag)
		{
			using func_t = bhkEntityListener*(__thiscall*)(bhkEntityListener*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::bhkEntityListener::ctor };
			return func(this, aiFlag);
		}

	public:
		// members
		std::uint32_t                      iFlag;       // 04
		bool                               bEnabled;    // 08
		std::uint8_t                       pad09[0x3];  // 09
		BSSimpleList<NiPointer<bhkEntity>> Entities;    // 0C
	};
	static_assert(sizeof(bhkEntityListener) == 0x14);
}
