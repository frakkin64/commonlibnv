#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiStream;

	class FurnitureMark
	{
	public:
		std::uint32_t QNumber() const
		{
			using func_t = decltype(&FurnitureMark::QNumber);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::QNumber };
			return func(this);
		}

		FurnitureMark* ctor(std::uint32_t aiNumber)
		{
			using func_t = FurnitureMark*(__thiscall*)(FurnitureMark*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::ctor };
			return func(this, aiNumber);
		}

		float GetHeading() const
		{
			using func_t = decltype(&FurnitureMark::GetHeading);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::GetHeading };
			return func(this);
		}

		void SetNumber(std::uint32_t aiNumber)
		{
			using func_t = decltype(&FurnitureMark::SetNumber);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::SetNumber };
			func(this, aiNumber);
		}

		void SetPosition(NiPoint3 const& arPos)
		{
			using func_t = decltype(&FurnitureMark::SetPosition);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::SetPosition };
			func(this, arPos);
		}

		void SetHeading(float afHeading)
		{
			using func_t = decltype(&FurnitureMark::SetHeading);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::SetHeading };
			func(this, afHeading);
		}

		void LoadBinary(NiStream& arStream)
		{
			using func_t = decltype(&FurnitureMark::LoadBinary);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::LoadBinary };
			func(this, arStream);
		}

		void SaveBinary(NiStream& arStream)
		{
			using func_t = decltype(&FurnitureMark::SaveBinary);
			static REL::Relocation<func_t> func{ Offsets::FurnitureMark::SaveBinary };
			func(this, arStream);
		}

	public:
		// members
		NiPoint3      Position;  // 00
		std::uint16_t sHeading;  // 0C
		std::uint8_t  cNumber;   // 0E
		std::uint8_t  pad0F;     // 0F
	};
}
