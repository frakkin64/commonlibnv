#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData_DataFlags.h"
#include "RE/N/NiShaderDescBase.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiShaderRequirementDesc :
		public NiShaderDescBase  // 00
	{
	public:
		// members
		std::uint32_t            m_uiMinPixelShaderVersion;   // 10?
		std::uint32_t            m_uiMaxPixelShaderVersion;   // 14?
		std::uint32_t            m_uiMinVertexShaderVersion;  // 18?
		std::uint32_t            m_uiMaxVertexShaderVersion;  // 1C?
		std::uint32_t            m_uiMinUserVersion;          // 20?
		std::uint32_t            m_uiMaxUserVersion;          // 24?
		std::uint32_t            m_uiPlatformFlags;           // 28?
		std::uint32_t            m_uiBonesPerPartition;       // 2C?
		NiGeometryData_DataFlags m_eBinormalTangentMethod;    // 30?
		std::uint16_t            m_usNBTSourceUV;             // 34?
		bool                     m_bSoftwareVPAcceptable;     // 36?
		bool                     m_bSoftwareVPRequired;       // 37?
	};
}
