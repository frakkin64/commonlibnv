#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkpMoppAssemblerData
	{
	public:
		enum class hkpCutCommandType : std::int32_t
		{
			kHK_MOPP_NO_CUT = 0x0,
			kHK_MOPP_CUT8 = 0x1,
			kHK_MOPP_CUT24 = 0x2,
		};

		enum class hkpRescaleCommandType : std::int32_t
		{
			kHK_MOPP_NO_RESCALE = 0x0,
			kHK_MOPP_RESCALE = 0x1,
		};

		// members
		hkBool                                                           m_isAssembled;             // 00?
		hkBool                                                           m_scaleIsValid;            // 01?
		std::uint16_t                                                    pad02;                     // 02
		hkEnum<hkpMoppAssemblerData::hkpRescaleCommandType, std::int8_t> m_rescaleCommandType;      // 04?
		std::uint8_t                                                     pad05[0x3];                // 05
		hkEnum<hkpMoppAssemblerData::hkpCutCommandType, std::int8_t>     m_cutCommandType[3];       // 08?
		std::uint8_t                                                     pad0B;                     // 0B
		std::int32_t                                                     m_chunkId;                 // 0C?
		std::int32_t                                                     m_minCutPlanePosition[3];  // 10?
		std::int32_t                                                     m_maxCutPlanePosition[3];  // 1C?
		std::int32_t                                                     m_assembledAddress;        // 28?
	};
}
