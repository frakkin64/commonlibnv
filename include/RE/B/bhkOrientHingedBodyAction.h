#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkUnaryAction.h"

namespace RE
{
	class bhkOrientHingedBodyAction :
		public bhkUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkOrientHingedBodyAction };
		static constexpr auto VTABLE{ VTABLE::bhkOrientHingedBodyAction };

		// add
		virtual void Unk_32();  // 32
	};
}
