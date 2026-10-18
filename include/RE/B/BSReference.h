#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiStream;

	class BSReference :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSReference };
		static constexpr auto VTABLE{ VTABLE::BSReference };

		// override (NiObject)
		virtual ~BSReference() = default;                               // 00
		virtual void LoadBinary(NiStream& arStream) override;           // 13
		virtual void LinkObject(NiStream& arStream) override;           // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;  // 15
		virtual void SaveBinary(NiStream& arStream) override;           // 16
		virtual bool IsEqual(NiObject* apObject) override;              // 17

		// members
		char* pName;  // 08
	};
	static_assert(sizeof(BSReference) == 0xC);
}
