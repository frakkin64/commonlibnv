#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpSphereRepShape.h"

namespace RE
{
	class hkSphere;

	class alignas(16) hkpMultiSphereShape :
		public hkpSphereRepShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiSphereShape };
		static constexpr auto VTABLE{ VTABLE::hkpMultiSphereShape };

		// override (hkpSphereRepShape)
		virtual ~hkpMultiSphereShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                  // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;  // 0C

		// members
		std::int32_t m_numSpheres;  // 10
		std::uint8_t pad14[0xC];    // 14
		hkVector4    m_spheres[8];  // 20?
	};
}
