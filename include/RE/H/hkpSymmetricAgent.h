#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpSymmetricAgentLinearCast.h"
#include "RE/T/T.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdPointCollector;
	class hkpLinearCastCollisionInput;

	template <class T>
	class hkpSymmetricAgent :
		public hkpSymmetricAgentLinearCast<T>  // 00
	{
	public:
		// override (hkpSymmetricAgentLinearCast<T>)
		virtual ~hkpSymmetricAgent() = default;                                                                                                                                                  // 00
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
	};
}
