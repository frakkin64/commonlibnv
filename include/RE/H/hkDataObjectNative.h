#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkClassAccessor.h"
#include "RE/H/hkDataObjectImpl.h"
#include "RE/H/hkDataObject_Handle.h"
#include "RE/H/hkDataObject_Value.h"
#include "RE/H/hkHalf.h"

namespace RE
{
	class hkDataArrayImpl;
	class hkDataClassImpl;
	class hkDataWorldNative;

	class hkDataObjectNative :
		public hkDataObjectImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataObjectNative };
		static constexpr auto VTABLE{ VTABLE::hkDataObjectNative };

		// override (hkDataObjectImpl)
		virtual ~hkDataObjectNative() = default;  // 00

		// add
		virtual hkDataObject_Handle getHandle();                                                                        // 01
		virtual const hkDataClassImpl* getClass() const;                                                                // 02
		virtual hkDataObject_Value accessByName(char const* result);                                                    // 03
		virtual std::int32_t hasMember(const char* a_arg1) const;                                                       // 04
		virtual std::int32_t getMemberIterator();                                                                       // 05
		virtual std::int32_t isValid(std::int32_t a_arg1) const;                                                        // 06
		virtual std::int32_t getNextMember(std::int32_t a_arg1);                                                        // 07
		virtual const char* getMemberName(std::int32_t a_arg1) const;                                                   // 08
		virtual const hkDataObject_Value* getMemberValue(const hkDataObject_Value* a_arg1, std::int32_t a_arg2) const;  // 09
		virtual hkDataArrayImpl* asArray(char const* name);                                                             // 0A
		virtual char const* asString(char const* name);                                                                 // 0B
		virtual std::int64_t asInt(char const* name);                                                                   // 0C
		virtual hkDataObjectImpl* asObject(char const* name);                                                           // 0D
		virtual float const* asVec(char const* name, std::int32_t nreal);                                               // 0E
		virtual float asReal(char const* name);                                                                         // 0F
		virtual void assign(char const* name, hkDataObject_Value const& valueIn);                                       // 17 (reversed overload group)
		virtual void assign(char const* name, hkDataObjectImpl* value);                                                 // 16 (reversed overload group)
		virtual void assign(char const* name, hkDataArrayImpl* value);                                                  // 15 (reversed overload group)
		virtual void assign(char const* name, char const* value);                                                       // 14 (reversed overload group)
		virtual void assign(char const* name, float r);                                                                 // 13 (reversed overload group)
		virtual void assign(char const* name, hkHalf r);                                                                // 12 (reversed overload group)
		virtual void assign(char const* name, float const* r, std::int32_t nreal);                                      // 11 (reversed overload group)
		virtual void assign(char const* name, std::int64_t valueIn);                                                    // 10 (reversed overload group)

		// members
		hkClassAccessor          m_object;  // 0C
		const hkDataWorldNative* m_world;   // 14?
	};
}
