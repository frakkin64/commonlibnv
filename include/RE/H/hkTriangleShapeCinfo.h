#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"
#include "RE/H/hkConvexShapeCinfo.h"

namespace RE
{
	class hkTriangleShapeCinfo :
		public hkConvexShapeCinfo  // 00
	{
	public:
		// members
		bhkVector4 m_vertexA;  // 08?
		bhkVector4 m_vertexB;  // 18?
		bhkVector4 m_vertexC;  // 28?
	};
}
