#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxMaterialShader :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMaterialShader };
		static constexpr auto VTABLE{ VTABLE::hkxMaterialShader };

		enum class ShaderType : std::int32_t
		{
			kEFFECT_TYPE_INVALID = 0x0,
			kEFFECT_TYPE_UNKNOWN = 0x1,
			kEFFECT_TYPE_HLSL_INLINE = 0x2,
			kEFFECT_TYPE_CG_INLINE = 0x3,
			kEFFECT_TYPE_HLSL_FILENAME = 0x4,
			kEFFECT_TYPE_CG_FILENAME = 0x5,
			kEFFECT_TYPE_MAX_ID = 0x6,
		};

		// override (hkReferencedObject)
		virtual ~hkxMaterialShader() = default;  // 00

		hkxMaterialShader* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkxMaterialShader*(__thiscall*)(hkxMaterialShader*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkxMaterialShader::ctor };
			return func(this, f);
		}

	public:
		// members
		hkStringPtr                                         m_name;             // 08?
		hkEnum<hkxMaterialShader::ShaderType, std::uint8_t> m_type;             // 0C?
		std::uint8_t                                        pad0D[0x3];         // 0D
		hkStringPtr                                         m_vertexEntryName;  // 10?
		hkStringPtr                                         m_geomEntryName;    // 14?
		hkStringPtr                                         m_pixelEntryName;   // 18?
		hkArray<std::uint8_t, hkContainerHeapAllocator>     m_data;             // 1C?
	};
}
