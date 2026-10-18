#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiIntegersExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class BSWArray :
		public NiIntegersExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWArray };
		static constexpr auto VTABLE{ VTABLE::BSWArray };

		// override (NiIntegersExtraData)
		virtual ~BSWArray() = default;                                                // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
	};
	static_assert(sizeof(BSWArray) == 0x14);
}
