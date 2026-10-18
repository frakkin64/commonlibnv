#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiGeometry;
	class NiNode;
	class NiParticleSystem;
	class NiTransform;
	class TESModel;

	class __declspec(novtable) Precipitation
	{
	public:
		static constexpr auto RTTI{ RTTI::Precipitation };
		static constexpr auto VTABLE{ VTABLE::Precipitation };

		// add
		virtual ~Precipitation() = default;  // 00

		void FlushAll()
		{
			using func_t = decltype(&Precipitation::FlushAll);
			static REL::Relocation<func_t> func{ Offsets::Precipitation::FlushAll };
			func(this);
		}

	private:
		void Load(char const* apFilename)
		{
			using func_t = decltype(&Precipitation::Load);
			static REL::Relocation<func_t> func{ Offsets::Precipitation::Load };
			func(this, apFilename);
		}

		void Update(float afSecondsPassed)
		{
			using func_t = decltype(&Precipitation::Update);
			static REL::Relocation<func_t> func{ Offsets::Precipitation::Update };
			func(this, afSecondsPassed);
		}

		NiGeometry* CreateShaderGeometry(NiParticleSystem* apParticleSystem, NiTransform const& akWorldTransform, bool abSnow)
		{
			using func_t = decltype(&Precipitation::CreateShaderGeometry);
			static REL::Relocation<func_t> func{ Offsets::Precipitation::CreateShaderGeometry };
			return func(this, apParticleSystem, akWorldTransform, abSnow);
		}

	public:
		// members
		NiPointer<NiNode> spCurrentPrecipRoot;  // 04
		NiPointer<NiNode> spLastPrecipRoot;     // 08
		NiNode*           pParent;              // 0C
		float             fBirthRate;           // 10
		const TESModel*   pQueuedModel;         // 14
	};
}
