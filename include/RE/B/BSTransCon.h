#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMultiTargetTransformController.h"

namespace RE
{
	class NiAVObject;

	class BSTransCon :
		public NiMultiTargetTransformController  // 00
	{
	public:
		void UpdateAllButTarget(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&BSTransCon::UpdateAllButTarget);
			static REL::Relocation<func_t> func{ Offsets::BSTransCon::UpdateAllButTarget };
			func(this, a_arg1, a_arg2);
		}

		void RemoveControlledItems(NiAVObject* apObject)
		{
			using func_t = decltype(&BSTransCon::RemoveControlledItems);
			static REL::Relocation<func_t> func{ Offsets::BSTransCon::RemoveControlledItems };
			func(this, apObject);
		}

		void RemoveTreadControlledItems(NiAVObject* apObject)
		{
			using func_t = decltype(&BSTransCon::RemoveTreadControlledItems);
			static REL::Relocation<func_t> func{ Offsets::BSTransCon::RemoveTreadControlledItems };
			func(this, apObject);
		}
	};
}
