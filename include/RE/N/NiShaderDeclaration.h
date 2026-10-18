#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiShaderDeclaration_ShaderParameter.h"
#include "RE/N/NiShaderDeclaration_ShaderParameterType.h"
#include "RE/N/NiShaderDeclaration_ShaderParameterUsage.h"

namespace RE
{
	class NiShaderDeclaration :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiShaderDeclaration };
		static constexpr auto VTABLE{ VTABLE::NiShaderDeclaration };

		using ShaderParameter = NiShaderDeclaration_ShaderParameter;
		using ShaderParameterType = NiShaderDeclaration_ShaderParameterType;
		using ShaderParameterUsage = NiShaderDeclaration_ShaderParameterUsage;

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
	};
}
