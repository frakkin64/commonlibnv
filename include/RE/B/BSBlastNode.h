#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSRangeNode.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class BSBlastNode :
		public BSRangeNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSBlastNode };
		static constexpr auto VTABLE{ VTABLE::BSBlastNode };

		// override (BSRangeNode)
		virtual ~BSBlastNode() = default;                                             // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
	};
}
