#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpGskManifold
	{
	public:
		class ContactPoint;

		class ContactPoint
		{
		public:
			// members
			std::uint8_t  m_dimA;  // 00
			std::uint8_t  m_dimB;  // 01
			std::uint16_t m_id;    // 02
			union
			{
				std::uint8_t m_vert[4];
				std::uint32_t m_allVerts;
			} ___u3;  // 04?
		};

		// members
		std::uint8_t                 m_numVertsA;         // 00?
		std::uint8_t                 m_numVertsB;         // 01?
		std::uint8_t                 m_numContactPoints;  // 02?
		std::uint8_t                 pad03;               // 03
		hkpGskManifold::ContactPoint m_contactPoints[4];  // 04?
		std::uint8_t                 m_padding[32];       // 24?
	};
}
