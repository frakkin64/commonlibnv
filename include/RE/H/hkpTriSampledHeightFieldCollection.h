#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeCollection.h"
#include "RE/H/hkpWeldingUtility_WeldingType.h"

namespace RE
{
	class hkpSampledHeightFieldShape;

	class alignas(16) hkpTriSampledHeightFieldCollection :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTriSampledHeightFieldCollection };
		static constexpr auto VTABLE{ VTABLE::hkpTriSampledHeightFieldCollection };

		// override (hkpShapeCollection)
		virtual ~hkpTriSampledHeightFieldCollection() = default;                            // 00
		virtual void initWeldingInfo(hkpWeldingUtility_WeldingType weldingType) override;   // 0B
		virtual void setWeldingInfo(std::uint32_t key, std::int16_t weldingInfo) override;  // 0C

		hkpSampledHeightFieldShape const* getHeightFieldShape() const
		{
			using func_t = decltype(&hkpTriSampledHeightFieldCollection::getHeightFieldShape);
			static REL::Relocation<func_t> func{ Offsets::hkpTriSampledHeightFieldCollection::getHeightFieldShape };
			return func(this);
		}

	public:
		// members
		// not placed: m_childSize(absent), m_radius(absent), m_weldingInfo(absent), m_triangleExtrusion(misaligned)
		const hkpSampledHeightFieldShape* m_heightfield;  // 18
		std::uint8_t                      pad1C[0x14];    // 1C
	};
}
