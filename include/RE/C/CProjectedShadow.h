#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CVec3.h"

namespace RE
{
	class CTreeFileAccess;

	class CProjectedShadow
	{
	public:
		void Parse(CTreeFileAccess& cFile)
		{
			using func_t = decltype(&CProjectedShadow::Parse);
			static REL::Relocation<func_t> func{ Offsets::CProjectedShadow::Parse };
			func(this, cFile);
		}

	public:
		// members
		CVec3       m_cRight;            // 00?
		CVec3       m_cUp;               // 0C?
		CVec3       m_cOut;              // 18?
		stl::string m_strSelfShadowMap;  // 24?
	};
}
