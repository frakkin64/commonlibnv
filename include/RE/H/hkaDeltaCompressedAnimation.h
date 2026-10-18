#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class hkaDeltaCompressedAnimation :
		public hkaAnimation  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaDeltaCompressedAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaDeltaCompressedAnimation };

		class QuantizationFormat;

		class QuantizationFormat
		{
		public:
			// members
			std::uint8_t  m_maxBitWidth;  // 00?
			std::uint8_t  m_preserved;    // 01?
			std::uint16_t pad02;          // 02
			std::uint32_t m_numD;         // 04?
			std::uint32_t m_offsetIdx;    // 08?
			std::uint32_t m_scaleIdx;     // 0C?
			std::uint32_t m_bitWidthIdx;  // 10?
		};

		// override (hkaAnimation)
		virtual ~hkaDeltaCompressedAnimation() = default;  // 00

		// add
		virtual std::uint32_t getFullCacheKey(std::uint32_t a_arg1) const;  // 10

		// members
		std::int32_t                                    m_numberOfPoses;            // 28
		std::int32_t                                    m_blockSize;                // 2C?
		hkaDeltaCompressedAnimation::QuantizationFormat m_qFormat;                  // 30?
		std::uint32_t                                   m_quantizedDataIdx;         // 44?
		std::uint32_t                                   m_quantizedDataSize;        // 48?
		std::uint32_t                                   m_staticMaskIdx;            // 4C?
		std::uint32_t                                   m_staticMaskSize;           // 50?
		std::uint32_t                                   m_staticDOFsIdx;            // 54?
		std::uint32_t                                   m_staticDOFsSize;           // 58?
		std::uint32_t                                   m_numStaticTransformDOFs;   // 5C?
		std::uint32_t                                   m_numDynamicTransformDOFs;  // 60?
		std::uint32_t                                   m_totalBlockSize;           // 64?
		std::uint32_t                                   m_lastBlockSize;            // 68?
		hkArray<std::uint8_t, hkContainerHeapAllocator> m_dataBuffer;               // 6C?
	};
}
