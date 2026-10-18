#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkTagfileWriter_AddDataObjectListener.h"

namespace RE
{
	class hkDataWorldNative;
	class hkPackfileWriter_AddObjectListener;

	class ForwardingPackfileListerer :
		public hkTagfileWriter_AddDataObjectListener  // 00
	{
	public:
		// members
		hkPackfileWriter_AddObjectListener* m_listener;     // 08
		hkDataWorldNative*                  m_nativeWorld;  // 0C?
	};
}
