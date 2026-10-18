#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpBvTreeShape.h"
#include "RE/H/hkpSingleShapeContainer.h"

namespace RE
{
	class hkAabb;
	class hkpTriSampledHeightFieldCollection;

	class hkpTriSampledHeightFieldBvTreeShape :
		public hkpBvTreeShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTriSampledHeightFieldBvTreeShape };
		static constexpr auto VTABLE{ VTABLE::hkpTriSampledHeightFieldBvTreeShape };

		// override (hkpBvTreeShape)
		virtual ~hkpTriSampledHeightFieldBvTreeShape() = default;  // 00

	protected:
		static hkBool getExtentsForQueryAabb(hkAabb& result, hkpTriSampledHeightFieldCollection const* aabb, std::uint32_t& collection, std::uint32_t& minX, std::uint32_t& maxX, std::uint32_t& minZ)
		{
			using func_t = decltype(&hkpTriSampledHeightFieldBvTreeShape::getExtentsForQueryAabb);
			static REL::Relocation<func_t> func{ Offsets::hkpTriSampledHeightFieldBvTreeShape::getExtentsForQueryAabb };
			return func(result, aabb, collection, minX, maxX, minZ);
		}

	public:
		// members
		hkpSingleShapeContainer m_childContainer;         // 14?
		std::int32_t            m_childSize;              // 1C?
		hkBool                  m_wantAabbRejectionTest;  // 20?
		std::uint8_t            m_padding[12];            // 21?
		std::uint8_t            pad2D[0x3];               // 2D
	};
}
