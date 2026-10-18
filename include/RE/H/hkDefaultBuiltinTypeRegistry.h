#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBuiltinTypeRegistry.h"

namespace RE
{
	class hkClassNameRegistry;
	class hkTypeInfoRegistry;
	class hkVtableClassRegistry;

	class hkDefaultBuiltinTypeRegistry :
		public hkBuiltinTypeRegistry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDefaultBuiltinTypeRegistry };
		static constexpr auto VTABLE{ VTABLE::hkDefaultBuiltinTypeRegistry };

		// override (hkBuiltinTypeRegistry)
		virtual ~hkDefaultBuiltinTypeRegistry() = default;  // 00

		// add
		virtual hkTypeInfoRegistry* getTypeInfoRegistry();        // 03
		virtual hkClassNameRegistry* getClassNameRegistry();      // 04
		virtual hkVtableClassRegistry* getVtableClassRegistry();  // 05
		virtual void Unk_06();                                    // 06
		virtual void reinitialize();                              // 07
	};
}
