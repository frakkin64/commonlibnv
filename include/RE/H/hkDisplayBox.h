#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplayBox :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayBox };
		static constexpr auto VTABLE{ VTABLE::hkDisplayBox };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayBox() = default;                                                                      // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		hkDisplayBox* ctor()
		{
			using func_t = hkDisplayBox*(__thiscall*)(hkDisplayBox*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayBox::ctor };
			return func(this);
		}

	public:
		// members
		hkVector4 m_halfExtents;  // 60?
	};
}
