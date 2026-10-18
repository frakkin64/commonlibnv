#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkSphere.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplaySphere :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplaySphere };
		static constexpr auto VTABLE{ VTABLE::hkDisplaySphere };

		// override (hkDisplayGeometry)
		virtual ~hkDisplaySphere() = default;                                                                   // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		hkDisplaySphere* ctor(hkSphere const& sphere, std::int32_t xRes, std::int32_t yRes)
		{
			using func_t = hkDisplaySphere*(__thiscall*)(hkDisplaySphere*, hkSphere const&, std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySphere::ctor };
			return func(this, sphere, xRes, yRes);
		}

	public:
		// members
		hkSphere     m_sphere;    // 60?
		std::int32_t m_xRes;      // 70?
		std::int32_t m_yRes;      // 74?
		std::uint8_t pad78[0x8];  // 78
	};
}
