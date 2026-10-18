#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataArrayImpl.h"
#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkDataClassImpl;
	class hkDataObjectImpl;
	class hkHalf;

	class VecArrayImplementation :
		public hkDataArrayImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::VecArrayImplementation };
		static constexpr auto VTABLE{ VTABLE::VecArrayImplementation };

		// override (hkDataArrayImpl)
		virtual ~VecArrayImplementation() = default;  // 00

		// add
		virtual hkDataObject_Type getType();                               // 01
		virtual void clear();                                              // 02
		virtual void reserve(std::int32_t n);                              // 03
		virtual void setSize(std::int32_t n);                              // 04
		virtual std::int32_t getSize() const;                              // 05
		virtual const hkDataClassImpl* getClass();                         // 06
		virtual hkDataArrayImpl* swizzleObjectMember(const char* a_arg1);  // 07
		virtual const float* asVec(std::int32_t a_arg1);                   // 08
		virtual void setVec(std::int32_t index, float const* val);         // 09
		virtual const char* asString(std::int32_t a_arg1);                 // 0A
		virtual void Unk_0B();                                             // 0B
		virtual float asReal(std::int32_t a_arg1);                         // 0C
		virtual void Unk_0D();                                             // 0D
		virtual hkHalf* asHalf(hkHalf* a_arg1, std::int32_t a_arg2);       // 0E
		virtual void Unk_0F();                                             // 0F
		virtual std::int32_t asInt(std::int32_t a_arg1);                   // 10
		virtual void Unk_11();                                             // 11
		virtual std::int64_t asInt64(std::int32_t a_arg1);                 // 12
		virtual void Unk_13();                                             // 13
		virtual hkDataObjectImpl* asObject(std::int32_t a_arg1);           // 14
		virtual void Unk_15();                                             // 15
		virtual hkDataArrayImpl* asArray(std::int32_t a_arg1);             // 16
		virtual void Unk_17();                                             // 17
		virtual void Unk_18();                                             // 18
		virtual void Unk_19();                                             // 19
		virtual void Unk_1A();                                             // 1A
		virtual void Unk_1B();                                             // 1B
		virtual void Unk_1C();                                             // 1C
		virtual void Unk_1D();                                             // 1D
		virtual void Unk_1E();                                             // 1E
		virtual void Unk_1F();                                             // 1F
		virtual void Unk_20();                                             // 20
		virtual void Unk_21();                                             // 21
		virtual void Unk_22();                                             // 22
		virtual void Unk_23();                                             // 23

		// members
		hkArray<float, hkContainerHeapAllocator> m_data;     // 0C
		std::int32_t                             m_numReal;  // 18
	};
}
