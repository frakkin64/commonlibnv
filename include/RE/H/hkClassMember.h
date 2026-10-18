#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkClassMember_Type.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkFlags.h"

namespace RE
{
	class hkClass;
	class hkClassEnum;
	class hkCustomAttributes;

	class hkClassMember
	{
	public:
		using Type = hkClassMember_Type;

		enum class FlagValues : std::int32_t
		{
			kFLAGS_NONE = 0x0,
			kALIGN_8 = 0x80,
			kALIGN_16 = 0x100,
			kNOT_OWNED = 0x200,
			kSERIALIZE_IGNORED = 0x400,
		};

		hkClass const& getStructClass() const
		{
			using func_t = decltype(&hkClassMember::getStructClass);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getStructClass };
			return func(this);
		}

		hkClass const* getClass() const
		{
			using func_t = decltype(&hkClassMember::getClass);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getClass };
			return func(this);
		}

		std::int32_t getCstyleArraySize() const
		{
			using func_t = decltype(&hkClassMember::getCstyleArraySize);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getCstyleArraySize };
			return func(this);
		}

		std::int32_t getAlignment() const
		{
			using func_t = decltype(&hkClassMember::getAlignment);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getAlignment };
			return func(this);
		}

		static hkClassMember_Type getTypeOf(char const* name)
		{
			using func_t = decltype(&hkClassMember::getTypeOf);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getTypeOf };
			return func(name);
		}

		static hkClassMember_Type getSubtypeOf(char const* name)
		{
			using func_t = decltype(&hkClassMember::getSubtypeOf);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getSubtypeOf };
			return func(name);
		}

		std::int32_t getTypeName(char* buf, std::int32_t bufLen) const
		{
			using func_t = decltype(&hkClassMember::getTypeName);
			static REL::Relocation<func_t> func{ Offsets::hkClassMember::getTypeName };
			return func(this, buf, bufLen);
		}

	public:
		// members
		// not placed: m_subtype(misaligned)
		const char*                                       m_name;        // 00
		const hkClass*                                    m_class;       // 04
		const hkClassEnum*                                m_enum;        // 08
		hkEnum<hkClassMember_Type, std::uint8_t>          m_type;        // 0C
		std::uint8_t                                      pad0D;         // 0D
		std::int16_t                                      m_cArraySize;  // 0E
		hkFlags<hkClassMember::FlagValues, std::uint16_t> m_flags;       // 10?
		std::uint16_t                                     m_offset;      // 12?
		const hkCustomAttributes*                         m_attributes;  // 14?
	};
}
