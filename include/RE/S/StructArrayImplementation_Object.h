#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObjectImpl.h"
#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkDataObject_Value.h"
#include "RE/H/hkHalf.h"

namespace RE
{
	class InternedString;
	class StructArrayImplementation;
	class hkDataArrayImpl;
	class hkDataClassImpl;

	class StructArrayImplementation_Object :
		public hkDataObjectImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::StructArrayImplementation_Object };
		static constexpr auto VTABLE{ VTABLE::StructArrayImplementation_Object };

		// override (hkDataObjectImpl)
		virtual ~StructArrayImplementation_Object() = default;  // 00

		// add
		virtual hkDataObject_Handle getHandle();                                                                  // 01
		virtual const hkDataClassImpl* getClass();                                                                // 02
		virtual hkDataObject_Value accessByName(char const* result);                                              // 03
		virtual std::int32_t hasMember(const char* a_arg1);                                                       // 04
		virtual std::int32_t getMemberIterator();                                                                 // 05
		virtual std::int32_t isValid(std::int32_t a_arg1);                                                        // 06
		virtual std::int32_t getNextMember(std::int32_t a_arg1);                                                  // 07
		virtual const char* getMemberName(std::int32_t a_arg1);                                                   // 08
		virtual const hkDataObject_Value* getMemberValue(const hkDataObject_Value* a_arg1, std::int32_t a_arg2);  // 09
		virtual hkDataArrayImpl* asArray(char const* name);                                                       // 0A
		virtual char const* asString(char const* name);                                                           // 0B
		virtual std::int64_t asInt(char const* name);                                                             // 0C
		virtual hkDataObjectImpl* asObject(char const* name);                                                     // 0D
		virtual float const* asVec(char const* nameIn, std::int32_t n);                                           // 0E
		virtual float asReal(char const* name);                                                                   // 0F
		virtual void assign(char const* name, std::int64_t valueIn);                                              // 10
		virtual void assign_11(char const* name, float const* valueIn, std::int32_t nreal);                       // 11
		virtual void assign_12(char const* name, hkHalf valueIn);                                                 // 12
		virtual void assign_13(char const* name, float valueIn);                                                  // 13
		virtual void assign_14(char const* name, char const* valueIn);                                            // 14
		virtual void assign_15(char const* name, hkDataArrayImpl* valueIn);                                       // 15
		virtual void assign_16(char const* name, hkDataObjectImpl* valueIn);                                      // 16
		virtual void assign_17(char const* name, hkDataObject_Value const& valueIn);                              // 17
		virtual InternedString* intern(InternedString* a_arg1, const char* a_arg2);                               // 18
		virtual void selfDestruct();                                                                              // 19
		virtual hkHalf asHalf(char const* result);                                                                // 1A
		virtual void assign_1B(char const* name, std::int32_t valueIn);                                           // 1B
		virtual void assign_1C(char const* name, std::int16_t valueIn);                                           // 1C
		virtual void assign_1D(char const* name, std::int8_t valueIn);                                            // 1D

		// members
		StructArrayImplementation* m_impl;   // 0C?
		std::int32_t               m_index;  // 10?
	};
}
