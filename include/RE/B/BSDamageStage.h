#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSRangeNode.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class NiUpdateData;

	class BSDamageStage :
		public BSRangeNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDamageStage };
		static constexpr auto VTABLE{ VTABLE::BSDamageStage };

		// override (BSRangeNode)
		virtual ~BSDamageStage() = default;                                                                // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                             // 12
		virtual void LoadBinary(NiStream& arStream) override;                                              // 13
		virtual void LinkObject(NiStream& arStream) override;                                              // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                     // 15
		virtual void SaveBinary(NiStream& arStream) override;                                              // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                 // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                       // 18
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;          // 29
		virtual void UpdateSelectedDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;  // 2A
		virtual void UpdateRigidDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;     // 2B

		// members
		std::uint32_t padAC;  // AC
	};
	static_assert(sizeof(BSDamageStage) == 0xB0);
}
