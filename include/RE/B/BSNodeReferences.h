#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiStream;

	class BSNodeReferences :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSNodeReferences };
		static constexpr auto VTABLE{ VTABLE::BSNodeReferences };

		// override (NiObject)
		virtual ~BSNodeReferences() = default;                          // 00
		virtual void LoadBinary(NiStream& arStream) override;           // 13
		virtual void LinkObject(NiStream& arStream) override;           // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;  // 15
		virtual void SaveBinary(NiStream& arStream) override;           // 16
		virtual bool IsEqual(NiObject* apObject) override;              // 17

		// members
		NiTPrimitiveArray<NiAVObject*> RefNodeA;  // 08
	};
	static_assert(sizeof(BSNodeReferences) == 0x18);
}
