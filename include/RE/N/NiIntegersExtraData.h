#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class NiIntegersExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiIntegersExtraData };
		static constexpr auto VTABLE{ VTABLE::NiIntegersExtraData };

		// override (NiExtraData)
		virtual ~NiIntegersExtraData() = default;                                     // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// members
		std::uint32_t m_uiSize;   // 0C
		std::int32_t* m_piValue;  // 10
	};
	static_assert(sizeof(NiIntegersExtraData) == 0x14);
}
