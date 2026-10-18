#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkCriticalSection;

	class hkProcessFactory :
		public hkReferencedObject,  // 00
		public hkSingleton<hkProcessFactory>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkProcessFactory };
		static constexpr auto VTABLE{ VTABLE::hkProcessFactory };

		class ProcessIdPair;

		class ProcessIdPair
		{
		public:
			// members
			hkStringPtr  m_name;                     // 00?
			void*        m_processCreationFunction;  // 04?
			std::int32_t m_tag;                      // 08?
		};

		// override (hkReferencedObject)
		virtual ~hkProcessFactory() = default;  // 00

		hkProcessFactory* ctor()
		{
			using func_t = hkProcessFactory*(__thiscall*)(hkProcessFactory*);
			static REL::Relocation<func_t> func{ Offsets::hkProcessFactory::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t                                                       m_freeTag;                // 08
		hkArray<hkProcessFactory::ProcessIdPair, hkContainerHeapAllocator> m_name2creationFunction;  // 0C
		hkCriticalSection*                                                 m_criticalSection;        // 18?
	};
}
