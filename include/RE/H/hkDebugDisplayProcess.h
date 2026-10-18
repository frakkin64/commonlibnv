#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDebugDisplayHandler.h"
#include "RE/H/hkProcess.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkDebugDisplayProcess :
		public hkReferencedObject,  // 00
		public hkProcess,  // 08
		public hkDebugDisplayHandler  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDebugDisplayProcess };
		static constexpr auto VTABLE{ VTABLE::hkDebugDisplayProcess };

		// override (hkReferencedObject)
		virtual ~hkDebugDisplayProcess() = default;  // 00

		hkDebugDisplayProcess* ctor()
		{
			using func_t = hkDebugDisplayProcess*(__thiscall*)(hkDebugDisplayProcess*);
			static REL::Relocation<func_t> func{ Offsets::hkDebugDisplayProcess::ctor };
			return func(this);
		}
	};
}
