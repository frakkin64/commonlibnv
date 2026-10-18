#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"
#include "RE/N/NiTMapItem.h"

namespace RE
{
	template <class T, class U>
	class NiTStringTemplateMap :
		public NiTMap<char*, U>
	{
	public:
		// override (NiTMap<char*, U>)
		virtual ~NiTStringTemplateMap() = default;                                            // 00
		virtual void SetValue(NiTMapItem<char const*, U>* pkItem, char const* pcKey, U val);  // 03
		virtual void ClearValue(NiTMapItem<char const*, U>* pkItem);                          // 04

		// members
		bool m_bCopy;
	};
}
