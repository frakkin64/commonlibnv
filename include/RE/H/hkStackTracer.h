#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"
#include "RE/H/hkStackTracer_CallTree.h"

namespace RE
{
	class hkStackTracer :
		public hkReferencedObject,  // 00
		public hkSingleton<hkStackTracer>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStackTracer };
		static constexpr auto VTABLE{ VTABLE::hkStackTracer };

		using CallTree = hkStackTracer_CallTree;

		// override (hkReferencedObject)
		virtual ~hkStackTracer() = default;  // 00

		// members
		void* m_impl;  // 08?
	};
}
