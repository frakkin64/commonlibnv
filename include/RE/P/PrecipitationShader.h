#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiDX9ShaderDeclaration;

	class PrecipitationShader :
		public BSShader  // 00
	{
	public:
		// members
		NiPoint3                          kVelocity;     // 6C?
		NiPoint3                          kMin;          // 78?
		NiPoint3                          kMax;          // 84?
		NiPoint3                          fParams;       // 90?
		NiPointer<NiDX9ShaderDeclaration> spShaderDecl;  // 9C?
		NiColor                           AmbientColor;  // A0?
	};
}
