#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplayCapsule :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayCapsule };
		static constexpr auto VTABLE{ VTABLE::hkDisplayCapsule };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayCapsule() = default;                                                                  // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		hkDisplayCapsule* ctor(hkVector4 const& top, hkVector4 const& bottom, float radius, std::int32_t numSides, std::int32_t numHeightSegments)
		{
			using func_t = hkDisplayCapsule*(__thiscall*)(hkDisplayCapsule*, hkVector4 const&, hkVector4 const&, float, std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayCapsule::ctor };
			return func(this, top, bottom, radius, numSides, numHeightSegments);
		}

	public:
		// members
		hkVector4     m_top;                // 60
		hkVector4     m_bottom;             // 70?
		float         m_radius;             // 80?
		std::int32_t  m_numSides;           // 84?
		std::int32_t  m_numHeightSegments;  // 88?
		std::uint32_t pad8C;                // 8C
	};
}
