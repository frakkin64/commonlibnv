#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SkyObject.h"

namespace RE
{
	class NiNode;
	class NiTriShape;
	class Sky;

	class Moon :
		public SkyObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Moon };
		static constexpr auto VTABLE{ VTABLE::Moon };

		enum class UpdateStatus : std::int32_t
		{
			kUS_NOT_REQUIRED = 0x0,
			kUS_WHEN_CULLED = 0x1,
			kUS_INITIALIZE = 0x2,
		};

		// override (SkyObject)
		virtual ~Moon() = default;                                        // 00
		virtual void Update(Sky* apSky, float afSecondsPassed) override;  // 03

		// add
		virtual void Initialize(NiNode* apSkyRoot, char const* apName);  // 04

		Moon* ctor(char const* apMoonName, float afAngleFadeStart, float afAngleFadeEnd, float a_arg4, float a_arg5, float afAngleShadowEarlyFade, std::uint32_t afSpeed)
		{
			using func_t = Moon*(__thiscall*)(Moon*, char const*, float, float, float, float, float, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::Moon::ctor };
			return func(this, apMoonName, afAngleFadeStart, afAngleFadeEnd, a_arg4, a_arg5, afAngleShadowEarlyFade, afSpeed);
		}

		void RemoveTextures()
		{
			using func_t = decltype(&Moon::RemoveTextures);
			static REL::Relocation<func_t> func{ Offsets::Moon::RemoveTextures };
			func(this);
		}

	public:
		// members
		NiPointer<NiNode>     spMoonNode;             // 08
		NiPointer<NiNode>     spShadowNode;           // 0C
		NiPointer<NiTriShape> spMoonMesh;             // 10
		NiPointer<NiTriShape> spShadowMesh;           // 14
		BSStringT<char>       strTextures[8];         // 18
		float                 fAngleFadeStart;        // 58
		float                 fAngleFadeEnd;          // 5C
		float                 fAngleShadowEarlyFade;  // 60
		float                 fSpeed;                 // 64
		float                 fZOffset;               // 68
		std::uint32_t         iSize;                  // 6C
		Moon::UpdateStatus    eUpdateMoonTexture;     // 70
		float                 fPos;                   // 74
		float                 fLastPosUpdate;         // 78
	};
}
