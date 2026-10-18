#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/SkyObject.h"

namespace RE
{
	class BSShaderAccumulator;
	class NiBillboardNode;
	class NiCamera;
	class NiDirectionalLight;
	class NiNode;
	class NiPick;
	class NiTriShape;
	class Sky;

	class Sun :
		public SkyObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Sun };
		static constexpr auto VTABLE{ VTABLE::Sun };

		// override (SkyObject)
		virtual ~Sun() = default;                                         // 00
		virtual void Initialize(NiNode* apSkyRoot) override;              // 02
		virtual void Update(Sky* apSky, float afSecondsPassed) override;  // 03

		void CalculateSunGlare(std::uint32_t aiTestNumber, BSShaderAccumulator* apAccumulator, NiCamera* apCamera)
		{
			using func_t = decltype(&Sun::CalculateSunGlare);
			static REL::Relocation<func_t> func{ Offsets::Sun::CalculateSunGlare };
			func(this, aiTestNumber, apAccumulator, apCamera);
		}

		float GetIntensity()
		{
			using func_t = decltype(&Sun::GetIntensity);
			static REL::Relocation<func_t> func{ Offsets::Sun::GetIntensity };
			return func(this);
		}

		void RemoveTextures()
		{
			using func_t = decltype(&Sun::RemoveTextures);
			static REL::Relocation<func_t> func{ Offsets::Sun::RemoveTextures };
			func(this);
		}

	protected:
		float GetSunOcclusionPercent()
		{
			using func_t = decltype(&Sun::GetSunOcclusionPercent);
			static REL::Relocation<func_t> func{ Offsets::Sun::GetSunOcclusionPercent };
			return func(this);
		}

	public:
		// members
		NiPointer<NiBillboardNode>     spSunBaseNode;      // 08
		NiPointer<NiBillboardNode>     spSunGlareNode;     // 0C
		NiPointer<NiTriShape>          spSunBase;          // 10
		NiPointer<NiTriShape>          spSunGlare;         // 14
		NiPick*                        pSunGlarePick;      // 18
		NiPointer<NiDirectionalLight>  spLight;            // 1C
		float                          fGlareScale;        // 20
		bool                           bDoOcclusionTests;  // 24
		std::uint8_t                   pad25[0x3];         // 25
		NiPointer<BSShaderAccumulator> spSunAccumulator;   // 28
	};
	static_assert(sizeof(Sun) == 0x2C);
}
