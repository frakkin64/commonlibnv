#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkRefVariant.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkGeometry;
	class hkxIndexBuffer;
	class hkxMaterial;
	class hkxVertexBuffer;

	class hkxMeshSection :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMeshSection };
		static constexpr auto VTABLE{ VTABLE::hkxMeshSection };

		// override (hkReferencedObject)
		virtual ~hkxMeshSection() = default;  // 00

		void collectVertexPositions(hkArray<hkVector4, hkContainerHeapAllocator>& verticesInOut) const
		{
			using func_t = decltype(&hkxMeshSection::collectVertexPositions);
			static REL::Relocation<func_t> func{ Offsets::hkxMeshSection::collectVertexPositions };
			func(this, verticesInOut);
		}

		void appendGeometry(hkGeometry& geometryInOut, std::int32_t materialIndex)
		{
			using func_t = decltype(&hkxMeshSection::appendGeometry);
			static REL::Relocation<func_t> func{ Offsets::hkxMeshSection::appendGeometry };
			func(this, geometryInOut, materialIndex);
		}

		hkxMeshSection& operator_call(hkxMeshSection const& __that)
		{
			using func_t = decltype(&hkxMeshSection::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkxMeshSection::operator_call };
			return func(this, __that);
		}

	public:
		// members
		hkRefPtr<hkxVertexBuffer>                                   m_vertexBuffer;  // 08?
		hkArray<hkRefPtr<hkxIndexBuffer>, hkContainerHeapAllocator> m_indexBuffers;  // 0C?
		hkRefPtr<hkxMaterial>                                       m_material;      // 18?
		hkArray<hkRefVariant, hkContainerHeapAllocator>             m_userChannels;  // 1C?
	};
}
