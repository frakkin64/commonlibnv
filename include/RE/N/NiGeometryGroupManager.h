#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMemObject.h"

namespace RE
{
	class __declspec(novtable) NiGeometryGroupManager :
		public NiMemObject  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometryGroupManager };
		static constexpr auto VTABLE{ VTABLE::NiGeometryGroupManager };

		enum class RepackingBehavior : std::int32_t
		{
			kMUTABLE = 0x0,
			kSTATIC = 0x4000,
			kCONSISTENCY_MASK = 0x7000,
		};

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
	};
}
