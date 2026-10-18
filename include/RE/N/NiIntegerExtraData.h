#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class NiIntegerExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiIntegerExtraData };
		static constexpr auto VTABLE{ VTABLE::NiIntegerExtraData };

		// override (NiExtraData)
		virtual ~NiIntegerExtraData() = default;                                      // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// members
		std::int32_t m_iValue;  // 0C
	};
	static_assert(sizeof(NiIntegerExtraData) == 0x10);
}
