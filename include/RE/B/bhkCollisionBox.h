#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSimpleShapePhantom.h"

namespace RE
{
	class bhkCharacterController;

	class bhkCollisionBox :
		public bhkSimpleShapePhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCollisionBox };
		static constexpr auto VTABLE{ VTABLE::bhkCollisionBox };

		// add
		virtual void Unk_35();  // 35

		// members
		bhkCharacterController* pCharController;  // 18
		bool                    bDisabled;        // 1C
		std::uint8_t            pad1D[0x3];       // 1D
	};
}
