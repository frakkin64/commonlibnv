#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BasicArrayImplementation.h"
#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkBool;
	class hkDataArrayImpl;
	class hkDataClassImpl;
	class hkDataObjectImpl;
	class hkHalf;

	class IntArrayImplementation :
		public BasicArrayImplementation<std::int64_t, 2>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IntArrayImplementation };
		static constexpr auto VTABLE{ VTABLE::IntArrayImplementation };

		// override (BasicArrayImplementation<std::int64_t, 2>)
		virtual ~IntArrayImplementation() = default;  // 00

		// add
		virtual hkDataObject_Type getType();                               // 01
		virtual void Unk_02();                                             // 02
		virtual void Unk_03();                                             // 03
		virtual void Unk_04();                                             // 04
		virtual std::int32_t getSize();                                    // 05
		virtual const hkDataClassImpl* getClass();                         // 06
		virtual hkDataArrayImpl* swizzleObjectMember(const char* a_arg1);  // 07
		virtual const float* asVec(std::int32_t a_arg1);                   // 08
		virtual void Unk_09();                                             // 09
		virtual const char* asString(std::int32_t a_arg1);                 // 0A
		virtual void Unk_0B();                                             // 0B
		virtual float asReal(std::int32_t a_arg1);                         // 0C
		virtual void Unk_0D();                                             // 0D
		virtual hkHalf* asHalf(hkHalf* a_arg1, std::int32_t a_arg2);       // 0E
		virtual void Unk_0F();                                             // 0F
		virtual std::int32_t asInt(std::int32_t a_arg1);                   // 10
		virtual void setInt(std::int32_t i, std::int32_t val);             // 11
		virtual std::int64_t asInt64(std::int32_t a_arg1);                 // 12
		virtual void setInt64(std::int32_t i, std::int64_t val);           // 13
		virtual hkDataObjectImpl* asObject(std::int32_t a_arg1);           // 14
		virtual void Unk_15();                                             // 15
		virtual hkDataArrayImpl* asArray(std::int32_t a_arg1);             // 16
		virtual void Unk_17();                                             // 17
		virtual void Unk_18();                                             // 18
		virtual void setAll(hkBool const* vals, std::int32_t n);           // 23 (reversed overload group)
		virtual void setAll(char const* vals, std::int32_t n);             // 22 (reversed overload group)
		virtual void setAll(std::int8_t const* vals, std::int32_t n);      // 21 (reversed overload group)
		virtual void setAll(std::uint8_t const* vals, std::int32_t n);     // 20 (reversed overload group)
		virtual void setAll(std::int16_t const* vals, std::int32_t n);     // 1F (reversed overload group)
		virtual void setAll(std::uint16_t const* vals, std::int32_t n);    // 1E (reversed overload group)
		virtual void setAll(std::int32_t const* vals, std::int32_t n);     // 1D (reversed overload group)
		virtual void setAll(std::uint32_t const* vals, std::int32_t n);    // 1C (reversed overload group)
		virtual void setAll(std::int64_t const* vals, std::int32_t n);     // 1B (reversed overload group)
		virtual void setAll(std::uint64_t const* vals, std::int32_t n);    // 1A (reversed overload group)
		virtual void setAll(float const* vals, std::int32_t n);            // 19 (reversed overload group)
	};
}
