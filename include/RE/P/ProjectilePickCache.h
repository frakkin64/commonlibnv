#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class ProjectilePickCache :
		public NiRefObject  // 00
	{
	public:
		// members
		char* pCache;  // 08?
	};
}
