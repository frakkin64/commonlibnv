#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMemoryAllocator;

	class alignas(16) hkDisplayAABB :
		public hkDisplayGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplayAABB };
		static constexpr auto VTABLE{ VTABLE::hkDisplayAABB };

		// override (hkDisplayGeometry)
		virtual ~hkDisplayAABB() = default;                                                                     // 00
		virtual void getWireframeGeometry(hkArrayBase<hkVector4>* a_arg1, hkMemoryAllocator* a_arg2) override;  // 03
		virtual void buildGeometry() override;                                                                  // 04

		void setExtents(hkVector4 const& min_, hkVector4 const& max_)
		{
			using func_t = decltype(&hkDisplayAABB::setExtents);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayAABB::setExtents };
			func(this, min_, max_);
		}

		hkDisplayAABB* ctor()
		{
			using func_t = hkDisplayAABB*(__thiscall*)(hkDisplayAABB*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplayAABB::ctor };
			return func(this);
		}

	public:
		// members
		hkVector4 m_minExtent;  // 60?
		hkVector4 m_maxExtent;  // 70?
	};
}
