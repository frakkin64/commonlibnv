#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpVehicleEngine :
		public hkReferencedObject  // 00
	{
	public:
		class EngineOutput;

		class EngineOutput
		{
		public:
			// members
			float m_torque;  // 00?
			float m_rpm;     // 04?
		};

	};
}
