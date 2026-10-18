#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConvexShape.h"

namespace RE
{
	class hkTriangleShapeCinfo;

	class bhkTriangleShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkTriangleShape };
		static constexpr auto VTABLE{ VTABLE::bhkTriangleShape };

	protected:
		void CopyCinfo(hkTriangleShapeCinfo& arInfo)
		{
			using func_t = decltype(&bhkTriangleShape::CopyCinfo);
			static REL::Relocation<func_t> func{ Offsets::bhkTriangleShape::CopyCinfo };
			func(this, arInfo);
		}
	};
}
