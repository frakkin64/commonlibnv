#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTempEffect.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiMatrix3;
	class NiPoint3;
	class TESObjectCELL;
	class TESObjectREFR;

	class BSTempEffectDebris :
		public BSTempEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempEffectDebris };
		static constexpr auto VTABLE{ VTABLE::BSTempEffectDebris };

		BSTempEffectDebris* ctor(TESObjectCELL* apCell, float a_arg2, char const* a_arg3, TESObjectREFR* apFilename, NiPoint3 const& apSourceRef, NiPoint3& aPosition, NiPoint3& aDirection, NiPoint3& afLifetime, float afScale, bool aStartLinearVelocity, bool aStartAngularVelocity)
		{
			using func_t = BSTempEffectDebris*(__thiscall*)(BSTempEffectDebris*, TESObjectCELL*, float, char const*, TESObjectREFR*, NiPoint3 const&, NiPoint3&, NiPoint3&, NiPoint3&, float, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectDebris::ctor };
			return func(this, apCell, a_arg2, a_arg3, apFilename, apSourceRef, aPosition, aDirection, afLifetime, afScale, aStartLinearVelocity, aStartAngularVelocity);
		}

		void InitHavok(TESObjectREFR* apSourceRef)
		{
			using func_t = decltype(&BSTempEffectDebris::InitHavok);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectDebris::InitHavok };
			func(this, apSourceRef);
		}

	protected:
		void Init(TESObjectREFR* apSourceRef, NiPoint3 const& aPosition, NiMatrix3& aRotation, NiPoint3& aStartLinearVelocity, NiPoint3& aStartAngularVelocity, float a_arg6, bool a_arg7)
		{
			using func_t = decltype(&BSTempEffectDebris::Init);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectDebris::Init };
			func(this, apSourceRef, aPosition, aRotation, aStartLinearVelocity, aStartAngularVelocity, a_arg6, a_arg7);
		}

	public:
		// members
		NiPointer<NiAVObject> sp3D;                // 18
		const char*           pFilename;           // 1C
		bool                  bUseDebrisCounter;   // 20
		bool                  bForceDelete;        // 21
		bool                  bForegroundElement;  // 22
		std::uint8_t          pad23;               // 23
	};
	static_assert(sizeof(BSTempEffectDebris) == 0x24);
}
