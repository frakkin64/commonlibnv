#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplayPlane :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayPlane };
		static constexpr auto VTABLE{ VTABLE::hkDisplayPlane };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayPlane() = default;                                                                    // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		hkDisplayPlane* ctor()
		{
			using func_t = hkDisplayPlane*(__thiscall*)(hkDisplayPlane*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayPlane::ctor };
			return func(this);
		}

	public:
		// members
		hkVector4 m_normal;        // 60?
		hkVector4 m_center;        // 70?
		hkVector4 m_perpToNormal;  // 80?
		hkVector4 m_extent;        // 90?
	};
}
