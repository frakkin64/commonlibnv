#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/SkyObject.h"

namespace RE
{
	class NiNode;
	class Sky;

	class Stars :
		public SkyObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Stars };
		static constexpr auto VTABLE{ VTABLE::Stars };

		// override (SkyObject)
		virtual ~Stars() = default;                                       // 00
		virtual void Initialize(NiNode* apSkyRoot) override;              // 02
		virtual void Update(Sky* apSky, float afSecondsPassed) override;  // 03

		Stars* ctor()
		{
			using func_t = Stars*(__thiscall*)(Stars*);
			static REL::Relocation<func_t> func{ Offsets::Stars::ctor };
			return func(this);
		}

		void LoadGeometry(char const* apFilename)
		{
			using func_t = decltype(&Stars::LoadGeometry);
			static REL::Relocation<func_t> func{ Offsets::Stars::LoadGeometry };
			func(this, apFilename);
		}

	public:
		// members
		NiPointer<NiNode> spStars;  // 08
		float             fAlpha;   // 0C
	};
	static_assert(sizeof(Stars) == 0x10);
}
