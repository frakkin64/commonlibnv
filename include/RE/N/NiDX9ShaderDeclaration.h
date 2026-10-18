#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderDeclaration.h"

namespace RE
{
	class NiDX9ShaderDeclaration :
		public NiD3DShaderDeclaration  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9ShaderDeclaration };
		static constexpr auto VTABLE{ VTABLE::NiDX9ShaderDeclaration };

		// members
		// not placed: m_pkElements(absent), m_hVertexDecl(absent)
	};
}
