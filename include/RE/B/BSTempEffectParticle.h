#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSTempEffect.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class BGSImpactData;
	class NiAVObject;
	class NiNode;
	class TESObjectCELL;

	class BSTempEffectParticle :
		public BSTempEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempEffectParticle };
		static constexpr auto VTABLE{ VTABLE::BSTempEffectParticle };

		BSTempEffectParticle* ctor(TESObjectCELL* apCell, float a_arg2, char const* a_arg3, NiAVObject* apParticleFilename)
		{
			using func_t = BSTempEffectParticle*(__thiscall*)(BSTempEffectParticle*, TESObjectCELL*, float, char const*, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::ctor };
			return func(this, apCell, a_arg2, a_arg3, apParticleFilename);
		}

		static BSTempEffectParticle* Spawn(TESObjectCELL* apCell, float afLifetime, char const* apParticleFilename, NiPoint3 aVector, NiPoint3 aPosition, float afScale, std::uint32_t aiFlags, NiAVObject* apFollowObject)
		{
			using func_t = BSTempEffectParticle*(__cdecl*)(TESObjectCELL*, float, char const*, NiPoint3, NiPoint3, float, std::uint32_t, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::Spawn };
			return func(apCell, afLifetime, apParticleFilename, aVector, aPosition, afScale, aiFlags, apFollowObject);
		}

		static BSTempEffectParticle* Spawn(TESObjectCELL* apCell, float afLifetime, char const* apParticleFilename, NiMatrix3 aRotation, NiPoint3 aPosition, float afScale, std::uint32_t aiFlags, NiAVObject* apFollowObject)
		{
			using func_t = BSTempEffectParticle*(__cdecl*)(TESObjectCELL*, float, char const*, NiMatrix3, NiPoint3, float, std::uint32_t, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::Spawn_1 };
			return func(apCell, afLifetime, apParticleFilename, aRotation, aPosition, afScale, aiFlags, apFollowObject);
		}

		void Init(NiNode* apSceneParent, NiMatrix3 aPosition, NiPoint3 a_arg3, float aiFlags, std::uint32_t afScale)
		{
			using func_t = decltype(&BSTempEffectParticle::Init);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::Init };
			func(this, apSceneParent, aPosition, a_arg3, aiFlags, afScale);
		}

		float GetControllerLifetime(NiAVObject* apAVObject)
		{
			using func_t = decltype(&BSTempEffectParticle::GetControllerLifetime);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::GetControllerLifetime };
			return func(this, apAVObject);
		}

		void PlaySequence(char const* apcSequenceName)
		{
			using func_t = decltype(&BSTempEffectParticle::PlaySequence);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::PlaySequence };
			func(this, apcSequenceName);
		}

		void StartSounds()
		{
			using func_t = decltype(&BSTempEffectParticle::StartSounds);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::StartSounds };
			func(this);
		}

		void StopSounds()
		{
			using func_t = decltype(&BSTempEffectParticle::StopSounds);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::StopSounds };
			func(this);
		}

	protected:
		void ResetGravityRecursive(NiAVObject* apObject, NiTPrimitiveArray<NiAVObject*>& iArray, std::uint32_t& aiCount)
		{
			using func_t = decltype(&BSTempEffectParticle::ResetGravityRecursive);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::ResetGravityRecursive };
			func(this, apObject, iArray, aiCount);
		}

		void ResetGravity(NiAVObject* apObject)
		{
			using func_t = decltype(&BSTempEffectParticle::ResetGravity);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectParticle::ResetGravity };
			func(this, apObject);
		}

	public:
		// members
		NiPointer<NiAVObject> spParticleObject;  // 18
		const char*           pFilename;         // 1C
		NiPointer<NiAVObject> spFollowObject;    // 20
		NiTransform           kFollowOffset;     // 24
		BGSImpactData*        pDecalImpactData;  // 58
		BSSoundHandle         Sound1;            // 5C
		BSSoundHandle         Sound2;            // 68
	};
	static_assert(sizeof(BSTempEffectParticle) == 0x74);
}
