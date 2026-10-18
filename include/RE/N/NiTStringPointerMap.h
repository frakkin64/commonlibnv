#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPointerMap.h"
#include "RE/N/NiTStringTemplateMap.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTStringPointerMap :
		public NiTStringTemplateMap<NiTPointerMap<char*, T>, T>
	{
	public:
	};
}
