#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiFloatKey;
	class NiStream;

	class NiFloatData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatData };
		static constexpr auto VTABLE{ VTABLE::NiFloatData };

		// override (NiObject)
		virtual ~NiFloatData() = default;                                             // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// members
		std::uint32_t          m_uiNumKeys;  // 08
		NiFloatKey*            m_pkKeys;     // 0C
		NiAnimationKey_KeyType m_eType;      // 10
		std::uint8_t           m_ucKeySize;  // 14
		std::uint8_t           pad15[0x3];   // 15
	};
	static_assert(sizeof(NiFloatData) == 0x18);
}
