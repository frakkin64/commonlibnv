#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplayCone :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayCone };
		static constexpr auto VTABLE{ VTABLE::hkDisplayCone };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayCone() = default;                                                                     // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		hkDisplayCone* ctor()
		{
			using func_t = hkDisplayCone*(__thiscall*)(hkDisplayCone*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayCone::ctor };
			return func(this);
		}

	public:
		// members
		hkVector4     m_startPos;     // 60?
		hkVector4     m_coneAxis;     // 70?
		std::int32_t  m_numSegments;  // 80?
		float         m_coneAngle;    // 84?
		float         m_coneHeight;   // 88?
		std::uint32_t pad8C;          // 8C
	};
}
