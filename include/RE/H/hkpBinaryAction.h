#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpAction.h"

namespace RE
{
	class hkpEntity;

	class hkpBinaryAction :
		public hkpAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBinaryAction };
		static constexpr auto VTABLE{ VTABLE::hkpBinaryAction };

		// override (hkpAction)
		virtual ~hkpBinaryAction() = default;                                                      // 00
		virtual void getEntities(hkArray<hkpEntity*, hkContainerHeapAllocator>* a_arg1) override;  // 04
		virtual void entityRemovedCallback(hkpEntity* a_arg1) override;                            // 06

		// members
		hkpEntity* m_entityA;  // 18?
		hkpEntity* m_entityB;  // 1C?
	};
}
