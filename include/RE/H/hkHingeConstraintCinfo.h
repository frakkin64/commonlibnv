#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkConstraintCinfo.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiStream;
	class hkpConstraintData;

	class hkHingeConstraintCinfo :
		public hkConstraintCinfo  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkHingeConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkHingeConstraintCinfo };

		// override (hkConstraintCinfo)
		virtual ~hkHingeConstraintCinfo() = default;                                             // 00
		virtual void CloneData(hkpConstraintData* apData, NiCloningProcess& __formal) override;  // 01
		virtual void LoadBinary(NiStream& arStream) override;                                    // 02
		virtual void SaveBinary(NiStream& arStream) override;                                    // 03
		virtual std::uint32_t CreateData() override;                                             // 04
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;             // 05
	};
}
