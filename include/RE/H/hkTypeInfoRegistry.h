#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"
#include "RE/H/hkStringMap.h"

namespace RE
{
	class hkTypeInfo;

	class hkTypeInfoRegistry :
		public hkReferencedObject,  // 00
		public hkSingleton<hkTypeInfoRegistry>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkTypeInfoRegistry };
		static constexpr auto VTABLE{ VTABLE::hkTypeInfoRegistry };

		// override (hkReferencedObject)
		virtual ~hkTypeInfoRegistry() = default;  // 00

		// add
		virtual void registerTypeInfo(hkTypeInfo const* info);                                  // 03
		virtual const hkTypeInfo* finishLoadedObject(void* a_arg1, const char* a_arg2) const;   // 04
		virtual const hkTypeInfo* cleanupLoadedObject(void* a_arg1, const char* a_arg2) const;  // 05
		virtual void merge(hkTypeInfoRegistry const& mergeFrom);                                // 06
		virtual const hkTypeInfo* getTypeInfo(const char* a_arg1) const;                        // 07

		// members
		hkStringMap<hkTypeInfo const*, hkContainerHeapAllocator> m_map;         // 08
		std::int32_t                                             m_finishFlag;  // 18?
	};
}
