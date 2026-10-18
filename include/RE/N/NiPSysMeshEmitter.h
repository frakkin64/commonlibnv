#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysEmitter.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiPSysMeshEmitter :
		public NiPSysEmitter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysMeshEmitter };
		static constexpr auto VTABLE{ VTABLE::NiPSysMeshEmitter };

		enum class InitialVelocityType : std::int32_t
		{
			kNI_VELOCITY_USE_NORMALS = 0x0,
			kNI_VELOCITY_USE_RANDOM = 0x1,
			kNI_VELOCITY_USE_DIRECTION = 0x2,
			kNI_VELOCITY_MAX = 0x3,
		};

		enum class MeshEmissionType : std::int32_t
		{
			kNI_EMIT_FROM_VERTICES = 0x0,
			kNI_EMIT_FROM_FACE_CENTER = 0x1,
			kNI_EMIT_FROM_EDGE_CENTER = 0x2,
			kNI_EMIT_FROM_FACE_SURFACE = 0x3,
			kNI_EMIT_FROM_EDGE_SURFACE = 0x4,
			kNI_EMIT_MAX = 0x5,
		};

		// members
		// not placed: m_kGeomEmitterArray, m_kSkinnedEmitterData
		NiPSysMeshEmitter::InitialVelocityType m_eInitVelocityType;  // 54
		NiPSysMeshEmitter::MeshEmissionType    m_eEmissionType;      // 58
		NiPoint3                               m_kEmitAxis;          // 5C?
	};
}
