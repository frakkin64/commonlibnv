#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkStreamWriter;
	class hkStringBuf;
	class hkStringPtr;

	class hkOstream :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkOstream };
		static constexpr auto VTABLE{ VTABLE::hkOstream };

		// override (hkReferencedObject)
		virtual ~hkOstream() = default;  // 00

		hkOstream& operator_call(void const* p)
		{
			using func_t = hkOstream& (hkOstream::*)(void const*);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call };
			return func(this, p);
		}

		hkOstream& operator_call(char const* s)
		{
			using func_t = hkOstream& (hkOstream::*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call_1 };
			return func(this, s);
		}

		hkOstream& operator_call(std::int32_t i)
		{
			using func_t = hkOstream& (hkOstream::*)(std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call_2 };
			return func(this, i);
		}

		hkOstream& operator_call(std::uint32_t u)
		{
			using func_t = hkOstream& (hkOstream::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call_3 };
			return func(this, u);
		}

		hkOstream& operator_call(float a_arg1)
		{
			using func_t = hkOstream& (hkOstream::*)(float);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call_4 };
			return func(this, a_arg1);
		}

		void printf(char const* a_arg1, ...)
		{
			using func_t = void(__cdecl*)(hkOstream*, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::printf };
			func(this, a_arg1);
		}

		hkOstream& operator_call(hkStringPtr const& str)
		{
			using func_t = hkOstream& (hkOstream::*)(hkStringPtr const&);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call_5 };
			return func(this, str);
		}

		hkOstream& operator_call(hkStringBuf const& str)
		{
			using func_t = hkOstream& (hkOstream::*)(hkStringBuf const&);
			static REL::Relocation<func_t> func{ Offsets::hkOstream::operator_call_6 };
			return func(this, str);
		}

	public:
		// members
		hkStreamWriter* m_writer;  // 08
	};
}
