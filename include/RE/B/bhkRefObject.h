#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class hkReferencedObject;

	class bhkRefObject :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRefObject };
		static constexpr auto VTABLE{ VTABLE::bhkRefObject };

		// add
		virtual void SethkObject(hkReferencedObject* aphkObject);  // 23
		virtual void Link(bool abAttach);                          // 24

		// members
		hkReferencedObject* phkObject;  // 08
	};
}
