#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SETTING_VALUE.h"

namespace RE
{
	class __declspec(novtable) Setting
	{
	public:
		static constexpr auto RTTI{ RTTI::Setting };
		static constexpr auto VTABLE{ VTABLE::Setting };

		enum class SETTING_TYPE : std::int32_t
		{
			kST_BINARY = 0x0,
			kST_CHAR = 0x1,
			kST_UCHAR = 0x2,
			kST_INT = 0x3,
			kST_UINT = 0x4,
			kST_FLOAT = 0x5,
			kST_STRING = 0x6,
			kST_RGB = 0x7,
			kST_RGBA = 0x8,
			kST_NONE = 0x9,
		};

		// add
		virtual ~Setting() = default;  // 00
		virtual bool IsPrefSetting();  // 01

		char const* String()
		{
			using func_t = decltype(&Setting::String);
			static REL::Relocation<func_t> func{ Offsets::Setting::String };
			return func(this);
		}

		float& Float()
		{
			using func_t = decltype(&Setting::Float);
			static REL::Relocation<func_t> func{ Offsets::Setting::Float };
			return func(this);
		}

		bool& Bool()
		{
			using func_t = decltype(&Setting::Bool);
			static REL::Relocation<func_t> func{ Offsets::Setting::Bool };
			return func(this);
		}

		std::int32_t& Int()
		{
			using func_t = decltype(&Setting::Int);
			static REL::Relocation<func_t> func{ Offsets::Setting::Int };
			return func(this);
		}

		void operator_unsigned_int()
		{
			using func_t = decltype(&Setting::operator_unsigned_int);
			static REL::Relocation<func_t> func{ Offsets::Setting::operator_unsigned_int };
			func(this);
		}

		void operator_float()
		{
			using func_t = decltype(&Setting::operator_float);
			static REL::Relocation<func_t> func{ Offsets::Setting::operator_float };
			func(this);
		}

		void operator_bool()
		{
			using func_t = decltype(&Setting::operator_bool);
			static REL::Relocation<func_t> func{ Offsets::Setting::operator_bool };
			func(this);
		}

		void operator_char_const()
		{
			using func_t = decltype(&Setting::operator_char_const);
			static REL::Relocation<func_t> func{ Offsets::Setting::operator_char_const };
			func(this);
		}

		Setting::SETTING_TYPE DataType()
		{
			using func_t = decltype(&Setting::DataType);
			static REL::Relocation<func_t> func{ Offsets::Setting::DataType };
			return func(this);
		}

	public:
		// members
		SETTING_VALUE uValue;  // 04
		const char*   pKey;    // 08
	};
}
