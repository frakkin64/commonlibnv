#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"
#include "RE/N/NiTStringTemplateMap.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTStringMap :
		public NiTStringTemplateMap<NiTMap<char*, T>, T>
	{
	public:
		// override (NiTStringTemplateMap<NiTMap<char*, T>, T>)
		virtual ~NiTStringMap() = default;  // 00
	};
}
