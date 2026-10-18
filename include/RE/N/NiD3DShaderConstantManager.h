#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiDX9Renderer;

	class NiD3DShaderConstantManager :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderConstantManager };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderConstantManager };

		// add
		virtual void Unk_02();  // 02

		// members
		float*         m_pfFloatVSConstantData;       // 08?
		float*         m_pfSavedFloatVSConstantData;  // 0C?
		float*         m_pfFloatPSConstantData;       // 10?
		float*         m_pfSavedFloatPSConstantData;  // 14?
		std::uint32_t  m_uiFirstDirtyFloatVSReg;      // 18?
		std::uint32_t  m_uiFirstCleanFloatVSReg;      // 1C?
		std::uint32_t  m_uiFirstDirtyFloatPSReg;      // 20?
		std::uint32_t  m_uiFirstCleanFloatPSReg;      // 24?
		std::uint32_t  m_uiNumFloatVSConstants;       // 28?
		std::uint32_t  m_uiNumFloatPSConstants;       // 2C?
		std::int32_t*  m_piIntVSConstantData;         // 30?
		std::int32_t*  m_piSavedIntVSConstantData;    // 34?
		std::int32_t*  m_piIntPSConstantData;         // 38?
		std::int32_t*  m_piSavedIntPSConstantData;    // 3C?
		std::uint32_t  m_uiFirstDirtyIntVSReg;        // 40?
		std::uint32_t  m_uiFirstCleanIntVSReg;        // 44?
		std::uint32_t  m_uiFirstDirtyIntPSReg;        // 48?
		std::uint32_t  m_uiFirstCleanIntPSReg;        // 4C?
		std::uint32_t  m_uiNumIntVSConstants;         // 50?
		std::uint32_t  m_uiNumIntPSConstants;         // 54?
		std::int32_t*  m_pbBoolVSConstantData;        // 58?
		std::int32_t*  m_pbSavedBoolVSConstantData;   // 5C?
		std::int32_t*  m_pbBoolPSConstantData;        // 60?
		std::int32_t*  m_pbSavedBoolPSConstantData;   // 64?
		std::uint32_t  m_uiFirstDirtyBoolVSReg;       // 68?
		std::uint32_t  m_uiFirstCleanBoolVSReg;       // 6C?
		std::uint32_t  m_uiFirstDirtyBoolPSReg;       // 70?
		std::uint32_t  m_uiFirstCleanBoolPSReg;       // 74?
		std::uint32_t  m_uiNumBoolVSConstants;        // 78?
		std::uint32_t  m_uiNumBoolPSConstants;        // 7C?
		void*          m_pkD3DDevice;                 // 80?
		NiDX9Renderer* m_pkD3DRenderer;               // 84?
	};
}
