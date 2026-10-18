#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderProgram.h"

namespace RE
{
	class NiD3DVertexShader :
		public NiD3DShaderProgram  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DVertexShader };
		static constexpr auto VTABLE{ VTABLE::NiD3DVertexShader };

		// add
		virtual void Unk_1F();  // 1F
		virtual void Unk_20();  // 20
		virtual void Unk_21();  // 21
		virtual void Unk_22();  // 22
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28

		// members
		bool          m_bSoftwareVP;  // 2C
		std::uint8_t  pad2D[0x3];     // 2D
		std::uint32_t m_uiUsage;      // 30
		void*         m_hShader;      // 34
		void*         m_hDecl;        // 38
	};
}
