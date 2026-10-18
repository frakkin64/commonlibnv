#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderProgram.h"

namespace RE
{
	class NiD3DPixelShader :
		public NiD3DShaderProgram  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DPixelShader };
		static constexpr auto VTABLE{ VTABLE::NiD3DPixelShader };

		// add
		virtual void Unk_1F();  // 1F
		virtual void Unk_20();  // 20
		virtual void Unk_21();  // 21
		virtual void Unk_22();  // 22

		// members
		void* m_hShader;  // 2C
	};
}
