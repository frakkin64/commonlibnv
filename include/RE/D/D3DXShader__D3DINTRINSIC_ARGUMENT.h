#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/D3DXShader__D3DCOMPONENT_TYPE.h"
#include "RE/D/D3DXShader__D3DTYPE_TEMPLATE.h"

namespace RE
{
	class D3DXShader__D3DINTRINSIC_ARGUMENT
	{
	public:
		// members
		const char*                          pName;            // 00?
		std::uint32_t                        Usage;            // 04?
		std::uint32_t                        TemplateId;       // 08?
		const D3DXShader__D3DTYPE_TEMPLATE*  pTemplate;        // 0C?
		std::uint32_t                        ComponentTypeId;  // 10?
		const D3DXShader__D3DCOMPONENT_TYPE* pComponentType;   // 14?
		std::uint32_t                        Rows;             // 18?
		std::uint32_t                        Cols;             // 1C?
	};
}
