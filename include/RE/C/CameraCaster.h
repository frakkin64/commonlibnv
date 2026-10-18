#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPoint3;
	class bhkCharacterController;
	class bhkSimpleShapePhantom;
	class bhkWorld;
	class hkpRootCdPoint;

	class CameraCaster
	{
	public:
		bool Pick(NiPoint3& arFrom, NiPoint3& arTo, hkpRootCdPoint& arPoint)
		{
			using func_t = decltype(&CameraCaster::Pick);
			static REL::Relocation<func_t> func{ Offsets::CameraCaster::Pick };
			return func(this, arFrom, arTo, arPoint);
		}

		void Add(bhkWorld* apWorld)
		{
			using func_t = decltype(&CameraCaster::Add);
			static REL::Relocation<func_t> func{ Offsets::CameraCaster::Add };
			func(this, apWorld);
		}

		bhkWorld* GetWorld()
		{
			using func_t = decltype(&CameraCaster::GetWorld);
			static REL::Relocation<func_t> func{ Offsets::CameraCaster::GetWorld };
			return func(this);
		}

		bool KeepOutOfCharacter(bhkCharacterController* apController, NiPoint3& arPoint, float afRadius, float afScaleOffset)
		{
			using func_t = decltype(&CameraCaster::KeepOutOfCharacter);
			static REL::Relocation<func_t> func{ Offsets::CameraCaster::KeepOutOfCharacter };
			return func(this, apController, arPoint, afRadius, afScaleOffset);
		}

	protected:
		void Init(float a_arg1, std::uint32_t a_arg2)
		{
			using func_t = decltype(&CameraCaster::Init);
			static REL::Relocation<func_t> func{ Offsets::CameraCaster::Init };
			func(this, a_arg1, a_arg2);
		}

	public:
		// members
		std::uint32_t                    pad00;                 // 00
		NiPointer<bhkSimpleShapePhantom> spPlayerShapePhantom;  // 04
		NiPointer<bhkSimpleShapePhantom> spHorseShapePhantom;   // 08?
	};
}
