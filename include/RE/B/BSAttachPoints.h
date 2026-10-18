#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSAttachPointPair;
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class BSAttachPoints :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAttachPoints };
		static constexpr auto VTABLE{ VTABLE::BSAttachPoints };

		// override (NiExtraData)
		virtual ~BSAttachPoints() = default;                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// add
		virtual void CopyMembers(BSAttachPoints* pDest, NiCloningProcess& arCloneData);  // 25

		// members
		NiTPrimitiveArray<BSAttachPointPair*> pAttachPointsA;  // 0C
	};
	static_assert(sizeof(BSAttachPoints) == 0x1C);
}
