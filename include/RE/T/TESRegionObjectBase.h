#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/REGION_OBJECT_ID.h"

namespace RE
{
	class TESForm;

	class __declspec(novtable) TESRegionObjectBase
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionObjectBase };
		static constexpr auto VTABLE{ VTABLE::TESRegionObjectBase };

		// add
		virtual REGION_OBJECT_ID GetID();  // 00
		virtual TESForm* GetObject();      // 01
	};
}
