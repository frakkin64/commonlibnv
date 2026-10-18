#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ParticleShader_ParticleData
	{
	public:
		// members
		float fXPos;           // 00?
		float fYPos;           // 04?
		float fZPos;           // 08?
		float fBirthTime;      // 0C?
		float fXVel;           // 10?
		float fYVel;           // 14?
		float fZVel;           // 18?
		float fLifeAdjust;     // 1C?
		float fRotationStart;  // 20?
		float fRotationSpeed;  // 24?
		float fSpeedMult;      // 28?
		float fTexCoords;      // 2C?
	};
}
