#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkxAttributeHolder.h"

namespace RE
{
	class hkxMesh_UserChannelInfo :
		public hkxAttributeHolder  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMesh_UserChannelInfo };
		static constexpr auto VTABLE{ VTABLE::hkxMesh_UserChannelInfo };

		// override (hkxAttributeHolder)
		virtual ~hkxMesh_UserChannelInfo() = default;  // 00

		// members
		hkStringPtr m_name;       // 14
		hkStringPtr m_className;  // 18
	};
}
