#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMultiBoundNode;
	class BSNiBound;
	class NiCloningProcess;
	class NiRTTI;
	class NiStream;

	class NiObject :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiObject };
		static constexpr auto VTABLE{ VTABLE::NiObject };

		// add
		virtual void Unk_02();                                               // 02
		virtual void Unk_03();                                               // 03
		virtual void Unk_04();                                               // 04
		virtual BSMultiBoundNode* IsMultiBoundNode();                        // 05
		virtual void Unk_06();                                               // 06
		virtual void Unk_07();                                               // 07
		virtual void Unk_08();                                               // 08
		virtual void Unk_09();                                               // 09
		virtual void Unk_0A();                                               // 0A
		virtual void Unk_0B();                                               // 0B
		virtual void Unk_0C();                                               // 0C
		virtual void Unk_0D();                                               // 0D
		virtual void Unk_0E();                                               // 0E
		virtual void Unk_0F();                                               // 0F
		virtual void Unk_10();                                               // 10
		virtual void Unk_11();                                               // 11
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData);        // 12
		virtual void LoadBinary(NiStream& arStream);                         // 13
		virtual void LinkObject(NiStream& arStream);                         // 14
		virtual bool RegisterStreamables(NiStream& arStream);                // 15
		virtual void SaveBinary(NiStream& arStream);                         // 16
		virtual bool IsEqual(NiObject* apObject);                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings);  // 18
		virtual void AddViewerStrings(NiTPrimitiveArray<char*>* apStrings);  // 19
		virtual void ProcessClone(NiCloningProcess& kCloning);               // 1A
		virtual void PostLinkObject(NiStream& kStream);                      // 1B
		virtual void Unk_1C();                                               // 1C
		virtual void Unk_1D();                                               // 1D
		virtual void SetBound(BSNiBound* apBound);                           // 1E
		virtual void Unk_1F();                                               // 1F
		virtual void Unk_20();                                               // 20
		virtual void Unk_21();                                               // 21
		virtual void Unk_22();                                               // 22

		static bool IsKindOf(NiRTTI const* pkRTTI, NiObject const* pkObject)
		{
			using func_t = decltype(&NiObject::IsKindOf);
			static REL::Relocation<func_t> func{ Offsets::NiObject::IsKindOf };
			return func(pkRTTI, pkObject);
		}

		static bool IsExactKindOf(NiRTTI const* pkRTTI, NiObject const* pkObject)
		{
			using func_t = decltype(&NiObject::IsExactKindOf);
			static REL::Relocation<func_t> func{ Offsets::NiObject::IsExactKindOf };
			return func(pkRTTI, pkObject);
		}

		static NiObject* DynamicCast(NiRTTI const* pkRTTI, NiObject const* pkObject)
		{
			using func_t = decltype(&NiObject::DynamicCast);
			static REL::Relocation<func_t> func{ Offsets::NiObject::DynamicCast };
			return func(pkRTTI, pkObject);
		}

		NiObject* Clone(NiCloningProcess& kCloning)
		{
			using func_t = decltype(&NiObject::Clone);
			static REL::Relocation<func_t> func{ Offsets::NiObject::Clone };
			return func(this, kCloning);
		}

		void CreateDeepCopy(NiPointer<NiObject>& aspObject)
		{
			using func_t = decltype(&NiObject::CreateDeepCopy);
			static REL::Relocation<func_t> func{ Offsets::NiObject::CreateDeepCopy };
			func(this, aspObject);
		}

	protected:
		NiObject* ctor()
		{
			using func_t = NiObject*(__thiscall*)(NiObject*);
			static REL::Relocation<func_t> func{ Offsets::NiObject::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(NiObject) == 0x8);
}
