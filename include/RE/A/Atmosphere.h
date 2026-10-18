#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/SkyObject.h"

namespace RE
{
	class BSFogProperty;
	class NiNode;
	class NiTriShape;
	class Sky;

	class Atmosphere :
		public SkyObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Atmosphere };
		static constexpr auto VTABLE{ VTABLE::Atmosphere };

		// override (SkyObject)
		virtual ~Atmosphere() = default;                                  // 00
		virtual void Update(Sky* apSky, float afSecondsPassed) override;  // 03

		// add
		virtual void Initialize(NiNode* apSkyRoot, BSFogProperty* apFog);  // 04

		Atmosphere* ctor()
		{
			using func_t = Atmosphere*(__thiscall*)(Atmosphere*);
			static REL::Relocation<func_t> func{ Offsets::Atmosphere::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<NiTriShape>    spAtmosphere;        // 08
		NiPointer<BSFogProperty> spFog;               // 0C
		NiPointer<NiNode>        spSkyQuadNode;       // 10
		NiPointer<NiTriShape>    spSkyQuad;           // 14
		bool                     bUpdateFogDistance;  // 18
		std::uint8_t             pad19[0x3];          // 19
	};
	static_assert(sizeof(Atmosphere) == 0x1C);
}
