#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataArrayImpl.h"
#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class ArrayOfTuplesImplementation;
	class hkDataClassImpl;
	class hkDataObjectImpl;
	class hkHalf;

	class ArrayOfTuplesImplementation_View :
		public hkDataArrayImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ArrayOfTuplesImplementation_View };
		static constexpr auto VTABLE{ VTABLE::ArrayOfTuplesImplementation_View };

		// override (hkDataArrayImpl)
		virtual ~ArrayOfTuplesImplementation_View() = default;  // 00

		// add
		virtual hkDataObject_Type getType();                                // 01
		virtual void clear();                                               // 02
		virtual void reserve(std::int32_t n);                               // 03
		virtual void setSize(std::int32_t n);                               // 04
		virtual std::int32_t getSize();                                     // 05
		virtual const hkDataClassImpl* getClass();                          // 06
		virtual hkDataArrayImpl* swizzleObjectMember(const char* a_arg1);   // 07
		virtual const float* asVec(std::int32_t a_arg1);                    // 08
		virtual void setVec(std::int32_t index, float const* val);          // 09
		virtual const char* asString(std::int32_t a_arg1);                  // 0A
		virtual void setString(std::int32_t index, char const* val);        // 0B
		virtual float asReal(std::int32_t a_arg1);                          // 0C
		virtual void setReal(std::int32_t index, float val);                // 0D
		virtual hkHalf* asHalf(hkHalf* a_arg1, std::int32_t a_arg2);        // 0E
		virtual void Unk_0F();                                              // 0F
		virtual std::int32_t asInt(std::int32_t a_arg1);                    // 10
		virtual void setInt(std::int32_t index, std::int32_t val);          // 11
		virtual std::int64_t asInt64(std::int32_t a_arg1);                  // 12
		virtual void setInt64(std::int32_t index, std::int64_t val);        // 13
		virtual hkDataObjectImpl* asObject(std::int32_t a_arg1);            // 14
		virtual void setObject(std::int32_t index, hkDataObjectImpl* val);  // 15
		virtual hkDataArrayImpl* asArray(std::int32_t a_arg1);              // 16
		virtual void setArray(std::int32_t index, hkDataArrayImpl* val);    // 17
		virtual void Unk_18();                                              // 18
		virtual void setAll(float const* v, std::int32_t n);                // 19
		virtual void Unk_1A();                                              // 1A
		virtual void Unk_1B();                                              // 1B
		virtual void Unk_1C();                                              // 1C
		virtual void Unk_1D();                                              // 1D
		virtual void Unk_1E();                                              // 1E
		virtual void Unk_1F();                                              // 1F
		virtual void setAll_20(std::uint8_t const* v, std::int32_t n);      // 20
		virtual void Unk_21();                                              // 21
		virtual void Unk_22();                                              // 22
		virtual void Unk_23();                                              // 23

		// members
		ArrayOfTuplesImplementation* m_owner;      // 0C?
		std::int32_t                 m_baseIndex;  // 10?
	};
}
