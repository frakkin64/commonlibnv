#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataArrayImpl.h"
#include "RE/H/hkDataObject_Type.h"
#include "RE/H/hkRefPtr.h"
#include "RE/I/InternedString.h"
#include "RE/S/StructArrayImplementation_Object.h"

namespace RE
{
	class hkDataClassDict;
	class hkDataClassDict_MemberInfo;
	class hkDataClassImpl;
	class hkDataObjectImpl;
	class hkHalf;

	class StructArrayImplementation :
		public hkDataArrayImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::StructArrayImplementation };
		static constexpr auto VTABLE{ VTABLE::StructArrayImplementation };

		using Object = StructArrayImplementation_Object;

		class MemberData;

		class MemberData
		{
		public:
			// members
			InternedString   m_memberName;  // 00?
			hkDataArrayImpl* m_values;      // 04?
		};

		// override (hkDataArrayImpl)
		virtual ~StructArrayImplementation() = default;  // 00

		// add
		virtual hkDataObject_Type getType() const;                          // 01
		virtual void clear();                                               // 02
		virtual void reserve(std::int32_t n);                               // 03
		virtual void setSize(std::int32_t n);                               // 04
		virtual std::int32_t getSize();                                     // 05
		virtual const hkDataClassImpl* getClass();                          // 06
		virtual hkDataArrayImpl* swizzleObjectMember(const char* a_arg1);   // 07
		virtual const float* asVec(std::int32_t a_arg1);                    // 08
		virtual void Unk_09();                                              // 09
		virtual const char* asString(std::int32_t a_arg1);                  // 0A
		virtual void Unk_0B();                                              // 0B
		virtual float asReal(std::int32_t a_arg1);                          // 0C
		virtual void Unk_0D();                                              // 0D
		virtual hkHalf* asHalf(hkHalf* a_arg1, std::int32_t a_arg2);        // 0E
		virtual void Unk_0F();                                              // 0F
		virtual std::int32_t asInt(std::int32_t a_arg1);                    // 10
		virtual void Unk_11();                                              // 11
		virtual std::int64_t asInt64(std::int32_t a_arg1);                  // 12
		virtual void Unk_13();                                              // 13
		virtual hkDataObjectImpl* asObject(std::int32_t a_arg1) const;      // 14
		virtual void setObject(std::int32_t index, hkDataObjectImpl* val);  // 15
		virtual hkDataArrayImpl* asArray(std::int32_t a_arg1);              // 16
		virtual void Unk_17();                                              // 17
		virtual void Unk_18();                                              // 18
		virtual void Unk_19();                                              // 19
		virtual void Unk_1A();                                              // 1A
		virtual void Unk_1B();                                              // 1B
		virtual void Unk_1C();                                              // 1C
		virtual void Unk_1D();                                              // 1D
		virtual void Unk_1E();                                              // 1E
		virtual void Unk_1F();                                              // 1F
		virtual void Unk_20();                                              // 20
		virtual void Unk_21();                                              // 21
		virtual void Unk_22();                                              // 22
		virtual void Unk_23();                                              // 23

		std::int32_t _addMember(hkDataClassDict_MemberInfo const& mi)
		{
			using func_t = decltype(&StructArrayImplementation::_addMember);
			static REL::Relocation<func_t> func{ Offsets::StructArrayImplementation::_addMember };
			return func(this, mi);
		}

	public:
		// members
		hkArray<StructArrayImplementation::MemberData, hkContainerHeapAllocator> m_memberData;  // 0C
		hkRefPtr<const hkDataClassDict>                                          m_class;       // 18
		std::int32_t                                                             m_size;        // 1C
	};
}
