#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMultiBoundShape;
	class NiCloningProcess;
	class NiPoint3;
	class NiStream;

	class BSMultiBound :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBound };
		static constexpr auto VTABLE{ VTABLE::BSMultiBound };

		// override (NiObject)
		virtual ~BSMultiBound() = default;                                            // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// add
		virtual bool QPointWithin(NiPoint3& aPoint);       // 23
		virtual void SetCenter(NiPoint3 const& arCenter);  // 24

		void SetShape(BSMultiBoundShape* apShape)
		{
			using func_t = decltype(&BSMultiBound::SetShape);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBound::SetShape };
			func(this, apShape);
		}

		BSMultiBound* ctor()
		{
			using func_t = BSMultiBound*(__thiscall*)(BSMultiBound*);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBound::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t                uiBoundFrameCount;  // 08
		NiPointer<BSMultiBoundShape> spShape;            // 0C
	};
	static_assert(sizeof(BSMultiBound) == 0x10);
}
