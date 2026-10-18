#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysEmitter.h"

namespace RE
{
	class NiAVObject;
	class NiPoint3;
	class NiTransform;

	class NiPSysVolumeEmitter :
		public NiPSysEmitter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysVolumeEmitter };
		static constexpr auto VTABLE{ VTABLE::NiPSysVolumeEmitter };

		// add
		virtual void SetEmitterObj(NiAVObject* apEmitter);                                                                               // 2B
		virtual void ComputeVolumeInitialPositionAndVelocity(NiTransform& arEmitterToPSys, NiPoint3& arPosition, NiPoint3& arVelocity);  // 2C

		// members
		NiAVObject* m_pkEmitterObj;  // 54
	};
}
