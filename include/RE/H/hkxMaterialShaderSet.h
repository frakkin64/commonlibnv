#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxMaterialShader;

	class hkxMaterialShaderSet :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMaterialShaderSet };
		static constexpr auto VTABLE{ VTABLE::hkxMaterialShaderSet };

		// override (hkReferencedObject)
		virtual ~hkxMaterialShaderSet() = default;  // 00

		// members
		hkArray<hkRefPtr<hkxMaterialShader>, hkContainerHeapAllocator> m_shaders;  // 08?
	};
}
