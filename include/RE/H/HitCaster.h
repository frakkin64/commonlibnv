#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpAllCdPointCollector.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPoint3;
	class bhkSimpleShapePhantom;
	class bhkWorld;

	class alignas(16) HitCaster
	{
	public:
		enum class HitCasterSize : std::int32_t
		{
			kSIZE_SMALL = 0x0,
			kSIZE_LARGE = 0x1,
		};

		void Init(float a_arg1, std::uint32_t a_arg2)
		{
			using func_t = decltype(&HitCaster::Init);
			static REL::Relocation<func_t> func{ Offsets::HitCaster::Init };
			func(this, a_arg1, a_arg2);
		}

		bool CastShape(NiPoint3 const& aOrigin, NiPoint3 const& aDirection, float afPickDistance)
		{
			using func_t = decltype(&HitCaster::CastShape);
			static REL::Relocation<func_t> func{ Offsets::HitCaster::CastShape };
			return func(this, aOrigin, aDirection, afPickDistance);
		}

		void SetShapeGroup(std::uint32_t aiGroup)
		{
			using func_t = decltype(&HitCaster::SetShapeGroup);
			static REL::Relocation<func_t> func{ Offsets::HitCaster::SetShapeGroup };
			func(this, aiGroup);
		}

		void Add(bhkWorld* apWorld)
		{
			using func_t = decltype(&HitCaster::Add);
			static REL::Relocation<func_t> func{ Offsets::HitCaster::Add };
			func(this, apWorld);
		}

		static HitCaster* GetInstance(HitCaster::HitCasterSize eSize, bool abCreate)
		{
			using func_t = decltype(&HitCaster::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::HitCaster::GetInstance };
			return func(eSize, abCreate);
		}

	public:
		// members
		hkpAllCdPointCollector           PointCollector;  // 00
		NiPointer<bhkSimpleShapePhantom> spShapePhantom;  // 3A0
		bool                             bInit;           // 3A4
		std::uint8_t                     pad3A5[0x3];     // 3A5
		std::uint32_t                    iGroup;          // 3A8
		std::uint32_t                    pad3AC;          // 3AC
	};
}
