#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerTempAllocator.h"
#include "RE/H/hkInplaceArray.h"

namespace RE
{
	class hkStringBuf
	{
	public:
		hkStringBuf* ctor()
		{
			using func_t = hkStringBuf*(__thiscall*)(hkStringBuf*);
			static REL::Relocation<func_t> func{ Offsets::hkStringBuf::ctor };
			return func(this);
		}

		hkStringBuf* ctor(char const* s)
		{
			using func_t = hkStringBuf*(__thiscall*)(hkStringBuf*, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStringBuf::ctor_1 };
			return func(this, s);
		}

		hkStringBuf& operator_call(char const* s)
		{
			using func_t = hkStringBuf& (hkStringBuf::*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStringBuf::operator_call };
			return func(this, s);
		}

		void printf(char const* fmt, ...)
		{
			using func_t = void(__cdecl*)(hkStringBuf*, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::hkStringBuf::printf };
			func(this, fmt);
		}

		void appendJoin(char const* s0, char const* s1, char const* s2, char const* s3, char const* s4, char const* s5)
		{
			using func_t = decltype(&hkStringBuf::appendJoin);
			static REL::Relocation<func_t> func{ Offsets::hkStringBuf::appendJoin };
			func(this, s0, s1, s2, s3, s4, s5);
		}

	public:
		// members
		hkInplaceArray<char, 128, hkContainerTempAllocator> m_string;  // 00
	};
}
