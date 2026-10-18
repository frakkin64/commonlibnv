#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpPhantomCallbackShape.h"

namespace RE
{
	class hkpCollidable;
	class hkpCollisionInput;

	class bhkAcousticSpacePhantomCallbackShape :
		public hkpPhantomCallbackShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkAcousticSpacePhantomCallbackShape };
		static constexpr auto VTABLE{ VTABLE::bhkAcousticSpacePhantomCallbackShape };

		// override (hkpPhantomCallbackShape)
		virtual ~bhkAcousticSpacePhantomCallbackShape() = default;                                                                           // 00
		virtual void phantomEnterEvent(const hkpCollidable* a_arg1, const hkpCollidable* a_arg2, const hkpCollisionInput* a_arg3) override;  // 0B
		virtual void phantomLeaveEvent(const hkpCollidable* a_arg1, const hkpCollidable* a_arg2) override;                                   // 0C

		bhkAcousticSpacePhantomCallbackShape* ctor()
		{
			using func_t = bhkAcousticSpacePhantomCallbackShape*(__thiscall*)(bhkAcousticSpacePhantomCallbackShape*);
			static REL::Relocation<func_t> func{ Offsets::bhkAcousticSpacePhantomCallbackShape::ctor };
			return func(this);
		}
	};
}
