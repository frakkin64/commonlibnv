#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkHeightFieldShape.h"

namespace RE
{
	class hkPlaneShapeCinfo;

	class bhkPlaneShape :
		public bhkHeightFieldShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkPlaneShape };
		static constexpr auto VTABLE{ VTABLE::bhkPlaneShape };

	protected:
		void CopyCinfo(hkPlaneShapeCinfo& arInfo)
		{
			using func_t = decltype(&bhkPlaneShape::CopyCinfo);
			static REL::Relocation<func_t> func{ Offsets::bhkPlaneShape::CopyCinfo };
			func(this, arInfo);
		}
	};
}
