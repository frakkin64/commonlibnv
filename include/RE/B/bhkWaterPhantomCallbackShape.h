#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpPhantomCallbackShape.h"

namespace RE
{
	class hkpCdBody;
	class hkpCollidable;
	class hkpCollisionInput;
	class hkpRayHitCollector;
	class hkpShapeRayCastInput;

	class bhkWaterPhantomCallbackShape :
		public hkpPhantomCallbackShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWaterPhantomCallbackShape };
		static constexpr auto VTABLE{ VTABLE::bhkWaterPhantomCallbackShape };

		// override (hkpPhantomCallbackShape)
		virtual ~bhkWaterPhantomCallbackShape() = default;                                                                                   // 00
		virtual void phantomEnterEvent(const hkpCollidable* a_arg1, const hkpCollidable* a_arg2, const hkpCollisionInput* a_arg3) override;  // 0B
		virtual void phantomLeaveEvent(const hkpCollidable* a_arg1, const hkpCollidable* a_arg2) override;                                   // 0C

		// add
		virtual void castRayWithCollector(const hkpShapeRayCastInput* a_arg1, const hkpCdBody* a_arg2, hkpRayHitCollector* a_arg3) const;  // 0D

		bhkWaterPhantomCallbackShape* ctor()
		{
			using func_t = bhkWaterPhantomCallbackShape*(__thiscall*)(bhkWaterPhantomCallbackShape*);
			static REL::Relocation<func_t> func{ Offsets::bhkWaterPhantomCallbackShape::ctor };
			return func(this);
		}
	};
}
