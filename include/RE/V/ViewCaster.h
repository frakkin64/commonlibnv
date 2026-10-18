#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPoint3;
	class TESObjectREFR;
	class bhkSimpleShapePhantom;
	class bhkWorld;

	class ViewCaster
	{
	public:
		void Init(float a_arg1, std::uint32_t a_arg2)
		{
			using func_t = decltype(&ViewCaster::Init);
			static REL::Relocation<func_t> func{ Offsets::ViewCaster::Init };
			func(this, a_arg1, a_arg2);
		}

		void SetShapeGroup(std::uint32_t aiGroup)
		{
			using func_t = decltype(&ViewCaster::SetShapeGroup);
			static REL::Relocation<func_t> func{ Offsets::ViewCaster::SetShapeGroup };
			func(this, aiGroup);
		}

		void Add(bhkWorld* apWorld)
		{
			using func_t = decltype(&ViewCaster::Add);
			static REL::Relocation<func_t> func{ Offsets::ViewCaster::Add };
			func(this, apWorld);
		}

		TESObjectREFR* FindActivateREFR(NiPoint3 const& aOrigin, NiPoint3 const& aDirection, float afPickDistance, float& afObjectDistance, bool& abIsFuzzy)
		{
			using func_t = decltype(&ViewCaster::FindActivateREFR);
			static REL::Relocation<func_t> func{ Offsets::ViewCaster::FindActivateREFR };
			return func(this, aOrigin, aDirection, afPickDistance, afObjectDistance, abIsFuzzy);
		}

	public:
		// members
		std::uint8_t                     pad00[0x8];      // 00
		NiPointer<bhkSimpleShapePhantom> spShapePhantom;  // 08
		bool                             bInit;           // 0C?
		std::uint8_t                     pad0D[0x3];      // 0D
		std::uint32_t                    iGroup;          // 10?
	};
}
