#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDebugDisplayHandler.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkCriticalSection;
	class hkDisplaySerializeOStream;

	class hkServerDebugDisplayHandler :
		public hkReferencedObject,  // 00
		public hkDebugDisplayHandler  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkServerDebugDisplayHandler };
		static constexpr auto VTABLE{ VTABLE::hkServerDebugDisplayHandler };

		// override (hkReferencedObject)
		virtual ~hkServerDebugDisplayHandler() = default;  // 00

		hkServerDebugDisplayHandler* ctor(hkDisplaySerializeOStream* stream)
		{
			using func_t = hkServerDebugDisplayHandler*(__thiscall*)(hkServerDebugDisplayHandler*, hkDisplaySerializeOStream*);
			static REL::Relocation<func_t> func{ Offsets::hkServerDebugDisplayHandler::ctor };
			return func(this, stream);
		}

	public:
		// members
		hkDisplaySerializeOStream* m_outStream;      // 0C
		hkCriticalSection*         m_outstreamLock;  // 10
	};
}
