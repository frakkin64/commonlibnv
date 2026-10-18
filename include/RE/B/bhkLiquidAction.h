#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkUnaryAction.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class hkSerializableCinfo;

	class bhkLiquidAction :
		public bhkUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkLiquidAction };
		static constexpr auto VTABLE{ VTABLE::bhkLiquidAction };

		// override (bhkUnaryAction)
		virtual ~bhkLiquidAction() = default;                                         // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void KillCinfo(bool abCreated) override;                              // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;              // 2D
		virtual void Update(float __formal) override;                                 // 31

		// members
		NiAVObject*  pTargetObject;       // 10
		float        fNeighborDistance;   // 14
		float        fNeighborStrength;   // 18
		float        fInitialStickForce;  // 1C
		float        fStickStrength;      // 20
		NiPoint3     StickPoint;          // 24
		NiPoint3     StickNormal;         // 30
		bool         bFirstUpdate;        // 3C
		std::uint8_t pad3D[0x3];          // 3D
	};
	static_assert(sizeof(bhkLiquidAction) == 0x40);
}
