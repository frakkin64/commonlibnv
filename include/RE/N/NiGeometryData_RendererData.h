#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) NiGeometryData_RendererData
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometryData_RendererData };
		static constexpr auto VTABLE{ VTABLE::NiGeometryData_RendererData };

		virtual ~NiGeometryData_RendererData() = default;  // 00
	};
}
