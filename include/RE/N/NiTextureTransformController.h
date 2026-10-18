#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFloatInterpController.h"

namespace RE
{
	class NiTexturingProperty_Map;

	class NiTextureTransformController :
		public NiFloatInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTextureTransformController };
		static constexpr auto VTABLE{ VTABLE::NiTextureTransformController };

		enum class TransformMember : std::int32_t
		{
			kTT_TRANSLATE_U = 0x0,
			kTT_TRANSLATE_V = 0x1,
			kTT_ROTATE = 0x2,
			kTT_SCALE_U = 0x3,
			kTT_SCALE_V = 0x4,
		};

		// members
		std::uint32_t                                 m_uiLastIdx;   // 38
		NiTexturingProperty_Map*                      m_pkMap;       // 3C
		bool                                          m_bShaderMap;  // 40
		std::uint8_t                                  pad41[0x3];    // 41
		std::uint32_t                                 m_uiMapIndex;  // 44
		NiTextureTransformController::TransformMember m_eMember;     // 48
		char*                                         m_pcCtlrID;    // 4C
	};
}
