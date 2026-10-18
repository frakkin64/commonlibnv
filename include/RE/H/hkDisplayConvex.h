#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkGeometry;
	class hkMemoryAllocator;

	class alignas(16) hkDisplayConvex :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayConvex };
		static constexpr auto VTABLE{ VTABLE::hkDisplayConvex };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayConvex() = default;                                                                   // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		hkDisplayConvex* ctor(hkGeometry* geom)
		{
			using func_t = hkDisplayConvex*(__thiscall*)(hkDisplayConvex*, hkGeometry*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayConvex::ctor };
			return func(this, geom);
		}
	};
}
