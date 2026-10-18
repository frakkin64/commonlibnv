#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/M/MagicHitEffect.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ActiveEffect;
	class BSShaderPPLightingProperty_TextureEffectData;
	class NiAVObject;
	class NiNode;
	class ParticleShaderProperty;
	class TESBoundObject;
	class TESEffectShader;
	class TESObjectREFR;

	class MagicShaderHitEffect :
		public MagicHitEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicShaderHitEffect };
		static constexpr auto VTABLE{ VTABLE::MagicShaderHitEffect };

		MagicShaderHitEffect* ctor()
		{
			using func_t = MagicShaderHitEffect*(__thiscall*)(MagicShaderHitEffect*);
			static REL::Relocation<func_t> func{ Offsets::MagicShaderHitEffect::ctor };
			return func(this);
		}

		MagicShaderHitEffect* ctor(TESObjectREFR* apTarget, ActiveEffect* apEffect)
		{
			using func_t = MagicShaderHitEffect*(__thiscall*)(MagicShaderHitEffect*, TESObjectREFR*, ActiveEffect*);
			static REL::Relocation<func_t> func{ Offsets::MagicShaderHitEffect::ctor_1 };
			return func(this, apTarget, apEffect);
		}

		MagicShaderHitEffect* ctor(TESObjectREFR* apTarget, TESEffectShader* apEffectData, float afTime)
		{
			using func_t = MagicShaderHitEffect*(__thiscall*)(MagicShaderHitEffect*, TESObjectREFR*, TESEffectShader*, float);
			static REL::Relocation<func_t> func{ Offsets::MagicShaderHitEffect::ctor_2 };
			return func(this, apTarget, apEffectData, afTime);
		}

	protected:
		void GetAffectedScenegraph(bool& abActorRoot, bool& abSword, float& afSwordLength, NiAVObject*& apMembraneRoot, NiAVObject*& apParticleRoot)
		{
			using func_t = decltype(&MagicShaderHitEffect::GetAffectedScenegraph);
			static REL::Relocation<func_t> func{ Offsets::MagicShaderHitEffect::GetAffectedScenegraph };
			func(this, abActorRoot, abSword, afSwordLength, apMembraneRoot, apParticleRoot);
		}

	public:
		// members
		bool                                                    bWeaponEnchantment;     // 28
		std::uint8_t                                            pad29[0x3];             // 29
		TESBoundObject*                                         pWornObject;            // 2C
		TESEffectShader*                                        pEffectData;            // 30
		float                                                   fAlphaTimer;            // 34
		BSSimpleArray<NiPointer<ParticleShaderProperty>, 1024>  ParticlePropertyArray;  // 38
		NiPointer<NiNode>                                       spParticleNode;         // 48
		bool                                                    b3rdPerson;             // 4C
		std::uint8_t                                            pad4D[0x3];             // 4D
		BSSimpleArray<NiPointer<NiAVObject>, 1024>              AddOnObjects;           // 50
		float                                                   fAddonAlpha;            // 60
		float                                                   fAddonScale;            // 64
		NiPointer<BSShaderPPLightingProperty_TextureEffectData> spTexEffectData;        // 68
	};
	static_assert(sizeof(MagicShaderHitEffect) == 0x6C);
}
