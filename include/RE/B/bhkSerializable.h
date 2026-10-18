#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkRefObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiObject;
	class NiStream;
	class bhkWorld;
	class hkReferencedObject;
	class hkSerializableCinfo;
	class hkpWorld;

	class bhkSerializable :
		public bhkRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkSerializable };
		static constexpr auto VTABLE{ VTABLE::bhkSerializable };

		// override (bhkRefObject)
		virtual ~bhkSerializable() = default;                                         // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void SethkObject(hkReferencedObject* aphkObject) override;            // 23

		// add
		virtual const hkpWorld* GethkWorld();                        // 25
		virtual hkpWorld* GethkWorldRw();                            // 26
		virtual bool Add(bhkWorld* __formal);                        // 27
		virtual bool Remove();                                       // 28
		virtual void KillCinfo(bool abCreated);                      // 29
		virtual std::uint32_t QCinfoSize();                          // 2A
		virtual std::int32_t LoadCInfo(NiStream& arStream);          // 2B
		virtual void Init(const hkSerializableCinfo* a_arg1);        // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1);      // 2D
		virtual void Kill();                                         // 2E
		virtual void PostInit(hkSerializableCinfo const& __formal);  // 2F
		virtual void CopyCinfo(hkSerializableCinfo& __formal);       // 30

		bhkSerializable* ctor()
		{
			using func_t = bhkSerializable*(__thiscall*)(bhkSerializable*);
			static REL::Relocation<func_t> func{ Offsets::bhkSerializable::ctor };
			return func(this);
		}

	protected:
		static void CloneCritLock()
		{
			using func_t = decltype(&bhkSerializable::CloneCritLock);
			static REL::Relocation<func_t> func{ Offsets::bhkSerializable::CloneCritLock };
			func();
		}

	public:
		// members
		hkSerializableCinfo* pInfo;  // 0C
	};
	static_assert(sizeof(bhkSerializable) == 0x10);
}
