#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) NiD3DShaderProgramCreator
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderProgramCreator };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderProgramCreator };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08

	protected:
		void* CreateVertexShader(void* pvCode, void** __formal, std::uint32_t a_arg3, void* a_arg4, std::uint32_t a_arg5, bool a_arg6)
		{
			using func_t = decltype(&NiD3DShaderProgramCreator::CreateVertexShader);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShaderProgramCreator::CreateVertexShader };
			return func(this, pvCode, __formal, a_arg3, a_arg4, a_arg5, a_arg6);
		}

		void* CreatePixelShader(void* pvCode)
		{
			using func_t = decltype(&NiD3DShaderProgramCreator::CreatePixelShader);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShaderProgramCreator::CreatePixelShader };
			return func(this, pvCode);
		}
	};
	static_assert(sizeof(NiD3DShaderProgramCreator) == 0x4);
}
