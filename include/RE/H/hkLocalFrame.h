#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkTransform;

	class hkLocalFrame :
		public hkReferencedObject  // 00
	{
	public:
		void getTransformToRoot(hkTransform& transform) const
		{
			using func_t = decltype(&hkLocalFrame::getTransformToRoot);
			static REL::Relocation<func_t> func{ Offsets::hkLocalFrame::getTransformToRoot };
			func(this, transform);
		}
	};
}
