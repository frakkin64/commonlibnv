#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/COL_LAYER.h"
#include "RE/H/hkpAllCdPointCollector.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiPoint3;
	class bhkSimpleShapePhantom;
	class bhkWorld;
	class hkpCdBodyPairCollector;
	class hkpRootCdPoint;

	class alignas(16) DecalCaster
	{
	public:
		enum class CUSTOM_PICK : std::int32_t
		{
			kCUSTOM_PICK_ACTORS = 0x0,
			kCUSTOM_PICK_BIPED = 0x1,
			kCUSTOM_PICK_COUNT = 0x2,
		};

		void SetCollision(COL_LAYER aeLayer, bool abEnable)
		{
			using func_t = decltype(&DecalCaster::SetCollision);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::SetCollision };
			func(this, aeLayer, abEnable);
		}

		static DecalCaster* GetInstance(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&DecalCaster::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::GetInstance };
			return func(a_arg1, a_arg2);
		}

		std::uint32_t Pick(NiPoint3 const& arFrom, NiPoint3 const& arTo, float afRadius)
		{
			using func_t = decltype(&DecalCaster::Pick);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::Pick };
			return func(this, arFrom, arTo, afRadius);
		}

		void GetPenetrations(NiPoint3 const& arPos, hkpCdBodyPairCollector& arCollector)
		{
			using func_t = decltype(&DecalCaster::GetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::GetPenetrations };
			func(this, arPos, arCollector);
		}

		void Add(bhkWorld* apWorld)
		{
			using func_t = decltype(&DecalCaster::Add);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::Add };
			func(this, apWorld);
		}

		NiAVObject* GetAVObject(std::uint32_t aiIndex)
		{
			using func_t = decltype(&DecalCaster::GetAVObject);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::GetAVObject };
			return func(this, aiIndex);
		}

		hkpRootCdPoint const& GetCollision(std::uint32_t aiIndex)
		{
			using func_t = decltype(&DecalCaster::GetCollision);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::GetCollision };
			return func(this, aiIndex);
		}

		void GetCollisionData(std::uint32_t aiIndex, NiPoint3& arPos, NiPoint3& arNormal)
		{
			using func_t = decltype(&DecalCaster::GetCollisionData);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::GetCollisionData };
			func(this, aiIndex, arPos, arNormal);
		}

		void SetCustomPickCollisions(DecalCaster::CUSTOM_PICK aeCustomPick)
		{
			using func_t = decltype(&DecalCaster::SetCustomPickCollisions);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::SetCustomPickCollisions };
			func(this, aeCustomPick);
		}

	protected:
		void Init(float a_arg1, std::uint32_t a_arg2)
		{
			using func_t = decltype(&DecalCaster::Init);
			static REL::Relocation<func_t> func{ Offsets::DecalCaster::Init };
			func(this, a_arg1, a_arg2);
		}

	public:
		// members
		hkpAllCdPointCollector           PointCollector;  // 00
		NiPointer<bhkSimpleShapePhantom> spShapePhantom;  // 3A0
		std::uint8_t                     pad3A4[0xC];     // 3A4
	};
}
