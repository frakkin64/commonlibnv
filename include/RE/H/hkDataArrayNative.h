#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkClassMember_Type.h"
#include "RE/H/hkDataArrayImpl.h"
#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkClass;
	class hkDataClassImpl;
	class hkDataObjectImpl;
	class hkDataWorldNative;
	class hkHalf;

	class hkDataArrayNative :
		public hkDataArrayImpl  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataArrayNative };
		static constexpr auto VTABLE{ VTABLE::hkDataArrayNative };

		// override (hkDataArrayImpl)
		virtual ~hkDataArrayNative() = default;  // 00

		// add
		virtual hkDataObject_Type getType() const;                               // 01
		virtual void clear();                                                    // 02
		virtual void reserve(std::int32_t n);                                    // 03
		virtual void setSize(std::int32_t n);                                    // 04
		virtual std::int32_t getSize();                                          // 05
		virtual const hkDataClassImpl* getClass() const;                         // 06
		virtual hkDataArrayImpl* swizzleObjectMember(const char* a_arg1) const;  // 07
		virtual const float* asVec(std::int32_t a_arg1) const;                   // 08
		virtual void Unk_09();                                                   // 09
		virtual const char* asString(std::int32_t a_arg1);                       // 0A
		virtual void Unk_0B();                                                   // 0B
		virtual float asReal(std::int32_t a_arg1);                               // 0C
		virtual void Unk_0D();                                                   // 0D
		virtual hkHalf* asHalf(hkHalf* a_arg1, std::int32_t a_arg2);             // 0E
		virtual void Unk_0F();                                                   // 0F
		virtual std::int32_t asInt(std::int32_t a_arg1) const;                   // 10
		virtual void Unk_11();                                                   // 11
		virtual std::int64_t asInt64(std::int32_t a_arg1) const;                 // 12
		virtual void Unk_13();                                                   // 13
		virtual hkDataObjectImpl* asObject(std::int32_t a_arg1) const;           // 14
		virtual void Unk_15();                                                   // 15
		virtual hkDataArrayImpl* asArray(std::int32_t a_arg1) const;             // 16
		virtual void Unk_17();                                                   // 17
		virtual void Unk_18();                                                   // 18
		virtual void Unk_19();                                                   // 19
		virtual void Unk_1A();                                                   // 1A
		virtual void Unk_1B();                                                   // 1B
		virtual void Unk_1C();                                                   // 1C
		virtual void Unk_1D();                                                   // 1D
		virtual void Unk_1E();                                                   // 1E
		virtual void Unk_1F();                                                   // 1F
		virtual void Unk_20();                                                   // 20
		virtual void Unk_21();                                                   // 21
		virtual void Unk_22();                                                   // 22
		virtual void Unk_23();                                                   // 23

		hkDataArrayNative* ctor(hkDataWorldNative const* world, void const* address, std::int32_t arraySize, std::int32_t elementStride, hkClassMember_Type stype, hkClass const* klass, std::int32_t cArrayCount)
		{
			using func_t = hkDataArrayNative*(__thiscall*)(hkDataArrayNative*, hkDataWorldNative const*, void const*, std::int32_t, std::int32_t, hkClassMember_Type, hkClass const*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkDataArrayNative::ctor };
			return func(this, world, address, arraySize, elementStride, stype, klass, cArrayCount);
		}

	public:
		// members
		const hkDataWorldNative* m_world;          // 0C
		const void*              m_address;        // 10
		std::int32_t             m_arraySize;      // 14
		std::int32_t             m_elementStride;  // 18
		hkClassMember_Type       m_nativeType;     // 1C
		const hkClass*           m_class;          // 20
		hkDataObject_Type        m_dataType;       // 24
		std::int32_t             m_tupleCount;     // 28?
	};
}
