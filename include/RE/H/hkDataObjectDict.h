#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataObjectImpl.h"
#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkDataObject_Value.h"
#include "RE/H/hkHalf.h"
#include "RE/H/hkRefPtr.h"
#include "RE/I/InternedString.h"
#include "RE/U/Union.h"

namespace RE
{
	class hkDataArrayImpl;
	class hkDataClassDict;
	class hkDataClassImpl;

	class hkDataObjectDict :
		public hkDataObjectImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataObjectDict };
		static constexpr auto VTABLE{ VTABLE::hkDataObjectDict };

		class MemberData;

		class MemberData
		{
		public:
			// members
			InternedString m_memberName;  // 00?
			Union          m_value;       // 04?
		};

		// override (hkDataObjectImpl)
		virtual ~hkDataObjectDict() = default;  // 00

		// add
		virtual hkDataObject_Handle getHandle();                                                                  // 01
		virtual const hkDataClassImpl* getClass();                                                                // 02
		virtual hkDataObject_Value accessByName(char const* result);                                              // 03
		virtual std::int32_t hasMember(const char* a_arg1);                                                       // 04
		virtual std::int32_t getMemberIterator();                                                                 // 05
		virtual std::int32_t isValid(std::int32_t a_arg1) const;                                                  // 06
		virtual std::int32_t getNextMember(std::int32_t a_arg1);                                                  // 07
		virtual const char* getMemberName(std::int32_t a_arg1);                                                   // 08
		virtual const hkDataObject_Value* getMemberValue(const hkDataObject_Value* a_arg1, std::int32_t a_arg2);  // 09
		virtual hkDataArrayImpl* asArray(char const* nameIn);                                                     // 0A
		virtual char const* asString(char const* nameIn);                                                         // 0B
		virtual std::int64_t asInt(char const* nameIn);                                                           // 0C
		virtual hkDataObjectImpl* asObject(char const* nameIn);                                                   // 0D
		virtual float const* asVec(char const* nameIn, std::int32_t nreal);                                       // 0E
		virtual float asReal(char const* nameIn);                                                                 // 0F
		virtual void assign(char const* nameIn, hkDataObject_Value const& value);                                 // 17 (reversed overload group)
		virtual void assign(char const* nameIn, hkDataObjectImpl* value);                                         // 16 (reversed overload group)
		virtual void assign(char const* nameIn, hkDataArrayImpl* value);                                          // 15 (reversed overload group)
		virtual void assign(char const* nameIn, char const* value);                                               // 14 (reversed overload group)
		virtual void assign(char const* nameIn, float r);                                                         // 13 (reversed overload group)
		virtual void assign(char const* nameIn, hkHalf r);                                                        // 12 (reversed overload group)
		virtual void assign(char const* nameIn, float const* r, std::int32_t nreal);                              // 11 (reversed overload group)
		virtual void assign(char const* nameIn, std::int64_t valueIn);                                            // 10 (reversed overload group)

		// members
		hkRefPtr<const hkDataClassDict>                                 m_class;       // 0C
		hkArray<hkDataObjectDict::MemberData, hkContainerHeapAllocator> m_memberData;  // 10
	};
}
