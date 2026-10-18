#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSerializableCinfo.h"
#include "RE/H/hkpConstraintInstance_ConstraintPriority.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiStream;
	class hkpConstraintData;
	class hkpEntity;

	class __declspec(novtable) hkConstraintCinfo :
		public hkSerializableCinfo  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::hkConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkConstraintCinfo };

		// add
		virtual ~hkConstraintCinfo() = default;                                         // 00
		virtual void CloneData(hkpConstraintData* apData, NiCloningProcess& __formal);  // 01
		virtual void LoadBinary(NiStream& arStream);                                    // 02
		virtual void SaveBinary(NiStream& arStream);                                    // 03
		virtual std::uint32_t CreateData();                                             // 04
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings);             // 05

		// members
		hkpConstraintData*                       pData;      // 04
		hkpConstraintInstance_ConstraintPriority ePriority;  // 08
		hkpEntity*                               pEntityA;   // 0C
		hkpEntity*                               pEntityB;   // 10
	};
}
