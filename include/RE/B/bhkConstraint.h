#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSerializable.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiObject;
	class NiStream;
	class bhkWorld;
	class hkReferencedObject;
	class hkSerializableCinfo;
	class hkpEntity;
	class hkpWorld;

	class bhkConstraint :
		public bhkSerializable  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkConstraint };
		static constexpr auto VTABLE{ VTABLE::bhkConstraint };

		// override (bhkSerializable)
		virtual ~bhkConstraint() = default;                                           // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void SethkObject(hkReferencedObject* aphkObject) override;            // 23
		virtual void Link(bool abAttach) override;                                    // 24
		virtual hkpWorld* GethkWorldRw() override;                                    // 26
		virtual bool Add(bhkWorld* __formal) override;                                // 27
		virtual bool Remove() override;                                               // 28
		virtual std::int32_t LoadCInfo(NiStream& arStream) override;                  // 2B
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                // 2C

		// add
		virtual void SetEntityA(hkpEntity* apEntity);                // 31
		virtual void SetEntityB(hkpEntity* apEntity);                // 32
		virtual hkpEntity* GethkEntityA();                           // 33
		virtual hkpEntity* GethkEntityB();                           // 34
		virtual bool ProcessEntityB(bhkWorld* apWorld, bool abAdd);  // 35
	};
	static_assert(sizeof(bhkConstraint) == 0x10);
}
