#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiQuaternion.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiQuatTransform
	{
	public:
		void GetViewerStrings(NiTPrimitiveArray<char*>* pkStrings)
		{
			using func_t = decltype(&NiQuatTransform::GetViewerStrings);
			static REL::Relocation<func_t> func{ Offsets::NiQuatTransform::GetViewerStrings };
			func(this, pkStrings);
		}

	public:
		// members
		NiPoint3     m_kTranslate;  // 00
		NiQuaternion m_kRotate;     // 0C
		float        m_fScale;      // 1C
	};
}
