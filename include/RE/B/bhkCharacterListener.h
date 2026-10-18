#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/COL_LAYER.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpCharacterProxyListener.h"
#include "RE/M/MATERIAL_TYPE.h"

namespace RE
{
	class alignas(16) bhkCharacterListener :
		public hkpCharacterProxyListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterListener };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterListener };

		std::uint32_t GetFlag(std::uint32_t aiFlags) const
		{
			using func_t = decltype(&bhkCharacterListener::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterListener::GetFlag };
			return func(this, aiFlags);
		}

		void SetFlag(std::uint32_t aiFlags, bool abTF)
		{
			using func_t = decltype(&bhkCharacterListener::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterListener::SetFlag };
			func(this, aiFlags, abTF);
		}

	public:
		// members
		std::uint32_t iFlags;               // 04
		std::uint8_t  pad08[0x8];           // 08
		hkVector4     hkUp;                 // 10
		float         fMaxSlope;            // 20
		MATERIAL_TYPE eSupportMaterial;     // 24
		COL_LAYER     eSupportLayer;        // 28
		std::uint32_t pad2C;                // 2C
		hkVector4     hkSupportVelocity;    // 30
		hkVector4     hkSupportNorm;        // 40
		float         SupportHeight[4];     // 50
		float         fStepHeight;          // 60
		float         fCastDepth;           // 64
		bool          bAllSurfacesStopped;  // 68
		bool          bStickyCollisions;    // 69
		std::uint16_t pad6A;                // 6A
		std::uint32_t iNumCollisions;       // 6C
	};
	static_assert(sizeof(bhkCharacterListener) == 0x70);
}
