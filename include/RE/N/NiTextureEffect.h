#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiDynamicEffect.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPlane.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"
#include "RE/N/NiTexturingProperty_FilterMode.h"

namespace RE
{
	class NiTexture;

	class NiTextureEffect :
		public NiDynamicEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTextureEffect };
		static constexpr auto VTABLE{ VTABLE::NiTextureEffect };

		enum class CoordGenType : std::int32_t
		{
			kWORLD_PARALLEL = 0x0,
			kWORLD_PERSPECTIVE = 0x1,
			kSPHERE_MAP = 0x2,
			kSPECULAR_CUBE_MAP = 0x3,
			kDIFFUSE_CUBE_MAP = 0x4,
			kNUM_COORD_GEN = 0x5,
		};

		enum class TextureType : std::int32_t
		{
			kPROJECTED_LIGHT = 0x0,
			kPROJECTED_SHADOW = 0x1,
			kENVIRONMENT_MAP = 0x2,
			kFOG_MAP = 0x3,
			kTEXTURE_TYPE_MAX = 0x4,
		};

		static void _SDMInit()
		{
			using func_t = decltype(&NiTextureEffect::_SDMInit);
			static REL::Relocation<func_t> func{ Offsets::NiTextureEffect::_SDMInit };
			func();
		}

		static char* GetViewerString(char const* pPrefix, NiTextureEffect::TextureType eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiTextureEffect::TextureType);
			static REL::Relocation<func_t> func{ Offsets::NiTextureEffect::GetViewerString };
			return func(pPrefix, eMode);
		}

		static char* GetViewerString(char const* pPrefix, NiTextureEffect::CoordGenType eMode)
		{
			using func_t = char*(__cdecl*)(char const*, NiTextureEffect::CoordGenType);
			static REL::Relocation<func_t> func{ Offsets::NiTextureEffect::GetViewerString_1 };
			return func(pPrefix, eMode);
		}

	public:
		// members
		std::uint8_t                   padC4[0x18];        // C4
		NiMatrix3                      m_kModelProjMat;    // DC
		NiPoint3                       m_kModelProjTrans;  // 100?
		NiMatrix3                      m_kWorldProjMat;    // 10C?
		NiPoint3                       m_kWorldProjTrans;  // 130
		NiPointer<NiTexture>           m_spTexture;        // 13C?
		NiTexturingProperty_FilterMode m_eFilter;          // 140?
		NiTexturingProperty_ClampMode  m_eClamp;           // 144?
		NiTextureEffect::TextureType   m_eTextureMode;     // 148?
		NiTextureEffect::CoordGenType  m_eCoordMode;       // 14C?
		bool                           m_bPlaneEnable;     // 150?
		std::uint8_t                   pad151[0x3];        // 151
		NiPlane                        m_kModelPlane;      // 154?
		NiPlane                        m_kWorldPlane;      // 164?
	};
}
