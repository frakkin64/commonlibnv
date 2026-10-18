#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpEntity;

	class __declspec(novtable) hkpEntityListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpEntityListener };
		static constexpr auto VTABLE{ VTABLE::hkpEntityListener };

		// add
		virtual ~hkpEntityListener() = default;                       // 00
		virtual void entityAddedCallback(hkpEntity* entity);          // 01
		virtual void entityRemovedCallback(hkpEntity* entity);        // 02
		virtual void entityShapeSetCallback(hkpEntity* entity);       // 03
		virtual void entitySetMotionTypeCallback(hkpEntity* entity);  // 04
		virtual void entityDeletedCallback(hkpEntity* entity);        // 05

		hkpEntityListener* ctor()
		{
			using func_t = hkpEntityListener*(__thiscall*)(hkpEntityListener*);
			static REL::Relocation<func_t> func{ Offsets::hkpEntityListener::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(hkpEntityListener) == 0x4);
}
