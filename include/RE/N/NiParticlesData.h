#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryData.h"

namespace RE
{
	class NiColorA;
	class NiPoint3;
	class NiQuaternion;

	class NiParticlesData :
		public NiGeometryData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticlesData };
		static constexpr auto VTABLE{ VTABLE::NiParticlesData };

		// add
		virtual void Unk_29();  // 29

		// members
		bool           m_bIsOldRotatingParticlesObject;  // 40
		std::uint8_t   pad41[0x3];                       // 41
		std::uint16_t* m_ausRenderOrder;                 // 44
		float*         m_afDepths;                       // 48
		float*         m_pfRadii;                        // 4C
		std::uint16_t  m_usActive;                       // 50
		std::uint16_t  pad52;                            // 52
		float*         m_pfSizes;                        // 54
		NiQuaternion*  m_pkRotations;                    // 58
		float*         m_pfRotationAngles;               // 5C
		NiPoint3*      m_pkRotationAxes;                 // 60
		std::uint8_t*  m_pucTextureIndices;              // 64
		NiColorA*      m_pkSubTextureOffsets;            // 68
		std::uint8_t   m_ucSubTextureOffsetCount;        // 6C
		std::uint8_t   pad6D[0x3];                       // 6D
	};
	static_assert(sizeof(NiParticlesData) == 0x70);
}
